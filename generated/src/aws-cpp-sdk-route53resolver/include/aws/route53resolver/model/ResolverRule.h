/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/ResolverRuleStatus.h>
#include <aws/route53resolver/model/RuleTypeOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ShareStatus.h>
#include <aws/route53resolver/model/TargetAddress.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>For queries that originate in your VPC, detailed information about a Resolver
   * rule, which specifies how to route DNS queries out of the VPC. The
   * <code>ResolverRule</code> parameter appears in the response to a <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DeleteResolverRule.html">DeleteResolverRule</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverRule.html">GetResolverRule</a>,
   * <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>,
   * or <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverRule.html">UpdateResolverRule</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverRule">AWS
   * API Reference</a></p>
   */
  class ResolverRule
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverRule() = default;
    AWS_ROUTE53RESOLVER_API ResolverRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResolverRule& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    ResolverRule& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResolverRule& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ResolverRule& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline ResolverRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResolverRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResolverRule& WithStatus(ResolverRuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ResolverRule& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code> or <code>DELEGATE</code>. If a
     * query matches multiple Resolver rules (example.com and www.example.com),
     * outbound DNS queries are routed using the Resolver rule that contains the most
     * specific domain name (www.example.com).</p> <p>When you have a forwarding rule
     * to forward DNS queries for a domain to your network and you want Resolver to
     * process queries for a subdomain of that domain, specify <code>SYSTEM</code>.</p>
     * <p>For example, to forward DNS queries for example.com to resolvers on your
     * network, you create a rule and specify <code>FORWARD</code> for
     * <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline RuleTypeOption GetRuleType() const { return m_ruleType; }
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
    inline void SetRuleType(RuleTypeOption value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }
    inline ResolverRule& WithRuleType(RuleTypeOption value) { SetRuleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ResolverRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. </p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const { return m_targetIps; }
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    void SetTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::forward<TargetIpsT>(value); }
    template<typename TargetIpsT = Aws::Vector<TargetAddress>>
    ResolverRule& WithTargetIps(TargetIpsT&& value) { SetTargetIps(std::forward<TargetIpsT>(value)); return *this;}
    template<typename TargetIpsT = TargetAddress>
    ResolverRule& AddTargetIps(TargetIpsT&& value) { m_targetIpsHasBeenSet = true; m_targetIps.emplace_back(std::forward<TargetIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const { return m_resolverEndpointId; }
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }
    template<typename ResolverEndpointIdT = Aws::String>
    void SetResolverEndpointId(ResolverEndpointIdT&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::forward<ResolverEndpointIdT>(value); }
    template<typename ResolverEndpointIdT = Aws::String>
    ResolverRule& WithResolverEndpointId(ResolverEndpointIdT&& value) { SetResolverEndpointId(std::forward<ResolverEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    ResolverRule& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline ResolverRule& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::String>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::String>
    ResolverRule& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const { return m_modificationTime; }
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }
    template<typename ModificationTimeT = Aws::String>
    void SetModificationTime(ModificationTimeT&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::forward<ModificationTimeT>(value); }
    template<typename ModificationTimeT = Aws::String>
    ResolverRule& WithModificationTime(ModificationTimeT&& value) { SetModificationTime(std::forward<ModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> DNS queries with delegation records that point to this domain name are
     * forwarded to resolvers on your network. </p>
     */
    inline const Aws::String& GetDelegationRecord() const { return m_delegationRecord; }
    inline bool DelegationRecordHasBeenSet() const { return m_delegationRecordHasBeenSet; }
    template<typename DelegationRecordT = Aws::String>
    void SetDelegationRecord(DelegationRecordT&& value) { m_delegationRecordHasBeenSet = true; m_delegationRecord = std::forward<DelegationRecordT>(value); }
    template<typename DelegationRecordT = Aws::String>
    ResolverRule& WithDelegationRecord(DelegationRecordT&& value) { SetDelegationRecord(std::forward<DelegationRecordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ResolverRuleStatus m_status{ResolverRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    RuleTypeOption m_ruleType{RuleTypeOption::NOT_SET};
    bool m_ruleTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet = false;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;

    Aws::String m_delegationRecord;
    bool m_delegationRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
