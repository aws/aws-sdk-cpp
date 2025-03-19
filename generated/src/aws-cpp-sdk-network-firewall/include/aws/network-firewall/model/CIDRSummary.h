/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPSetMetadata.h>
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
   * <p>Summarizes the CIDR blocks used by the IP set references in a firewall.
   * Network Firewall calculates the number of CIDRs by taking an aggregated count of
   * all CIDRs used by the IP sets you are referencing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CIDRSummary">AWS
   * API Reference</a></p>
   */
  class CIDRSummary
  {
  public:
    AWS_NETWORKFIREWALL_API CIDRSummary() = default;
    AWS_NETWORKFIREWALL_API CIDRSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API CIDRSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of CIDR blocks available for use by the IP set references in a
     * firewall.</p>
     */
    inline int GetAvailableCIDRCount() const { return m_availableCIDRCount; }
    inline bool AvailableCIDRCountHasBeenSet() const { return m_availableCIDRCountHasBeenSet; }
    inline void SetAvailableCIDRCount(int value) { m_availableCIDRCountHasBeenSet = true; m_availableCIDRCount = value; }
    inline CIDRSummary& WithAvailableCIDRCount(int value) { SetAvailableCIDRCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CIDR blocks used by the IP set references in a firewall.</p>
     */
    inline int GetUtilizedCIDRCount() const { return m_utilizedCIDRCount; }
    inline bool UtilizedCIDRCountHasBeenSet() const { return m_utilizedCIDRCountHasBeenSet; }
    inline void SetUtilizedCIDRCount(int value) { m_utilizedCIDRCountHasBeenSet = true; m_utilizedCIDRCount = value; }
    inline CIDRSummary& WithUtilizedCIDRCount(int value) { SetUtilizedCIDRCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline const Aws::Map<Aws::String, IPSetMetadata>& GetIPSetReferences() const { return m_iPSetReferences; }
    inline bool IPSetReferencesHasBeenSet() const { return m_iPSetReferencesHasBeenSet; }
    template<typename IPSetReferencesT = Aws::Map<Aws::String, IPSetMetadata>>
    void SetIPSetReferences(IPSetReferencesT&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences = std::forward<IPSetReferencesT>(value); }
    template<typename IPSetReferencesT = Aws::Map<Aws::String, IPSetMetadata>>
    CIDRSummary& WithIPSetReferences(IPSetReferencesT&& value) { SetIPSetReferences(std::forward<IPSetReferencesT>(value)); return *this;}
    template<typename IPSetReferencesKeyT = Aws::String, typename IPSetReferencesValueT = IPSetMetadata>
    CIDRSummary& AddIPSetReferences(IPSetReferencesKeyT&& key, IPSetReferencesValueT&& value) {
      m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(std::forward<IPSetReferencesKeyT>(key), std::forward<IPSetReferencesValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_availableCIDRCount{0};
    bool m_availableCIDRCountHasBeenSet = false;

    int m_utilizedCIDRCount{0};
    bool m_utilizedCIDRCountHasBeenSet = false;

    Aws::Map<Aws::String, IPSetMetadata> m_iPSetReferences;
    bool m_iPSetReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
