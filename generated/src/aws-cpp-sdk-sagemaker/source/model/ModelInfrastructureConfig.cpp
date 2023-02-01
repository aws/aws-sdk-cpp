/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelInfrastructureConfig.h>
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

ModelInfrastructureConfig::ModelInfrastructureConfig() : 
    m_infrastructureType(ModelInfrastructureType::NOT_SET),
    m_infrastructureTypeHasBeenSet(false),
    m_realTimeInferenceConfigHasBeenSet(false)
{
}

ModelInfrastructureConfig::ModelInfrastructureConfig(JsonView jsonValue) : 
    m_infrastructureType(ModelInfrastructureType::NOT_SET),
    m_infrastructureTypeHasBeenSet(false),
    m_realTimeInferenceConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ModelInfrastructureConfig& ModelInfrastructureConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InfrastructureType"))
  {
    m_infrastructureType = ModelInfrastructureTypeMapper::GetModelInfrastructureTypeForName(jsonValue.GetString("InfrastructureType"));

    m_infrastructureTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RealTimeInferenceConfig"))
  {
    m_realTimeInferenceConfig = jsonValue.GetObject("RealTimeInferenceConfig");

    m_realTimeInferenceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelInfrastructureConfig::Jsonize() const
{
  JsonValue payload;

  if(m_infrastructureTypeHasBeenSet)
  {
   payload.WithString("InfrastructureType", ModelInfrastructureTypeMapper::GetNameForModelInfrastructureType(m_infrastructureType));
  }

  if(m_realTimeInferenceConfigHasBeenSet)
  {
   payload.WithObject("RealTimeInferenceConfig", m_realTimeInferenceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
