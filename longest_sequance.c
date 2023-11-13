/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Longest Sorted Sequence                                                  */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*   https://GitHub.com/yusufemreozden                                        */
/*   https://linkedIn.com/in/yusufemreozden                                   */
/*   https://sites.google.com/view/yusufemreozden                             */
/*                                                                            */
/* ************************************************************************** */

int longestSortedSequence(int arr[]) 
{
    int size, j=0;

    while(arr[j] != '\0') 
    {
        j++;
    }

    size=j;

    if (size == 0)
    {
        return 0;
    }

    int maxLength = 1; 
    int currentLength = 1; 
    int i = 0; 

    while (i<size-1) 
    {
        if (arr[i] <= arr[i+1]) 
        {
            currentLength++;
        } 
        else 
        {
            currentLength = 1;
        }
        if (currentLength>maxLength) 
            maxLength = currentLength;
        i++; 
    }
    return maxLength;
}

// made by Yusuf Emre OZDEN