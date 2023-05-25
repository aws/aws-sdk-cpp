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
    AWS_ROUTE53RESOLVER_API ResolverRule();
    AWS_ROUTE53RESOLVER_API ResolverRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline ResolverRule& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline ResolverRule& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that Resolver assigned to the Resolver rule when you created it.</p>
     */
    inline ResolverRule& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline ResolverRule& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline ResolverRule& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that you specified when you created the Resolver rule.
     * <code>CreatorRequestId</code> identifies the request and allows failed requests
     * to be retried without the risk of running the operation twice. </p>
     */
    inline ResolverRule& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline ResolverRule& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline ResolverRule& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) for the Resolver rule specified by
     * <code>Id</code>.</p>
     */
    inline ResolverRule& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline ResolverRule& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline ResolverRule& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>DNS queries for this domain name are forwarded to the IP addresses that are
     * specified in <code>TargetIps</code>. If a query matches multiple Resolver rules
     * (example.com and www.example.com), the query is routed using the Resolver rule
     * that contains the most specific domain name (www.example.com).</p>
     */
    inline ResolverRule& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline const ResolverRuleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline void SetStatus(const ResolverRuleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline void SetStatus(ResolverRuleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline ResolverRule& WithStatus(const ResolverRuleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A code that specifies the current status of the Resolver rule.</p>
     */
    inline ResolverRule& WithStatus(ResolverRuleStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline ResolverRule& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline ResolverRule& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the status of a Resolver rule.</p>
     */
    inline ResolverRule& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline const RuleTypeOption& GetRuleType() const{ return m_ruleType; }

    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }

    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline void SetRuleType(const RuleTypeOption& value) { m_ruleTypeHasBeenSet = true; m_ruleType = value; }

    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline void SetRuleType(RuleTypeOption&& value) { m_ruleTypeHasBeenSet = true; m_ruleType = std::move(value); }

    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline ResolverRule& WithRuleType(const RuleTypeOption& value) { SetRuleType(value); return *this;}

    /**
     * <p>When you want to forward DNS queries for specified domain name to resolvers
     * on your network, specify <code>FORWARD</code>.</p> <p>When you have a forwarding
     * rule to forward DNS queries for a domain to your network and you want Resolver
     * to process queries for a subdomain of that domain, specify
     * <code>SYSTEM</code>.</p> <p>For example, to forward DNS queries for example.com
     * to resolvers on your network, you create a rule and specify <code>FORWARD</code>
     * for <code>RuleType</code>. To then have Resolver process queries for
     * apex.example.com, you create a rule and specify <code>SYSTEM</code> for
     * <code>RuleType</code>.</p> <p>Currently, only Resolver can create rules that
     * have a value of <code>RECURSIVE</code> for <code>RuleType</code>.</p>
     */
    inline ResolverRule& WithRuleType(RuleTypeOption&& value) { SetRuleType(std::move(value)); return *this;}


    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline ResolverRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline ResolverRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the Resolver rule, which you specified when you created the
     * Resolver rule.</p>
     */
    inline ResolverRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const{ return m_targetIps; }

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline void SetTargetIps(const Aws::Vector<TargetAddress>& value) { m_targetIpsHasBeenSet = true; m_targetIps = value; }

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline void SetTargetIps(Aws::Vector<TargetAddress>&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::move(value); }

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline ResolverRule& WithTargetIps(const Aws::Vector<TargetAddress>& value) { SetTargetIps(value); return *this;}

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline ResolverRule& WithTargetIps(Aws::Vector<TargetAddress>&& value) { SetTargetIps(std::move(value)); return *this;}

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline ResolverRule& AddTargetIps(const TargetAddress& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(value); return *this; }

    /**
     * <p>An array that contains the IP addresses and ports that an outbound endpoint
     * forwards DNS queries to. Typically, these are the IP addresses of DNS resolvers
     * on your network. Specify IPv4 addresses. IPv6 is not supported.</p>
     */
    inline ResolverRule& AddTargetIps(TargetAddress&& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline ResolverRule& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline ResolverRule& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint that the rule is associated with.</p>
     */
    inline ResolverRule& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline ResolverRule& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline ResolverRule& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>When a rule is shared with another Amazon Web Services account, the account
     * ID of the account that the rule is shared with.</p>
     */
    inline ResolverRule& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }

    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }

    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }

    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }

    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline ResolverRule& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}

    /**
     * <p>Whether the rule is shared and, if so, whether the current account is sharing
     * the rule with another account, or another account is sharing the rule with the
     * current account.</p>
     */
    inline ResolverRule& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the Resolver rule was created, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the Resolver rule was last updated, in Unix time
     * format and Coordinated Universal Time (UTC).</p>
     */
    inline ResolverRule& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ResolverRuleStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    RuleTypeOption m_ruleType;
    bool m_ruleTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet = false;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
