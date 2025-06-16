/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPSet.h>
#include <aws/network-firewall/model/PortSet.h>
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
   * <p>Settings that are available for use in the rules in the <a>RuleGroup</a>
   * where this is defined. See <a>CreateRuleGroup</a> or <a>UpdateRuleGroup</a> for
   * usage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleVariables">AWS
   * API Reference</a></p>
   */
  class RuleVariables
  {
  public:
    AWS_NETWORKFIREWALL_API RuleVariables() = default;
    AWS_NETWORKFIREWALL_API RuleVariables(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation. </p>
     */
    inline const Aws::Map<Aws::String, IPSet>& GetIPSets() const { return m_iPSets; }
    inline bool IPSetsHasBeenSet() const { return m_iPSetsHasBeenSet; }
    template<typename IPSetsT = Aws::Map<Aws::String, IPSet>>
    void SetIPSets(IPSetsT&& value) { m_iPSetsHasBeenSet = true; m_iPSets = std::forward<IPSetsT>(value); }
    template<typename IPSetsT = Aws::Map<Aws::String, IPSet>>
    RuleVariables& WithIPSets(IPSetsT&& value) { SetIPSets(std::forward<IPSetsT>(value)); return *this;}
    template<typename IPSetsKeyT = Aws::String, typename IPSetsValueT = IPSet>
    RuleVariables& AddIPSets(IPSetsKeyT&& key, IPSetsValueT&& value) {
      m_iPSetsHasBeenSet = true; m_iPSets.emplace(std::forward<IPSetsKeyT>(key), std::forward<IPSetsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of port ranges. </p>
     */
    inline const Aws::Map<Aws::String, PortSet>& GetPortSets() const { return m_portSets; }
    inline bool PortSetsHasBeenSet() const { return m_portSetsHasBeenSet; }
    template<typename PortSetsT = Aws::Map<Aws::String, PortSet>>
    void SetPortSets(PortSetsT&& value) { m_portSetsHasBeenSet = true; m_portSets = std::forward<PortSetsT>(value); }
    template<typename PortSetsT = Aws::Map<Aws::String, PortSet>>
    RuleVariables& WithPortSets(PortSetsT&& value) { SetPortSets(std::forward<PortSetsT>(value)); return *this;}
    template<typename PortSetsKeyT = Aws::String, typename PortSetsValueT = PortSet>
    RuleVariables& AddPortSets(PortSetsKeyT&& key, PortSetsValueT&& value) {
      m_portSetsHasBeenSet = true; m_portSets.emplace(std::forward<PortSetsKeyT>(key), std::forward<PortSetsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, IPSet> m_iPSets;
    bool m_iPSetsHasBeenSet = false;

    Aws::Map<Aws::String, PortSet> m_portSets;
    bool m_portSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
