/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PercentileAggregation.h>
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

PercentileAggregation::PercentileAggregation() : 
    m_percentileValue(0.0),
    m_percentileValueHasBeenSet(false)
{
}

PercentileAggregation::PercentileAggregation(JsonView jsonValue) : 
    m_percentileValue(0.0),
    m_percentileValueHasBeenSet(false)
{
  *this = jsonValue;
}

PercentileAggregation& PercentileAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentileValue"))
  {
    m_percentileValue = jsonValue.GetDouble("PercentileValue");

    m_percentileValueHasBeenSet = true;
  }

  return *this;
}

JsonValue PercentileAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_percentileValueHasBeenSet)
  {
   payload.WithDouble("PercentileValue", m_percentileValue);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
