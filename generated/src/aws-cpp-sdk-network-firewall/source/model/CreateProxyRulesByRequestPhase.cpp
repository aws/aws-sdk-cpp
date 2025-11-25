/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/CreateProxyRulesByRequestPhase.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

CreateProxyRulesByRequestPhase::CreateProxyRulesByRequestPhase(JsonView jsonValue) { *this = jsonValue; }

CreateProxyRulesByRequestPhase& CreateProxyRulesByRequestPhase::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PreDNS")) {
    Aws::Utils::Array<JsonView> preDNSJsonList = jsonValue.GetArray("PreDNS");
    for (unsigned preDNSIndex = 0; preDNSIndex < preDNSJsonList.GetLength(); ++preDNSIndex) {
      m_preDNS.push_back(preDNSJsonList[preDNSIndex].AsObject());
    }
    m_preDNSHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PreREQUEST")) {
    Aws::Utils::Array<JsonView> preREQUESTJsonList = jsonValue.GetArray("PreREQUEST");
    for (unsigned preREQUESTIndex = 0; preREQUESTIndex < preREQUESTJsonList.GetLength(); ++preREQUESTIndex) {
      m_preREQUEST.push_back(preREQUESTJsonList[preREQUESTIndex].AsObject());
    }
    m_preREQUESTHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostRESPONSE")) {
    Aws::Utils::Array<JsonView> postRESPONSEJsonList = jsonValue.GetArray("PostRESPONSE");
    for (unsigned postRESPONSEIndex = 0; postRESPONSEIndex < postRESPONSEJsonList.GetLength(); ++postRESPONSEIndex) {
      m_postRESPONSE.push_back(postRESPONSEJsonList[postRESPONSEIndex].AsObject());
    }
    m_postRESPONSEHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateProxyRulesByRequestPhase::Jsonize() const {
  JsonValue payload;

  if (m_preDNSHasBeenSet) {
    Aws::Utils::Array<JsonValue> preDNSJsonList(m_preDNS.size());
    for (unsigned preDNSIndex = 0; preDNSIndex < preDNSJsonList.GetLength(); ++preDNSIndex) {
      preDNSJsonList[preDNSIndex].AsObject(m_preDNS[preDNSIndex].Jsonize());
    }
    payload.WithArray("PreDNS", std::move(preDNSJsonList));
  }

  if (m_preREQUESTHasBeenSet) {
    Aws::Utils::Array<JsonValue> preREQUESTJsonList(m_preREQUEST.size());
    for (unsigned preREQUESTIndex = 0; preREQUESTIndex < preREQUESTJsonList.GetLength(); ++preREQUESTIndex) {
      preREQUESTJsonList[preREQUESTIndex].AsObject(m_preREQUEST[preREQUESTIndex].Jsonize());
    }
    payload.WithArray("PreREQUEST", std::move(preREQUESTJsonList));
  }

  if (m_postRESPONSEHasBeenSet) {
    Aws::Utils::Array<JsonValue> postRESPONSEJsonList(m_postRESPONSE.size());
    for (unsigned postRESPONSEIndex = 0; postRESPONSEIndex < postRESPONSEJsonList.GetLength(); ++postRESPONSEIndex) {
      postRESPONSEJsonList[postRESPONSEIndex].AsObject(m_postRESPONSE[postRESPONSEIndex].Jsonize());
    }
    payload.WithArray("PostRESPONSE", std::move(postRESPONSEJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
