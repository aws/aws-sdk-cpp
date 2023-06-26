/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DefaultWorkspaceCreationProperties.h>
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

DefaultWorkspaceCreationProperties::DefaultWorkspaceCreationProperties() : 
    m_enableWorkDocs(false),
    m_enableWorkDocsHasBeenSet(false),
    m_enableInternetAccess(false),
    m_enableInternetAccessHasBeenSet(false),
    m_defaultOuHasBeenSet(false),
    m_customSecurityGroupIdHasBeenSet(false),
    m_userEnabledAsLocalAdministrator(false),
    m_userEnabledAsLocalAdministratorHasBeenSet(false),
    m_enableMaintenanceMode(false),
    m_enableMaintenanceModeHasBeenSet(false)
{
}

DefaultWorkspaceCreationProperties::DefaultWorkspaceCreationProperties(JsonView jsonValue) : 
    m_enableWorkDocs(false),
    m_enableWorkDocsHasBeenSet(false),
    m_enableInternetAccess(false),
    m_enableInternetAccessHasBeenSet(false),
    m_defaultOuHasBeenSet(false),
    m_customSecurityGroupIdHasBeenSet(false),
    m_userEnabledAsLocalAdministrator(false),
    m_userEnabledAsLocalAdministratorHasBeenSet(false),
    m_enableMaintenanceMode(false),
    m_enableMaintenanceModeHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultWorkspaceCreationProperties& DefaultWorkspaceCreationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableWorkDocs"))
  {
    m_enableWorkDocs = jsonValue.GetBool("EnableWorkDocs");

    m_enableWorkDocsHasBeenSet = true;
  }

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

  return *this;
}

JsonValue DefaultWorkspaceCreationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_enableWorkDocsHasBeenSet)
  {
   payload.WithBool("EnableWorkDocs", m_enableWorkDocs);

  }

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

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
