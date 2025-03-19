/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/IcmpTypeCode.h>
#include <aws/securityhub/model/PortRangeFromTo.h>
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
   * <p>A rule for the network ACL. Each rule allows or denies access based on the IP
   * address, traffic direction, port, and protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkAclEntry">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkAclEntry
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry() = default;
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline const Aws::String& GetCidrBlock() const { return m_cidrBlock; }
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }
    template<typename CidrBlockT = Aws::String>
    void SetCidrBlock(CidrBlockT&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::forward<CidrBlockT>(value); }
    template<typename CidrBlockT = Aws::String>
    AwsEc2NetworkAclEntry& WithCidrBlock(CidrBlockT&& value) { SetCidrBlock(std::forward<CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rule is an egress rule. An egress rule is a rule that applies to
     * traffic that leaves the subnet.</p>
     */
    inline bool GetEgress() const { return m_egress; }
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }
    inline AwsEc2NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const { return m_icmpTypeCode; }
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    void SetIcmpTypeCode(IcmpTypeCodeT&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::forward<IcmpTypeCodeT>(value); }
    template<typename IcmpTypeCodeT = IcmpTypeCode>
    AwsEc2NetworkAclEntry& WithIcmpTypeCode(IcmpTypeCodeT&& value) { SetIcmpTypeCode(std::forward<IcmpTypeCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const { return m_ipv6CidrBlock; }
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }
    template<typename Ipv6CidrBlockT = Aws::String>
    void SetIpv6CidrBlock(Ipv6CidrBlockT&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::forward<Ipv6CidrBlockT>(value); }
    template<typename Ipv6CidrBlockT = Aws::String>
    AwsEc2NetworkAclEntry& WithIpv6CidrBlock(Ipv6CidrBlockT&& value) { SetIpv6CidrBlock(std::forward<Ipv6CidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline const PortRangeFromTo& GetPortRange() const { return m_portRange; }
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }
    template<typename PortRangeT = PortRangeFromTo>
    void SetPortRange(PortRangeT&& value) { m_portRangeHasBeenSet = true; m_portRange = std::forward<PortRangeT>(value); }
    template<typename PortRangeT = PortRangeFromTo>
    AwsEc2NetworkAclEntry& WithPortRange(PortRangeT&& value) { SetPortRange(std::forward<PortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    AwsEc2NetworkAclEntry& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline const Aws::String& GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    template<typename RuleActionT = Aws::String>
    void SetRuleAction(RuleActionT&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::forward<RuleActionT>(value); }
    template<typename RuleActionT = Aws::String>
    AwsEc2NetworkAclEntry& WithRuleAction(RuleActionT&& value) { SetRuleAction(std::forward<RuleActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number. The rules are processed in order by their number.</p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline AwsEc2NetworkAclEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    bool m_egress{false};
    bool m_egressHasBeenSet = false;

    IcmpTypeCode m_icmpTypeCode;
    bool m_icmpTypeCodeHasBeenSet = false;

    Aws::String m_ipv6CidrBlock;
    bool m_ipv6CidrBlockHasBeenSet = false;

    PortRangeFromTo m_portRange;
    bool m_portRangeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
