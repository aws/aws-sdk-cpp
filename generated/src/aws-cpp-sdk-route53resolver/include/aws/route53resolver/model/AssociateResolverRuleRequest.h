/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AssociateResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateResolverRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline const Aws::String& GetResolverRuleId() const { return m_resolverRuleId; }
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }
    template<typename ResolverRuleIdT = Aws::String>
    void SetResolverRuleId(ResolverRuleIdT&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::forward<ResolverRuleIdT>(value); }
    template<typename ResolverRuleIdT = Aws::String>
    AssociateResolverRuleRequest& WithResolverRuleId(ResolverRuleIdT&& value) { SetResolverRuleId(std::forward<ResolverRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssociateResolverRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline const Aws::String& GetVPCId() const { return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    template<typename VPCIdT = Aws::String>
    void SetVPCId(VPCIdT&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::forward<VPCIdT>(value); }
    template<typename VPCIdT = Aws::String>
    AssociateResolverRuleRequest& WithVPCId(VPCIdT&& value) { SetVPCId(std::forward<VPCIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
