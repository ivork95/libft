void ft_memcpy(void *dest, void *src, size_t n) 
{ 
   // Typecast src and dest addresses to (char *) 
   char *csrc = (char *)src;                                                        
   char *cdest = (char *)dest;
   int i;

   // Copy contents of src[] to dest[] 
   i = 0;
   while (i < n)
   {
       cdest[i] = csrc[i];
       i++;
   }
} 