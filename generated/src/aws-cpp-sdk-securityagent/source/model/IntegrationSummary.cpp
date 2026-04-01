/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/IntegrationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

IntegrationSummary::IntegrationSummary(JsonView jsonValue) { *this = jsonValue; }

IntegrationSummary& IntegrationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("installationId")) {
    m_installationId = jsonValue.GetString("installationId");
    m_installationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = ProviderMapper::GetProviderForName(jsonValue.GetString("provider"));
    m_providerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerType")) {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("providerType"));
    m_providerTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationSummary::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_installationIdHasBeenSet) {
    payload.WithString("installationId", m_installationId);
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", ProviderMapper::GetNameForProvider(m_provider));
  }

  if (m_providerTypeHasBeenSet) {
    payload.WithString("providerType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
