/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/model/AutoAllowlistConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Resolver {
namespace Model {

AutoAllowlistConfig::AutoAllowlistConfig(JsonView jsonValue) { *this = jsonValue; }

AutoAllowlistConfig& AutoAllowlistConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InitialDataTimeframeHours")) {
    m_initialDataTimeframeHours = jsonValue.GetInteger("InitialDataTimeframeHours");
    m_initialDataTimeframeHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ImportFromFirewallDomainListId")) {
    m_importFromFirewallDomainListId = jsonValue.GetString("ImportFromFirewallDomainListId");
    m_importFromFirewallDomainListIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoAllowlistFirewallDomainListId")) {
    m_autoAllowlistFirewallDomainListId = jsonValue.GetString("AutoAllowlistFirewallDomainListId");
    m_autoAllowlistFirewallDomainListIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoAllowlistConfig::Jsonize() const {
  JsonValue payload;

  if (m_initialDataTimeframeHoursHasBeenSet) {
    payload.WithInteger("InitialDataTimeframeHours", m_initialDataTimeframeHours);
  }

  if (m_importFromFirewallDomainListIdHasBeenSet) {
    payload.WithString("ImportFromFirewallDomainListId", m_importFromFirewallDomainListId);
  }

  if (m_autoAllowlistFirewallDomainListIdHasBeenSet) {
    payload.WithString("AutoAllowlistFirewallDomainListId", m_autoAllowlistFirewallDomainListId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
