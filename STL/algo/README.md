# std::lower_bound

std::lower_bound is used to find the iterator pointing to the first element in a sorted range that is not less than a specified value.

If the value is found in the range, std::lower_bound returns an iterator pointing to the first occurrence of that value.

If the value is not found, it returns an iterator pointing to the first element that is not less than the specified value.

If all elements in the range are less than the specified value, it returns the end iterator of the range.

# std::upper_bound

std::upper_bound is used to find the iterator pointing to the first element in a sorted range that is greater than a specified value.

If the value is found in the range, std::upper_bound returns an iterator pointing to the element immediately following the last occurrence of that value.

If the value is not found, it returns an iterator pointing to the first element that is greater than the specified value.

If all elements in the range are not greater than the specified value, it returns the end iterator of the range.