/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentDeploymentConfig.h>
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

InferenceComponentDeploymentConfig::InferenceComponentDeploymentConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceComponentDeploymentConfig& InferenceComponentDeploymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollingUpdatePolicy"))
  {
    m_rollingUpdatePolicy = jsonValue.GetObject("RollingUpdatePolicy");
    m_rollingUpdatePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoRollbackConfiguration"))
  {
    m_autoRollbackConfiguration = jsonValue.GetObject("AutoRollbackConfiguration");
    m_autoRollbackConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentDeploymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_rollingUpdatePolicyHasBeenSet)
  {
   payload.WithObject("RollingUpdatePolicy", m_rollingUpdatePolicy.Jsonize());

  }

  if(m_autoRollbackConfigurationHasBeenSet)
  {
   payload.WithObject("AutoRollbackConfiguration", m_autoRollbackConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
