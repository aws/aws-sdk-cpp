/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
  class DeleteResolverQueryLogConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DeleteResolverQueryLogConfigResult();
    AWS_ROUTE53RESOLVER_API DeleteResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DeleteResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the query logging configuration that you deleted, including
     * the status of the request.</p>
     */
    inline const ResolverQueryLogConfig& GetResolverQueryLogConfig() const{ return m_resolverQueryLogConfig; }

    /**
     * <p>Information about the query logging configuration that you deleted, including
     * the status of the request.</p>
     */
    inline void SetResolverQueryLogConfig(const ResolverQueryLogConfig& value) { m_resolverQueryLogConfig = value; }

    /**
     * <p>Information about the query logging configuration that you deleted, including
     * the status of the request.</p>
     */
    inline void SetResolverQueryLogConfig(ResolverQueryLogConfig&& value) { m_resolverQueryLogConfig = std::move(value); }

    /**
     * <p>Information about the query logging configuration that you deleted, including
     * the status of the request.</p>
     */
    inline DeleteResolverQueryLogConfigResult& WithResolverQueryLogConfig(const ResolverQueryLogConfig& value) { SetResolverQueryLogConfig(value); return *this;}

    /**
     * <p>Information about the query logging configuration that you deleted, including
     * the status of the request.</p>
     */
    inline DeleteResolverQueryLogConfigResult& WithResolverQueryLogConfig(ResolverQueryLogConfig&& value) { SetResolverQueryLogConfig(std::move(value)); return *this;}

  private:

    ResolverQueryLogConfig m_resolverQueryLogConfig;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
