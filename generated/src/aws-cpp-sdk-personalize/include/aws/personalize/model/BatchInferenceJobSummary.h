﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/BatchInferenceJobMode.h>
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
   * <p>A truncated version of the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_BatchInferenceJob.html">BatchInferenceJob</a>.
   * The <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListBatchInferenceJobs.html">ListBatchInferenceJobs</a>
   * operation returns a list of batch inference job summaries.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobSummary">AWS
   * API Reference</a></p>
   */
  class BatchInferenceJobSummary
  {
  public:
    AWS_PERSONALIZE_API BatchInferenceJobSummary() = default;
    AWS_PERSONALIZE_API BatchInferenceJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the batch inference job.</p>
     */
    inline const Aws::String& GetBatchInferenceJobArn() const { return m_batchInferenceJobArn; }
    inline bool BatchInferenceJobArnHasBeenSet() const { return m_batchInferenceJobArnHasBeenSet; }
    template<typename BatchInferenceJobArnT = Aws::String>
    void SetBatchInferenceJobArn(BatchInferenceJobArnT&& value) { m_batchInferenceJobArnHasBeenSet = true; m_batchInferenceJobArn = std::forward<BatchInferenceJobArnT>(value); }
    template<typename BatchInferenceJobArnT = Aws::String>
    BatchInferenceJobSummary& WithBatchInferenceJobArn(BatchInferenceJobArnT&& value) { SetBatchInferenceJobArn(std::forward<BatchInferenceJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch inference job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    BatchInferenceJobSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
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
    BatchInferenceJobSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    BatchInferenceJobSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
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
    BatchInferenceJobSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
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
    BatchInferenceJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the solution version used by the batch inference job.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const { return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    template<typename SolutionVersionArnT = Aws::String>
    void SetSolutionVersionArn(SolutionVersionArnT&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::forward<SolutionVersionArnT>(value); }
    template<typename SolutionVersionArnT = Aws::String>
    BatchInferenceJobSummary& WithSolutionVersionArn(SolutionVersionArnT&& value) { SetSolutionVersionArn(std::forward<SolutionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's mode.</p>
     */
    inline BatchInferenceJobMode GetBatchInferenceJobMode() const { return m_batchInferenceJobMode; }
    inline bool BatchInferenceJobModeHasBeenSet() const { return m_batchInferenceJobModeHasBeenSet; }
    inline void SetBatchInferenceJobMode(BatchInferenceJobMode value) { m_batchInferenceJobModeHasBeenSet = true; m_batchInferenceJobMode = value; }
    inline BatchInferenceJobSummary& WithBatchInferenceJobMode(BatchInferenceJobMode value) { SetBatchInferenceJobMode(value); return *this;}
    ///@}
  private:

    Aws::String m_batchInferenceJobArn;
    bool m_batchInferenceJobArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    BatchInferenceJobMode m_batchInferenceJobMode{BatchInferenceJobMode::NOT_SET};
    bool m_batchInferenceJobModeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
