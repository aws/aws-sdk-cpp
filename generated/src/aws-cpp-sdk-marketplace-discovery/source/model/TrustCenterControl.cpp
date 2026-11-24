/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterControl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterControl::TrustCenterControl(JsonView jsonValue) { *this = jsonValue; }

TrustCenterControl& TrustCenterControl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domains")) {
    Aws::Utils::Array<JsonView> domainsJsonList = jsonValue.GetArray("domains");
    for (unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex) {
      m_domains.push_back(TrustCenterControlDomainMapper::GetTrustCenterControlDomainForName(domainsJsonList[domainsIndex].AsString()));
    }
    m_domainsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterControl::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_domainsHasBeenSet) {
    Aws::Utils::Array<JsonValue> domainsJsonList(m_domains.size());
    for (unsigned domainsIndex = 0; domainsIndex < domainsJsonList.GetLength(); ++domainsIndex) {
      domainsJsonList[domainsIndex].AsString(TrustCenterControlDomainMapper::GetNameForTrustCenterControlDomain(m_domains[domainsIndex]));
    }
    payload.WithArray("domains", std::move(domainsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
