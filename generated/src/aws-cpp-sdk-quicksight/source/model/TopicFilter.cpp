/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TopicFilter::TopicFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicFilter& TopicFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterDescription"))
  {
    m_filterDescription = jsonValue.GetString("FilterDescription");
    m_filterDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterClass"))
  {
    m_filterClass = FilterClassMapper::GetFilterClassForName(jsonValue.GetString("FilterClass"));
    m_filterClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterName"))
  {
    m_filterName = jsonValue.GetString("FilterName");
    m_filterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterSynonyms"))
  {
    Aws::Utils::Array<JsonView> filterSynonymsJsonList = jsonValue.GetArray("FilterSynonyms");
    for(unsigned filterSynonymsIndex = 0; filterSynonymsIndex < filterSynonymsJsonList.GetLength(); ++filterSynonymsIndex)
    {
      m_filterSynonyms.push_back(filterSynonymsJsonList[filterSynonymsIndex].AsString());
    }
    m_filterSynonymsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperandFieldName"))
  {
    m_operandFieldName = jsonValue.GetString("OperandFieldName");
    m_operandFieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterType"))
  {
    m_filterType = NamedFilterTypeMapper::GetNamedFilterTypeForName(jsonValue.GetString("FilterType"));
    m_filterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CategoryFilter"))
  {
    m_categoryFilter = jsonValue.GetObject("CategoryFilter");
    m_categoryFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumericEqualityFilter"))
  {
    m_numericEqualityFilter = jsonValue.GetObject("NumericEqualityFilter");
    m_numericEqualityFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NumericRangeFilter"))
  {
    m_numericRangeFilter = jsonValue.GetObject("NumericRangeFilter");
    m_numericRangeFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DateRangeFilter"))
  {
    m_dateRangeFilter = jsonValue.GetObject("DateRangeFilter");
    m_dateRangeFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelativeDateFilter"))
  {
    m_relativeDateFilter = jsonValue.GetObject("RelativeDateFilter");
    m_relativeDateFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NullFilter"))
  {
    m_nullFilter = jsonValue.GetObject("NullFilter");
    m_nullFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterDescriptionHasBeenSet)
  {
   payload.WithString("FilterDescription", m_filterDescription);

  }

  if(m_filterClassHasBeenSet)
  {
   payload.WithString("FilterClass", FilterClassMapper::GetNameForFilterClass(m_filterClass));
  }

  if(m_filterNameHasBeenSet)
  {
   payload.WithString("FilterName", m_filterName);

  }

  if(m_filterSynonymsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterSynonymsJsonList(m_filterSynonyms.size());
   for(unsigned filterSynonymsIndex = 0; filterSynonymsIndex < filterSynonymsJsonList.GetLength(); ++filterSynonymsIndex)
   {
     filterSynonymsJsonList[filterSynonymsIndex].AsString(m_filterSynonyms[filterSynonymsIndex]);
   }
   payload.WithArray("FilterSynonyms", std::move(filterSynonymsJsonList));

  }

  if(m_operandFieldNameHasBeenSet)
  {
   payload.WithString("OperandFieldName", m_operandFieldName);

  }

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("FilterType", NamedFilterTypeMapper::GetNameForNamedFilterType(m_filterType));
  }

  if(m_categoryFilterHasBeenSet)
  {
   payload.WithObject("CategoryFilter", m_categoryFilter.Jsonize());

  }

  if(m_numericEqualityFilterHasBeenSet)
  {
   payload.WithObject("NumericEqualityFilter", m_numericEqualityFilter.Jsonize());

  }

  if(m_numericRangeFilterHasBeenSet)
  {
   payload.WithObject("NumericRangeFilter", m_numericRangeFilter.Jsonize());

  }

  if(m_dateRangeFilterHasBeenSet)
  {
   payload.WithObject("DateRangeFilter", m_dateRangeFilter.Jsonize());

  }

  if(m_relativeDateFilterHasBeenSet)
  {
   payload.WithObject("RelativeDateFilter", m_relativeDateFilter.Jsonize());

  }

  if(m_nullFilterHasBeenSet)
  {
   payload.WithObject("NullFilter", m_nullFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
