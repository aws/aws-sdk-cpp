/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverQueryLogConfig.h>
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
  class ListResolverQueryLogConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more than <code>MaxResults</code> query logging configurations,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverQueryLogConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region. This count can differ from the number
     * of query logging configurations that are returned in a
     * <code>ListResolverQueryLogConfigs</code> response, depending on the values that
     * you specify in the request.</p>
     */
    inline int GetTotalCount() const { return m_totalCount; }
    inline void SetTotalCount(int value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline ListResolverQueryLogConfigsResult& WithTotalCount(int value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of query logging configurations that were created by the
     * current account in the specified Region and that match the filters that were
     * specified in the <code>ListResolverQueryLogConfigs</code> request. For the total
     * number of query logging configurations that were created by the current account
     * in the specified Region, see <code>TotalCount</code>.</p>
     */
    inline int GetTotalFilteredCount() const { return m_totalFilteredCount; }
    inline void SetTotalFilteredCount(int value) { m_totalFilteredCountHasBeenSet = true; m_totalFilteredCount = value; }
    inline ListResolverQueryLogConfigsResult& WithTotalFilteredCount(int value) { SetTotalFilteredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains one <code>ResolverQueryLogConfig</code> element for each
     * query logging configuration that matches the values that you specified for
     * <code>Filter</code>.</p>
     */
    inline const Aws::Vector<ResolverQueryLogConfig>& GetResolverQueryLogConfigs() const { return m_resolverQueryLogConfigs; }
    template<typename ResolverQueryLogConfigsT = Aws::Vector<ResolverQueryLogConfig>>
    void SetResolverQueryLogConfigs(ResolverQueryLogConfigsT&& value) { m_resolverQueryLogConfigsHasBeenSet = true; m_resolverQueryLogConfigs = std::forward<ResolverQueryLogConfigsT>(value); }
    template<typename ResolverQueryLogConfigsT = Aws::Vector<ResolverQueryLogConfig>>
    ListResolverQueryLogConfigsResult& WithResolverQueryLogConfigs(ResolverQueryLogConfigsT&& value) { SetResolverQueryLogConfigs(std::forward<ResolverQueryLogConfigsT>(value)); return *this;}
    template<typename ResolverQueryLogConfigsT = ResolverQueryLogConfig>
    ListResolverQueryLogConfigsResult& AddResolverQueryLogConfigs(ResolverQueryLogConfigsT&& value) { m_resolverQueryLogConfigsHasBeenSet = true; m_resolverQueryLogConfigs.emplace_back(std::forward<ResolverQueryLogConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverQueryLogConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    int m_totalFilteredCount{0};
    bool m_totalFilteredCountHasBeenSet = false;

    Aws::Vector<ResolverQueryLogConfig> m_resolverQueryLogConfigs;
    bool m_resolverQueryLogConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
