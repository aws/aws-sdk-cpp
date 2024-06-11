/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchInferenceJobInput.h>
#include <aws/personalize/model/BatchInferenceJobOutput.h>
#include <aws/personalize/model/BatchInferenceJobConfig.h>
#include <aws/personalize/model/BatchInferenceJobMode.h>
#include <aws/personalize/model/ThemeGenerationConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Contains information on a batch inference job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJob">AWS
   * API Reference</a></p>
   */
  class BatchInferenceJob
  {
  public:
    AWS_PERSONALIZE_API BatchInferenceJob();
    AWS_PERSONALIZE_API BatchInferenceJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline BatchInferenceJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline BatchInferenceJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline BatchInferenceJob& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const{ return m_batchInferenceJobArn; }
    inline bool BatchInferenceJobArnHasBeenSet() const { return m_batchInferenceJobArnHasBeenSet; }
    inline void SetBatchInferenceJobArn(const Aws::String& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = value; }
    inline void SetBatchInferenceJobArn(Aws::String&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::move(value); }
    inline void SetBatchInferenceJobArn(const char* value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn.assign(value); }
    inline BatchInferenceJob& WithBatchInferenceJobArn(const Aws::String& value) { SetBatchInferenceJobArn(value); return *this;}
    inline BatchInferenceJob& WithBatchInferenceJobArn(Aws::String&& value) { SetBatchInferenceJobArn(std::move(value)); return *this;}
    inline BatchInferenceJob& WithBatchInferenceJobArn(const char* value) { SetBatchInferenceJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter used on the batch inference job.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }
    inline BatchInferenceJob& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}
    inline BatchInferenceJob& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}
    inline BatchInferenceJob& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the batch inference job failed, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline BatchInferenceJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline BatchInferenceJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline BatchInferenceJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version from which the batch
     * inference job was created.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline BatchInferenceJob& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline BatchInferenceJob& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline BatchInferenceJob& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations generated by the batch inference job. This
     * number includes the error messages generated for failed input records.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline BatchInferenceJob& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * inference job.</p>
     */
    inline const BatchInferenceJobInput& GetJobInput() const{ return m_jobInput; }
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }
    inline void SetJobInput(const BatchInferenceJobInput& value) { m_jobInputHasBeenSet = true; m_jobInput = value; }
    inline void SetJobInput(BatchInferenceJobInput&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::move(value); }
    inline BatchInferenceJob& WithJobInput(const BatchInferenceJobInput& value) { SetJobInput(value); return *this;}
    inline BatchInferenceJob& WithJobInput(BatchInferenceJobInput&& value) { SetJobInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * inference job.</p>
     */
    inline const BatchInferenceJobOutput& GetJobOutput() const{ return m_jobOutput; }
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }
    inline void SetJobOutput(const BatchInferenceJobOutput& value) { m_jobOutputHasBeenSet = true; m_jobOutput = value; }
    inline void SetJobOutput(BatchInferenceJobOutput&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::move(value); }
    inline BatchInferenceJob& WithJobOutput(const BatchInferenceJobOutput& value) { SetJobOutput(value); return *this;}
    inline BatchInferenceJob& WithJobOutput(BatchInferenceJobOutput&& value) { SetJobOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string to string map of the configuration details of a batch inference
     * job.</p>
     */
    inline const BatchInferenceJobConfig& GetBatchInferenceJobConfig() const{ return m_batchInferenceJobConfig; }
    inline bool BatchInferenceJobConfigHasBeenSet() const { return m_batchInferenceJobConfigHasBeenSet; }
    inline void SetBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = value; }
    inline void SetBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = std::move(value); }
    inline BatchInferenceJob& WithBatchInferenceJobConfig(const BatchInferenceJobConfig& value) { SetBatchInferenceJobConfig(value); return *this;}
    inline BatchInferenceJob& WithBatchInferenceJobConfig(BatchInferenceJobConfig&& value) { SetBatchInferenceJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch inference job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline BatchInferenceJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline BatchInferenceJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline BatchInferenceJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's mode.</p>
     */
    inline const BatchInferenceJobMode& GetBatchInferenceJobMode() const{ return m_batchInferenceJobMode; }
    inline bool BatchInferenceJobModeHasBeenSet() const { return m_batchInferenceJobModeHasBeenSet; }
    inline void SetBatchInferenceJobMode(const BatchInferenceJobMode& value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = value; }
    inline void SetBatchInferenceJobMode(BatchInferenceJobMode&& value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = std::move(value); }
    inline BatchInferenceJob& WithBatchInferenceJobMode(const BatchInferenceJobMode& value) { SetBatchInferenceJobMode(value); return *this;}
    inline BatchInferenceJob& WithBatchInferenceJobMode(BatchInferenceJobMode&& value) { SetBatchInferenceJobMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's theme generation settings.</p>
     */
    inline const ThemeGenerationConfig& GetThemeGenerationConfig() const{ return m_themeGenerationConfig; }
    inline bool ThemeGenerationConfigHasBeenSet() const { return m_themeGenerationConfigHasBeenSet; }
    inline void SetThemeGenerationConfig(const ThemeGenerationConfig& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = value; }
    inline void SetThemeGenerationConfig(ThemeGenerationConfig&& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = std::move(value); }
    inline BatchInferenceJob& WithThemeGenerationConfig(const ThemeGenerationConfig& value) { SetThemeGenerationConfig(value); return *this;}
    inline BatchInferenceJob& WithThemeGenerationConfig(ThemeGenerationConfig&& value) { SetThemeGenerationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch inference job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline BatchInferenceJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline BatchInferenceJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline BatchInferenceJob& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline BatchInferenceJob& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline BatchInferenceJob& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline BatchInferenceJob& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline BatchInferenceJob& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_batchInferenceJobArn;
    bool m_batchInferenceJobArnHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    int m_numResults;
    bool m_numResultsHasBeenSet = false;

    BatchInferenceJobInput m_jobInput;
    bool m_jobInputHasBeenSet = false;

    BatchInferenceJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    BatchInferenceJobConfig m_batchInferenceJobConfig;
    bool m_batchInferenceJobConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    BatchInferenceJobMode m_batchInferenceJobMode;
    bool m_batchInferenceJobModeHasBeenSet = false;

    ThemeGenerationConfig m_themeGenerationConfig;
    bool m_themeGenerationConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
