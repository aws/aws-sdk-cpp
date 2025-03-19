/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverRule.h>
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
  class ListResolverRulesResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If more than <code>MaxResults</code> Resolver rules match the specified
     * criteria, you can submit another <code>ListResolverRules</code> request to get
     * the next group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxResults</code> in the request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResolverRulesResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Resolver rules that were created using the current Amazon Web Services
     * account and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<ResolverRule>& GetResolverRules() const { return m_resolverRules; }
    template<typename ResolverRulesT = Aws::Vector<ResolverRule>>
    void SetResolverRules(ResolverRulesT&& value) { m_resolverRulesHasBeenSet = true; m_resolverRules = std::forward<ResolverRulesT>(value); }
    template<typename ResolverRulesT = Aws::Vector<ResolverRule>>
    ListResolverRulesResult& WithResolverRules(ResolverRulesT&& value) { SetResolverRules(std::forward<ResolverRulesT>(value)); return *this;}
    template<typename ResolverRulesT = ResolverRule>
    ListResolverRulesResult& AddResolverRules(ResolverRulesT&& value) { m_resolverRulesHasBeenSet = true; m_resolverRules.emplace_back(std::forward<ResolverRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ResolverRule> m_resolverRules;
    bool m_resolverRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
