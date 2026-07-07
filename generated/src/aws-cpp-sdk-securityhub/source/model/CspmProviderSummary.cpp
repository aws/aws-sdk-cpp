/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/CspmProviderSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

CspmProviderSummary::CspmProviderSummary(JsonView jsonValue) { *this = jsonValue; }

CspmProviderSummary& CspmProviderSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProviderName")) {
    m_providerName = CspmConnectorProviderNameMapper::GetCspmConnectorProviderNameForName(jsonValue.GetString("ProviderName"));
    m_providerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectorStatus")) {
    m_connectorStatus = CspmConnectorStatusMapper::GetCspmConnectorStatusForName(jsonValue.GetString("ConnectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProviderConfiguration")) {
    m_providerConfiguration = jsonValue.GetObject("ProviderConfiguration");
    m_providerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CspmProviderSummary::Jsonize() const {
  JsonValue payload;

  if (m_providerNameHasBeenSet) {
    payload.WithString("ProviderName", CspmConnectorProviderNameMapper::GetNameForCspmConnectorProviderName(m_providerName));
  }

  if (m_connectorStatusHasBeenSet) {
    payload.WithString("ConnectorStatus", CspmConnectorStatusMapper::GetNameForCspmConnectorStatus(m_connectorStatus));
  }

  if (m_providerConfigurationHasBeenSet) {
    payload.WithObject("ProviderConfiguration", m_providerConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
