﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentSummary.h>
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

EnvironmentSummary::EnvironmentSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentSummary& EnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("componentRoleArn"))
  {
    m_componentRoleArn = jsonValue.GetString("componentRoleArn");
    m_componentRoleArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentAccountConnectionId"))
  {
    m_environmentAccountConnectionId = jsonValue.GetString("environmentAccountConnectionId");
    m_environmentAccountConnectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentAccountId"))
  {
    m_environmentAccountId = jsonValue.GetString("environmentAccountId");
    m_environmentAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastAttemptedDeploymentId"))
  {
    m_lastAttemptedDeploymentId = jsonValue.GetString("lastAttemptedDeploymentId");
    m_lastAttemptedDeploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastDeploymentAttemptedAt"))
  {
    m_lastDeploymentAttemptedAt = jsonValue.GetDouble("lastDeploymentAttemptedAt");
    m_lastDeploymentAttemptedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastDeploymentSucceededAt"))
  {
    m_lastDeploymentSucceededAt = jsonValue.GetDouble("lastDeploymentSucceededAt");
    m_lastDeploymentSucceededAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastSucceededDeploymentId"))
  {
    m_lastSucceededDeploymentId = jsonValue.GetString("lastSucceededDeploymentId");
    m_lastSucceededDeploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protonServiceRoleArn"))
  {
    m_protonServiceRoleArn = jsonValue.GetString("protonServiceRoleArn");
    m_protonServiceRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisioning"))
  {
    m_provisioning = ProvisioningMapper::GetProvisioningForName(jsonValue.GetString("provisioning"));
    m_provisioningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateMajorVersion"))
  {
    m_templateMajorVersion = jsonValue.GetString("templateMajorVersion");
    m_templateMajorVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateMinorVersion"))
  {
    m_templateMinorVersion = jsonValue.GetString("templateMinorVersion");
    m_templateMinorVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_componentRoleArnHasBeenSet)
  {
   payload.WithString("componentRoleArn", m_componentRoleArn);

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentAccountConnectionIdHasBeenSet)
  {
   payload.WithString("environmentAccountConnectionId", m_environmentAccountConnectionId);

  }

  if(m_environmentAccountIdHasBeenSet)
  {
   payload.WithString("environmentAccountId", m_environmentAccountId);

  }

  if(m_lastAttemptedDeploymentIdHasBeenSet)
  {
   payload.WithString("lastAttemptedDeploymentId", m_lastAttemptedDeploymentId);

  }

  if(m_lastDeploymentAttemptedAtHasBeenSet)
  {
   payload.WithDouble("lastDeploymentAttemptedAt", m_lastDeploymentAttemptedAt.SecondsWithMSPrecision());
  }

  if(m_lastDeploymentSucceededAtHasBeenSet)
  {
   payload.WithDouble("lastDeploymentSucceededAt", m_lastDeploymentSucceededAt.SecondsWithMSPrecision());
  }

  if(m_lastSucceededDeploymentIdHasBeenSet)
  {
   payload.WithString("lastSucceededDeploymentId", m_lastSucceededDeploymentId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protonServiceRoleArnHasBeenSet)
  {
   payload.WithString("protonServiceRoleArn", m_protonServiceRoleArn);

  }

  if(m_provisioningHasBeenSet)
  {
   payload.WithString("provisioning", ProvisioningMapper::GetNameForProvisioning(m_provisioning));
  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
