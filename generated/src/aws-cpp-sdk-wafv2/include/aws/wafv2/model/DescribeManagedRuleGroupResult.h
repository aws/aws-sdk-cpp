/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RuleSummary.h>
#include <aws/wafv2/model/LabelSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class DescribeManagedRuleGroupResult
  {
  public:
    AWS_WAFV2_API DescribeManagedRuleGroupResult() = default;
    AWS_WAFV2_API DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API DescribeManagedRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed rule group's version. </p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    DescribeManagedRuleGroupResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of the Amazon Simple Notification Service SNS
     * topic that's used to provide notification of changes to the managed rule group.
     * You can subscribe to the SNS topic to receive notifications when the managed
     * rule group is modified, such as for new versions and for version expiration. For
     * more information, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/welcome.html">Amazon Simple
     * Notification Service Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    DescribeManagedRuleGroupResult& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web ACL capacity units (WCUs) required for this rule group.</p> <p>WAF
     * uses WCUs to calculate and control the operating resources that are used to run
     * your rules, rule groups, and web ACLs. WAF calculates capacity differently for
     * each rule type, to reflect the relative cost of each rule. Simple rules that
     * cost little to run use fewer WCUs than more complex rules that use more
     * processing power. Rule group capacity is fixed at creation, which helps users
     * plan their web ACL WCU usage when they use a rule group. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-waf-capacity-units.html">WAF
     * web ACL capacity units (WCU)</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline long long GetCapacity() const { return m_capacity; }
    inline void SetCapacity(long long value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline DescribeManagedRuleGroupResult& WithCapacity(long long value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<RuleSummary>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<RuleSummary>>
    DescribeManagedRuleGroupResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = RuleSummary>
    DescribeManagedRuleGroupResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label namespace prefix for this rule group. All labels added by rules in
     * this rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const { return m_labelNamespace; }
    template<typename LabelNamespaceT = Aws::String>
    void SetLabelNamespace(LabelNamespaceT&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::forward<LabelNamespaceT>(value); }
    template<typename LabelNamespaceT = Aws::String>
    DescribeManagedRuleGroupResult& WithLabelNamespace(LabelNamespaceT&& value) { SetLabelNamespace(std::forward<LabelNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The labels that one or more rules in this rule group add to matching web
     * requests. These labels are defined in the <code>RuleLabels</code> for a
     * <a>Rule</a>.</p>
     */
    inline const Aws::Vector<LabelSummary>& GetAvailableLabels() const { return m_availableLabels; }
    template<typename AvailableLabelsT = Aws::Vector<LabelSummary>>
    void SetAvailableLabels(AvailableLabelsT&& value) { m_availableLabelsHasBeenSet = true; m_availableLabels = std::forward<AvailableLabelsT>(value); }
    template<typename AvailableLabelsT = Aws::Vector<LabelSummary>>
    DescribeManagedRuleGroupResult& WithAvailableLabels(AvailableLabelsT&& value) { SetAvailableLabels(std::forward<AvailableLabelsT>(value)); return *this;}
    template<typename AvailableLabelsT = LabelSummary>
    DescribeManagedRuleGroupResult& AddAvailableLabels(AvailableLabelsT&& value) { m_availableLabelsHasBeenSet = true; m_availableLabels.emplace_back(std::forward<AvailableLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that one or more rules in this rule group match against in label
     * match statements. These labels are defined in a <code>LabelMatchStatement</code>
     * specification, in the <a>Statement</a> definition of a rule. </p>
     */
    inline const Aws::Vector<LabelSummary>& GetConsumedLabels() const { return m_consumedLabels; }
    template<typename ConsumedLabelsT = Aws::Vector<LabelSummary>>
    void SetConsumedLabels(ConsumedLabelsT&& value) { m_consumedLabelsHasBeenSet = true; m_consumedLabels = std::forward<ConsumedLabelsT>(value); }
    template<typename ConsumedLabelsT = Aws::Vector<LabelSummary>>
    DescribeManagedRuleGroupResult& WithConsumedLabels(ConsumedLabelsT&& value) { SetConsumedLabels(std::forward<ConsumedLabelsT>(value)); return *this;}
    template<typename ConsumedLabelsT = LabelSummary>
    DescribeManagedRuleGroupResult& AddConsumedLabels(ConsumedLabelsT&& value) { m_consumedLabelsHasBeenSet = true; m_consumedLabels.emplace_back(std::forward<ConsumedLabelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeManagedRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    long long m_capacity{0};
    bool m_capacityHasBeenSet = false;

    Aws::Vector<RuleSummary> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;

    Aws::Vector<LabelSummary> m_availableLabels;
    bool m_availableLabelsHasBeenSet = false;

    Aws::Vector<LabelSummary> m_consumedLabels;
    bool m_consumedLabelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
