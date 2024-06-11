﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
  class GetResolverQueryLogConfigPolicyResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult();
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the query logging policy for the query logging
     * configuration that you specified in a
     * <code>GetResolverQueryLogConfigPolicy</code> request.</p>
     */
    inline const Aws::String& GetResolverQueryLogConfigPolicy() const{ return m_resolverQueryLogConfigPolicy; }
    inline void SetResolverQueryLogConfigPolicy(const Aws::String& value) { m_resolverQueryLogConfigPolicy = value; }
    inline void SetResolverQueryLogConfigPolicy(Aws::String&& value) { m_resolverQueryLogConfigPolicy = std::move(value); }
    inline void SetResolverQueryLogConfigPolicy(const char* value) { m_resolverQueryLogConfigPolicy.assign(value); }
    inline GetResolverQueryLogConfigPolicyResult& WithResolverQueryLogConfigPolicy(const Aws::String& value) { SetResolverQueryLogConfigPolicy(value); return *this;}
    inline GetResolverQueryLogConfigPolicyResult& WithResolverQueryLogConfigPolicy(Aws::String&& value) { SetResolverQueryLogConfigPolicy(std::move(value)); return *this;}
    inline GetResolverQueryLogConfigPolicyResult& WithResolverQueryLogConfigPolicy(const char* value) { SetResolverQueryLogConfigPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResolverQueryLogConfigPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResolverQueryLogConfigPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResolverQueryLogConfigPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resolverQueryLogConfigPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
