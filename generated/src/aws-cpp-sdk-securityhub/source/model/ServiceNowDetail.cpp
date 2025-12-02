/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/ServiceNowDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

ServiceNowDetail::ServiceNowDetail(JsonView jsonValue) { *this = jsonValue; }

ServiceNowDetail& ServiceNowDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceName")) {
    m_instanceName = jsonValue.GetString("InstanceName");
    m_instanceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecretArn")) {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthStatus")) {
    m_authStatus = ConnectorAuthStatusMapper::GetConnectorAuthStatusForName(jsonValue.GetString("AuthStatus"));
    m_authStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNowDetail::Jsonize() const {
  JsonValue payload;

  if (m_instanceNameHasBeenSet) {
    payload.WithString("InstanceName", m_instanceName);
  }

  if (m_secretArnHasBeenSet) {
    payload.WithString("SecretArn", m_secretArn);
  }

  if (m_authStatusHasBeenSet) {
    payload.WithString("AuthStatus", ConnectorAuthStatusMapper::GetNameForConnectorAuthStatus(m_authStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
