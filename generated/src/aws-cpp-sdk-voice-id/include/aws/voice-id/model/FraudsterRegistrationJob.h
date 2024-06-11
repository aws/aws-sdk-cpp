/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FailureDetails.h>
#include <aws/voice-id/model/InputDataConfig.h>
#include <aws/voice-id/model/JobProgress.h>
#include <aws/voice-id/model/FraudsterRegistrationJobStatus.h>
#include <aws/voice-id/model/OutputDataConfig.h>
#include <aws/voice-id/model/RegistrationConfig.h>
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
   * <p>Contains all the information about a fraudster registration
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudsterRegistrationJob">AWS
   * API Reference</a></p>
   */
  class FraudsterRegistrationJob
  {
  public:
    AWS_VOICEID_API FraudsterRegistrationJob();
    AWS_VOICEID_API FraudsterRegistrationJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudsterRegistrationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when the fraudster registration job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FraudsterRegistrationJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FraudsterRegistrationJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role Amazon Resource Name (ARN) that grants Voice ID permissions to
     * access customer's buckets to read the input manifest file and write the job
     * output file.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline FraudsterRegistrationJob& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline FraudsterRegistrationJob& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline FraudsterRegistrationJob& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the fraudster registration
     * job.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline FraudsterRegistrationJob& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline FraudsterRegistrationJob& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline FraudsterRegistrationJob& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when the fraudster registration job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline FraudsterRegistrationJob& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline FraudsterRegistrationJob& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }
    inline FraudsterRegistrationJob& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}
    inline FraudsterRegistrationJob& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data config containing an S3 URI for the input manifest file that
     * contains the list of fraudster registration job requests.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline FraudsterRegistrationJob& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline FraudsterRegistrationJob& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the fraudster registration job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline FraudsterRegistrationJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline FraudsterRegistrationJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline FraudsterRegistrationJob& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name for the fraudster registration job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline FraudsterRegistrationJob& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline FraudsterRegistrationJob& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline FraudsterRegistrationJob& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the completed percentage of registration requests listed in the input
     * file.</p>
     */
    inline const JobProgress& GetJobProgress() const{ return m_jobProgress; }
    inline bool JobProgressHasBeenSet() const { return m_jobProgressHasBeenSet; }
    inline void SetJobProgress(const JobProgress& value) { m_jobProgressHasBeenSet = true; m_jobProgress = value; }
    inline void SetJobProgress(JobProgress&& value) { m_jobProgressHasBeenSet = true; m_jobProgress = std::move(value); }
    inline FraudsterRegistrationJob& WithJobProgress(const JobProgress& value) { SetJobProgress(value); return *this;}
    inline FraudsterRegistrationJob& WithJobProgress(JobProgress&& value) { SetJobProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the fraudster registration job.</p>
     */
    inline const FraudsterRegistrationJobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const FraudsterRegistrationJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(FraudsterRegistrationJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline FraudsterRegistrationJob& WithJobStatus(const FraudsterRegistrationJobStatus& value) { SetJobStatus(value); return *this;}
    inline FraudsterRegistrationJob& WithJobStatus(FraudsterRegistrationJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output data config containing the S3 location where you want Voice ID to
     * write your job output file; you must also include a KMS key ID in order to
     * encrypt the file.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline FraudsterRegistrationJob& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline FraudsterRegistrationJob& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registration config containing details such as the action to take when a
     * duplicate fraudster is detected, and the similarity threshold to use for
     * detecting a duplicate fraudster.</p>
     */
    inline const RegistrationConfig& GetRegistrationConfig() const{ return m_registrationConfig; }
    inline bool RegistrationConfigHasBeenSet() const { return m_registrationConfigHasBeenSet; }
    inline void SetRegistrationConfig(const RegistrationConfig& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = value; }
    inline void SetRegistrationConfig(RegistrationConfig&& value) { m_registrationConfigHasBeenSet = true; m_registrationConfig = std::move(value); }
    inline FraudsterRegistrationJob& WithRegistrationConfig(const RegistrationConfig& value) { SetRegistrationConfig(value); return *this;}
    inline FraudsterRegistrationJob& WithRegistrationConfig(RegistrationConfig&& value) { SetRegistrationConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

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

    FraudsterRegistrationJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    RegistrationConfig m_registrationConfig;
    bool m_registrationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
