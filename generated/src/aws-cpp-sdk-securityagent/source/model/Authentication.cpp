/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Authentication.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Authentication::Authentication(JsonView jsonValue) { *this = jsonValue; }

Authentication& Authentication::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("providerType")) {
    m_providerType = AuthenticationProviderTypeMapper::GetAuthenticationProviderTypeForName(jsonValue.GetString("providerType"));
    m_providerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue Authentication::Jsonize() const {
  JsonValue payload;

  if (m_providerTypeHasBeenSet) {
    payload.WithString("providerType", AuthenticationProviderTypeMapper::GetNameForAuthenticationProviderType(m_providerType));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
