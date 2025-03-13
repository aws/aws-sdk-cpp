/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FailureDetails.h>
#include <aws/voice-id/model/JobProgress.h>
#include <aws/voice-id/model/FraudsterRegistrationJobStatus.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains a summary of information about a fraudster registration
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudsterRegistrationJobSummary">AWS
   * API Reference</a></p>
   */
  class FraudsterRegistrationJobSummary
  {
  public:
    AWS_VOICEID_API FraudsterRegistrationJobSummary() = default;
    AWS_VOICEID_API FraudsterRegistrationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudsterRegistrationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when the fraudster registration job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FraudsterRegistrationJobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster registration
     * job.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    FraudsterRegistrationJobSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the fraudster registration job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    FraudsterRegistrationJobSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline const FailureDetails& GetFailureDetails() const { return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    template<typename FailureDetailsT = FailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = FailureDetails>
    FraudsterRegistrationJobSummary& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the fraudster registration job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    FraudsterRegistrationJobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name for the fraudster registration job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    FraudsterRegistrationJobSummary& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the completed percentage of registration requests listed in the input
     * file.</p>
     */
    inline const JobProgress& GetJobProgress() const { return m_jobProgress; }
    inline bool JobProgressHasBeenSet() const { return m_jobProgressHasBeenSet; }
    template<typename JobProgressT = JobProgress>
    void SetJobProgress(JobProgressT&& value) { m_jobProgressHasBeenSet = true; m_jobProgress = std::forward<JobProgressT>(value); }
    template<typename JobProgressT = JobProgress>
    FraudsterRegistrationJobSummary& WithJobProgress(JobProgressT&& value) { SetJobProgress(std::forward<JobProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the fraudster registration job.</p>
     */
    inline FraudsterRegistrationJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(FraudsterRegistrationJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline FraudsterRegistrationJobSummary& WithJobStatus(FraudsterRegistrationJobStatus value) { SetJobStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobProgress m_jobProgress;
    bool m_jobProgressHasBeenSet = false;

    FraudsterRegistrationJobStatus m_jobStatus{FraudsterRegistrationJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
