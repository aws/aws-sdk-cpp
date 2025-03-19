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
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult() = default;
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverRuleAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the Resolver rule association that you specified in a
     * <code>GetResolverRuleAssociation</code> request.</p>
     */
    inline const ResolverRuleAssociation& GetResolverRuleAssociation() const { return m_resolverRuleAssociation; }
    template<typename ResolverRuleAssociationT = ResolverRuleAssociation>
    void SetResolverRuleAssociation(ResolverRuleAssociationT&& value) { m_resolverRuleAssociationHasBeenSet = true; m_resolverRuleAssociation = std::forward<ResolverRuleAssociationT>(value); }
    template<typename ResolverRuleAssociationT = ResolverRuleAssociation>
    GetResolverRuleAssociationResult& WithResolverRuleAssociation(ResolverRuleAssociationT&& value) { SetResolverRuleAssociation(std::forward<ResolverRuleAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResolverRuleAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResolverRuleAssociation m_resolverRuleAssociation;
    bool m_resolverRuleAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
