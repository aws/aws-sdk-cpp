/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyConfigDefaultRulePhaseActionsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyConfigDefaultRulePhaseActionsRequest::ProxyConfigDefaultRulePhaseActionsRequest(JsonView jsonValue) { *this = jsonValue; }

ProxyConfigDefaultRulePhaseActionsRequest& ProxyConfigDefaultRulePhaseActionsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PreDNS")) {
    m_preDNS = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(jsonValue.GetString("PreDNS"));
    m_preDNSHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PreREQUEST")) {
    m_preREQUEST = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(jsonValue.GetString("PreREQUEST"));
    m_preREQUESTHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostRESPONSE")) {
    m_postRESPONSE = ProxyRulePhaseActionMapper::GetProxyRulePhaseActionForName(jsonValue.GetString("PostRESPONSE"));
    m_postRESPONSEHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfigDefaultRulePhaseActionsRequest::Jsonize() const {
  JsonValue payload;

  if (m_preDNSHasBeenSet) {
    payload.WithString("PreDNS", ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_preDNS));
  }

  if (m_preREQUESTHasBeenSet) {
    payload.WithString("PreREQUEST", ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_preREQUEST));
  }

  if (m_postRESPONSEHasBeenSet) {
    payload.WithString("PostRESPONSE", ProxyRulePhaseActionMapper::GetNameForProxyRulePhaseAction(m_postRESPONSE));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
