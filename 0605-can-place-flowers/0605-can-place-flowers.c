bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n)
{
    for(int i = 0; n != 0 && i < flowerbedSize; i++)
    {
        if(flowerbed[i])
        {
            i++;
        }
        else if(i + 1 == flowerbedSize ||  !flowerbed[i + 1])
        {
            n--;
            i++;
        }
    }
    return n == 0;
} 