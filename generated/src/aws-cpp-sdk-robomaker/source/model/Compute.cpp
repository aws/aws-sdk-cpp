/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/Compute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

Compute::Compute() : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_gpuUnitLimit(0),
    m_gpuUnitLimitHasBeenSet(false)
{
}

Compute::Compute(JsonView jsonValue) : 
    m_simulationUnitLimit(0),
    m_simulationUnitLimitHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_gpuUnitLimit(0),
    m_gpuUnitLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Compute& Compute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("simulationUnitLimit"))
  {
    m_simulationUnitLimit = jsonValue.GetInteger("simulationUnitLimit");

    m_simulationUnitLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computeType"))
  {
    m_computeType = ComputeTypeMapper::GetComputeTypeForName(jsonValue.GetString("computeType"));

    m_computeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gpuUnitLimit"))
  {
    m_gpuUnitLimit = jsonValue.GetInteger("gpuUnitLimit");

    m_gpuUnitLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Compute::Jsonize() const
{
  JsonValue payload;

  if(m_simulationUnitLimitHasBeenSet)
  {
   payload.WithInteger("simulationUnitLimit", m_simulationUnitLimit);

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithString("computeType", ComputeTypeMapper::GetNameForComputeType(m_computeType));
  }

  if(m_gpuUnitLimitHasBeenSet)
  {
   payload.WithInteger("gpuUnitLimit", m_gpuUnitLimit);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
