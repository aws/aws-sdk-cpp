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
    AWS_ROUTE53RESOLVER_API AssociateResolverRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverRule"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline const Aws::String& GetResolverRuleId() const{ return m_resolverRuleId; }

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(const Aws::String& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = value; }

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(Aws::String&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::move(value); }

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline void SetResolverRuleId(const char* value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId.assign(value); }

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(const Aws::String& value) { SetResolverRuleId(value); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(Aws::String&& value) { SetResolverRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to associate with the VPC. To list
     * the existing Resolver rules, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_ListResolverRules.html">ListResolverRules</a>.</p>
     */
    inline AssociateResolverRuleRequest& WithResolverRuleId(const char* value) { SetResolverRuleId(value); return *this;}


    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the association that you're creating between a Resolver rule and a
     * VPC.</p>
     */
    inline AssociateResolverRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that you want to associate the Resolver rule with.</p>
     */
    inline AssociateResolverRuleRequest& WithVPCId(const char* value) { SetVPCId(value); return *this;}

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
