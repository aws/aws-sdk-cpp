/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicRelativeDateFilter.h>
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

TopicRelativeDateFilter::TopicRelativeDateFilter() : 
    m_timeGranularity(TopicTimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_relativeDateFilterFunction(TopicRelativeDateFilterFunction::NOT_SET),
    m_relativeDateFilterFunctionHasBeenSet(false),
    m_constantHasBeenSet(false)
{
}

TopicRelativeDateFilter::TopicRelativeDateFilter(JsonView jsonValue) : 
    m_timeGranularity(TopicTimeGranularity::NOT_SET),
    m_timeGranularityHasBeenSet(false),
    m_relativeDateFilterFunction(TopicRelativeDateFilterFunction::NOT_SET),
    m_relativeDateFilterFunctionHasBeenSet(false),
    m_constantHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRelativeDateFilter& TopicRelativeDateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("TimeGranularity"));

    m_timeGranularityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelativeDateFilterFunction"))
  {
    m_relativeDateFilterFunction = TopicRelativeDateFilterFunctionMapper::GetTopicRelativeDateFilterFunctionForName(jsonValue.GetString("RelativeDateFilterFunction"));

    m_relativeDateFilterFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Constant"))
  {
    m_constant = jsonValue.GetObject("Constant");

    m_constantHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRelativeDateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_timeGranularity));
  }

  if(m_relativeDateFilterFunctionHasBeenSet)
  {
   payload.WithString("RelativeDateFilterFunction", TopicRelativeDateFilterFunctionMapper::GetNameForTopicRelativeDateFilterFunction(m_relativeDateFilterFunction));
  }

  if(m_constantHasBeenSet)
  {
   payload.WithObject("Constant", m_constant.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
