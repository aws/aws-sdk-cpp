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
    AWS_SAGEMAKER_API LabelingJobSummary();
    AWS_SAGEMAKER_API LabelingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = value; }
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::move(value); }
    inline void SetLabelingJobName(const char* value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName.assign(value); }
    inline LabelingJobSummary& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}
    inline LabelingJobSummary& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}
    inline LabelingJobSummary& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = value; }
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::move(value); }
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn.assign(value); }
    inline LabelingJobSummary& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}
    inline LabelingJobSummary& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}
    inline LabelingJobSummary& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline LabelingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline LabelingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline LabelingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline LabelingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the labeling job. </p>
     */
    inline const LabelingJobStatus& GetLabelingJobStatus() const{ return m_labelingJobStatus; }
    inline bool LabelingJobStatusHasBeenSet() const { return m_labelingJobStatusHasBeenSet; }
    inline void SetLabelingJobStatus(const LabelingJobStatus& value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = value; }
    inline void SetLabelingJobStatus(LabelingJobStatus&& value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = std::move(value); }
    inline LabelingJobSummary& WithLabelingJobStatus(const LabelingJobStatus& value) { SetLabelingJobStatus(value); return *this;}
    inline LabelingJobSummary& WithLabelingJobStatus(LabelingJobStatus&& value) { SetLabelingJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline const LabelCounters& GetLabelCounters() const{ return m_labelCounters; }
    inline bool LabelCountersHasBeenSet() const { return m_labelCountersHasBeenSet; }
    inline void SetLabelCounters(const LabelCounters& value) { m_labelCountersHasBeenSet = true; m_labelCounters = value; }
    inline void SetLabelCounters(LabelCounters&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::move(value); }
    inline LabelingJobSummary& WithLabelCounters(const LabelCounters& value) { SetLabelCounters(value); return *this;}
    inline LabelingJobSummary& WithLabelCounters(LabelCounters&& value) { SetLabelCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }
    inline LabelingJobSummary& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}
    inline LabelingJobSummary& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}
    inline LabelingJobSummary& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline const Aws::String& GetPreHumanTaskLambdaArn() const{ return m_preHumanTaskLambdaArn; }
    inline bool PreHumanTaskLambdaArnHasBeenSet() const { return m_preHumanTaskLambdaArnHasBeenSet; }
    inline void SetPreHumanTaskLambdaArn(const Aws::String& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = value; }
    inline void SetPreHumanTaskLambdaArn(Aws::String&& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = std::move(value); }
    inline void SetPreHumanTaskLambdaArn(const char* value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn.assign(value); }
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(const Aws::String& value) { SetPreHumanTaskLambdaArn(value); return *this;}
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(Aws::String&& value) { SetPreHumanTaskLambdaArn(std::move(value)); return *this;}
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(const char* value) { SetPreHumanTaskLambdaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const{ return m_annotationConsolidationLambdaArn; }
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }
    inline void SetAnnotationConsolidationLambdaArn(const Aws::String& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = value; }
    inline void SetAnnotationConsolidationLambdaArn(Aws::String&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::move(value); }
    inline void SetAnnotationConsolidationLambdaArn(const char* value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn.assign(value); }
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(const Aws::String& value) { SetAnnotationConsolidationLambdaArn(value); return *this;}
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(Aws::String&& value) { SetAnnotationConsolidationLambdaArn(std::move(value)); return *this;}
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(const char* value) { SetAnnotationConsolidationLambdaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline LabelingJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline LabelingJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline LabelingJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const{ return m_labelingJobOutput; }
    inline bool LabelingJobOutputHasBeenSet() const { return m_labelingJobOutputHasBeenSet; }
    inline void SetLabelingJobOutput(const LabelingJobOutput& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = value; }
    inline void SetLabelingJobOutput(LabelingJobOutput&& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = std::move(value); }
    inline LabelingJobSummary& WithLabelingJobOutput(const LabelingJobOutput& value) { SetLabelingJobOutput(value); return *this;}
    inline LabelingJobSummary& WithLabelingJobOutput(LabelingJobOutput&& value) { SetLabelingJobOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }
    inline LabelingJobSummary& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline LabelingJobSummary& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    LabelingJobStatus m_labelingJobStatus;
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
