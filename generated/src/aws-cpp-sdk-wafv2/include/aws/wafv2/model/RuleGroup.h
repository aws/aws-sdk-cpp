/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <aws/wafv2/model/LabelSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <p> A rule group defines a collection of rules to inspect and control web
   * requests that you can use in a <a>WebACL</a>. When you create a rule group, you
   * define an immutable capacity limit. If you update a rule group, you must stay
   * within the capacity. This allows others to reuse the rule group with confidence
   * in its capacity requirements. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleGroup">AWS API
   * Reference</a></p>
   */
  class RuleGroup
  {
  public:
    AWS_WAFV2_API RuleGroup() = default;
    AWS_WAFV2_API RuleGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RuleGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    RuleGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    RuleGroup& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline RuleGroup& WithCapacity(long long value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    RuleGroup& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
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
    RuleGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    RuleGroup& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = Rule>
    RuleGroup& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
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
    RuleGroup& WithVisibilityConfig(VisibilityConfigT&& value) { SetVisibilityConfig(std::forward<VisibilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for your rule groups is the following: </p> <p>
     * <code>awswaf:&lt;account ID&gt;:rulegroup:&lt;rule group name&gt;:</code> </p>
     * </li> <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const { return m_labelNamespace; }
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }
    template<typename LabelNamespaceT = Aws::String>
    void SetLabelNamespace(LabelNamespaceT&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::forward<LabelNamespaceT>(value); }
    template<typename LabelNamespaceT = Aws::String>
    RuleGroup& WithLabelNamespace(LabelNamespaceT&& value) { SetLabelNamespace(std::forward<LabelNamespaceT>(value)); return *this;}
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
    RuleGroup& WithCustomResponseBodies(CustomResponseBodiesT&& value) { SetCustomResponseBodies(std::forward<CustomResponseBodiesT>(value)); return *this;}
    template<typename CustomResponseBodiesKeyT = Aws::String, typename CustomResponseBodiesValueT = CustomResponseBody>
    RuleGroup& AddCustomResponseBodies(CustomResponseBodiesKeyT&& key, CustomResponseBodiesValueT&& value) {
      m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::forward<CustomResponseBodiesKeyT>(key), std::forward<CustomResponseBodiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline const Aws::Vector<LabelSummary>& GetAvailableLabels() const { return m_availableLabels; }
    inline bool AvailableLabelsHasBeenSet() const { return m_availableLabelsHasBeenSet; }
    template<typename AvailableLabelsT = Aws::Vector<LabelSummary>>
    void SetAvailableLabels(AvailableLabelsT&& value) { m_availableLabelsHasBeenSet = true; m_availableLabels = std::forward<AvailableLabelsT>(value); }
    template<typename AvailableLabelsT = Aws::Vector<LabelSummary>>
    RuleGroup& WithAvailableLabels(AvailableLabelsT&& value) { SetAvailableLabels(std::forward<AvailableLabelsT>(value)); return *this;}
    template<typename AvailableLabelsT = LabelSummary>
    RuleGroup& AddAvailableLabels(AvailableLabelsT&& value) { m_availableLabelsHasBeenSet = true; m_availableLabels.emplace_back(std::forward<AvailableLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline const Aws::Vector<LabelSummary>& GetConsumedLabels() const { return m_consumedLabels; }
    inline bool ConsumedLabelsHasBeenSet() const { return m_consumedLabelsHasBeenSet; }
    template<typename ConsumedLabelsT = Aws::Vector<LabelSummary>>
    void SetConsumedLabels(ConsumedLabelsT&& value) { m_consumedLabelsHasBeenSet = true; m_consumedLabels = std::forward<ConsumedLabelsT>(value); }
    template<typename ConsumedLabelsT = Aws::Vector<LabelSummary>>
    RuleGroup& WithConsumedLabels(ConsumedLabelsT&& value) { SetConsumedLabels(std::forward<ConsumedLabelsT>(value)); return *this;}
    template<typename ConsumedLabelsT = LabelSummary>
    RuleGroup& AddConsumedLabels(ConsumedLabelsT&& value) { m_consumedLabelsHasBeenSet = true; m_consumedLabels.emplace_back(std::forward<ConsumedLabelsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_capacity{0};
    bool m_capacityHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    Aws::String m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;

    Aws::Vector<LabelSummary> m_availableLabels;
    bool m_availableLabelsHasBeenSet = false;

    Aws::Vector<LabelSummary> m_consumedLabels;
    bool m_consumedLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
