/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociation.h>
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
  class ListResolverQueryLogConfigAssociationsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigAssociationsResult();
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more than <code>MaxResults</code> query logging associations,
     * you can submit another <code>ListResolverQueryLogConfigAssociations</code>
     * request to get the next group of associations. In the next request, specify the
     * value of <code>NextToken</code> from the previous response. </p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of associations that are returned in a
     * <code>ListResolverQueryLogConfigAssociations</code> response, depending on the
     * values that you specify in the request.</p>
     */
    inline int GetTotalCount() const{ return m_totalCount; }

    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of associations that are returned in a
     * <code>ListResolverQueryLogConfigAssociations</code> response, depending on the
     * values that you specify in the request.</p>
     */
    inline void SetTotalCount(int value) { m_totalCount = value; }

    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of associations that are returned in a
     * <code>ListResolverQueryLogConfigAssociations</code> response, depending on the
     * values that you specify in the request.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}


    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigAssociations</code> request.
     * For the total number of associations that were created by the current account in
     * the specified Region, see <code>TotalCount</code>.</p>
     */
    inline int GetTotalFilteredCount() const{ return m_totalFilteredCount; }

    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigAssociations</code> request.
     * For the total number of associations that were created by the current account in
     * the specified Region, see <code>TotalCount</code>.</p>
     */
    inline void SetTotalFilteredCount(int value) { m_totalFilteredCount = value; }

    /**
     * <p>The total number of query logging associations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigAssociations</code> request.
     * For the total number of associations that were created by the current account in
     * the specified Region, see <code>TotalCount</code>.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithTotalFilteredCount(int value) { SetTotalFilteredCount(value); return *this;}


    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline const Aws::Vector<ResolverQueryLogConfigAssociation>& GetResolverQueryLogConfigAssociations() const{ return m_resolverQueryLogConfigAssociations; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline void SetResolverQueryLogConfigAssociations(const Aws::Vector<ResolverQueryLogConfigAssociation>& value) { m_resolverQueryLogConfigAssociations = value; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline void SetResolverQueryLogConfigAssociations(Aws::Vector<ResolverQueryLogConfigAssociation>&& value) { m_resolverQueryLogConfigAssociations = std::move(value); }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithResolverQueryLogConfigAssociations(const Aws::Vector<ResolverQueryLogConfigAssociation>& value) { SetResolverQueryLogConfigAssociations(value); return *this;}

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& WithResolverQueryLogConfigAssociations(Aws::Vector<ResolverQueryLogConfigAssociation>&& value) { SetResolverQueryLogConfigAssociations(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& AddResolverQueryLogConfigAssociations(const ResolverQueryLogConfigAssociation& value) { m_resolverQueryLogConfigAssociations.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>ResolverQueryLogConfigAssociations</code>
     * element for each query logging association that matches the values that you
     * specified for <code>Filter</code>.</p>
     */
    inline ListResolverQueryLogConfigAssociationsResult& AddResolverQueryLogConfigAssociations(ResolverQueryLogConfigAssociation&& value) { m_resolverQueryLogConfigAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    int m_totalCount;

    int m_totalFilteredCount;

    Aws::Vector<ResolverQueryLogConfigAssociation> m_resolverQueryLogConfigAssociations;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
