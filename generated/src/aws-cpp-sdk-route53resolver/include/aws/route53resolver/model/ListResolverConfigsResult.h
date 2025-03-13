/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverConfig.h>
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
  class ListResolverConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If a response includes the last of the Resolver configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another
     * <code>ListResolverConfigs</code> request. Get the value of
     * <code>NextToken</code> that Amazon Route 53 returned in the previous response
     * and include it in <code>NextToken</code> in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains one <code>ResolverConfigs</code> element for each
     * Resolver configuration that is associated with the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<ResolverConfig>& GetResolverConfigs() const { return m_resolverConfigs; }
    template<typename ResolverConfigsT = Aws::Vector<ResolverConfig>>
    void SetResolverConfigs(ResolverConfigsT&& value) { m_resolverConfigsHasBeenSet = true; m_resolverConfigs = std::forward<ResolverConfigsT>(value); }
    template<typename ResolverConfigsT = Aws::Vector<ResolverConfig>>
    ListResolverConfigsResult& WithResolverConfigs(ResolverConfigsT&& value) { SetResolverConfigs(std::forward<ResolverConfigsT>(value)); return *this;}
    template<typename ResolverConfigsT = ResolverConfig>
    ListResolverConfigsResult& AddResolverConfigs(ResolverConfigsT&& value) { m_resolverConfigsHasBeenSet = true; m_resolverConfigs.emplace_back(std::forward<ResolverConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResolverConfig> m_resolverConfigs;
    bool m_resolverConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
