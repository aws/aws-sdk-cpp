/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ServiceInstance.h>
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

ServiceInstance::ServiceInstance() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_lastAttemptedDeploymentIdHasBeenSet(false),
    m_lastClientRequestTokenHasBeenSet(false),
    m_lastDeploymentAttemptedAtHasBeenSet(false),
    m_lastDeploymentSucceededAtHasBeenSet(false),
    m_lastSucceededDeploymentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

ServiceInstance::ServiceInstance(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deploymentStatus(DeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_deploymentStatusMessageHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_lastAttemptedDeploymentIdHasBeenSet(false),
    m_lastClientRequestTokenHasBeenSet(false),
    m_lastDeploymentAttemptedAtHasBeenSet(false),
    m_lastDeploymentSucceededAtHasBeenSet(false),
    m_lastSucceededDeploymentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceInstance& ServiceInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("lastAttemptedDeploymentId"))
  {
    m_lastAttemptedDeploymentId = jsonValue.GetString("lastAttemptedDeploymentId");

    m_lastAttemptedDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastClientRequestToken"))
  {
    m_lastClientRequestToken = jsonValue.GetString("lastClientRequestToken");

    m_lastClientRequestTokenHasBeenSet = true;
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

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spec"))
  {
    m_spec = jsonValue.GetString("spec");

    m_specHasBeenSet = true;
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

JsonValue ServiceInstance::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  if(m_lastAttemptedDeploymentIdHasBeenSet)
  {
   payload.WithString("lastAttemptedDeploymentId", m_lastAttemptedDeploymentId);

  }

  if(m_lastClientRequestTokenHasBeenSet)
  {
   payload.WithString("lastClientRequestToken", m_lastClientRequestToken);

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

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

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
