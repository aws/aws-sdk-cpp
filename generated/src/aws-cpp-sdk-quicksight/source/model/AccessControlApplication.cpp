/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/AccessControlApplication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

AccessControlApplication::AccessControlApplication(JsonView jsonValue) { *this = jsonValue; }

AccessControlApplication& AccessControlApplication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Namespace")) {
    m_namespace = jsonValue.GetString("Namespace");
    m_namespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthenticationType")) {
    m_authenticationType = AccessControlApplicationAuthenticationTypeMapper::GetAccessControlApplicationAuthenticationTypeForName(
        jsonValue.GetString("AuthenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AccessControlApplicationStatusMapper::GetAccessControlApplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantUrl")) {
    m_tenantUrl = jsonValue.GetString("TenantUrl");
    m_tenantUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdcApplicationArn")) {
    m_idcApplicationArn = jsonValue.GetString("IdcApplicationArn");
    m_idcApplicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdpAuthorizingConfiguration")) {
    m_idpAuthorizingConfiguration = jsonValue.GetObject("IdpAuthorizingConfiguration");
    m_idpAuthorizingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QuickAuthenticationConfiguration")) {
    m_quickAuthenticationConfiguration = jsonValue.GetObject("QuickAuthenticationConfiguration");
    m_quickAuthenticationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessControlApplication::Jsonize() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("ApplicationId", m_applicationId);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_authenticationTypeHasBeenSet) {
    payload.WithString(
        "AuthenticationType",
        AccessControlApplicationAuthenticationTypeMapper::GetNameForAccessControlApplicationAuthenticationType(m_authenticationType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AccessControlApplicationStatusMapper::GetNameForAccessControlApplicationStatus(m_status));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if (m_tenantUrlHasBeenSet) {
    payload.WithString("TenantUrl", m_tenantUrl);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_idcApplicationArnHasBeenSet) {
    payload.WithString("IdcApplicationArn", m_idcApplicationArn);
  }

  if (m_idpAuthorizingConfigurationHasBeenSet) {
    payload.WithObject("IdpAuthorizingConfiguration", m_idpAuthorizingConfiguration.Jsonize());
  }

  if (m_quickAuthenticationConfigurationHasBeenSet) {
    payload.WithObject("QuickAuthenticationConfiguration", m_quickAuthenticationConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
