/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRComparisonMethod.h>
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

TopicIRComparisonMethod::TopicIRComparisonMethod(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIRComparisonMethod& TopicIRComparisonMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ComparisonMethodTypeMapper::GetComparisonMethodTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Period"))
  {
    m_period = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("Period"));
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WindowSize"))
  {
    m_windowSize = jsonValue.GetInteger("WindowSize");
    m_windowSizeHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIRComparisonMethod::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ComparisonMethodTypeMapper::GetNameForComparisonMethodType(m_type));
  }

  if(m_periodHasBeenSet)
  {
   payload.WithString("Period", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_period));
  }

  if(m_windowSizeHasBeenSet)
  {
   payload.WithInteger("WindowSize", m_windowSize);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
