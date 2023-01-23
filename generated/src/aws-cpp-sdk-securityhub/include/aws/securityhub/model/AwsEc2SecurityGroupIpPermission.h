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
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission();
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpPermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

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
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }

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
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

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
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }

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
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

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
    inline AwsEc2SecurityGroupIpPermission& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

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
    inline AwsEc2SecurityGroupIpPermission& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}

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
    inline AwsEc2SecurityGroupIpPermission& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}


    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number.</p> <p>A value of -1 indicates all ICMP/ICMPv6 types. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes. </p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number.</p> <p>A value of -1 indicates all ICMP/ICMPv6 types. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes. </p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number.</p> <p>A value of -1 indicates all ICMP/ICMPv6 types. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes. </p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * type number.</p> <p>A value of -1 indicates all ICMP/ICMPv6 types. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes. </p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code.</p> <p>A value of <code>-1</code> indicates all ICMP/ICMPv6 codes. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code.</p> <p>A value of <code>-1</code> indicates all ICMP/ICMPv6 codes. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code.</p> <p>A value of <code>-1</code> indicates all ICMP/ICMPv6 codes. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP/ICMPv6
     * code.</p> <p>A value of <code>-1</code> indicates all ICMP/ICMPv6 codes. If you
     * specify all ICMP/ICMPv6 types, you must specify all codes.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>& GetUserIdGroupPairs() const{ return m_userIdGroupPairs; }

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline void SetUserIdGroupPairs(const Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline void SetUserIdGroupPairs(Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::move(value); }

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithUserIdGroupPairs(const Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>& value) { SetUserIdGroupPairs(value); return *this;}

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithUserIdGroupPairs(Aws::Vector<AwsEc2SecurityGroupUserIdGroupPair>&& value) { SetUserIdGroupPairs(std::move(value)); return *this;}

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddUserIdGroupPairs(const AwsEc2SecurityGroupUserIdGroupPair& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }

    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddUserIdGroupPairs(AwsEc2SecurityGroupUserIdGroupPair&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv4 ranges.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpRange>& GetIpRanges() const{ return m_ipRanges; }

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline void SetIpRanges(const Aws::Vector<AwsEc2SecurityGroupIpRange>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline void SetIpRanges(Aws::Vector<AwsEc2SecurityGroupIpRange>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithIpRanges(const Aws::Vector<AwsEc2SecurityGroupIpRange>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithIpRanges(Aws::Vector<AwsEc2SecurityGroupIpRange>&& value) { SetIpRanges(std::move(value)); return *this;}

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddIpRanges(const AwsEc2SecurityGroupIpRange& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>The IPv4 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddIpRanges(AwsEc2SecurityGroupIpRange&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The IPv6 ranges.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupIpv6Range>& GetIpv6Ranges() const{ return m_ipv6Ranges; }

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline bool Ipv6RangesHasBeenSet() const { return m_ipv6RangesHasBeenSet; }

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline void SetIpv6Ranges(const Aws::Vector<AwsEc2SecurityGroupIpv6Range>& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = value; }

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline void SetIpv6Ranges(Aws::Vector<AwsEc2SecurityGroupIpv6Range>&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = std::move(value); }

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithIpv6Ranges(const Aws::Vector<AwsEc2SecurityGroupIpv6Range>& value) { SetIpv6Ranges(value); return *this;}

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithIpv6Ranges(Aws::Vector<AwsEc2SecurityGroupIpv6Range>&& value) { SetIpv6Ranges(std::move(value)); return *this;}

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddIpv6Ranges(const AwsEc2SecurityGroupIpv6Range& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.push_back(value); return *this; }

    /**
     * <p>The IPv6 ranges.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddIpv6Ranges(AwsEc2SecurityGroupIpv6Range&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.push_back(std::move(value)); return *this; }


    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline const Aws::Vector<AwsEc2SecurityGroupPrefixListId>& GetPrefixListIds() const{ return m_prefixListIds; }

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline void SetPrefixListIds(const Aws::Vector<AwsEc2SecurityGroupPrefixListId>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline void SetPrefixListIds(Aws::Vector<AwsEc2SecurityGroupPrefixListId>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::move(value); }

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithPrefixListIds(const Aws::Vector<AwsEc2SecurityGroupPrefixListId>& value) { SetPrefixListIds(value); return *this;}

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& WithPrefixListIds(Aws::Vector<AwsEc2SecurityGroupPrefixListId>&& value) { SetPrefixListIds(std::move(value)); return *this;}

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddPrefixListIds(const AwsEc2SecurityGroupPrefixListId& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }

    /**
     * <p>[VPC only] The prefix list IDs for an Amazon Web Services service. With
     * outbound rules, this is the Amazon Web Services service to access through a VPC
     * endpoint from instances associated with the security group.</p>
     */
    inline AwsEc2SecurityGroupIpPermission& AddPrefixListIds(AwsEc2SecurityGroupPrefixListId&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
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
