/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/EnrollmentConfig.h>
#include <aws/voice-id/model/FailureDetails.h>
#include <aws/voice-id/model/InputDataConfig.h>
#include <aws/voice-id/model/JobProgress.h>
#include <aws/voice-id/model/SpeakerEnrollmentJobStatus.h>
#include <aws/voice-id/model/OutputDataConfig.h>
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
   * <p>Contains all the information about a speaker enrollment job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/SpeakerEnrollmentJob">AWS
   * API Reference</a></p>
   */
  class SpeakerEnrollmentJob
  {
  public:
    AWS_VOICEID_API SpeakerEnrollmentJob() = default;
    AWS_VOICEID_API SpeakerEnrollmentJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API SpeakerEnrollmentJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when the speaker enrollment job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SpeakerEnrollmentJob& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    SpeakerEnrollmentJob& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SpeakerEnrollmentJob& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the speaker enrollment job ended. </p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    SpeakerEnrollmentJob& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines the action to take when the speaker is already
     * enrolled in Voice ID, and the <code>FraudDetectionConfig</code> to use.</p>
     */
    inline const EnrollmentConfig& GetEnrollmentConfig() const { return m_enrollmentConfig; }
    inline bool EnrollmentConfigHasBeenSet() const { return m_enrollmentConfigHasBeenSet; }
    template<typename EnrollmentConfigT = EnrollmentConfig>
    void SetEnrollmentConfig(EnrollmentConfigT&& value) { m_enrollmentConfigHasBeenSet = true; m_enrollmentConfig = std::forward<EnrollmentConfigT>(value); }
    template<typename EnrollmentConfigT = EnrollmentConfig>
    SpeakerEnrollmentJob& WithEnrollmentConfig(EnrollmentConfigT&& value) { SetEnrollmentConfig(std::forward<EnrollmentConfigT>(value)); return *this;}
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
    SpeakerEnrollmentJob& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of speaker enrollment job requests.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    template<typename InputDataConfigT = InputDataConfig>
    void SetInputDataConfig(InputDataConfigT&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::forward<InputDataConfigT>(value); }
    template<typename InputDataConfigT = InputDataConfig>
    SpeakerEnrollmentJob& WithInputDataConfig(InputDataConfigT&& value) { SetInputDataConfig(std::forward<InputDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    SpeakerEnrollmentJob& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    SpeakerEnrollmentJob& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details on job progress. This field shows the completed percentage
     * of registration requests listed in the input file.</p>
     */
    inline const JobProgress& GetJobProgress() const { return m_jobProgress; }
    inline bool JobProgressHasBeenSet() const { return m_jobProgressHasBeenSet; }
    template<typename JobProgressT = JobProgress>
    void SetJobProgress(JobProgressT&& value) { m_jobProgressHasBeenSet = true; m_jobProgress = std::forward<JobProgressT>(value); }
    template<typename JobProgressT = JobProgress>
    SpeakerEnrollmentJob& WithJobProgress(JobProgressT&& value) { SetJobProgress(std::forward<JobProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(SpeakerEnrollmentJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline SpeakerEnrollmentJob& WithJobStatus(SpeakerEnrollmentJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data config containing the S3 location where Voice ID writes the
     * job output file; you must also include a KMS key ID to encrypt the file.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    template<typename OutputDataConfigT = OutputDataConfig>
    void SetOutputDataConfig(OutputDataConfigT&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::forward<OutputDataConfigT>(value); }
    template<typename OutputDataConfigT = OutputDataConfig>
    SpeakerEnrollmentJob& WithOutputDataConfig(OutputDataConfigT&& value) { SetOutputDataConfig(std::forward<OutputDataConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    EnrollmentConfig m_enrollmentConfig;
    bool m_enrollmentConfigHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobProgress m_jobProgress;
    bool m_jobProgressHasBeenSet = false;

    SpeakerEnrollmentJobStatus m_jobStatus{SpeakerEnrollmentJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
