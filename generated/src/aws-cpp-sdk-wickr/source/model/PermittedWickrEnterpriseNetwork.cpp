/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/PermittedWickrEnterpriseNetwork.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

PermittedWickrEnterpriseNetwork::PermittedWickrEnterpriseNetwork(JsonView jsonValue) { *this = jsonValue; }

PermittedWickrEnterpriseNetwork& PermittedWickrEnterpriseNetwork::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkId")) {
    m_networkId = jsonValue.GetString("networkId");
    m_networkIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PermittedWickrEnterpriseNetwork::Jsonize() const {
  JsonValue payload;

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_networkIdHasBeenSet) {
    payload.WithString("networkId", m_networkId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
