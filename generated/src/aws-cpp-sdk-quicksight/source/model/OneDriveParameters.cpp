/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/OneDriveParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

OneDriveParameters::OneDriveParameters(JsonView jsonValue) { *this = jsonValue; }

OneDriveParameters& OneDriveParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TenantId")) {
    m_tenantId = jsonValue.GetString("TenantId");
    m_tenantIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthType")) {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue OneDriveParameters::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdHasBeenSet) {
    payload.WithString("TenantId", m_tenantId);
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_authTypeHasBeenSet) {
    payload.WithString("AuthType", AuthTypeMapper::GetNameForAuthType(m_authType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
