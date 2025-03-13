/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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
  class ListResolverDnssecConfigsResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult() = default;
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListResolverDnssecConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If a response includes the last of the DNSSEC configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListResolverDnssecConfigs.html">ListResolverDnssecConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverDnssecConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResolverDnssecConfig.html">ResolverDnssecConfig</a>
     * element for each configuration for DNSSEC validation that is associated with the
     * current Amazon Web Services account. It doesn't contain disabled DNSSEC
     * configurations for the resource.</p>
     */
    inline const Aws::Vector<ResolverDnssecConfig>& GetResolverDnssecConfigs() const { return m_resolverDnssecConfigs; }
    template<typename ResolverDnssecConfigsT = Aws::Vector<ResolverDnssecConfig>>
    void SetResolverDnssecConfigs(ResolverDnssecConfigsT&& value) { m_resolverDnssecConfigsHasBeenSet = true; m_resolverDnssecConfigs = std::forward<ResolverDnssecConfigsT>(value); }
    template<typename ResolverDnssecConfigsT = Aws::Vector<ResolverDnssecConfig>>
    ListResolverDnssecConfigsResult& WithResolverDnssecConfigs(ResolverDnssecConfigsT&& value) { SetResolverDnssecConfigs(std::forward<ResolverDnssecConfigsT>(value)); return *this;}
    template<typename ResolverDnssecConfigsT = ResolverDnssecConfig>
    ListResolverDnssecConfigsResult& AddResolverDnssecConfigs(ResolverDnssecConfigsT&& value) { m_resolverDnssecConfigsHasBeenSet = true; m_resolverDnssecConfigs.emplace_back(std::forward<ResolverDnssecConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResolverDnssecConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResolverDnssecConfig> m_resolverDnssecConfigs;
    bool m_resolverDnssecConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
