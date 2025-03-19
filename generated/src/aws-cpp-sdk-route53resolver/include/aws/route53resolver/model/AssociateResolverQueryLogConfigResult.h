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
  class AssociateResolverQueryLogConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateResolverQueryLogConfigResult() = default;
    AWS_ROUTE53RESOLVER_API AssociateResolverQueryLogConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API AssociateResolverQueryLogConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains settings for a specified association between an
     * Amazon VPC and a query logging configuration.</p>
     */
    inline const ResolverQueryLogConfigAssociation& GetResolverQueryLogConfigAssociation() const { return m_resolverQueryLogConfigAssociation; }
    template<typename ResolverQueryLogConfigAssociationT = ResolverQueryLogConfigAssociation>
    void SetResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociationT&& value) { m_resolverQueryLogConfigAssociationHasBeenSet = true; m_resolverQueryLogConfigAssociation = std::forward<ResolverQueryLogConfigAssociationT>(value); }
    template<typename ResolverQueryLogConfigAssociationT = ResolverQueryLogConfigAssociation>
    AssociateResolverQueryLogConfigResult& WithResolverQueryLogConfigAssociation(ResolverQueryLogConfigAssociationT&& value) { SetResolverQueryLogConfigAssociation(std::forward<ResolverQueryLogConfigAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateResolverQueryLogConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverQueryLogConfigAssociation m_resolverQueryLogConfigAssociation;
    bool m_resolverQueryLogConfigAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
