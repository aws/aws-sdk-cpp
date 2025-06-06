﻿/**
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
    AWS_PERSONALIZE_API BatchInferenceJob() = default;
    AWS_PERSONALIZE_API BatchInferenceJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    BatchInferenceJob& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const { return m_batchInferenceJobArn; }
    inline bool BatchInferenceJobArnHasBeenSet() const { return m_batchInferenceJobArnHasBeenSet; }
    template<typename BatchInferenceJobArnT = Aws::String>
    void SetBatchInferenceJobArn(BatchInferenceJobArnT&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::forward<BatchInferenceJobArnT>(value); }
    template<typename BatchInferenceJobArnT = Aws::String>
    BatchInferenceJob& WithBatchInferenceJobArn(BatchInferenceJobArnT&& value) { SetBatchInferenceJobArn(std::forward<BatchInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter used on the batch inference job.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    BatchInferenceJob& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the batch inference job failed, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    BatchInferenceJob& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version from which the batch
     * inference job was created.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const { return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    template<typename SolutionVersionArnT = Aws::String>
    void SetSolutionVersionArn(SolutionVersionArnT&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::forward<SolutionVersionArnT>(value); }
    template<typename SolutionVersionArnT = Aws::String>
    BatchInferenceJob& WithSolutionVersionArn(SolutionVersionArnT&& value) { SetSolutionVersionArn(std::forward<SolutionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of recommendations generated by the batch inference job. This
     * number includes the error messages generated for failed input records.</p>
     */
    inline int GetNumResults() const { return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline BatchInferenceJob& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path that leads to the input data used to generate the batch
     * inference job.</p>
     */
    inline const BatchInferenceJobInput& GetJobInput() const { return m_jobInput; }
    inline bool JobInputHasBeenSet() const { return m_jobInputHasBeenSet; }
    template<typename JobInputT = BatchInferenceJobInput>
    void SetJobInput(JobInputT&& value) { m_jobInputHasBeenSet = true; m_jobInput = std::forward<JobInputT>(value); }
    template<typename JobInputT = BatchInferenceJobInput>
    BatchInferenceJob& WithJobInput(JobInputT&& value) { SetJobInput(std::forward<JobInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that contains the output data generated by the batch
     * inference job.</p>
     */
    inline const BatchInferenceJobOutput& GetJobOutput() const { return m_jobOutput; }
    inline bool JobOutputHasBeenSet() const { return m_jobOutputHasBeenSet; }
    template<typename JobOutputT = BatchInferenceJobOutput>
    void SetJobOutput(JobOutputT&& value) { m_jobOutputHasBeenSet = true; m_jobOutput = std::forward<JobOutputT>(value); }
    template<typename JobOutputT = BatchInferenceJobOutput>
    BatchInferenceJob& WithJobOutput(JobOutputT&& value) { SetJobOutput(std::forward<JobOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string to string map of the configuration details of a batch inference
     * job.</p>
     */
    inline const BatchInferenceJobConfig& GetBatchInferenceJobConfig() const { return m_batchInferenceJobConfig; }
    inline bool BatchInferenceJobConfigHasBeenSet() const { return m_batchInferenceJobConfigHasBeenSet; }
    template<typename BatchInferenceJobConfigT = BatchInferenceJobConfig>
    void SetBatchInferenceJobConfig(BatchInferenceJobConfigT&& value) { m_batchInferenceJobConfigHasBeenSet = true; m_batchInferenceJobConfig = std::forward<BatchInferenceJobConfigT>(value); }
    template<typename BatchInferenceJobConfigT = BatchInferenceJobConfig>
    BatchInferenceJob& WithBatchInferenceJobConfig(BatchInferenceJobConfigT&& value) { SetBatchInferenceJobConfig(std::forward<BatchInferenceJobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon Identity and Access Management (IAM) role that
     * requested the batch inference job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    BatchInferenceJob& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's mode.</p>
     */
    inline BatchInferenceJobMode GetBatchInferenceJobMode() const { return m_batchInferenceJobMode; }
    inline bool BatchInferenceJobModeHasBeenSet() const { return m_batchInferenceJobModeHasBeenSet; }
    inline void SetBatchInferenceJobMode(BatchInferenceJobMode value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = value; }
    inline BatchInferenceJob& WithBatchInferenceJobMode(BatchInferenceJobMode value) { SetBatchInferenceJobMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's theme generation settings.</p>
     */
    inline const ThemeGenerationConfig& GetThemeGenerationConfig() const { return m_themeGenerationConfig; }
    inline bool ThemeGenerationConfigHasBeenSet() const { return m_themeGenerationConfigHasBeenSet; }
    template<typename ThemeGenerationConfigT = ThemeGenerationConfig>
    void SetThemeGenerationConfig(ThemeGenerationConfigT&& value) { m_themeGenerationConfigHasBeenSet = true; m_themeGenerationConfig = std::forward<ThemeGenerationConfigT>(value); }
    template<typename ThemeGenerationConfigT = ThemeGenerationConfig>
    BatchInferenceJob& WithThemeGenerationConfig(ThemeGenerationConfigT&& value) { SetThemeGenerationConfig(std::forward<ThemeGenerationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch inference job. The status is one of the following
     * values:</p> <ul> <li> <p>PENDING</p> </li> <li> <p>IN PROGRESS</p> </li> <li>
     * <p>ACTIVE</p> </li> <li> <p>CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    BatchInferenceJob& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    BatchInferenceJob& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the batch inference job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    BatchInferenceJob& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
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

    int m_numResults{0};
    bool m_numResultsHasBeenSet = false;

    BatchInferenceJobInput m_jobInput;
    bool m_jobInputHasBeenSet = false;

    BatchInferenceJobOutput m_jobOutput;
    bool m_jobOutputHasBeenSet = false;

    BatchInferenceJobConfig m_batchInferenceJobConfig;
    bool m_batchInferenceJobConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    BatchInferenceJobMode m_batchInferenceJobMode{BatchInferenceJobMode::NOT_SET};
    bool m_batchInferenceJobModeHasBeenSet = false;

    ThemeGenerationConfig m_themeGenerationConfig;
    bool m_themeGenerationConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
