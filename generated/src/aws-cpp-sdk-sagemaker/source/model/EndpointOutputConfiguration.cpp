/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointOutputConfiguration.h>
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

EndpointOutputConfiguration::EndpointOutputConfiguration() : 
    m_endpointNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false)
{
}

EndpointOutputConfiguration::EndpointOutputConfiguration(JsonView jsonValue) : 
    m_endpointNameHasBeenSet(false),
    m_variantNameHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointOutputConfiguration& EndpointOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointName"))
  {
    m_endpointName = jsonValue.GetString("EndpointName");

    m_endpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialInstanceCount"))
  {
    m_initialInstanceCount = jsonValue.GetInteger("InitialInstanceCount");

    m_initialInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerlessConfig"))
  {
    m_serverlessConfig = jsonValue.GetObject("ServerlessConfig");

    m_serverlessConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if(m_initialInstanceCountHasBeenSet)
  {
   payload.WithInteger("InitialInstanceCount", m_initialInstanceCount);

  }

  if(m_serverlessConfigHasBeenSet)
  {
   payload.WithObject("ServerlessConfig", m_serverlessConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
