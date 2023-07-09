/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AutomationRulesActionType.h>
#include <aws/securityhub/model/AutomationRulesFindingFieldsUpdate.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> One or more actions to update finding fields if a finding matches the
   * defined criteria of the rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesAction">AWS
   * API Reference</a></p>
   */
  class AutomationRulesAction
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesAction();
    AWS_SECURITYHUB_API AutomationRulesAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline const AutomationRulesActionType& GetType() const{ return m_type; }

    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline void SetType(const AutomationRulesActionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline void SetType(AutomationRulesActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline AutomationRulesAction& WithType(const AutomationRulesActionType& value) { SetType(value); return *this;}

    /**
     * <p> Specifies that the rule action should update the <code>Types</code> finding
     * field. The <code>Types</code> finding field classifies findings in the format of
     * namespace/category/classifier. For more information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>. </p>
     */
    inline AutomationRulesAction& WithType(AutomationRulesActionType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline const AutomationRulesFindingFieldsUpdate& GetFindingFieldsUpdate() const{ return m_findingFieldsUpdate; }

    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline bool FindingFieldsUpdateHasBeenSet() const { return m_findingFieldsUpdateHasBeenSet; }

    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline void SetFindingFieldsUpdate(const AutomationRulesFindingFieldsUpdate& value) { m_findingFieldsUpdateHasBeenSet = true; m_findingFieldsUpdate = value; }

    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline void SetFindingFieldsUpdate(AutomationRulesFindingFieldsUpdate&& value) { m_findingFieldsUpdateHasBeenSet = true; m_findingFieldsUpdate = std::move(value); }

    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline AutomationRulesAction& WithFindingFieldsUpdate(const AutomationRulesFindingFieldsUpdate& value) { SetFindingFieldsUpdate(value); return *this;}

    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline AutomationRulesAction& WithFindingFieldsUpdate(AutomationRulesFindingFieldsUpdate&& value) { SetFindingFieldsUpdate(std::move(value)); return *this;}

  private:

    AutomationRulesActionType m_type;
    bool m_typeHasBeenSet = false;

    AutomationRulesFindingFieldsUpdate m_findingFieldsUpdate;
    bool m_findingFieldsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
