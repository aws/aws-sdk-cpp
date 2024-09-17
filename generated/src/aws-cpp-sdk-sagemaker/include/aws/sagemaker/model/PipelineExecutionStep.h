/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StepStatus.h>
#include <aws/sagemaker/model/CacheHitResult.h>
#include <aws/sagemaker/model/PipelineExecutionStepMetadata.h>
#include <aws/sagemaker/model/SelectiveExecutionResult.h>
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
   * <p>An execution of a step in a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionStep">AWS
   * API Reference</a></p>
   */
  class PipelineExecutionStep
  {
  public:
    AWS_SAGEMAKER_API PipelineExecutionStep();
    AWS_SAGEMAKER_API PipelineExecutionStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step that is executed.</p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }
    inline PipelineExecutionStep& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}
    inline PipelineExecutionStep& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}
    inline PipelineExecutionStep& WithStepName(const char* value) { SetStepName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the step.</p>
     */
    inline const Aws::String& GetStepDisplayName() const{ return m_stepDisplayName; }
    inline bool StepDisplayNameHasBeenSet() const { return m_stepDisplayNameHasBeenSet; }
    inline void SetStepDisplayName(const Aws::String& value) { m_stepDisplayNameHasBeenSet = true; m_stepDisplayName = value; }
    inline void SetStepDisplayName(Aws::String&& value) { m_stepDisplayNameHasBeenSet = true; m_stepDisplayName = std::move(value); }
    inline void SetStepDisplayName(const char* value) { m_stepDisplayNameHasBeenSet = true; m_stepDisplayName.assign(value); }
    inline PipelineExecutionStep& WithStepDisplayName(const Aws::String& value) { SetStepDisplayName(value); return *this;}
    inline PipelineExecutionStep& WithStepDisplayName(Aws::String&& value) { SetStepDisplayName(std::move(value)); return *this;}
    inline PipelineExecutionStep& WithStepDisplayName(const char* value) { SetStepDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetStepDescription() const{ return m_stepDescription; }
    inline bool StepDescriptionHasBeenSet() const { return m_stepDescriptionHasBeenSet; }
    inline void SetStepDescription(const Aws::String& value) { m_stepDescriptionHasBeenSet = true; m_stepDescription = value; }
    inline void SetStepDescription(Aws::String&& value) { m_stepDescriptionHasBeenSet = true; m_stepDescription = std::move(value); }
    inline void SetStepDescription(const char* value) { m_stepDescriptionHasBeenSet = true; m_stepDescription.assign(value); }
    inline PipelineExecutionStep& WithStepDescription(const Aws::String& value) { SetStepDescription(value); return *this;}
    inline PipelineExecutionStep& WithStepDescription(Aws::String&& value) { SetStepDescription(std::move(value)); return *this;}
    inline PipelineExecutionStep& WithStepDescription(const char* value) { SetStepDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the step started executing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline PipelineExecutionStep& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline PipelineExecutionStep& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline PipelineExecutionStep& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline PipelineExecutionStep& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step execution.</p>
     */
    inline const StepStatus& GetStepStatus() const{ return m_stepStatus; }
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
    inline void SetStepStatus(const StepStatus& value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline void SetStepStatus(StepStatus&& value) { m_stepStatusHasBeenSet = true; m_stepStatus = std::move(value); }
    inline PipelineExecutionStep& WithStepStatus(const StepStatus& value) { SetStepStatus(value); return *this;}
    inline PipelineExecutionStep& WithStepStatus(StepStatus&& value) { SetStepStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline const CacheHitResult& GetCacheHitResult() const{ return m_cacheHitResult; }
    inline bool CacheHitResultHasBeenSet() const { return m_cacheHitResultHasBeenSet; }
    inline void SetCacheHitResult(const CacheHitResult& value) { m_cacheHitResultHasBeenSet = true; m_cacheHitResult = value; }
    inline void SetCacheHitResult(CacheHitResult&& value) { m_cacheHitResultHasBeenSet = true; m_cacheHitResult = std::move(value); }
    inline PipelineExecutionStep& WithCacheHitResult(const CacheHitResult& value) { SetCacheHitResult(value); return *this;}
    inline PipelineExecutionStep& WithCacheHitResult(CacheHitResult&& value) { SetCacheHitResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline PipelineExecutionStep& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline PipelineExecutionStep& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline PipelineExecutionStep& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata to run the pipeline step.</p>
     */
    inline const PipelineExecutionStepMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const PipelineExecutionStepMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(PipelineExecutionStepMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline PipelineExecutionStep& WithMetadata(const PipelineExecutionStepMetadata& value) { SetMetadata(value); return *this;}
    inline PipelineExecutionStep& WithMetadata(PipelineExecutionStepMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current attempt of the execution step. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-retry-policy.html">Retry
     * Policy for SageMaker Pipelines steps</a>.</p>
     */
    inline int GetAttemptCount() const{ return m_attemptCount; }
    inline bool AttemptCountHasBeenSet() const { return m_attemptCountHasBeenSet; }
    inline void SetAttemptCount(int value) { m_attemptCountHasBeenSet = true; m_attemptCount = value; }
    inline PipelineExecutionStep& WithAttemptCount(int value) { SetAttemptCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from an execution of the current pipeline from which results are
     * reused for this step.</p>
     */
    inline const SelectiveExecutionResult& GetSelectiveExecutionResult() const{ return m_selectiveExecutionResult; }
    inline bool SelectiveExecutionResultHasBeenSet() const { return m_selectiveExecutionResultHasBeenSet; }
    inline void SetSelectiveExecutionResult(const SelectiveExecutionResult& value) { m_selectiveExecutionResultHasBeenSet = true; m_selectiveExecutionResult = value; }
    inline void SetSelectiveExecutionResult(SelectiveExecutionResult&& value) { m_selectiveExecutionResultHasBeenSet = true; m_selectiveExecutionResult = std::move(value); }
    inline PipelineExecutionStep& WithSelectiveExecutionResult(const SelectiveExecutionResult& value) { SetSelectiveExecutionResult(value); return *this;}
    inline PipelineExecutionStep& WithSelectiveExecutionResult(SelectiveExecutionResult&& value) { SetSelectiveExecutionResult(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_stepDisplayName;
    bool m_stepDisplayNameHasBeenSet = false;

    Aws::String m_stepDescription;
    bool m_stepDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    StepStatus m_stepStatus;
    bool m_stepStatusHasBeenSet = false;

    CacheHitResult m_cacheHitResult;
    bool m_cacheHitResultHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    PipelineExecutionStepMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    int m_attemptCount;
    bool m_attemptCountHasBeenSet = false;

    SelectiveExecutionResult m_selectiveExecutionResult;
    bool m_selectiveExecutionResultHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
