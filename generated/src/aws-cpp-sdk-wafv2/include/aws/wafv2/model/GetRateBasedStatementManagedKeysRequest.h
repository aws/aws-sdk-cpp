/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class GetRateBasedStatementManagedKeysRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API GetRateBasedStatementManagedKeysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRateBasedStatementManagedKeys"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. For an Amplify application, use
     * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline GetRateBasedStatementManagedKeysRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetWebACLName() const { return m_webACLName; }
    inline bool WebACLNameHasBeenSet() const { return m_webACLNameHasBeenSet; }
    template<typename WebACLNameT = Aws::String>
    void SetWebACLName(WebACLNameT&& value) { m_webACLNameHasBeenSet = true; m_webACLName = std::forward<WebACLNameT>(value); }
    template<typename WebACLNameT = Aws::String>
    GetRateBasedStatementManagedKeysRequest& WithWebACLName(WebACLNameT&& value) { SetWebACLName(std::forward<WebACLNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    GetRateBasedStatementManagedKeysRequest& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule group reference statement in your web ACL. This is
     * required only when you have the rate-based rule nested inside a rule group. </p>
     */
    inline const Aws::String& GetRuleGroupRuleName() const { return m_ruleGroupRuleName; }
    inline bool RuleGroupRuleNameHasBeenSet() const { return m_ruleGroupRuleNameHasBeenSet; }
    template<typename RuleGroupRuleNameT = Aws::String>
    void SetRuleGroupRuleName(RuleGroupRuleNameT&& value) { m_ruleGroupRuleNameHasBeenSet = true; m_ruleGroupRuleName = std::forward<RuleGroupRuleNameT>(value); }
    template<typename RuleGroupRuleNameT = Aws::String>
    GetRateBasedStatementManagedKeysRequest& WithRuleGroupRuleName(RuleGroupRuleNameT&& value) { SetRuleGroupRuleName(std::forward<RuleGroupRuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rate-based rule to get the keys for. If you have the rule
     * defined inside a rule group that you're using in your web ACL, also provide the
     * name of the rule group reference statement in the request parameter
     * <code>RuleGroupRuleName</code>.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    GetRateBasedStatementManagedKeysRequest& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}
  private:

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_webACLName;
    bool m_webACLNameHasBeenSet = false;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    Aws::String m_ruleGroupRuleName;
    bool m_ruleGroupRuleNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
