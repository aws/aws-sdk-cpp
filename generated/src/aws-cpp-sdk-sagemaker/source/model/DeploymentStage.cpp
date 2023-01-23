/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeploymentStage.h>
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

DeploymentStage::DeploymentStage() : 
    m_stageNameHasBeenSet(false),
    m_deviceSelectionConfigHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false)
{
}

DeploymentStage::DeploymentStage(JsonView jsonValue) : 
    m_stageNameHasBeenSet(false),
    m_deviceSelectionConfigHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentStage& DeploymentStage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceSelectionConfig"))
  {
    m_deviceSelectionConfig = jsonValue.GetObject("DeviceSelectionConfig");

    m_deviceSelectionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentConfig"))
  {
    m_deploymentConfig = jsonValue.GetObject("DeploymentConfig");

    m_deploymentConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentStage::Jsonize() const
{
  JsonValue payload;

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  if(m_deviceSelectionConfigHasBeenSet)
  {
   payload.WithObject("DeviceSelectionConfig", m_deviceSelectionConfig.Jsonize());

  }

  if(m_deploymentConfigHasBeenSet)
  {
   payload.WithObject("DeploymentConfig", m_deploymentConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
