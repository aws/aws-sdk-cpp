/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyV2Response.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class DeleteFirewallPolicyV2Result {
 public:
  AWS_NETWORKFIREWALL_API DeleteFirewallPolicyV2Result() = default;
  AWS_NETWORKFIREWALL_API DeleteFirewallPolicyV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFIREWALL_API DeleteFirewallPolicyV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The high-level properties of the Next Generation policy that you asked to
   * delete.</p>
   */
  inline const FirewallPolicyV2Response& GetFirewallPolicyV2Response() const { return m_firewallPolicyV2Response; }
  template <typename FirewallPolicyV2ResponseT = FirewallPolicyV2Response>
  void SetFirewallPolicyV2Response(FirewallPolicyV2ResponseT&& value) {
    m_firewallPolicyV2ResponseHasBeenSet = true;
    m_firewallPolicyV2Response = std::forward<FirewallPolicyV2ResponseT>(value);
  }
  template <typename FirewallPolicyV2ResponseT = FirewallPolicyV2Response>
  DeleteFirewallPolicyV2Result& WithFirewallPolicyV2Response(FirewallPolicyV2ResponseT&& value) {
    SetFirewallPolicyV2Response(std::forward<FirewallPolicyV2ResponseT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DeleteFirewallPolicyV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  FirewallPolicyV2Response m_firewallPolicyV2Response;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_firewallPolicyV2ResponseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
