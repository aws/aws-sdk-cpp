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
    AWS_SAGEMAKER_API PipelineExecutionStep() = default;
    AWS_SAGEMAKER_API PipelineExecutionStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineExecutionStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step that is executed.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    PipelineExecutionStep& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the step.</p>
     */
    inline const Aws::String& GetStepDisplayName() const { return m_stepDisplayName; }
    inline bool StepDisplayNameHasBeenSet() const { return m_stepDisplayNameHasBeenSet; }
    template<typename StepDisplayNameT = Aws::String>
    void SetStepDisplayName(StepDisplayNameT&& value) { m_stepDisplayNameHasBeenSet = true; m_stepDisplayName = std::forward<StepDisplayNameT>(value); }
    template<typename StepDisplayNameT = Aws::String>
    PipelineExecutionStep& WithStepDisplayName(StepDisplayNameT&& value) { SetStepDisplayName(std::forward<StepDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step.</p>
     */
    inline const Aws::String& GetStepDescription() const { return m_stepDescription; }
    inline bool StepDescriptionHasBeenSet() const { return m_stepDescriptionHasBeenSet; }
    template<typename StepDescriptionT = Aws::String>
    void SetStepDescription(StepDescriptionT&& value) { m_stepDescriptionHasBeenSet = true; m_stepDescription = std::forward<StepDescriptionT>(value); }
    template<typename StepDescriptionT = Aws::String>
    PipelineExecutionStep& WithStepDescription(StepDescriptionT&& value) { SetStepDescription(std::forward<StepDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the step started executing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PipelineExecutionStep& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the step stopped executing.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    PipelineExecutionStep& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the step execution.</p>
     */
    inline StepStatus GetStepStatus() const { return m_stepStatus; }
    inline bool StepStatusHasBeenSet() const { return m_stepStatusHasBeenSet; }
    inline void SetStepStatus(StepStatus value) { m_stepStatusHasBeenSet = true; m_stepStatus = value; }
    inline PipelineExecutionStep& WithStepStatus(StepStatus value) { SetStepStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this pipeline execution step was cached, details on the cache hit.</p>
     */
    inline const CacheHitResult& GetCacheHitResult() const { return m_cacheHitResult; }
    inline bool CacheHitResultHasBeenSet() const { return m_cacheHitResultHasBeenSet; }
    template<typename CacheHitResultT = CacheHitResult>
    void SetCacheHitResult(CacheHitResultT&& value) { m_cacheHitResultHasBeenSet = true; m_cacheHitResult = std::forward<CacheHitResultT>(value); }
    template<typename CacheHitResultT = CacheHitResult>
    PipelineExecutionStep& WithCacheHitResult(CacheHitResultT&& value) { SetCacheHitResult(std::forward<CacheHitResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the step failed execution. This is only returned if the step
     * failed its execution.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    PipelineExecutionStep& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata to run the pipeline step.</p>
     */
    inline const PipelineExecutionStepMetadata& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = PipelineExecutionStepMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = PipelineExecutionStepMetadata>
    PipelineExecutionStep& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current attempt of the execution step. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-retry-policy.html">Retry
     * Policy for SageMaker Pipelines steps</a>.</p>
     */
    inline int GetAttemptCount() const { return m_attemptCount; }
    inline bool AttemptCountHasBeenSet() const { return m_attemptCountHasBeenSet; }
    inline void SetAttemptCount(int value) { m_attemptCountHasBeenSet = true; m_attemptCount = value; }
    inline PipelineExecutionStep& WithAttemptCount(int value) { SetAttemptCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from an execution of the current pipeline from which results are
     * reused for this step.</p>
     */
    inline const SelectiveExecutionResult& GetSelectiveExecutionResult() const { return m_selectiveExecutionResult; }
    inline bool SelectiveExecutionResultHasBeenSet() const { return m_selectiveExecutionResultHasBeenSet; }
    template<typename SelectiveExecutionResultT = SelectiveExecutionResult>
    void SetSelectiveExecutionResult(SelectiveExecutionResultT&& value) { m_selectiveExecutionResultHasBeenSet = true; m_selectiveExecutionResult = std::forward<SelectiveExecutionResultT>(value); }
    template<typename SelectiveExecutionResultT = SelectiveExecutionResult>
    PipelineExecutionStep& WithSelectiveExecutionResult(SelectiveExecutionResultT&& value) { SetSelectiveExecutionResult(std::forward<SelectiveExecutionResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::String m_stepDisplayName;
    bool m_stepDisplayNameHasBeenSet = false;

    Aws::String m_stepDescription;
    bool m_stepDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    StepStatus m_stepStatus{StepStatus::NOT_SET};
    bool m_stepStatusHasBeenSet = false;

    CacheHitResult m_cacheHitResult;
    bool m_cacheHitResultHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    PipelineExecutionStepMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    int m_attemptCount{0};
    bool m_attemptCountHasBeenSet = false;

    SelectiveExecutionResult m_selectiveExecutionResult;
    bool m_selectiveExecutionResultHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
