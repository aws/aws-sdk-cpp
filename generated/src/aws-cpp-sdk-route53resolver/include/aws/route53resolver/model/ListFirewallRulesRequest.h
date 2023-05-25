/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Action.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ListFirewallRulesRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFirewallRules"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline ListFirewallRulesRequest& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline ListFirewallRulesRequest& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group that you want to retrieve
     * the rules for. </p>
     */
    inline ListFirewallRulesRequest& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The setting that
     * determines the processing order of the rules in a rule group. DNS Firewall
     * processes the rules in a rule group by order of priority, starting from the
     * lowest setting.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The setting that
     * determines the processing order of the rules in a rule group. DNS Firewall
     * processes the rules in a rule group by order of priority, starting from the
     * lowest setting.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The setting that
     * determines the processing order of the rules in a rule group. DNS Firewall
     * processes the rules in a rule group by order of priority, starting from the
     * lowest setting.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The setting that
     * determines the processing order of the rules in a rule group. DNS Firewall
     * processes the rules in a rule group by order of priority, starting from the
     * lowest setting.</p>
     */
    inline ListFirewallRulesRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline ListFirewallRulesRequest& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>Optional additional filter for the rules to retrieve.</p> <p>The action that
     * DNS Firewall should take on a DNS query when it matches one of the domains in
     * the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> - Permit the
     * request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit the
     * request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline ListFirewallRulesRequest& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects that you want Resolver to return for this
     * request. If more objects are available, in the response, Resolver provides a
     * <code>NextToken</code> value that you can use in a subsequent call to get the
     * next batch of objects.</p> <p>If you don't specify a value for
     * <code>MaxResults</code>, Resolver returns up to 100 objects. </p>
     */
    inline ListFirewallRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first call to this list request, omit this value.</p> <p>When you
     * request a list of objects, Resolver returns at most the number of objects
     * specified in <code>MaxResults</code>. If more objects are available for
     * retrieval, Resolver returns a <code>NextToken</code> value in the response. To
     * retrieve the next batch of objects, use the token that was returned for the
     * prior request in your next request.</p>
     */
    inline ListFirewallRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
