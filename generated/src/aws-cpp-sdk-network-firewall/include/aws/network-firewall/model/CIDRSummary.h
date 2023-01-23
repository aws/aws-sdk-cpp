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
    AWS_NETWORKFIREWALL_API CIDRSummary();
    AWS_NETWORKFIREWALL_API CIDRSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API CIDRSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of CIDR blocks available for use by the IP set references in a
     * firewall.</p>
     */
    inline int GetAvailableCIDRCount() const{ return m_availableCIDRCount; }

    /**
     * <p>The number of CIDR blocks available for use by the IP set references in a
     * firewall.</p>
     */
    inline bool AvailableCIDRCountHasBeenSet() const { return m_availableCIDRCountHasBeenSet; }

    /**
     * <p>The number of CIDR blocks available for use by the IP set references in a
     * firewall.</p>
     */
    inline void SetAvailableCIDRCount(int value) { m_availableCIDRCountHasBeenSet = true; m_availableCIDRCount = value; }

    /**
     * <p>The number of CIDR blocks available for use by the IP set references in a
     * firewall.</p>
     */
    inline CIDRSummary& WithAvailableCIDRCount(int value) { SetAvailableCIDRCount(value); return *this;}


    /**
     * <p>The number of CIDR blocks used by the IP set references in a firewall.</p>
     */
    inline int GetUtilizedCIDRCount() const{ return m_utilizedCIDRCount; }

    /**
     * <p>The number of CIDR blocks used by the IP set references in a firewall.</p>
     */
    inline bool UtilizedCIDRCountHasBeenSet() const { return m_utilizedCIDRCountHasBeenSet; }

    /**
     * <p>The number of CIDR blocks used by the IP set references in a firewall.</p>
     */
    inline void SetUtilizedCIDRCount(int value) { m_utilizedCIDRCountHasBeenSet = true; m_utilizedCIDRCount = value; }

    /**
     * <p>The number of CIDR blocks used by the IP set references in a firewall.</p>
     */
    inline CIDRSummary& WithUtilizedCIDRCount(int value) { SetUtilizedCIDRCount(value); return *this;}


    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline const Aws::Map<Aws::String, IPSetMetadata>& GetIPSetReferences() const{ return m_iPSetReferences; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline bool IPSetReferencesHasBeenSet() const { return m_iPSetReferencesHasBeenSet; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline void SetIPSetReferences(const Aws::Map<Aws::String, IPSetMetadata>& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences = value; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline void SetIPSetReferences(Aws::Map<Aws::String, IPSetMetadata>&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences = std::move(value); }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& WithIPSetReferences(const Aws::Map<Aws::String, IPSetMetadata>& value) { SetIPSetReferences(value); return *this;}

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& WithIPSetReferences(Aws::Map<Aws::String, IPSetMetadata>&& value) { SetIPSetReferences(std::move(value)); return *this;}

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(const Aws::String& key, const IPSetMetadata& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, value); return *this; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(Aws::String&& key, const IPSetMetadata& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(const Aws::String& key, IPSetMetadata&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(Aws::String&& key, IPSetMetadata&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(const char* key, IPSetMetadata&& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of the IP set references used by a firewall.</p>
     */
    inline CIDRSummary& AddIPSetReferences(const char* key, const IPSetMetadata& value) { m_iPSetReferencesHasBeenSet = true; m_iPSetReferences.emplace(key, value); return *this; }

  private:

    int m_availableCIDRCount;
    bool m_availableCIDRCountHasBeenSet = false;

    int m_utilizedCIDRCount;
    bool m_utilizedCIDRCountHasBeenSet = false;

    Aws::Map<Aws::String, IPSetMetadata> m_iPSetReferences;
    bool m_iPSetReferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
