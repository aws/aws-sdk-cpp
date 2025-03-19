/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/SubnetMapping.h>
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
  class DisassociateSubnetsResult
  {
  public:
    AWS_NETWORKFIREWALL_API DisassociateSubnetsResult() = default;
    AWS_NETWORKFIREWALL_API DisassociateSubnetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DisassociateSubnetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    DisassociateSubnetsResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the firewall. You can't change the name of a firewall
     * after you create it.</p>
     */
    inline const Aws::String& GetFirewallName() const { return m_firewallName; }
    template<typename FirewallNameT = Aws::String>
    void SetFirewallName(FirewallNameT&& value) { m_firewallNameHasBeenSet = true; m_firewallName = std::forward<FirewallNameT>(value); }
    template<typename FirewallNameT = Aws::String>
    DisassociateSubnetsResult& WithFirewallName(FirewallNameT&& value) { SetFirewallName(std::forward<FirewallNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets that are associated with the firewall. </p>
     */
    inline const Aws::Vector<SubnetMapping>& GetSubnetMappings() const { return m_subnetMappings; }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    void SetSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings = std::forward<SubnetMappingsT>(value); }
    template<typename SubnetMappingsT = Aws::Vector<SubnetMapping>>
    DisassociateSubnetsResult& WithSubnetMappings(SubnetMappingsT&& value) { SetSubnetMappings(std::forward<SubnetMappingsT>(value)); return *this;}
    template<typename SubnetMappingsT = SubnetMapping>
    DisassociateSubnetsResult& AddSubnetMappings(SubnetMappingsT&& value) { m_subnetMappingsHasBeenSet = true; m_subnetMappings.emplace_back(std::forward<SubnetMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional token that you can use for optimistic locking. Network Firewall
     * returns a token to your requests that access the firewall. The token marks the
     * state of the firewall resource at the time of the request. </p> <p>To make an
     * unconditional change to the firewall, omit the token in your update request.
     * Without the token, Network Firewall performs your updates regardless of whether
     * the firewall has changed since you last retrieved it.</p> <p>To make a
     * conditional change to the firewall, provide the token in your update request.
     * Network Firewall uses the token to ensure that the firewall hasn't changed since
     * you last retrieved it. If it has changed, the operation fails with an
     * <code>InvalidTokenException</code>. If this happens, retrieve the firewall again
     * to get a current copy of it with a new token. Reapply your changes as needed,
     * then try the operation again using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    DisassociateSubnetsResult& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateSubnetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallName;
    bool m_firewallNameHasBeenSet = false;

    Aws::Vector<SubnetMapping> m_subnetMappings;
    bool m_subnetMappingsHasBeenSet = false;

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
