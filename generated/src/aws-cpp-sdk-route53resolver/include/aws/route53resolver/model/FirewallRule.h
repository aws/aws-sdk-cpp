/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/Action.h>
#include <aws/route53resolver/model/BlockResponse.h>
#include <aws/route53resolver/model/BlockOverrideDnsType.h>
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
   * <p>A single firewall rule in a rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/FirewallRule">AWS
   * API Reference</a></p>
   */
  class FirewallRule
  {
  public:
    AWS_ROUTE53RESOLVER_API FirewallRule();
    AWS_ROUTE53RESOLVER_API FirewallRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API FirewallRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline const Aws::String& GetFirewallRuleGroupId() const{ return m_firewallRuleGroupId; }

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline bool FirewallRuleGroupIdHasBeenSet() const { return m_firewallRuleGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline void SetFirewallRuleGroupId(const Aws::String& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = value; }

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline void SetFirewallRuleGroupId(Aws::String&& value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId = std::move(value); }

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline void SetFirewallRuleGroupId(const char* value) { m_firewallRuleGroupIdHasBeenSet = true; m_firewallRuleGroupId.assign(value); }

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline FirewallRule& WithFirewallRuleGroupId(const Aws::String& value) { SetFirewallRuleGroupId(value); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline FirewallRule& WithFirewallRuleGroupId(Aws::String&& value) { SetFirewallRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the firewall rule group of the rule. </p>
     */
    inline FirewallRule& WithFirewallRuleGroupId(const char* value) { SetFirewallRuleGroupId(value); return *this;}


    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline const Aws::String& GetFirewallDomainListId() const{ return m_firewallDomainListId; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(const Aws::String& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = value; }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(Aws::String&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::move(value); }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline void SetFirewallDomainListId(const char* value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId.assign(value); }

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline FirewallRule& WithFirewallDomainListId(const Aws::String& value) { SetFirewallDomainListId(value); return *this;}

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline FirewallRule& WithFirewallDomainListId(Aws::String&& value) { SetFirewallDomainListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain list that's used in the rule. </p>
     */
    inline FirewallRule& WithFirewallDomainListId(const char* value) { SetFirewallDomainListId(value); return *this;}


    /**
     * <p>The name of the rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule. </p>
     */
    inline FirewallRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule. </p>
     */
    inline FirewallRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule. </p>
     */
    inline FirewallRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The priority of the rule in the rule group. This value must be unique within
     * the rule group. DNS Firewall processes the rules in a rule group by order of
     * priority, starting from the lowest setting.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The priority of the rule in the rule group. This value must be unique within
     * the rule group. DNS Firewall processes the rules in a rule group by order of
     * priority, starting from the lowest setting.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The priority of the rule in the rule group. This value must be unique within
     * the rule group. DNS Firewall processes the rules in a rule group by order of
     * priority, starting from the lowest setting.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The priority of the rule in the rule group. This value must be unique within
     * the rule group. DNS Firewall processes the rules in a rule group by order of
     * priority, starting from the lowest setting.</p>
     */
    inline FirewallRule& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline FirewallRule& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action that DNS Firewall should take on a DNS query when it matches one
     * of the domains in the rule's domain list:</p> <ul> <li> <p> <code>ALLOW</code> -
     * Permit the request to go through.</p> </li> <li> <p> <code>ALERT</code> - Permit
     * the request to go through but send an alert to the logs.</p> </li> <li> <p>
     * <code>BLOCK</code> - Disallow the request. If this is specified, additional
     * handling details are provided in the rule's <code>BlockResponse</code> setting.
     * </p> </li> </ul>
     */
    inline FirewallRule& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline const BlockResponse& GetBlockResponse() const{ return m_blockResponse; }

    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline bool BlockResponseHasBeenSet() const { return m_blockResponseHasBeenSet; }

    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline void SetBlockResponse(const BlockResponse& value) { m_blockResponseHasBeenSet = true; m_blockResponse = value; }

    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline void SetBlockResponse(BlockResponse&& value) { m_blockResponseHasBeenSet = true; m_blockResponse = std::move(value); }

    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline FirewallRule& WithBlockResponse(const BlockResponse& value) { SetBlockResponse(value); return *this;}

    /**
     * <p>The way that you want DNS Firewall to block the request. Used for the rule
     * action setting <code>BLOCK</code>.</p> <ul> <li> <p> <code>NODATA</code> -
     * Respond indicating that the query was successful, but no response is available
     * for it.</p> </li> <li> <p> <code>NXDOMAIN</code> - Respond indicating that the
     * domain name that's in the query doesn't exist.</p> </li> <li> <p>
     * <code>OVERRIDE</code> - Provide a custom override in the response. This option
     * requires custom handling details in the rule's <code>BlockOverride*</code>
     * settings. </p> </li> </ul>
     */
    inline FirewallRule& WithBlockResponse(BlockResponse&& value) { SetBlockResponse(std::move(value)); return *this;}


    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline const Aws::String& GetBlockOverrideDomain() const{ return m_blockOverrideDomain; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideDomainHasBeenSet() const { return m_blockOverrideDomainHasBeenSet; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(const Aws::String& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = value; }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(Aws::String&& value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain = std::move(value); }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDomain(const char* value) { m_blockOverrideDomainHasBeenSet = true; m_blockOverrideDomain.assign(value); }

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideDomain(const Aws::String& value) { SetBlockOverrideDomain(value); return *this;}

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideDomain(Aws::String&& value) { SetBlockOverrideDomain(std::move(value)); return *this;}

    /**
     * <p>The custom DNS record to send back in response to the query. Used for the
     * rule action <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideDomain(const char* value) { SetBlockOverrideDomain(value); return *this;}


    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline const BlockOverrideDnsType& GetBlockOverrideDnsType() const{ return m_blockOverrideDnsType; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideDnsTypeHasBeenSet() const { return m_blockOverrideDnsTypeHasBeenSet; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDnsType(const BlockOverrideDnsType& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = value; }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideDnsType(BlockOverrideDnsType&& value) { m_blockOverrideDnsTypeHasBeenSet = true; m_blockOverrideDnsType = std::move(value); }

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideDnsType(const BlockOverrideDnsType& value) { SetBlockOverrideDnsType(value); return *this;}

    /**
     * <p>The DNS record's type. This determines the format of the record value that
     * you provided in <code>BlockOverrideDomain</code>. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideDnsType(BlockOverrideDnsType&& value) { SetBlockOverrideDnsType(std::move(value)); return *this;}


    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline int GetBlockOverrideTtl() const{ return m_blockOverrideTtl; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline bool BlockOverrideTtlHasBeenSet() const { return m_blockOverrideTtlHasBeenSet; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline void SetBlockOverrideTtl(int value) { m_blockOverrideTtlHasBeenSet = true; m_blockOverrideTtl = value; }

    /**
     * <p>The recommended amount of time, in seconds, for the DNS resolver or web
     * browser to cache the provided override record. Used for the rule action
     * <code>BLOCK</code> with a <code>BlockResponse</code> setting of
     * <code>OVERRIDE</code>.</p>
     */
    inline FirewallRule& WithBlockOverrideTtl(int value) { SetBlockOverrideTtl(value); return *this;}


    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRule& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRule& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string defined by you to identify the request. This allows you to
     * retry failed requests without the risk of executing the operation twice. This
     * can be any unique string, for example, a timestamp. </p>
     */
    inline FirewallRule& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRule& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRule& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the rule was created, in Unix time format and
     * Coordinated Universal Time (UTC). </p>
     */
    inline FirewallRule& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline const Aws::String& GetModificationTime() const{ return m_modificationTime; }

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline bool ModificationTimeHasBeenSet() const { return m_modificationTimeHasBeenSet; }

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const Aws::String& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = value; }

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(Aws::String&& value) { m_modificationTimeHasBeenSet = true; m_modificationTime = std::move(value); }

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline void SetModificationTime(const char* value) { m_modificationTimeHasBeenSet = true; m_modificationTime.assign(value); }

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRule& WithModificationTime(const Aws::String& value) { SetModificationTime(value); return *this;}

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRule& WithModificationTime(Aws::String&& value) { SetModificationTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that the rule was last modified, in Unix time format and
     * Coordinated Universal Time (UTC).</p>
     */
    inline FirewallRule& WithModificationTime(const char* value) { SetModificationTime(value); return *this;}

  private:

    Aws::String m_firewallRuleGroupId;
    bool m_firewallRuleGroupIdHasBeenSet = false;

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;

    BlockResponse m_blockResponse;
    bool m_blockResponseHasBeenSet = false;

    Aws::String m_blockOverrideDomain;
    bool m_blockOverrideDomainHasBeenSet = false;

    BlockOverrideDnsType m_blockOverrideDnsType;
    bool m_blockOverrideDnsTypeHasBeenSet = false;

    int m_blockOverrideTtl;
    bool m_blockOverrideTtlHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_modificationTime;
    bool m_modificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
