/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointInputConfiguration.h>
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

EndpointInputConfiguration::EndpointInputConfiguration() : 
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false),
    m_inferenceSpecificationNameHasBeenSet(false),
    m_environmentParameterRangesHasBeenSet(false)
{
}

EndpointInputConfiguration::EndpointInputConfiguration(JsonView jsonValue) : 
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false),
    m_inferenceSpecificationNameHasBeenSet(false),
    m_environmentParameterRangesHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointInputConfiguration& EndpointInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerlessConfig"))
  {
    m_serverlessConfig = jsonValue.GetObject("ServerlessConfig");

    m_serverlessConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceSpecificationName"))
  {
    m_inferenceSpecificationName = jsonValue.GetString("InferenceSpecificationName");

    m_inferenceSpecificationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentParameterRanges"))
  {
    m_environmentParameterRanges = jsonValue.GetObject("EnvironmentParameterRanges");

    m_environmentParameterRangesHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if(m_serverlessConfigHasBeenSet)
  {
   payload.WithObject("ServerlessConfig", m_serverlessConfig.Jsonize());

  }

  if(m_inferenceSpecificationNameHasBeenSet)
  {
   payload.WithString("InferenceSpecificationName", m_inferenceSpecificationName);

  }

  if(m_environmentParameterRangesHasBeenSet)
  {
   payload.WithObject("EnvironmentParameterRanges", m_environmentParameterRanges.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
