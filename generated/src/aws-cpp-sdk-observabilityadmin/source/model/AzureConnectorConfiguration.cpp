/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureConnectorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureConnectorConfiguration::AzureConnectorConfiguration(JsonView jsonValue) { *this = jsonValue; }

AzureConnectorConfiguration& AzureConnectorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TenantIdentifier")) {
    m_tenantIdentifier = jsonValue.GetString("TenantIdentifier");
    m_tenantIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientIdentifier")) {
    m_clientIdentifier = jsonValue.GetString("ClientIdentifier");
    m_clientIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureConnectorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_tenantIdentifierHasBeenSet) {
    payload.WithString("TenantIdentifier", m_tenantIdentifier);
  }

  if (m_clientIdentifierHasBeenSet) {
    payload.WithString("ClientIdentifier", m_clientIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
