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
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult();
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API ListOutpostResolversResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline const Aws::Vector<OutpostResolver>& GetOutpostResolvers() const{ return m_outpostResolvers; }

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline void SetOutpostResolvers(const Aws::Vector<OutpostResolver>& value) { m_outpostResolvers = value; }

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline void SetOutpostResolvers(Aws::Vector<OutpostResolver>&& value) { m_outpostResolvers = std::move(value); }

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline ListOutpostResolversResult& WithOutpostResolvers(const Aws::Vector<OutpostResolver>& value) { SetOutpostResolvers(value); return *this;}

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline ListOutpostResolversResult& WithOutpostResolvers(Aws::Vector<OutpostResolver>&& value) { SetOutpostResolvers(std::move(value)); return *this;}

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline ListOutpostResolversResult& AddOutpostResolvers(const OutpostResolver& value) { m_outpostResolvers.push_back(value); return *this; }

    /**
     * <p>The Resolvers on Outposts that were created by using the current Amazon Web
     * Services account, and that match the specified filters, if any.</p>
     */
    inline ListOutpostResolversResult& AddOutpostResolvers(OutpostResolver&& value) { m_outpostResolvers.push_back(std::move(value)); return *this; }


    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline ListOutpostResolversResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline ListOutpostResolversResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> Resolvers match the specified criteria,
     * you can submit another <code>ListOutpostResolver</code> request to get the next
     * group of results. In the next request, specify the value of
     * <code>NextToken</code> from the previous response.</p>
     */
    inline ListOutpostResolversResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOutpostResolversResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOutpostResolversResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOutpostResolversResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OutpostResolver> m_outpostResolvers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
