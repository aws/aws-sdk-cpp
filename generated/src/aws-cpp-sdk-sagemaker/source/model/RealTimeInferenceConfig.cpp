/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RealTimeInferenceConfig.h>
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

RealTimeInferenceConfig::RealTimeInferenceConfig() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false)
{
}

RealTimeInferenceConfig::RealTimeInferenceConfig(JsonView jsonValue) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeInferenceConfig& RealTimeInferenceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeInferenceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
