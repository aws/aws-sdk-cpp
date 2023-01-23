/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ContinuousParameterRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ContinuousParameterRange::ContinuousParameterRange() : 
    m_nameHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_scalingType(HyperParameterScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false)
{
}

ContinuousParameterRange::ContinuousParameterRange(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_maxValueHasBeenSet(false),
    m_scalingType(HyperParameterScalingType::NOT_SET),
    m_scalingTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ContinuousParameterRange& ContinuousParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinValue"))
  {
    m_minValue = jsonValue.GetString("MinValue");

    m_minValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxValue"))
  {
    m_maxValue = jsonValue.GetString("MaxValue");

    m_maxValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingType"))
  {
    m_scalingType = HyperParameterScalingTypeMapper::GetHyperParameterScalingTypeForName(jsonValue.GetString("ScalingType"));

    m_scalingTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ContinuousParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_minValueHasBeenSet)
  {
   payload.WithString("MinValue", m_minValue);

  }

  if(m_maxValueHasBeenSet)
  {
   payload.WithString("MaxValue", m_maxValue);

  }

  if(m_scalingTypeHasBeenSet)
  {
   payload.WithString("ScalingType", HyperParameterScalingTypeMapper::GetNameForHyperParameterScalingType(m_scalingType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
