/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallPolicyResponse.h>
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
  class UpdateFirewallPolicyResult
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult() = default;
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    UpdateFirewallPolicyResult& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The high-level properties of a firewall policy. This, along with the
     * <a>FirewallPolicy</a>, define the policy. You can retrieve all objects for a
     * firewall policy by calling <a>DescribeFirewallPolicy</a>. </p>
     */
    inline const FirewallPolicyResponse& GetFirewallPolicyResponse() const { return m_firewallPolicyResponse; }
    template<typename FirewallPolicyResponseT = FirewallPolicyResponse>
    void SetFirewallPolicyResponse(FirewallPolicyResponseT&& value) { m_firewallPolicyResponseHasBeenSet = true; m_firewallPolicyResponse = std::forward<FirewallPolicyResponseT>(value); }
    template<typename FirewallPolicyResponseT = FirewallPolicyResponse>
    UpdateFirewallPolicyResult& WithFirewallPolicyResponse(FirewallPolicyResponseT&& value) { SetFirewallPolicyResponse(std::forward<FirewallPolicyResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFirewallPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    FirewallPolicyResponse m_firewallPolicyResponse;
    bool m_firewallPolicyResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
