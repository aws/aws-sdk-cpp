/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeploymentConfig.h>
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

DeploymentConfig::DeploymentConfig() : 
    m_concurrentDeploymentPercentage(0),
    m_concurrentDeploymentPercentageHasBeenSet(false),
    m_failureThresholdPercentage(0),
    m_failureThresholdPercentageHasBeenSet(false),
    m_robotDeploymentTimeoutInSeconds(0),
    m_robotDeploymentTimeoutInSecondsHasBeenSet(false),
    m_downloadConditionFileHasBeenSet(false)
{
}

DeploymentConfig::DeploymentConfig(JsonView jsonValue) : 
    m_concurrentDeploymentPercentage(0),
    m_concurrentDeploymentPercentageHasBeenSet(false),
    m_failureThresholdPercentage(0),
    m_failureThresholdPercentageHasBeenSet(false),
    m_robotDeploymentTimeoutInSeconds(0),
    m_robotDeploymentTimeoutInSecondsHasBeenSet(false),
    m_downloadConditionFileHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentConfig& DeploymentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("concurrentDeploymentPercentage"))
  {
    m_concurrentDeploymentPercentage = jsonValue.GetInteger("concurrentDeploymentPercentage");

    m_concurrentDeploymentPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureThresholdPercentage"))
  {
    m_failureThresholdPercentage = jsonValue.GetInteger("failureThresholdPercentage");

    m_failureThresholdPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("robotDeploymentTimeoutInSeconds"))
  {
    m_robotDeploymentTimeoutInSeconds = jsonValue.GetInt64("robotDeploymentTimeoutInSeconds");

    m_robotDeploymentTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("downloadConditionFile"))
  {
    m_downloadConditionFile = jsonValue.GetObject("downloadConditionFile");

    m_downloadConditionFileHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_concurrentDeploymentPercentageHasBeenSet)
  {
   payload.WithInteger("concurrentDeploymentPercentage", m_concurrentDeploymentPercentage);

  }

  if(m_failureThresholdPercentageHasBeenSet)
  {
   payload.WithInteger("failureThresholdPercentage", m_failureThresholdPercentage);

  }

  if(m_robotDeploymentTimeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("robotDeploymentTimeoutInSeconds", m_robotDeploymentTimeoutInSeconds);

  }

  if(m_downloadConditionFileHasBeenSet)
  {
   payload.WithObject("downloadConditionFile", m_downloadConditionFile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
