/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ExternalIdpConfidentialAuthCodeAuthorizingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ExternalIdpConfidentialAuthCodeAuthorizingConfig::ExternalIdpConfidentialAuthCodeAuthorizingConfig(JsonView jsonValue) {
  *this = jsonValue;
}

ExternalIdpConfidentialAuthCodeAuthorizingConfig& ExternalIdpConfidentialAuthCodeAuthorizingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientId")) {
    m_clientId = jsonValue.GetString("ClientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IssuerUrl")) {
    m_issuerUrl = jsonValue.GetString("IssuerUrl");
    m_issuerUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientSecrets")) {
    Aws::Utils::Array<JsonView> clientSecretsJsonList = jsonValue.GetArray("ClientSecrets");
    for (unsigned clientSecretsIndex = 0; clientSecretsIndex < clientSecretsJsonList.GetLength(); ++clientSecretsIndex) {
      m_clientSecrets.push_back(clientSecretsJsonList[clientSecretsIndex].AsObject());
    }
    m_clientSecretsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalIdpConfidentialAuthCodeAuthorizingConfig::Jsonize() const {
  JsonValue payload;

  if (m_clientIdHasBeenSet) {
    payload.WithString("ClientId", m_clientId);
  }

  if (m_issuerUrlHasBeenSet) {
    payload.WithString("IssuerUrl", m_issuerUrl);
  }

  if (m_clientSecretsHasBeenSet) {
    Aws::Utils::Array<JsonValue> clientSecretsJsonList(m_clientSecrets.size());
    for (unsigned clientSecretsIndex = 0; clientSecretsIndex < clientSecretsJsonList.GetLength(); ++clientSecretsIndex) {
      clientSecretsJsonList[clientSecretsIndex].AsObject(m_clientSecrets[clientSecretsIndex].Jsonize());
    }
    payload.WithArray("ClientSecrets", std::move(clientSecretsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
