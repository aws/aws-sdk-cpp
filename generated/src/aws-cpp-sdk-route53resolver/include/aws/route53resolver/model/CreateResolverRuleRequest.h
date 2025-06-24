/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/RuleTypeOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/TargetAddress.h>
#include <aws/route53resolver/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class CreateResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API CreateResolverRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolverRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string that identifies the request and that allows failed requests
     * to be retried without the risk of running the operation twice.
     * <code>CreatorRequestId</code> can be any unique string, for example, a date/time
     * stamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateResolverRuleRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name that lets you easily find a rule in the Resolver dashboard in
     * the Route 53 console.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateResolverRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code> or <code>DELEGATE</code>.</p>
     * <p>When you have a forwarding rule to forward DNS queries for a domain to your
     * network and you want Resolver to process queries for a subdomain of that domain,
     * specify <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for
     * example.com to resolvers on your network, you create a rule and specify
     * <code>FORWARD</code> for <code>RuleType</code>. To then have Resolver process
     * queries for apex.example.com, you create a rule and specify <code>SYSTEM</code>
     * for <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline RuleTypeOption GetRuleType() const { return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(RuleTypeOption value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline CreateResolverRuleRequest& WithRuleType(RuleTypeOption value) { SetRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that you
     * specify in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), outbound DNS queries are routed using the
     * Resolver rule that contains the most specific domain name (www.example.com).</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateResolverRuleRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPs that you want Resolver to forward DNS queries to. You can specify
     * either Ipv4 or Ipv6 addresses but not both in the same rule. Separate IP
     * addresses with a space.</p> <p> <code>TargetIps</code> is available only when
     * the value of <code>Rule type</code> is <code>FORWARD</code>.</p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const { return m_targetIps; }
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    void SetTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::forward<TargetIpsT>(value); }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    CreateResolverRuleRequest& WithTargetIps(TargetIpsT&& value) { SetTargetIps(std::forward<TargetIpsT>(value)); return *this;}
    template<typename TargetIpsT = TargetAddress>
    CreateResolverRuleRequest& AddTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps.emplace_back(std::forward<TargetIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the outbound Resolver endpoint that you want to use to route DNS
     * queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const { return m_resolverEndpointId; }
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }
    template<typename ResolverEndpointIdT = Aws::String>
    void SetResolverEndpointId(ResolverEndpointIdT&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::forward<ResolverEndpointIdT>(value); }
    template<typename ResolverEndpointIdT = Aws::String>
    CreateResolverRuleRequest& WithResolverEndpointId(ResolverEndpointIdT&& value) { SetResolverEndpointId(std::forward<ResolverEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tag keys and values that you want to associate with the
     * endpoint.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateResolverRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateResolverRuleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> DNS queries with the delegation records that match this domain name are
     * forwarded to the resolvers on your network. </p>
     */
    inline const Aws::String& GetDelegationRecord() const { return m_delegationRecord; }
    inline bool DelegationRecordHasBeenSet() const { return m_delegationRecordHasBeenSet; }
    template<typename DelegationRecordT = Aws::String>
    void SetDelegationRecord(DelegationRecordT&& value) { m_delegationRecordHasBeenSet = true; m_delegationRecord = std::forward<DelegationRecordT>(value); }
    template<typename DelegationRecordT = Aws::String>
    CreateResolverRuleRequest& WithDelegationRecord(DelegationRecordT&& value) { SetDelegationRecord(std::forward<DelegationRecordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RuleTypeOption m_ruleType{RuleTypeOption::NOT_SET};
    bool m_ruleTypeHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet = false;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_delegationRecord;
    bool m_delegationRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
