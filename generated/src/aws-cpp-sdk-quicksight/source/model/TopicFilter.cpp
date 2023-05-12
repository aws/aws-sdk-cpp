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

TopicFilter::TopicFilter() : 
    m_filterDescriptionHasBeenSet(false),
    m_filterClass(FilterClass::NOT_SET),
    m_filterClassHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterSynonymsHasBeenSet(false),
    m_operandFieldNameHasBeenSet(false),
    m_filterType(NamedFilterType::NOT_SET),
    m_filterTypeHasBeenSet(false),
    m_categoryFilterHasBeenSet(false),
    m_numericEqualityFilterHasBeenSet(false),
    m_numericRangeFilterHasBeenSet(false),
    m_dateRangeFilterHasBeenSet(false),
    m_relativeDateFilterHasBeenSet(false)
{
}

TopicFilter::TopicFilter(JsonView jsonValue) : 
    m_filterDescriptionHasBeenSet(false),
    m_filterClass(FilterClass::NOT_SET),
    m_filterClassHasBeenSet(false),
    m_filterNameHasBeenSet(false),
    m_filterSynonymsHasBeenSet(false),
    m_operandFieldNameHasBeenSet(false),
    m_filterType(NamedFilterType::NOT_SET),
    m_filterTypeHasBeenSet(false),
    m_categoryFilterHasBeenSet(false),
    m_numericEqualityFilterHasBeenSet(false),
    m_numericRangeFilterHasBeenSet(false),
    m_dateRangeFilterHasBeenSet(false),
    m_relativeDateFilterHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
