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
#include <aws/voice-id/model/SpeakerEnrollmentJobStatus.h>
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
   * <p>Contains a summary of information about a speaker enrollment
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/SpeakerEnrollmentJobSummary">AWS
   * API Reference</a></p>
   */
  class SpeakerEnrollmentJobSummary
  {
  public:
    AWS_VOICEID_API SpeakerEnrollmentJobSummary();
    AWS_VOICEID_API SpeakerEnrollmentJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API SpeakerEnrollmentJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp showing the creation time of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain that contains the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>A timestamp showing when the speaker enrollment job ended.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Contains details that are populated when an entire batch job fails. In cases
     * of individual registration job failures, the batch job as a whole doesn't fail;
     * it is completed with a <code>JobStatus</code> of
     * <code>COMPLETED_WITH_ERRORS</code>. You can use the job output file to identify
     * the individual registration requests that failed.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The client-provided name for the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline const JobProgress& GetJobProgress() const{ return m_jobProgress; }

    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline bool JobProgressHasBeenSet() const { return m_jobProgressHasBeenSet; }

    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline void SetJobProgress(const JobProgress& value) { m_jobProgressHasBeenSet = true; m_jobProgress = value; }

    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline void SetJobProgress(JobProgress&& value) { m_jobProgressHasBeenSet = true; m_jobProgress = std::move(value); }

    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobProgress(const JobProgress& value) { SetJobProgress(value); return *this;}

    /**
     * <p>Provides details regarding job progress. This field shows the completed
     * percentage of enrollment requests listed in the input file.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobProgress(JobProgress&& value) { SetJobProgress(std::move(value)); return *this;}


    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline const SpeakerEnrollmentJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline void SetJobStatus(const SpeakerEnrollmentJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline void SetJobStatus(SpeakerEnrollmentJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobStatus(const SpeakerEnrollmentJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the speaker enrollment job.</p>
     */
    inline SpeakerEnrollmentJobSummary& WithJobStatus(SpeakerEnrollmentJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobProgress m_jobProgress;
    bool m_jobProgressHasBeenSet = false;

    SpeakerEnrollmentJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
