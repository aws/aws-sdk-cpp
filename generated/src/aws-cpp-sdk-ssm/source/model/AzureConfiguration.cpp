/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/AzureConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

AzureConfiguration::AzureConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureConfiguration& AzureConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TenantId")) {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TenantDisplayName")) {
    m_tenantDisplayName = jsonValue.GetString("TenantDisplayName");
    m_tenantDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationId")) {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationDisplayName")) {
    m_applicationDisplayName = jsonValue.GetString("ApplicationDisplayName");
    m_applicationDisplayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Targets")) {
    m_targets = jsonValue.GetObject("Targets");
    m_targetsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdHasBeenSet) {
    payload.WithString("TenantId", m_tenantId);
  }

  if (m_tenantDisplayNameHasBeenSet) {
    payload.WithString("TenantDisplayName", m_tenantDisplayName);
  }

  if (m_applicationIdHasBeenSet) {
    payload.WithString("ApplicationId", m_applicationId);
  }

  if (m_applicationDisplayNameHasBeenSet) {
    payload.WithString("ApplicationDisplayName", m_applicationDisplayName);
  }

  if (m_targetsHasBeenSet) {
    payload.WithObject("Targets", m_targets.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
