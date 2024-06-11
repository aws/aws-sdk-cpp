﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverRuleAssociation.h>
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
  class ListResolverRuleAssociationsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult();
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If more than <code>MaxResults</code> rule associations match the specified
     * criteria, you can submit another <code>ListResolverRuleAssociation</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListResolverRuleAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListResolverRuleAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListResolverRuleAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResults = value; }
    inline ListResolverRuleAssociationsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associations that were created between Resolver rules and VPCs using the
     * current Amazon Web Services account, and that match the specified filters, if
     * any.</p>
     */
    inline const Aws::Vector<ResolverRuleAssociation>& GetResolverRuleAssociations() const{ return m_resolverRuleAssociations; }
    inline void SetResolverRuleAssociations(const Aws::Vector<ResolverRuleAssociation>& value) { m_resolverRuleAssociations = value; }
    inline void SetResolverRuleAssociations(Aws::Vector<ResolverRuleAssociation>&& value) { m_resolverRuleAssociations = std::move(value); }
    inline ListResolverRuleAssociationsResult& WithResolverRuleAssociations(const Aws::Vector<ResolverRuleAssociation>& value) { SetResolverRuleAssociations(value); return *this;}
    inline ListResolverRuleAssociationsResult& WithResolverRuleAssociations(Aws::Vector<ResolverRuleAssociation>&& value) { SetResolverRuleAssociations(std::move(value)); return *this;}
    inline ListResolverRuleAssociationsResult& AddResolverRuleAssociations(const ResolverRuleAssociation& value) { m_resolverRuleAssociations.push_back(value); return *this; }
    inline ListResolverRuleAssociationsResult& AddResolverRuleAssociations(ResolverRuleAssociation&& value) { m_resolverRuleAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListResolverRuleAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListResolverRuleAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListResolverRuleAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    int m_maxResults;

    Aws::Vector<ResolverRuleAssociation> m_resolverRuleAssociations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
