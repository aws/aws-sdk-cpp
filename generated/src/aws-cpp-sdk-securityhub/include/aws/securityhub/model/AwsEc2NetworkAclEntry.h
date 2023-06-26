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
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry();
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkAclEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline const Aws::String& GetCidrBlock() const{ return m_cidrBlock; }

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline bool CidrBlockHasBeenSet() const { return m_cidrBlockHasBeenSet; }

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline void SetCidrBlock(const Aws::String& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = value; }

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline void SetCidrBlock(Aws::String&& value) { m_cidrBlockHasBeenSet = true; m_cidrBlock = std::move(value); }

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline void SetCidrBlock(const char* value) { m_cidrBlockHasBeenSet = true; m_cidrBlock.assign(value); }

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithCidrBlock(const Aws::String& value) { SetCidrBlock(value); return *this;}

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithCidrBlock(Aws::String&& value) { SetCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPV4 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithCidrBlock(const char* value) { SetCidrBlock(value); return *this;}


    /**
     * <p>Whether the rule is an egress rule. An egress rule is a rule that applies to
     * traffic that leaves the subnet.</p>
     */
    inline bool GetEgress() const{ return m_egress; }

    /**
     * <p>Whether the rule is an egress rule. An egress rule is a rule that applies to
     * traffic that leaves the subnet.</p>
     */
    inline bool EgressHasBeenSet() const { return m_egressHasBeenSet; }

    /**
     * <p>Whether the rule is an egress rule. An egress rule is a rule that applies to
     * traffic that leaves the subnet.</p>
     */
    inline void SetEgress(bool value) { m_egressHasBeenSet = true; m_egress = value; }

    /**
     * <p>Whether the rule is an egress rule. An egress rule is a rule that applies to
     * traffic that leaves the subnet.</p>
     */
    inline AwsEc2NetworkAclEntry& WithEgress(bool value) { SetEgress(value); return *this;}


    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline const IcmpTypeCode& GetIcmpTypeCode() const{ return m_icmpTypeCode; }

    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline bool IcmpTypeCodeHasBeenSet() const { return m_icmpTypeCodeHasBeenSet; }

    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline void SetIcmpTypeCode(const IcmpTypeCode& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = value; }

    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline void SetIcmpTypeCode(IcmpTypeCode&& value) { m_icmpTypeCodeHasBeenSet = true; m_icmpTypeCode = std::move(value); }

    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithIcmpTypeCode(const IcmpTypeCode& value) { SetIcmpTypeCode(value); return *this;}

    /**
     * <p>The Internet Control Message Protocol (ICMP) type and code for which to deny
     * or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithIcmpTypeCode(IcmpTypeCode&& value) { SetIcmpTypeCode(std::move(value)); return *this;}


    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline const Aws::String& GetIpv6CidrBlock() const{ return m_ipv6CidrBlock; }

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline bool Ipv6CidrBlockHasBeenSet() const { return m_ipv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline void SetIpv6CidrBlock(const Aws::String& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = value; }

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline void SetIpv6CidrBlock(Aws::String&& value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock = std::move(value); }

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline void SetIpv6CidrBlock(const char* value) { m_ipv6CidrBlockHasBeenSet = true; m_ipv6CidrBlock.assign(value); }

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithIpv6CidrBlock(const Aws::String& value) { SetIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithIpv6CidrBlock(Aws::String&& value) { SetIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPV6 network range for which to deny or allow access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithIpv6CidrBlock(const char* value) { SetIpv6CidrBlock(value); return *this;}


    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline const PortRangeFromTo& GetPortRange() const{ return m_portRange; }

    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline bool PortRangeHasBeenSet() const { return m_portRangeHasBeenSet; }

    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline void SetPortRange(const PortRangeFromTo& value) { m_portRangeHasBeenSet = true; m_portRange = value; }

    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline void SetPortRange(PortRangeFromTo&& value) { m_portRangeHasBeenSet = true; m_portRange = std::move(value); }

    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline AwsEc2NetworkAclEntry& WithPortRange(const PortRangeFromTo& value) { SetPortRange(value); return *this;}

    /**
     * <p>For TCP or UDP protocols, the range of ports that the rule applies to.</p>
     */
    inline AwsEc2NetworkAclEntry& WithPortRange(PortRangeFromTo&& value) { SetPortRange(std::move(value)); return *this;}


    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline AwsEc2NetworkAclEntry& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline AwsEc2NetworkAclEntry& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol that the rule applies to. To deny or allow access to all
     * protocols, use the value <code>-1</code>.</p>
     */
    inline AwsEc2NetworkAclEntry& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline const Aws::String& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline void SetRuleAction(const Aws::String& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline void SetRuleAction(Aws::String&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline void SetRuleAction(const char* value) { m_ruleActionHasBeenSet = true; m_ruleAction.assign(value); }

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithRuleAction(const Aws::String& value) { SetRuleAction(value); return *this;}

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithRuleAction(Aws::String&& value) { SetRuleAction(std::move(value)); return *this;}

    /**
     * <p>Whether the rule is used to allow access or deny access.</p>
     */
    inline AwsEc2NetworkAclEntry& WithRuleAction(const char* value) { SetRuleAction(value); return *this;}


    /**
     * <p>The rule number. The rules are processed in order by their number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number. The rules are processed in order by their number.</p>
     */
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }

    /**
     * <p>The rule number. The rules are processed in order by their number.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number. The rules are processed in order by their number.</p>
     */
    inline AwsEc2NetworkAclEntry& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}

  private:

    Aws::String m_cidrBlock;
    bool m_cidrBlockHasBeenSet = false;

    bool m_egress;
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

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
