/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisLinearScale.h>
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

AxisLinearScale::AxisLinearScale() : 
    m_stepCount(0),
    m_stepCountHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
}

AxisLinearScale::AxisLinearScale(JsonView jsonValue) : 
    m_stepCount(0),
    m_stepCountHasBeenSet(false),
    m_stepSize(0.0),
    m_stepSizeHasBeenSet(false)
{
  *this = jsonValue;
}

AxisLinearScale& AxisLinearScale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepCount"))
  {
    m_stepCount = jsonValue.GetInteger("StepCount");

    m_stepCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepSize"))
  {
    m_stepSize = jsonValue.GetDouble("StepSize");

    m_stepSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisLinearScale::Jsonize() const
{
  JsonValue payload;

  if(m_stepCountHasBeenSet)
  {
   payload.WithInteger("StepCount", m_stepCount);

  }

  if(m_stepSizeHasBeenSet)
  {
   payload.WithDouble("StepSize", m_stepSize);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
