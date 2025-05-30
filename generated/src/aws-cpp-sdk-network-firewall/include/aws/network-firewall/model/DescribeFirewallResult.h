/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/Firewall.h>
#include <aws/network-firewall/model/FirewallStatus.h>
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
  class DescribeFirewallResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFirewallResult() = default;
    AWS_NETWORKFIREWALL_API DescribeFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DescribeFirewallResult& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline const Firewall& GetFirewall() const { return m_firewall; }
    template<typename FirewallT = Firewall>
    void SetFirewall(FirewallT&& value) { m_firewallHasBeenSet = true; m_firewall = std::forward<FirewallT>(value); }
    template<typename FirewallT = Firewall>
    DescribeFirewallResult& WithFirewall(FirewallT&& value) { SetFirewall(std::forward<FirewallT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p> <p>The firewall status indicates a combined
     * status. It indicates whether all subnets are up-to-date with the latest firewall
     * configurations, which is based on the sync states config values, and also
     * whether all subnets have their endpoints fully enabled, based on their sync
     * states attachment values. </p>
     */
    inline const FirewallStatus& GetFirewallStatus() const { return m_firewallStatus; }
    template<typename FirewallStatusT = FirewallStatus>
    void SetFirewallStatus(FirewallStatusT&& value) { m_firewallStatusHasBeenSet = true; m_firewallStatus = std::forward<FirewallStatusT>(value); }
    template<typename FirewallStatusT = FirewallStatus>
    DescribeFirewallResult& WithFirewallStatus(FirewallStatusT&& value) { SetFirewallStatus(std::forward<FirewallStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFirewallResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Firewall m_firewall;
    bool m_firewallHasBeenSet = false;

    FirewallStatus m_firewallStatus;
    bool m_firewallStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
