/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/FirewallDomainListMetadata.h>
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
  class ListFirewallDomainListsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult();
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListFirewallDomainListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListFirewallDomainListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallDomainListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If objects are still available for retrieval, Resolver returns this token in
     * the response. To retrieve the next batch of objects, provide this token in your
     * next request.</p>
     */
    inline ListFirewallDomainListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline const Aws::Vector<FirewallDomainListMetadata>& GetFirewallDomainLists() const{ return m_firewallDomainLists; }

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallDomainLists(const Aws::Vector<FirewallDomainListMetadata>& value) { m_firewallDomainLists = value; }

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline void SetFirewallDomainLists(Aws::Vector<FirewallDomainListMetadata>&& value) { m_firewallDomainLists = std::move(value); }

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainListsResult& WithFirewallDomainLists(const Aws::Vector<FirewallDomainListMetadata>& value) { SetFirewallDomainLists(value); return *this;}

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainListsResult& WithFirewallDomainLists(Aws::Vector<FirewallDomainListMetadata>&& value) { SetFirewallDomainLists(std::move(value)); return *this;}

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainListsResult& AddFirewallDomainLists(const FirewallDomainListMetadata& value) { m_firewallDomainLists.push_back(value); return *this; }

    /**
     * <p>A list of the domain lists that you have defined. </p> <p>This might be a
     * partial list of the domain lists that you've defined. For information, see
     * <code>MaxResults</code>. </p>
     */
    inline ListFirewallDomainListsResult& AddFirewallDomainLists(FirewallDomainListMetadata&& value) { m_firewallDomainLists.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FirewallDomainListMetadata> m_firewallDomainLists;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
