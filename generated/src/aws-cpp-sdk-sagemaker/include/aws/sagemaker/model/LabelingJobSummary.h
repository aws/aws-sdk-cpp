/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/LabelingJobStatus.h>
#include <aws/sagemaker/model/LabelCounters.h>
#include <aws/sagemaker/model/LabelingJobOutput.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
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
   * <p>Provides summary information about a labeling job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobSummary">AWS
   * API Reference</a></p>
   */
  class LabelingJobSummary
  {
  public:
    AWS_SAGEMAKER_API LabelingJobSummary() = default;
    AWS_SAGEMAKER_API LabelingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobName() const { return m_labelingJobName; }
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }
    template<typename LabelingJobNameT = Aws::String>
    void SetLabelingJobName(LabelingJobNameT&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::forward<LabelingJobNameT>(value); }
    template<typename LabelingJobNameT = Aws::String>
    LabelingJobSummary& WithLabelingJobName(LabelingJobNameT&& value) { SetLabelingJobName(std::forward<LabelingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    LabelingJobSummary& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    LabelingJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    LabelingJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the labeling job. </p>
     */
    inline LabelingJobStatus GetLabelingJobStatus() const { return m_labelingJobStatus; }
    inline bool LabelingJobStatusHasBeenSet() const { return m_labelingJobStatusHasBeenSet; }
    inline void SetLabelingJobStatus(LabelingJobStatus value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = value; }
    inline LabelingJobSummary& WithLabelingJobStatus(LabelingJobStatus value) { SetLabelingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline const LabelCounters& GetLabelCounters() const { return m_labelCounters; }
    inline bool LabelCountersHasBeenSet() const { return m_labelCountersHasBeenSet; }
    template<typename LabelCountersT = LabelCounters>
    void SetLabelCounters(LabelCountersT&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::forward<LabelCountersT>(value); }
    template<typename LabelCountersT = LabelCounters>
    LabelingJobSummary& WithLabelCounters(LabelCountersT&& value) { SetLabelCounters(std::forward<LabelCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline const Aws::String& GetWorkteamArn() const { return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    template<typename WorkteamArnT = Aws::String>
    void SetWorkteamArn(WorkteamArnT&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::forward<WorkteamArnT>(value); }
    template<typename WorkteamArnT = Aws::String>
    LabelingJobSummary& WithWorkteamArn(WorkteamArnT&& value) { SetWorkteamArn(std::forward<WorkteamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline const Aws::String& GetPreHumanTaskLambdaArn() const { return m_preHumanTaskLambdaArn; }
    inline bool PreHumanTaskLambdaArnHasBeenSet() const { return m_preHumanTaskLambdaArnHasBeenSet; }
    template<typename PreHumanTaskLambdaArnT = Aws::String>
    void SetPreHumanTaskLambdaArn(PreHumanTaskLambdaArnT&& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = std::forward<PreHumanTaskLambdaArnT>(value); }
    template<typename PreHumanTaskLambdaArnT = Aws::String>
    LabelingJobSummary& WithPreHumanTaskLambdaArn(PreHumanTaskLambdaArnT&& value) { SetPreHumanTaskLambdaArn(std::forward<PreHumanTaskLambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const { return m_annotationConsolidationLambdaArn; }
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }
    template<typename AnnotationConsolidationLambdaArnT = Aws::String>
    void SetAnnotationConsolidationLambdaArn(AnnotationConsolidationLambdaArnT&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::forward<AnnotationConsolidationLambdaArnT>(value); }
    template<typename AnnotationConsolidationLambdaArnT = Aws::String>
    LabelingJobSummary& WithAnnotationConsolidationLambdaArn(AnnotationConsolidationLambdaArnT&& value) { SetAnnotationConsolidationLambdaArn(std::forward<AnnotationConsolidationLambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    LabelingJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const { return m_labelingJobOutput; }
    inline bool LabelingJobOutputHasBeenSet() const { return m_labelingJobOutputHasBeenSet; }
    template<typename LabelingJobOutputT = LabelingJobOutput>
    void SetLabelingJobOutput(LabelingJobOutputT&& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = std::forward<LabelingJobOutputT>(value); }
    template<typename LabelingJobOutputT = LabelingJobOutput>
    LabelingJobSummary& WithLabelingJobOutput(LabelingJobOutputT&& value) { SetLabelingJobOutput(std::forward<LabelingJobOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    template<typename InputConfigT = LabelingJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = LabelingJobInputConfig>
    LabelingJobSummary& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    LabelingJobStatus m_labelingJobStatus{LabelingJobStatus::NOT_SET};
    bool m_labelingJobStatusHasBeenSet = false;

    LabelCounters m_labelCounters;
    bool m_labelCountersHasBeenSet = false;

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    Aws::String m_preHumanTaskLambdaArn;
    bool m_preHumanTaskLambdaArnHasBeenSet = false;

    Aws::String m_annotationConsolidationLambdaArn;
    bool m_annotationConsolidationLambdaArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    LabelingJobOutput m_labelingJobOutput;
    bool m_labelingJobOutputHasBeenSet = false;

    LabelingJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
