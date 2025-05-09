/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceCreationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceCreationProperties::WorkspaceCreationProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkspaceCreationProperties& WorkspaceCreationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableInternetAccess"))
  {
    m_enableInternetAccess = jsonValue.GetBool("EnableInternetAccess");
    m_enableInternetAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultOu"))
  {
    m_defaultOu = jsonValue.GetString("DefaultOu");
    m_defaultOuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomSecurityGroupId"))
  {
    m_customSecurityGroupId = jsonValue.GetString("CustomSecurityGroupId");
    m_customSecurityGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserEnabledAsLocalAdministrator"))
  {
    m_userEnabledAsLocalAdministrator = jsonValue.GetBool("UserEnabledAsLocalAdministrator");
    m_userEnabledAsLocalAdministratorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableMaintenanceMode"))
  {
    m_enableMaintenanceMode = jsonValue.GetBool("EnableMaintenanceMode");
    m_enableMaintenanceModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceIamRoleArn"))
  {
    m_instanceIamRoleArn = jsonValue.GetString("InstanceIamRoleArn");
    m_instanceIamRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceCreationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_enableInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableInternetAccess", m_enableInternetAccess);

  }

  if(m_defaultOuHasBeenSet)
  {
   payload.WithString("DefaultOu", m_defaultOu);

  }

  if(m_customSecurityGroupIdHasBeenSet)
  {
   payload.WithString("CustomSecurityGroupId", m_customSecurityGroupId);

  }

  if(m_userEnabledAsLocalAdministratorHasBeenSet)
  {
   payload.WithBool("UserEnabledAsLocalAdministrator", m_userEnabledAsLocalAdministrator);

  }

  if(m_enableMaintenanceModeHasBeenSet)
  {
   payload.WithBool("EnableMaintenanceMode", m_enableMaintenanceMode);

  }

  if(m_instanceIamRoleArnHasBeenSet)
  {
   payload.WithString("InstanceIamRoleArn", m_instanceIamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
