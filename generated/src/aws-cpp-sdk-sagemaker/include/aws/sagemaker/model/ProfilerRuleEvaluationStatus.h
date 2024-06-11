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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProfilerRuleEvaluationStatus">AWS
   * API Reference</a></p>
   */
  class ProfilerRuleEvaluationStatus
  {
  public:
    AWS_SAGEMAKER_API ProfilerRuleEvaluationStatus();
    AWS_SAGEMAKER_API ProfilerRuleEvaluationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProfilerRuleEvaluationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the rule configuration.</p>
     */
    inline const Aws::String& GetRuleConfigurationName() const{ return m_ruleConfigurationName; }
    inline bool RuleConfigurationNameHasBeenSet() const { return m_ruleConfigurationNameHasBeenSet; }
    inline void SetRuleConfigurationName(const Aws::String& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = value; }
    inline void SetRuleConfigurationName(Aws::String&& value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName = std::move(value); }
    inline void SetRuleConfigurationName(const char* value) { m_ruleConfigurationNameHasBeenSet = true; m_ruleConfigurationName.assign(value); }
    inline ProfilerRuleEvaluationStatus& WithRuleConfigurationName(const Aws::String& value) { SetRuleConfigurationName(value); return *this;}
    inline ProfilerRuleEvaluationStatus& WithRuleConfigurationName(Aws::String&& value) { SetRuleConfigurationName(std::move(value)); return *this;}
    inline ProfilerRuleEvaluationStatus& WithRuleConfigurationName(const char* value) { SetRuleConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule evaluation job.</p>
     */
    inline const Aws::String& GetRuleEvaluationJobArn() const{ return m_ruleEvaluationJobArn; }
    inline bool RuleEvaluationJobArnHasBeenSet() const { return m_ruleEvaluationJobArnHasBeenSet; }
    inline void SetRuleEvaluationJobArn(const Aws::String& value) { m_ruleEvaluationJobArnHasBeenSet = true; m_ruleEvaluationJobArn = value; }
    inline void SetRuleEvaluationJobArn(Aws::String&& value) { m_ruleEvaluationJobArnHasBeenSet = true; m_ruleEvaluationJobArn = std::move(value); }
    inline void SetRuleEvaluationJobArn(const char* value) { m_ruleEvaluationJobArnHasBeenSet = true; m_ruleEvaluationJobArn.assign(value); }
    inline ProfilerRuleEvaluationStatus& WithRuleEvaluationJobArn(const Aws::String& value) { SetRuleEvaluationJobArn(value); return *this;}
    inline ProfilerRuleEvaluationStatus& WithRuleEvaluationJobArn(Aws::String&& value) { SetRuleEvaluationJobArn(std::move(value)); return *this;}
    inline ProfilerRuleEvaluationStatus& WithRuleEvaluationJobArn(const char* value) { SetRuleEvaluationJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the rule evaluation.</p>
     */
    inline const RuleEvaluationStatus& GetRuleEvaluationStatus() const{ return m_ruleEvaluationStatus; }
    inline bool RuleEvaluationStatusHasBeenSet() const { return m_ruleEvaluationStatusHasBeenSet; }
    inline void SetRuleEvaluationStatus(const RuleEvaluationStatus& value) { m_ruleEvaluationStatusHasBeenSet = true; m_ruleEvaluationStatus = value; }
    inline void SetRuleEvaluationStatus(RuleEvaluationStatus&& value) { m_ruleEvaluationStatusHasBeenSet = true; m_ruleEvaluationStatus = std::move(value); }
    inline ProfilerRuleEvaluationStatus& WithRuleEvaluationStatus(const RuleEvaluationStatus& value) { SetRuleEvaluationStatus(value); return *this;}
    inline ProfilerRuleEvaluationStatus& WithRuleEvaluationStatus(RuleEvaluationStatus&& value) { SetRuleEvaluationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details from the rule evaluation.</p>
     */
    inline const Aws::String& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const Aws::String& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(Aws::String&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline void SetStatusDetails(const char* value) { m_statusDetailsHasBeenSet = true; m_statusDetails.assign(value); }
    inline ProfilerRuleEvaluationStatus& WithStatusDetails(const Aws::String& value) { SetStatusDetails(value); return *this;}
    inline ProfilerRuleEvaluationStatus& WithStatusDetails(Aws::String&& value) { SetStatusDetails(std::move(value)); return *this;}
    inline ProfilerRuleEvaluationStatus& WithStatusDetails(const char* value) { SetStatusDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the rule evaluation status was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ProfilerRuleEvaluationStatus& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ProfilerRuleEvaluationStatus& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleConfigurationName;
    bool m_ruleConfigurationNameHasBeenSet = false;

    Aws::String m_ruleEvaluationJobArn;
    bool m_ruleEvaluationJobArnHasBeenSet = false;

    RuleEvaluationStatus m_ruleEvaluationStatus;
    bool m_ruleEvaluationStatusHasBeenSet = false;

    Aws::String m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
