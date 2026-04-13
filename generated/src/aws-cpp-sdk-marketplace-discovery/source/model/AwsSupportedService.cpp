/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/AwsSupportedService.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

AwsSupportedService::AwsSupportedService(JsonView jsonValue) { *this = jsonValue; }

AwsSupportedService& AwsSupportedService::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("supportedServiceType")) {
    m_supportedServiceType = jsonValue.GetString("supportedServiceType");
    m_supportedServiceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsSupportedService::Jsonize() const {
  JsonValue payload;

  if (m_supportedServiceTypeHasBeenSet) {
    payload.WithString("supportedServiceType", m_supportedServiceType);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
