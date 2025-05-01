/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeploymentConfiguration.h>
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

DeploymentConfiguration::DeploymentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentConfiguration& DeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollingUpdatePolicy"))
  {
    m_rollingUpdatePolicy = jsonValue.GetObject("RollingUpdatePolicy");
    m_rollingUpdatePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WaitIntervalInSeconds"))
  {
    m_waitIntervalInSeconds = jsonValue.GetInteger("WaitIntervalInSeconds");
    m_waitIntervalInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoRollbackConfiguration"))
  {
    Aws::Utils::Array<JsonView> autoRollbackConfigurationJsonList = jsonValue.GetArray("AutoRollbackConfiguration");
    for(unsigned autoRollbackConfigurationIndex = 0; autoRollbackConfigurationIndex < autoRollbackConfigurationJsonList.GetLength(); ++autoRollbackConfigurationIndex)
    {
      m_autoRollbackConfiguration.push_back(autoRollbackConfigurationJsonList[autoRollbackConfigurationIndex].AsObject());
    }
    m_autoRollbackConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rollingUpdatePolicyHasBeenSet)
  {
   payload.WithObject("RollingUpdatePolicy", m_rollingUpdatePolicy.Jsonize());

  }

  if(m_waitIntervalInSecondsHasBeenSet)
  {
   payload.WithInteger("WaitIntervalInSeconds", m_waitIntervalInSeconds);

  }

  if(m_autoRollbackConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoRollbackConfigurationJsonList(m_autoRollbackConfiguration.size());
   for(unsigned autoRollbackConfigurationIndex = 0; autoRollbackConfigurationIndex < autoRollbackConfigurationJsonList.GetLength(); ++autoRollbackConfigurationIndex)
   {
     autoRollbackConfigurationJsonList[autoRollbackConfigurationIndex].AsObject(m_autoRollbackConfiguration[autoRollbackConfigurationIndex].Jsonize());
   }
   payload.WithArray("AutoRollbackConfiguration", std::move(autoRollbackConfigurationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
