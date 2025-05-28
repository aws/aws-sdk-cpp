/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/Firewall.h>
#include <aws/network-firewall/model/FirewallStatus.h>
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
  class CreateFirewallResult
  {
  public:
    AWS_NETWORKFIREWALL_API CreateFirewallResult() = default;
    AWS_NETWORKFIREWALL_API CreateFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API CreateFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    CreateFirewallResult& WithFirewall(FirewallT&& value) { SetFirewall(std::forward<FirewallT>(value)); return *this;}
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
    CreateFirewallResult& WithFirewallStatus(FirewallStatusT&& value) { SetFirewallStatus(std::forward<FirewallStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFirewallResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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
