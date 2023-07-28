/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/Deployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

Deployment::Deployment() : 
    m_arnHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialStateHasBeenSet(false),
    m_lastAttemptedDeploymentIdHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_lastSucceededDeploymentIdHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_targetResourceCreatedAtHasBeenSet(false),
    m_targetResourceType(DeploymentTargetResourceType::NOT_SET),
    m_targetResourceTypeHasBeenSet(false),
    m_targetStateHasBeenSet(false)
{
}

Deployment::Deployment(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_initialStateHasBeenSet(false),
    m_lastAttemptedDeploymentIdHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_lastSucceededDeploymentIdHasBeenSet(false),
    m_serviceInstanceNameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_targetResourceCreatedAtHasBeenSet(false),
    m_targetResourceType(DeploymentTargetResourceType::NOT_SET),
    m_targetResourceTypeHasBeenSet(false),
    m_targetStateHasBeenSet(false)
{
  *this = jsonValue;
}

Deployment& Deployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedAt"))
  {
    m_completedAt = jsonValue.GetDouble("completedAt");

    m_completedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

    m_componentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatus"))
  {
    m_deploymentStatus = DeploymentStatusMapper::GetDeploymentStatusForName(jsonValue.GetString("deploymentStatus"));

    m_deploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentStatusMessage"))
  {
    m_deploymentStatusMessage = jsonValue.GetString("deploymentStatusMessage");

    m_deploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initialState"))
  {
    m_initialState = jsonValue.GetObject("initialState");

    m_initialStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAttemptedDeploymentId"))
  {
    m_lastAttemptedDeploymentId = jsonValue.GetString("lastAttemptedDeploymentId");

    m_lastAttemptedDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetDouble("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastSucceededDeploymentId"))
  {
    m_lastSucceededDeploymentId = jsonValue.GetString("lastSucceededDeploymentId");

    m_lastSucceededDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceInstanceName"))
  {
    m_serviceInstanceName = jsonValue.GetString("serviceInstanceName");

    m_serviceInstanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetArn"))
  {
    m_targetArn = jsonValue.GetString("targetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceCreatedAt"))
  {
    m_targetResourceCreatedAt = jsonValue.GetDouble("targetResourceCreatedAt");

    m_targetResourceCreatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetResourceType"))
  {
    m_targetResourceType = DeploymentTargetResourceTypeMapper::GetDeploymentTargetResourceTypeForName(jsonValue.GetString("targetResourceType"));

    m_targetResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetState"))
  {
    m_targetState = jsonValue.GetObject("targetState");

    m_targetStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Deployment::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_completedAtHasBeenSet)
  {
   payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("componentName", m_componentName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_deploymentStatusHasBeenSet)
  {
   payload.WithString("deploymentStatus", DeploymentStatusMapper::GetNameForDeploymentStatus(m_deploymentStatus));
  }

  if(m_deploymentStatusMessageHasBeenSet)
  {
   payload.WithString("deploymentStatusMessage", m_deploymentStatusMessage);

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_initialStateHasBeenSet)
  {
   payload.WithObject("initialState", m_initialState.Jsonize());

  }

  if(m_lastAttemptedDeploymentIdHasBeenSet)
  {
   payload.WithString("lastAttemptedDeploymentId", m_lastAttemptedDeploymentId);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithDouble("lastModifiedAt", m_lastModifiedAt.SecondsWithMSPrecision());
  }

  if(m_lastSucceededDeploymentIdHasBeenSet)
  {
   payload.WithString("lastSucceededDeploymentId", m_lastSucceededDeploymentId);

  }

  if(m_serviceInstanceNameHasBeenSet)
  {
   payload.WithString("serviceInstanceName", m_serviceInstanceName);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_targetResourceCreatedAtHasBeenSet)
  {
   payload.WithDouble("targetResourceCreatedAt", m_targetResourceCreatedAt.SecondsWithMSPrecision());
  }

  if(m_targetResourceTypeHasBeenSet)
  {
   payload.WithString("targetResourceType", DeploymentTargetResourceTypeMapper::GetNameForDeploymentTargetResourceType(m_targetResourceType));
  }

  if(m_targetStateHasBeenSet)
  {
   payload.WithObject("targetState", m_targetState.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
