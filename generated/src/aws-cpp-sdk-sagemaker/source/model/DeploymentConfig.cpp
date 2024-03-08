/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeploymentConfig.h>
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

DeploymentConfig::DeploymentConfig() : 
    m_blueGreenUpdatePolicyHasBeenSet(false),
    m_rollingUpdatePolicyHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false)
{
}

DeploymentConfig::DeploymentConfig(JsonView jsonValue) : 
    m_blueGreenUpdatePolicyHasBeenSet(false),
    m_rollingUpdatePolicyHasBeenSet(false),
    m_autoRollbackConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfig& DeploymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlueGreenUpdatePolicy"))
  {
    m_blueGreenUpdatePolicy = jsonValue.GetObject("BlueGreenUpdatePolicy");

    m_blueGreenUpdatePolicyHasBeenSet = true;
  }

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

JsonValue DeploymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_blueGreenUpdatePolicyHasBeenSet)
  {
   payload.WithObject("BlueGreenUpdatePolicy", m_blueGreenUpdatePolicy.Jsonize());

  }

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
