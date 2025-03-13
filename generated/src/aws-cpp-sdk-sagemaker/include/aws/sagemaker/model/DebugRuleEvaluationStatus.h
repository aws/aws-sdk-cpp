/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RuleEvaluationStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Information about the status of the rule evaluation.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DebugRuleEvaluationStatus">AWS
   * API Reference</a></p>
   */
  class DebugRuleEvaluationStatus
  {
  public:
    AWS_SAGEMAKER_API DebugRuleEvaluationStatus() = default;
    AWS_SAGEMAKER_API DebugRuleEvaluationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DebugRuleEvaluationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule configuration.</p>
     */
    inline const Aws::String& GetRuleConfigurationName() const { return m_ruleConfigurationName; }
    inline bool RuleConfigurationNameHasBeenSet() const { return m_ruleConfigurationNameHasBeenSet; }
    template<typename RuleConfigurationNameT = Aws::String>
    void SetRuleConfigurationName(RuleConfigurationNameT&& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = std::forward<RuleConfigurationNameT>(value); }
    template<typename RuleConfigurationNameT = Aws::String>
    DebugRuleEvaluationStatus& WithRuleConfigurationName(RuleConfigurationNameT&& value) { SetRuleConfigurationName(std::forward<RuleConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule evaluation job.</p>
     */
    inline const Aws::String& GetRuleEvaluationJobArn() const { return m_ruleEvaluationJobArn; }
    inline bool RuleEvaluationJobArnHasBeenSet() const { return m_ruleEvaluationJobArnHasBeenSet; }
    template<typename RuleEvaluationJobArnT = Aws::String>
    void SetRuleEvaluationJobArn(RuleEvaluationJobArnT&& value) { m_ruleEvaluationJobArnHasBeenSet = true; m_ruleEvaluationJobArn = std::forward<RuleEvaluationJobArnT>(value); }
    template<typename RuleEvaluationJobArnT = Aws::String>
    DebugRuleEvaluationStatus& WithRuleEvaluationJobArn(RuleEvaluationJobArnT&& value) { SetRuleEvaluationJobArn(std::forward<RuleEvaluationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the rule evaluation.</p>
     */
    inline RuleEvaluationStatus GetRuleEvaluationStatus() const { return m_ruleEvaluationStatus; }
    inline bool RuleEvaluationStatusHasBeenSet() const { return m_ruleEvaluationStatusHasBeenSet; }
    inline void SetRuleEvaluationStatus(RuleEvaluationStatus value) { m_ruleEvaluationStatusHasBeenSet = true; m_ruleEvaluationStatus = value; }
    inline DebugRuleEvaluationStatus& WithRuleEvaluationStatus(RuleEvaluationStatus value) { SetRuleEvaluationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details from the rule evaluation.</p>
     */
    inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = Aws::String>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = Aws::String>
    DebugRuleEvaluationStatus& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the rule evaluation status was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DebugRuleEvaluationStatus& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleConfigurationName;
    bool m_ruleConfigurationNameHasBeenSet = false;

    Aws::String m_ruleEvaluationJobArn;
    bool m_ruleEvaluationJobArnHasBeenSet = false;

    RuleEvaluationStatus m_ruleEvaluationStatus{RuleEvaluationStatus::NOT_SET};
    bool m_ruleEvaluationStatusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
