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
  class PutResolverRulePolicyRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API PutResolverRulePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResolverRulePolicy"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule that you want to share with
     * another account.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PutResolverRulePolicyRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Identity and Access Management policy statement that lists the rules that
     * you want to share with another Amazon Web Services account and the operations
     * that you want the account to be able to perform. You can specify the following
     * operations in the <code>Action</code> section of the statement:</p> <ul> <li>
     * <p> <code>route53resolver:GetResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:AssociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:DisassociateResolverRule</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRules</code> </p> </li> <li> <p>
     * <code>route53resolver:ListResolverRuleAssociations</code> </p> </li> </ul> <p>In
     * the <code>Resource</code> section of the statement, specify the ARN for the rule
     * that you want to share with another account. Specify the same ARN that you
     * specified in <code>Arn</code>.</p>
     */
    inline const Aws::String& GetResolverRulePolicy() const { return m_resolverRulePolicy; }
    inline bool ResolverRulePolicyHasBeenSet() const { return m_resolverRulePolicyHasBeenSet; }
    template<typename ResolverRulePolicyT = Aws::String>
    void SetResolverRulePolicy(ResolverRulePolicyT&& value) { m_resolverRulePolicyHasBeenSet = true; m_resolverRulePolicy = std::forward<ResolverRulePolicyT>(value); }
    template<typename ResolverRulePolicyT = Aws::String>
    PutResolverRulePolicyRequest& WithResolverRulePolicy(ResolverRulePolicyT&& value) { SetResolverRulePolicy(std::forward<ResolverRulePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_resolverRulePolicy;
    bool m_resolverRulePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
