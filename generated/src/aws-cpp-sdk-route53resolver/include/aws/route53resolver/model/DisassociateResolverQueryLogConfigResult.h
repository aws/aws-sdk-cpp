/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverQueryLogConfigAssociation.h>
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
  class DisassociateResolverQueryLogConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API DisassociateResolverQueryLogConfigResult();
    AWS_ROUTE53RESOLVER_API DisassociateResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API DisassociateResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains settings for the association that you deleted
     * between an Amazon VPC and a query logging configuration.</p>
     */
    inline const ResolverQueryLogConfigAssociation& GetResolverQueryLogConfigAssociation() const{ return m_resolverQueryLogConfigAssociation; }

    /**
     * <p>A complex type that contains settings for the association that you deleted
     * between an Amazon VPC and a query logging configuration.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { m_resolverQueryLogConfigAssociation = value; }

    /**
     * <p>A complex type that contains settings for the association that you deleted
     * between an Amazon VPC and a query logging configuration.</p>
     */
    inline void SetResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { m_resolverQueryLogConfigAssociation = std::move(value); }

    /**
     * <p>A complex type that contains settings for the association that you deleted
     * between an Amazon VPC and a query logging configuration.</p>
     */
    inline DisassociateResolverQueryLogConfigResult& WithResolverQueryLogConfigAssociation(const ResolverQueryLogConfigAssociation& value) { SetResolverQueryLogConfigAssociation(value); return *this;}

    /**
     * <p>A complex type that contains settings for the association that you deleted
     * between an Amazon VPC and a query logging configuration.</p>
     */
    inline DisassociateResolverQueryLogConfigResult& WithResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociation&& value) { SetResolverQueryLogConfigAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateResolverQueryLogConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateResolverQueryLogConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateResolverQueryLogConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverQueryLogConfigAssociation m_resolverQueryLogConfigAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
