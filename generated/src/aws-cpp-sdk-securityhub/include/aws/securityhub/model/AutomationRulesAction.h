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
   * <p> One or more actions that Security Hub takes when a finding matches the
   * defined criteria of a rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesAction">AWS
   * API Reference</a></p>
   */
  class AutomationRulesAction
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesAction() = default;
    AWS_SECURITYHUB_API AutomationRulesAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies the type of action that Security Hub takes when a finding matches
     * the defined criteria of a rule. </p>
     */
    inline AutomationRulesActionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AutomationRulesActionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutomationRulesAction& WithType(AutomationRulesActionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies that the automation rule action is an update to a finding field.
     * </p>
     */
    inline const AutomationRulesFindingFieldsUpdate& GetFindingFieldsUpdate() const { return m_findingFieldsUpdate; }
    inline bool FindingFieldsUpdateHasBeenSet() const { return m_findingFieldsUpdateHasBeenSet; }
    template<typename FindingFieldsUpdateT = AutomationRulesFindingFieldsUpdate>
    void SetFindingFieldsUpdate(FindingFieldsUpdateT&& value) { m_findingFieldsUpdateHasBeenSet = true; m_findingFieldsUpdate = std::forward<FindingFieldsUpdateT>(value); }
    template<typename FindingFieldsUpdateT = AutomationRulesFindingFieldsUpdate>
    AutomationRulesAction& WithFindingFieldsUpdate(FindingFieldsUpdateT&& value) { SetFindingFieldsUpdate(std::forward<FindingFieldsUpdateT>(value)); return *this;}
    ///@}
  private:

    AutomationRulesActionType m_type{AutomationRulesActionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AutomationRulesFindingFieldsUpdate m_findingFieldsUpdate;
    bool m_findingFieldsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
