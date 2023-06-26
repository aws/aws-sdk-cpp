/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DeploymentJob.h>
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

DeploymentJob::DeploymentJob() : 
    m_arnHasBeenSet(false),
    m_fleetHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_deploymentApplicationConfigsHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(DeploymentJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

DeploymentJob::DeploymentJob(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_fleetHasBeenSet(false),
    m_status(DeploymentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_deploymentApplicationConfigsHasBeenSet(false),
    m_deploymentConfigHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(DeploymentJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentJob& DeploymentJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fleet"))
  {
    m_fleet = jsonValue.GetString("fleet");

    m_fleetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentApplicationConfigs"))
  {
    Aws::Utils::Array<JsonView> deploymentApplicationConfigsJsonList = jsonValue.GetArray("deploymentApplicationConfigs");
    for(unsigned deploymentApplicationConfigsIndex = 0; deploymentApplicationConfigsIndex < deploymentApplicationConfigsJsonList.GetLength(); ++deploymentApplicationConfigsIndex)
    {
      m_deploymentApplicationConfigs.push_back(deploymentApplicationConfigsJsonList[deploymentApplicationConfigsIndex].AsObject());
    }
    m_deploymentApplicationConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentConfig"))
  {
    m_deploymentConfig = jsonValue.GetObject("deploymentConfig");

    m_deploymentConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = DeploymentJobErrorCodeMapper::GetDeploymentJobErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentJob::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_fleetHasBeenSet)
  {
   payload.WithString("fleet", m_fleet);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DeploymentStatusMapper::GetNameForDeploymentStatus(m_status));
  }

  if(m_deploymentApplicationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deploymentApplicationConfigsJsonList(m_deploymentApplicationConfigs.size());
   for(unsigned deploymentApplicationConfigsIndex = 0; deploymentApplicationConfigsIndex < deploymentApplicationConfigsJsonList.GetLength(); ++deploymentApplicationConfigsIndex)
   {
     deploymentApplicationConfigsJsonList[deploymentApplicationConfigsIndex].AsObject(m_deploymentApplicationConfigs[deploymentApplicationConfigsIndex].Jsonize());
   }
   payload.WithArray("deploymentApplicationConfigs", std::move(deploymentApplicationConfigsJsonList));

  }

  if(m_deploymentConfigHasBeenSet)
  {
   payload.WithObject("deploymentConfig", m_deploymentConfig.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", DeploymentJobErrorCodeMapper::GetNameForDeploymentJobErrorCode(m_failureCode));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
