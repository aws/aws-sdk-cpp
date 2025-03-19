/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupUserIdGroupPair.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupIpRange.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupIpv6Range.h>
#include <aws/securityhub/model/AwsEc2SecurityGroupPrefixListId.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An IP permission for an EC2 security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupIpPermission">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupIpPermission
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission() = default;
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number.</p> <p>[VPC only] Use <code>-1</code> to specify
     * all protocols.</p> <p>When authorizing security group rules, specifying
     * <code>-1</code> or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>icmpv6</code> allows traffic on
     * all ports, regardless of any port range you specify.</p> <p>For
     * <code>tcp</code>, <code>udp</code>, and <code>icmp</code>, you must specify a
     * port range.</p> <p>For <code>icmpv6</code>, the port range is optional. If you
     * omit the port range, traffic for all types and codes is allowed. </p>
     */
    inline const Aws::String& GetIpProtocol() const { return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    template<typename IpProtocolT = Aws::String>
    void SetIpProtocol(IpProtocolT&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::forward<IpProtocolT>(value); }
    template<typename IpProtocolT = Aws::String>
    AwsEc2SecurityGroupIpPermission& WithIpProtocol(IpProtocolT&& value) { SetIpProtocol(std::forward<IpProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number.</p> <p>A value of -1 indicates all ICMP/ICMPv6 types. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes. </p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline AwsEc2SecurityGroupIpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code.</p> <p>A value of <code>-1</code> indicates all ICMP/ICMPv6 codes. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes.</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline AwsEc2SecurityGroupIpPermission& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>& GetUserIdGroupPairs() const { return m_userIdGroupPairs; }
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }
    template<typename UserIdGroupPairsT = Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>>
    void SetUserIdGroupPairs(UserIdGroupPairsT&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::forward<UserIdGroupPairsT>(value); }
    template<typename UserIdGroupPairsT = Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>>
    AwsEc2SecurityGroupIpPermission& WithUserIdGroupPairs(UserIdGroupPairsT&& value) { SetUserIdGroupPairs(std::forward<UserIdGroupPairsT>(value)); return *this;}
    template<typename UserIdGroupPairsT = AwsEc2SecurityGroupUserIdGroupPair>
    AwsEc2SecurityGroupIpPermission& AddUserIdGroupPairs(UserIdGroupPairsT&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.emplace_back(std::forward<UserIdGroupPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 ranges.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpRange>& GetIpRanges() const { return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    template<typename IpRangesT = Aws::Vector<AwsEc2SecurityGroupIpRange>>
    void SetIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::forward<IpRangesT>(value); }
    template<typename IpRangesT = Aws::Vector<AwsEc2SecurityGroupIpRange>>
    AwsEc2SecurityGroupIpPermission& WithIpRanges(IpRangesT&& value) { SetIpRanges(std::forward<IpRangesT>(value)); return *this;}
    template<typename IpRangesT = AwsEc2SecurityGroupIpRange>
    AwsEc2SecurityGroupIpPermission& AddIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.emplace_back(std::forward<IpRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 ranges.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpv6Range>& GetIpv6Ranges() const { return m_ipv6Ranges; }
    inline bool Ipv6RangesHasBeenSet() const { return m_ipv6RangesHasBeenSet; }
    template<typename Ipv6RangesT = Aws::Vector<AwsEc2SecurityGroupIpv6Range>>
    void SetIpv6Ranges(Ipv6RangesT&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = std::forward<Ipv6RangesT>(value); }
    template<typename Ipv6RangesT = Aws::Vector<AwsEc2SecurityGroupIpv6Range>>
    AwsEc2SecurityGroupIpPermission& WithIpv6Ranges(Ipv6RangesT&& value) { SetIpv6Ranges(std::forward<Ipv6RangesT>(value)); return *this;}
    template<typename Ipv6RangesT = AwsEc2SecurityGroupIpv6Range>
    AwsEc2SecurityGroupIpPermission& AddIpv6Ranges(Ipv6RangesT&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.emplace_back(std::forward<Ipv6RangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupPrefixListId>& GetPrefixListIds() const { return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    template<typename PrefixListIdsT = Aws::Vector<AwsEc2SecurityGroupPrefixListId>>
    void SetPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::forward<PrefixListIdsT>(value); }
    template<typename PrefixListIdsT = Aws::Vector<AwsEc2SecurityGroupPrefixListId>>
    AwsEc2SecurityGroupIpPermission& WithPrefixListIds(PrefixListIdsT&& value) { SetPrefixListIds(std::forward<PrefixListIdsT>(value)); return *this;}
    template<typename PrefixListIdsT = AwsEc2SecurityGroupPrefixListId>
    AwsEc2SecurityGroupIpPermission& AddPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.emplace_back(std::forward<PrefixListIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpRange> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupIpv6Range> m_ipv6Ranges;
    bool m_ipv6RangesHasBeenSet = false;

    Aws::Vector<AwsEc2SecurityGroupPrefixListId> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
