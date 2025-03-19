/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/OutpostResolver.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetOutpostResolverResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetOutpostResolverResult() = default;
    AWS_ROUTE53RESOLVER_API GetOutpostResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetOutpostResolverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <code>GetOutpostResolver</code> request, including the
     * status of the request.</p>
     */
    inline const OutpostResolver& GetOutpostResolver() const { return m_outpostResolver; }
    template<typename OutpostResolverT = OutpostResolver>
    void SetOutpostResolver(OutpostResolverT&& value) { m_outpostResolverHasBeenSet = true; m_outpostResolver = std::forward<OutpostResolverT>(value); }
    template<typename OutpostResolverT = OutpostResolver>
    GetOutpostResolverResult& WithOutpostResolver(OutpostResolverT&& value) { SetOutpostResolver(std::forward<OutpostResolverT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOutpostResolverResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OutpostResolver m_outpostResolver;
    bool m_outpostResolverHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
