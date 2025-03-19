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
    AWS_NETWORKFIREWALL_API PolicyVariables() = default;
    AWS_NETWORKFIREWALL_API PolicyVariables(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API PolicyVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 or IPv6 addresses in CIDR notation to use for the Suricata
     * <code>HOME_NET</code> variable. If your firewall uses an inspection VPC, you
     * might want to override the <code>HOME_NET</code> variable with the CIDRs of your
     * home networks. If you don't override <code>HOME_NET</code> with your own CIDRs,
     * Network Firewall by default uses the CIDR of your inspection VPC.</p>
     */
    inline const Aws::Map<Aws::String, IPSet>& GetRuleVariables() const { return m_ruleVariables; }
    inline bool RuleVariablesHasBeenSet() const { return m_ruleVariablesHasBeenSet; }
    template<typename RuleVariablesT = Aws::Map<Aws::String, IPSet>>
    void SetRuleVariables(RuleVariablesT&& value) { m_ruleVariablesHasBeenSet = true; m_ruleVariables = std::forward<RuleVariablesT>(value); }
    template<typename RuleVariablesT = Aws::Map<Aws::String, IPSet>>
    PolicyVariables& WithRuleVariables(RuleVariablesT&& value) { SetRuleVariables(std::forward<RuleVariablesT>(value)); return *this;}
    template<typename RuleVariablesKeyT = Aws::String, typename RuleVariablesValueT = IPSet>
    PolicyVariables& AddRuleVariables(RuleVariablesKeyT&& key, RuleVariablesValueT&& value) {
      m_ruleVariablesHasBeenSet = true; m_ruleVariables.emplace(std::forward<RuleVariablesKeyT>(key), std::forward<RuleVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, IPSet> m_ruleVariables;
    bool m_ruleVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
