/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyV2Response.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {
class CreateFirewallPolicyV2Result {
 public:
  AWS_NETWORKFIREWALL_API CreateFirewallPolicyV2Result() = default;
  AWS_NETWORKFIREWALL_API CreateFirewallPolicyV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_NETWORKFIREWALL_API CreateFirewallPolicyV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the firewall policy. The token marks the state of the
   * policy resource at the time of the request. </p> <p>To make changes to the
   * policy, you provide the token in your request. Network Firewall uses the token
   * to ensure that the policy hasn't changed since you last retrieved it. If it has
   * changed, the operation fails with an <code>InvalidTokenException</code>. If this
   * happens, retrieve the firewall policy again to get a current copy of it with
   * current token. Reapply your changes as needed, then try the operation again
   * using the new token. </p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  CreateFirewallPolicyV2Result& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The high-level properties of the Next Generation policy. This, along with the
   * <a>FirewallPolicyV2</a>, define the policy. You can retrieve all objects for a
   * Next Generation policy by calling <a>DescribeFirewallPolicyV2</a>.</p>
   */
  inline const FirewallPolicyV2Response& GetFirewallPolicyV2Response() const { return m_firewallPolicyV2Response; }
  template <typename FirewallPolicyV2ResponseT = FirewallPolicyV2Response>
  void SetFirewallPolicyV2Response(FirewallPolicyV2ResponseT&& value) {
    m_firewallPolicyV2ResponseHasBeenSet = true;
    m_firewallPolicyV2Response = std::forward<FirewallPolicyV2ResponseT>(value);
  }
  template <typename FirewallPolicyV2ResponseT = FirewallPolicyV2Response>
  CreateFirewallPolicyV2Result& WithFirewallPolicyV2Response(FirewallPolicyV2ResponseT&& value) {
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
  CreateFirewallPolicyV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_updateToken;

  FirewallPolicyV2Response m_firewallPolicyV2Response;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_updateTokenHasBeenSet = false;
  bool m_firewallPolicyV2ResponseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
