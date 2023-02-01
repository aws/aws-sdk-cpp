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
  class CreateFirewallResult
  {
  public:
    AWS_NETWORKFIREWALL_API CreateFirewallResult();
    AWS_NETWORKFIREWALL_API CreateFirewallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API CreateFirewallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline const Firewall& GetFirewall() const{ return m_firewall; }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline void SetFirewall(const Firewall& value) { m_firewall = value; }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline void SetFirewall(Firewall&& value) { m_firewall = std::move(value); }

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline CreateFirewallResult& WithFirewall(const Firewall& value) { SetFirewall(value); return *this;}

    /**
     * <p>The configuration settings for the firewall. These settings include the
     * firewall policy and the subnets in your VPC to use for the firewall endpoints.
     * </p>
     */
    inline CreateFirewallResult& WithFirewall(Firewall&& value) { SetFirewall(std::move(value)); return *this;}


    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline const FirewallStatus& GetFirewallStatus() const{ return m_firewallStatus; }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline void SetFirewallStatus(const FirewallStatus& value) { m_firewallStatus = value; }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline void SetFirewallStatus(FirewallStatus&& value) { m_firewallStatus = std::move(value); }

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline CreateFirewallResult& WithFirewallStatus(const FirewallStatus& value) { SetFirewallStatus(value); return *this;}

    /**
     * <p>Detailed information about the current status of a <a>Firewall</a>. You can
     * retrieve this for a firewall by calling <a>DescribeFirewall</a> and providing
     * the firewall name and ARN.</p>
     */
    inline CreateFirewallResult& WithFirewallStatus(FirewallStatus&& value) { SetFirewallStatus(std::move(value)); return *this;}

  private:

    Firewall m_firewall;

    FirewallStatus m_firewallStatus;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
