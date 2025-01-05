# This is a sample Python script.

# Press Maj+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.


def generate(self, numRows):
    """
    :type numRows: int
    :rtype: List[List[int]]
    """

    list = []
    for k in range(numRows+1):
        list.extend([[0] * (k + 1)])
        list[k][0] = 1
        list[k][k] = 1
        for j in range(1, k):
            if(k >= 2):
                list[k][j] = list[k - 1][j - 1] + list[k - 1][j]

    return list[numRows]




# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    list = generate(0, 33)
    print(list)
