/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MetricComparisonComputation.h>
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

MetricComparisonComputation::MetricComparisonComputation() : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_fromValueHasBeenSet(false),
    m_targetValueHasBeenSet(false)
{
}

MetricComparisonComputation::MetricComparisonComputation(JsonView jsonValue) : 
    m_computationIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_fromValueHasBeenSet(false),
    m_targetValueHasBeenSet(false)
{
  *this = jsonValue;
}

MetricComparisonComputation& MetricComparisonComputation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputationId"))
  {
    m_computationId = jsonValue.GetString("ComputationId");

    m_computationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Time"))
  {
    m_time = jsonValue.GetObject("Time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromValue"))
  {
    m_fromValue = jsonValue.GetObject("FromValue");

    m_fromValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetValue"))
  {
    m_targetValue = jsonValue.GetObject("TargetValue");

    m_targetValueHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricComparisonComputation::Jsonize() const
{
  JsonValue payload;

  if(m_computationIdHasBeenSet)
  {
   payload.WithString("ComputationId", m_computationId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithObject("Time", m_time.Jsonize());

  }

  if(m_fromValueHasBeenSet)
  {
   payload.WithObject("FromValue", m_fromValue.Jsonize());

  }

  if(m_targetValueHasBeenSet)
  {
   payload.WithObject("TargetValue", m_targetValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
