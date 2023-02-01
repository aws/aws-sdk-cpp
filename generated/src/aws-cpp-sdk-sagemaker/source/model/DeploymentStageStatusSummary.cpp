/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeploymentStageStatusSummary.h>
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

DeploymentStageStatusSummary::DeploymentStageStatusSummary() : 
    m_stageNameHasBeenSet(false),
    m_deviceSelectionConfigHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false)
{
}

DeploymentStageStatusSummary::DeploymentStageStatusSummary(JsonView jsonValue) : 
    m_stageNameHasBeenSet(false),
    m_deviceSelectionConfigHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentStageStatusSummary& DeploymentStageStatusSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DeploymentStatus"))
  {
    m_deploymentStatus = jsonValue.GetObject("DeploymentStatus");

    m_deploymentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentStageStatusSummary::Jsonize() const
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

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithObject("DeploymentStatus", m_deploymentStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
