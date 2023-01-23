/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LoggingFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

LoggingFilter::LoggingFilter() : 
    m_filtersHasBeenSet(false),
    m_defaultBehavior(FilterBehavior::NOT_SET),
    m_defaultBehaviorHasBeenSet(false)
{
}

LoggingFilter::LoggingFilter(JsonView jsonValue) : 
    m_filtersHasBeenSet(false),
    m_defaultBehavior(FilterBehavior::NOT_SET),
    m_defaultBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingFilter& LoggingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("Filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultBehavior"))
  {
    m_defaultBehavior = FilterBehaviorMapper::GetFilterBehaviorForName(jsonValue.GetString("DefaultBehavior"));

    m_defaultBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

  }

  if(m_defaultBehaviorHasBeenSet)
  {
   payload.WithString("DefaultBehavior", FilterBehaviorMapper::GetNameForFilterBehavior(m_defaultBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
