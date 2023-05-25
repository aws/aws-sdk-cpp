/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverRuleAssociation.h>
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
  class GetResolverRuleAssociationResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult();
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline const ResolverRuleAssociation& GetResolverRuleAssociation() const{ return m_resolverRuleAssociation; }

    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline void SetResolverRuleAssociation(const ResolverRuleAssociation& value) { m_resolverRuleAssociation = value; }

    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline void SetResolverRuleAssociation(ResolverRuleAssociation&& value) { m_resolverRuleAssociation = std::move(value); }

    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline GetResolverRuleAssociationResult& WithResolverRuleAssociation(const ResolverRuleAssociation& value) { SetResolverRuleAssociation(value); return *this;}

    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline GetResolverRuleAssociationResult& WithResolverRuleAssociation(ResolverRuleAssociation&& value) { SetResolverRuleAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResolverRuleAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResolverRuleAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResolverRuleAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResolverRuleAssociation m_resolverRuleAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
