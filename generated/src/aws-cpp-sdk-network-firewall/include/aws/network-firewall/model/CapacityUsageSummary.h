/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/CIDRSummary.h>
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
   * <p>The capacity usage summary of the resources used by the <a>ReferenceSets</a>
   * in a firewall.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CapacityUsageSummary">AWS
   * API Reference</a></p>
   */
  class CapacityUsageSummary
  {
  public:
    AWS_NETWORKFIREWALL_API CapacityUsageSummary() = default;
    AWS_NETWORKFIREWALL_API CapacityUsageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API CapacityUsageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the capacity usage of the CIDR blocks used by the IP set references
     * in a firewall.</p>
     */
    inline const CIDRSummary& GetCIDRs() const { return m_cIDRs; }
    inline bool CIDRsHasBeenSet() const { return m_cIDRsHasBeenSet; }
    template<typename CIDRsT = CIDRSummary>
    void SetCIDRs(CIDRsT&& value) { m_cIDRsHasBeenSet = true; m_cIDRs = std::forward<CIDRsT>(value); }
    template<typename CIDRsT = CIDRSummary>
    CapacityUsageSummary& WithCIDRs(CIDRsT&& value) { SetCIDRs(std::forward<CIDRsT>(value)); return *this;}
    ///@}
  private:

    CIDRSummary m_cIDRs;
    bool m_cIDRsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
