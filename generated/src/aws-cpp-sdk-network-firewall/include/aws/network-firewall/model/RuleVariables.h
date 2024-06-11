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
   * where this is defined. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RuleVariables">AWS
   * API Reference</a></p>
   */
  class RuleVariables
  {
  public:
    AWS_NETWORKFIREWALL_API RuleVariables();
    AWS_NETWORKFIREWALL_API RuleVariables(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API RuleVariables& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of IP addresses and address ranges, in CIDR notation. </p>
     */
    inline const Aws::Map<Aws::String, IPSet>& GetIPSets() const{ return m_iPSets; }
    inline bool IPSetsHasBeenSet() const { return m_iPSetsHasBeenSet; }
    inline void SetIPSets(const Aws::Map<Aws::String, IPSet>& value) { m_iPSetsHasBeenSet = true; m_iPSets = value; }
    inline void SetIPSets(Aws::Map<Aws::String, IPSet>&& value) { m_iPSetsHasBeenSet = true; m_iPSets = std::move(value); }
    inline RuleVariables& WithIPSets(const Aws::Map<Aws::String, IPSet>& value) { SetIPSets(value); return *this;}
    inline RuleVariables& WithIPSets(Aws::Map<Aws::String, IPSet>&& value) { SetIPSets(std::move(value)); return *this;}
    inline RuleVariables& AddIPSets(const Aws::String& key, const IPSet& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(key, value); return *this; }
    inline RuleVariables& AddIPSets(Aws::String&& key, const IPSet& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(std::move(key), value); return *this; }
    inline RuleVariables& AddIPSets(const Aws::String& key, IPSet&& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(key, std::move(value)); return *this; }
    inline RuleVariables& AddIPSets(Aws::String&& key, IPSet&& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleVariables& AddIPSets(const char* key, IPSet&& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(key, std::move(value)); return *this; }
    inline RuleVariables& AddIPSets(const char* key, const IPSet& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of port ranges. </p>
     */
    inline const Aws::Map<Aws::String, PortSet>& GetPortSets() const{ return m_portSets; }
    inline bool PortSetsHasBeenSet() const { return m_portSetsHasBeenSet; }
    inline void SetPortSets(const Aws::Map<Aws::String, PortSet>& value) { m_portSetsHasBeenSet = true; m_portSets = value; }
    inline void SetPortSets(Aws::Map<Aws::String, PortSet>&& value) { m_portSetsHasBeenSet = true; m_portSets = std::move(value); }
    inline RuleVariables& WithPortSets(const Aws::Map<Aws::String, PortSet>& value) { SetPortSets(value); return *this;}
    inline RuleVariables& WithPortSets(Aws::Map<Aws::String, PortSet>&& value) { SetPortSets(std::move(value)); return *this;}
    inline RuleVariables& AddPortSets(const Aws::String& key, const PortSet& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(key, value); return *this; }
    inline RuleVariables& AddPortSets(Aws::String&& key, const PortSet& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(std::move(key), value); return *this; }
    inline RuleVariables& AddPortSets(const Aws::String& key, PortSet&& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(key, std::move(value)); return *this; }
    inline RuleVariables& AddPortSets(Aws::String&& key, PortSet&& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(std::move(key), std::move(value)); return *this; }
    inline RuleVariables& AddPortSets(const char* key, PortSet&& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(key, std::move(value)); return *this; }
    inline RuleVariables& AddPortSets(const char* key, const PortSet& value) { m_portSetsHasBeenSet = true; m_portSets.emplace(key, value); return *this; }
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
