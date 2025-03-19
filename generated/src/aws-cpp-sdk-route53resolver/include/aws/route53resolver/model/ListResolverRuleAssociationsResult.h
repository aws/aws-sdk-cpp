/**
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
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverRuleAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If more than <code>MaxResults</code> rule associations match the specified
     * criteria, you can submit another <code>ListResolverRuleAssociation</code>
     * request to get the next group of results. In the next request, specify the value
     * of <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverRuleAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResolverRuleAssociationsResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associations that were created between Resolver rules and VPCs using the
     * current Amazon Web Services account, and that match the specified filters, if
     * any.</p>
     */
    inline const Aws::Vector<ResolverRuleAssociation>& GetResolverRuleAssociations() const { return m_resolverRuleAssociations; }
    template<typename ResolverRuleAssociationsT = Aws::Vector<ResolverRuleAssociation>>
    void SetResolverRuleAssociations(ResolverRuleAssociationsT&& value) { m_resolverRuleAssociationsHasBeenSet = true; m_resolverRuleAssociations = std::forward<ResolverRuleAssociationsT>(value); }
    template<typename ResolverRuleAssociationsT = Aws::Vector<ResolverRuleAssociation>>
    ListResolverRuleAssociationsResult& WithResolverRuleAssociations(ResolverRuleAssociationsT&& value) { SetResolverRuleAssociations(std::forward<ResolverRuleAssociationsT>(value)); return *this;}
    template<typename ResolverRuleAssociationsT = ResolverRuleAssociation>
    ListResolverRuleAssociationsResult& AddResolverRuleAssociations(ResolverRuleAssociationsT&& value) { m_resolverRuleAssociationsHasBeenSet = true; m_resolverRuleAssociations.emplace_back(std::forward<ResolverRuleAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverRuleAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ResolverRuleAssociation> m_resolverRuleAssociations;
    bool m_resolverRuleAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
