def romanToInt(s):
    """
    :type s: str
    :rtype: int
    """
    s_data = {
        'M': 1000,
        'D': 500,
        'C': 100,
        'L': 50,
        'X': 10,
        'V': 5,
        'I': 1
    }


    nb = 0
    s_list = list(s)

    # Only roman letter and less than 15 characters
    exist = 0
    for k in range(len(s_list)):
        for key in s_data:
            if s_list[k] == key:
                exist += 1
    if exist != len(s_list):
        print("Only roman letter please")
        exit()


    # Verify if there are more than 3 following letters and verify that there is only one V,D,L letters
    temp_same = s_list[0]
    count = 0
    count_mid_letter_v = 0
    count_mid_letter_d = 0
    count_mid_letter_l = 0
    for n in range(1,len(s_list)):
        if s_list[n] == temp_same:
            count += 1
            if (count == 3):
                print("Impossible to have more than 3 letters")
                exit()
        else:
            temp_same = s_list[n]
            count = 0
        if s_list[n] == 'V':
            count_mid_letter_v += 1
        if s_list[n] == 'L':
            count_mid_letter_l += 1
        if s_list[n] == 'D':
            count_mid_letter_d += 1
        if count_mid_letter_v > 1 or count_mid_letter_l > 1 or count_mid_letter_d > 1:
            print("Roman number do not have more than 2 same mid-letters")
            exit()


    # Algorithm
    buffer = 10000
    i = 0
    if len(s_list) <= 15:
        while i < len(s_list):
            if i != len(s_list) - 1:
                if s_data[s_list[i+1]] <= s_data[s_list[i]]:
                    if buffer >= s_data[s_list[i]]:
                        nb += s_data[s_list[i]]
                        buffer = s_data[s_list[i]]
                        i += 1
                    else:
                        print("It's not a valid roman number")
                        exit(1)
                else:
                    if s_data[s_list[i]] != 'V' and s_data[s_list[i]] != 'L' and s_data[s_list[i]] != 'D':
                        if s_data[s_list[i+1]] <= 10*s_data[s_list[i]]:
                            if buffer >= s_data[s_list[i+1]] - s_data[s_list[i]]:
                                nb += s_data[s_list[i+1]] - s_data[s_list[i]]
                                buffer = s_data[s_list[i+1]] - s_data[s_list[i]]
                                i += 2
                            else:
                                print("It's not a valid roman number")
                                exit(2)
                        else:
                            print("It's not a valid roman number")
                            exit(3)
                    else:
                        print("It's not a valid roman number")
                        exit(4)
            else:
                if s_data[s_list[i]] <= buffer:
                    nb += s_data[s_list[i]]
                    i+=1
                else:
                    print("It's not a valid roman number")
                    exit(5)

    return nb


if __name__ == "__main__":
    s = input()
    nb = romanToInt(s)
    print(nb)
