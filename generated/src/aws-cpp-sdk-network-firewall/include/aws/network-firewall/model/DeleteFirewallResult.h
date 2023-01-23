/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
  class DeleteFirewallResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteFirewallResult();
    AWS_NETWORKFIREWALL_API DeleteFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Firewall& GetFirewall() const{ return m_firewall; }

    
    inline void SetFirewall(const Firewall& value) { m_firewall = value; }

    
    inline void SetFirewall(Firewall&& value) { m_firewall = std::move(value); }

    
    inline DeleteFirewallResult& WithFirewall(const Firewall& value) { SetFirewall(value); return *this;}

    
    inline DeleteFirewallResult& WithFirewall(Firewall&& value) { SetFirewall(std::move(value)); return *this;}


    
    inline const FirewallStatus& GetFirewallStatus() const{ return m_firewallStatus; }

    
    inline void SetFirewallStatus(const FirewallStatus& value) { m_firewallStatus = value; }

    
    inline void SetFirewallStatus(FirewallStatus&& value) { m_firewallStatus = std::move(value); }

    
    inline DeleteFirewallResult& WithFirewallStatus(const FirewallStatus& value) { SetFirewallStatus(value); return *this;}

    
    inline DeleteFirewallResult& WithFirewallStatus(FirewallStatus&& value) { SetFirewallStatus(std::move(value)); return *this;}

  private:

    Firewall m_firewall;

    FirewallStatus m_firewallStatus;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
