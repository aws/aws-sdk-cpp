/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPSet.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Contains variables that you can use to override default Suricata settings in
   * your firewall policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PolicyVariables">AWS
   * API Reference</a></p>
   */
  class PolicyVariables
  {
  public:
    AWS_NETWORKFIREWALL_API PolicyVariables();
    AWS_NETWORKFIREWALL_API PolicyVariables(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PolicyVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline const Aws::Map<Aws::String, IPSet>& GetRuleVariables() const{ return m_ruleVariables; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline void SetRuleVariables(const Aws::Map<Aws::String, IPSet>& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = value; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline void SetRuleVariables(Aws::Map<Aws::String, IPSet>&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = std::move(value); }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& WithRuleVariables(const Aws::Map<Aws::String, IPSet>& value) { SetRuleVariables(value); return *this;}

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& WithRuleVariables(Aws::Map<Aws::String, IPSet>&& value) { SetRuleVariables(std::move(value)); return *this;}

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(const Aws::String& key, const IPSet& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(key, value); return *this; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(Aws::String&& key, const IPSet& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(const Aws::String& key, IPSet&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(Aws::String&& key, IPSet&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(const char* key, IPSet&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline PolicyVariables& AddRuleVariables(const char* key, const IPSet& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, IPSet> m_ruleVariables;
    bool m_ruleVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
