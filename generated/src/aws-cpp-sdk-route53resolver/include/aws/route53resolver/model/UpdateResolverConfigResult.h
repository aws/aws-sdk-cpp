﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverConfig.h>
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
  class UpdateResolverConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverConfigResult();
    AWS_ROUTE53RESOLVER_API UpdateResolverConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API UpdateResolverConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains settings for the specified Resolver configuration.</p>
     */
    inline const ResolverConfig& GetResolverConfig() const{ return m_resolverConfig; }
    inline void SetResolverConfig(const ResolverConfig& value) { m_resolverConfig = value; }
    inline void SetResolverConfig(ResolverConfig&& value) { m_resolverConfig = std::move(value); }
    inline UpdateResolverConfigResult& WithResolverConfig(const ResolverConfig& value) { SetResolverConfig(value); return *this;}
    inline UpdateResolverConfigResult& WithResolverConfig(ResolverConfig&& value) { SetResolverConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateResolverConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateResolverConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateResolverConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ResolverConfig m_resolverConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
