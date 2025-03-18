/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/OutpostResolver.h>
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
  class ListOutpostResolversResult
  {
  public:
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult() = default;
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<OutpostResolver>& GetOutpostResolvers() const { return m_outpostResolvers; }
    template<typename OutpostResolversT = Aws::Vector<OutpostResolver>>
    void SetOutpostResolvers(OutpostResolversT&& value) { m_outpostResolversHasBeenSet = true; m_outpostResolvers = std::forward<OutpostResolversT>(value); }
    template<typename OutpostResolversT = Aws::Vector<OutpostResolver>>
    ListOutpostResolversResult& WithOutpostResolvers(OutpostResolversT&& value) { SetOutpostResolvers(std::forward<OutpostResolversT>(value)); return *this;}
    template<typename OutpostResolversT = OutpostResolver>
    ListOutpostResolversResult& AddOutpostResolvers(OutpostResolversT&& value) { m_outpostResolversHasBeenSet = true; m_outpostResolvers.emplace_back(std::forward<OutpostResolversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOutpostResolversResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOutpostResolversResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OutpostResolver> m_outpostResolvers;
    bool m_outpostResolversHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
