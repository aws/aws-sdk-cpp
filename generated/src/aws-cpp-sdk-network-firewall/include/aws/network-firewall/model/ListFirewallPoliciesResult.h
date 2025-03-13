/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/FirewallPolicyMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class ListFirewallPoliciesResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult() = default;
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListFirewallPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFirewallPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the firewall policies. Depending on your setting for max
     * results and the number of firewall policies that you have, this might not be the
     * full list. </p>
     */
    inline const Aws::Vector<FirewallPolicyMetadata>& GetFirewallPolicies() const { return m_firewallPolicies; }
    template<typename FirewallPoliciesT = Aws::Vector<FirewallPolicyMetadata>>
    void SetFirewallPolicies(FirewallPoliciesT&& value) { m_firewallPoliciesHasBeenSet = true; m_firewallPolicies = std::forward<FirewallPoliciesT>(value); }
    template<typename FirewallPoliciesT = Aws::Vector<FirewallPolicyMetadata>>
    ListFirewallPoliciesResult& WithFirewallPolicies(FirewallPoliciesT&& value) { SetFirewallPolicies(std::forward<FirewallPoliciesT>(value)); return *this;}
    template<typename FirewallPoliciesT = FirewallPolicyMetadata>
    ListFirewallPoliciesResult& AddFirewallPolicies(FirewallPoliciesT&& value) { m_firewallPoliciesHasBeenSet = true; m_firewallPolicies.emplace_back(std::forward<FirewallPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFirewallPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<FirewallPolicyMetadata> m_firewallPolicies;
    bool m_firewallPoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
