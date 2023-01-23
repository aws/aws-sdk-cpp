/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociation.h>
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
  class GetResolverQueryLogConfigAssociationResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigAssociationResult();
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverQueryLogConfigAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Resolver query logging configuration association that
     * you specified in a <code>GetQueryLogConfigAssociation</code> request.</p>
     */
    inline const ResolverQueryLogConfigAssociation& GetResolverQueryLogConfigAssociation() const{ return m_resolverQueryLogConfigAssociation; }

    /**
     * <p>Information about the Resolver query logging configuration association that
     * you specified in a <code>GetQueryLogConfigAssociation</code> request.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { m_resolverQueryLogConfigAssociation = value; }

    /**
     * <p>Information about the Resolver query logging configuration association that
     * you specified in a <code>GetQueryLogConfigAssociation</code> request.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { m_resolverQueryLogConfigAssociation = std::move(value); }

    /**
     * <p>Information about the Resolver query logging configuration association that
     * you specified in a <code>GetQueryLogConfigAssociation</code> request.</p>
     */
    inline GetResolverQueryLogConfigAssociationResult& WithResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { SetResolverQueryLogConfigAssociation(value); return *this;}

    /**
     * <p>Information about the Resolver query logging configuration association that
     * you specified in a <code>GetQueryLogConfigAssociation</code> request.</p>
     */
    inline GetResolverQueryLogConfigAssociationResult& WithResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { SetResolverQueryLogConfigAssociation(std::move(value)); return *this;}

  private:

    ResolverQueryLogConfigAssociation m_resolverQueryLogConfigAssociation;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
