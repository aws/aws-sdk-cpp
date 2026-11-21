/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/QuickManagedPublicAuthCodeQuickAuthenticationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

QuickManagedPublicAuthCodeQuickAuthenticationConfig::QuickManagedPublicAuthCodeQuickAuthenticationConfig(JsonView jsonValue) {
  *this = jsonValue;
}

QuickManagedPublicAuthCodeQuickAuthenticationConfig& QuickManagedPublicAuthCodeQuickAuthenticationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RedirectUris")) {
    Aws::Utils::Array<JsonView> redirectUrisJsonList = jsonValue.GetArray("RedirectUris");
    for (unsigned redirectUrisIndex = 0; redirectUrisIndex < redirectUrisJsonList.GetLength(); ++redirectUrisIndex) {
      m_redirectUris.push_back(redirectUrisJsonList[redirectUrisIndex].AsString());
    }
    m_redirectUrisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickManagedPublicAuthCodeQuickAuthenticationConfig::Jsonize() const {
  JsonValue payload;

  if (m_redirectUrisHasBeenSet) {
    Aws::Utils::Array<JsonValue> redirectUrisJsonList(m_redirectUris.size());
    for (unsigned redirectUrisIndex = 0; redirectUrisIndex < redirectUrisJsonList.GetLength(); ++redirectUrisIndex) {
      redirectUrisJsonList[redirectUrisIndex].AsString(m_redirectUris[redirectUrisIndex]);
    }
    payload.WithArray("RedirectUris", std::move(redirectUrisJsonList));
  }

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
