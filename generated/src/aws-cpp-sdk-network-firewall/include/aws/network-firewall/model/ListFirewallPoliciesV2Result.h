/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyV2Metadata.h>

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
class ListFirewallPoliciesV2Result {
 public:
  AWS_NETWORKFIREWALL_API ListFirewallPoliciesV2Result() = default;
  AWS_NETWORKFIREWALL_API ListFirewallPoliciesV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_NETWORKFIREWALL_API ListFirewallPoliciesV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
   * the number of objects that are still available for retrieval exceeds the maximum
   * you requested, Network Firewall returns a <code>NextToken</code> value in the
   * response. To retrieve the next batch of objects, use the token returned from the
   * prior request in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallPoliciesV2Result& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata for the Next Generation policies. Depending on your setting for
   * max results and the number of firewall policies that you have, this might not be
   * the full list.</p>
   */
  inline const Aws::Vector<FirewallPolicyV2Metadata>& GetFirewallPoliciesV2() const { return m_firewallPoliciesV2; }
  template <typename FirewallPoliciesV2T = Aws::Vector<FirewallPolicyV2Metadata>>
  void SetFirewallPoliciesV2(FirewallPoliciesV2T&& value) {
    m_firewallPoliciesV2HasBeenSet = true;
    m_firewallPoliciesV2 = std::forward<FirewallPoliciesV2T>(value);
  }
  template <typename FirewallPoliciesV2T = Aws::Vector<FirewallPolicyV2Metadata>>
  ListFirewallPoliciesV2Result& WithFirewallPoliciesV2(FirewallPoliciesV2T&& value) {
    SetFirewallPoliciesV2(std::forward<FirewallPoliciesV2T>(value));
    return *this;
  }
  template <typename FirewallPoliciesV2T = FirewallPolicyV2Metadata>
  ListFirewallPoliciesV2Result& AddFirewallPoliciesV2(FirewallPoliciesV2T&& value) {
    m_firewallPoliciesV2HasBeenSet = true;
    m_firewallPoliciesV2.emplace_back(std::forward<FirewallPoliciesV2T>(value));
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
  ListFirewallPoliciesV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<FirewallPolicyV2Metadata> m_firewallPoliciesV2;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_firewallPoliciesV2HasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
