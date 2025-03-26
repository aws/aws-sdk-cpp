/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/Tag.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class CreateRuleGroupRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API CreateRuleGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRuleGroup"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the rule group. You cannot change the name of a rule group after
     * you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRuleGroupRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

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
    inline CreateRuleGroupRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>When
     * you create your own rule group, you define this, and you cannot change it after
     * creation. When you add or modify the rules in a rule group, WAF enforces this
     * limit. You can check the capacity for a set of rules using
     * <a>CheckCapacity</a>.</p> <p>WAF uses WCUs to calculate and control the
     * operating resources that are used to run your rules, rule groups, and web ACLs.
     * WAF calculates capacity differently for each rule type, to reflect the relative
     * cost of each rule. Simple rules that cost little to run use fewer WCUs than more
     * complex rules that use more processing power. Rule group capacity is fixed at
     * creation, which helps users plan their web ACL WCU usage when they use a rule
     * group. For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-waf-capacity-units.html">WAF
     * web ACL capacity units (WCU)</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline long long GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline CreateRuleGroupRequest& WithCapacity(long long value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the rule group that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRuleGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * manage. Each rule includes one top-level statement that WAF uses to identify
     * matching web requests, and parameters that govern how WAF handles them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<Rule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<Rule>>
    CreateRuleGroupRequest& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    CreateRuleGroupRequest& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const { return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    template<typename VisibilityConfigT = VisibilityConfig>
    void SetVisibilityConfig(VisibilityConfigT&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::forward<VisibilityConfigT>(value); }
    template<typename VisibilityConfigT = VisibilityConfig>
    CreateRuleGroupRequest& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRuleGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRuleGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the rule group, and then use them in the rules that you define in the
     * rule group. </p> <p>For information about customizing web requests and
     * responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>. </p>
     * <p>For information about the limits on count and size for custom request and
     * response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const { return m_customResponseBodies; }
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }
    template<typename CustomResponseBodiesT = Aws::Map<Aws::String, CustomResponseBody>>
    void SetCustomResponseBodies(CustomResponseBodiesT&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::forward<CustomResponseBodiesT>(value); }
    template<typename CustomResponseBodiesT = Aws::Map<Aws::String, CustomResponseBody>>
    CreateRuleGroupRequest& WithCustomResponseBodies(CustomResponseBodiesT&& value) { SetCustomResponseBodies(std::forward<CustomResponseBodiesT>(value)); return *this;}
    template<typename CustomResponseBodiesKeyT = Aws::String, typename CustomResponseBodiesValueT = CustomResponseBody>
    CreateRuleGroupRequest& AddCustomResponseBodies(CustomResponseBodiesKeyT&& key, CustomResponseBodiesValueT&& value) {
      m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::forward<CustomResponseBodiesKeyT>(key), std::forward<CustomResponseBodiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    long long m_capacity{0};
    bool m_capacityHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
