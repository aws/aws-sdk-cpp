/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/InspectionLevel.h>
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
   * <p>Details for your use of the Bot Control managed rule group,
   * <code>AWSManagedRulesBotControlRuleSet</code>. This configuration is used in
   * <code>ManagedRuleGroupConfig</code>. </p> <p>For additional information about
   * this and the other intelligent threat mitigation rule groups, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-managed-protections">Intelligent
   * threat mitigation in WAF</a> and <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-list">Amazon
   * Web Services Managed Rules rule groups list</a> in the <i>WAF Developer
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesBotControlRuleSet">AWS
   * API Reference</a></p>
   */
  class AWSManagedRulesBotControlRuleSet
  {
  public:
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet() = default;
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AWSManagedRulesBotControlRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inspection level to use for the Bot Control rule group. The common level
     * is the least expensive. The targeted level includes all common level rules and
     * adds rules with more advanced inspection criteria. For details, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline InspectionLevel GetInspectionLevel() const { return m_inspectionLevel; }
    inline bool InspectionLevelHasBeenSet() const { return m_inspectionLevelHasBeenSet; }
    inline void SetInspectionLevel(InspectionLevel value) { m_inspectionLevelHasBeenSet = true; m_inspectionLevel = value; }
    inline AWSManagedRulesBotControlRuleSet& WithInspectionLevel(InspectionLevel value) { SetInspectionLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only to the targeted inspection level. </p> <p>Determines whether to
     * use machine learning (ML) to analyze your web traffic for bot-related activity.
     * Machine learning is required for the Bot Control rules
     * <code>TGT_ML_CoordinatedActivityLow</code> and
     * <code>TGT_ML_CoordinatedActivityMedium</code>, which inspect for anomalous
     * behavior that might indicate distributed, coordinated bot activity.</p> <p>For
     * more information about this choice, see the listing for these rules in the table
     * at <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html#aws-managed-rule-groups-bot-rules">Bot
     * Control rules listing</a> in the <i>WAF Developer Guide</i>.</p> <p>Default:
     * <code>TRUE</code> </p>
     */
    inline bool GetEnableMachineLearning() const { return m_enableMachineLearning; }
    inline bool EnableMachineLearningHasBeenSet() const { return m_enableMachineLearningHasBeenSet; }
    inline void SetEnableMachineLearning(bool value) { m_enableMachineLearningHasBeenSet = true; m_enableMachineLearning = value; }
    inline AWSManagedRulesBotControlRuleSet& WithEnableMachineLearning(bool value) { SetEnableMachineLearning(value); return *this;}
    ///@}
  private:

    InspectionLevel m_inspectionLevel{InspectionLevel::NOT_SET};
    bool m_inspectionLevelHasBeenSet = false;

    bool m_enableMachineLearning{false};
    bool m_enableMachineLearningHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
