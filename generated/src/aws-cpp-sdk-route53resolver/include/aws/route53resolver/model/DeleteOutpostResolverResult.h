﻿/**
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
  class DeleteOutpostResolverResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteOutpostResolverResult();
    AWS_ROUTE53RESOLVER_API DeleteOutpostResolverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteOutpostResolverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <code>DeleteOutpostResolver</code> request, including
     * the status of the request.</p>
     */
    inline const OutpostResolver& GetOutpostResolver() const{ return m_outpostResolver; }
    inline void SetOutpostResolver(const OutpostResolver& value) { m_outpostResolver = value; }
    inline void SetOutpostResolver(OutpostResolver&& value) { m_outpostResolver = std::move(value); }
    inline DeleteOutpostResolverResult& WithOutpostResolver(const OutpostResolver& value) { SetOutpostResolver(value); return *this;}
    inline DeleteOutpostResolverResult& WithOutpostResolver(OutpostResolver&& value) { SetOutpostResolver(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteOutpostResolverResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteOutpostResolverResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteOutpostResolverResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    OutpostResolver m_outpostResolver;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
