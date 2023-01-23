/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class ListFirewallRulesResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult();
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallRule>& GetFirewallRules() const{ return m_firewallRules; }

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallRules(const Aws::Vector<FirewallRule>& value) { m_firewallRules = value; }

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallRules(Aws::Vector<FirewallRule>&& value) { m_firewallRules = std::move(value); }

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRulesResult& WithFirewallRules(const Aws::Vector<FirewallRule>& value) { SetFirewallRules(value); return *this;}

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRulesResult& WithFirewallRules(Aws::Vector<FirewallRule>&& value) { SetFirewallRules(std::move(value)); return *this;}

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRulesResult& AddFirewallRules(const FirewallRule& value) { m_firewallRules.push_back(value); return *this; }

    /**
     * <p>A list of the rules that you have defined. </p> <p>This might be a partial
     * list of the firewall rules that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallRulesResult& AddFirewallRules(FirewallRule&& value) { m_firewallRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallRule> m_firewallRules;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
