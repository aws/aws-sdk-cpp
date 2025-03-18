/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/FirewallPolicyResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteFirewallPolicyResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult() = default;
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteFirewallPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The object containing the definition of the <a>FirewallPolicyResponse</a>
     * that you asked to delete. </p>
     */
    inline const FirewallPolicyResponse& GetFirewallPolicyResponse() const { return m_firewallPolicyResponse; }
    template<typename FirewallPolicyResponseT = FirewallPolicyResponse>
    void SetFirewallPolicyResponse(FirewallPolicyResponseT&& value) { m_firewallPolicyResponseHasBeenSet = true; m_firewallPolicyResponse = std::forward<FirewallPolicyResponseT>(value); }
    template<typename FirewallPolicyResponseT = FirewallPolicyResponse>
    DeleteFirewallPolicyResult& WithFirewallPolicyResponse(FirewallPolicyResponseT&& value) { SetFirewallPolicyResponse(std::forward<FirewallPolicyResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFirewallPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FirewallPolicyResponse m_firewallPolicyResponse;
    bool m_firewallPolicyResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
