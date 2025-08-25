/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/mediaconvert/model/AccelerationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediaconvert/model/JobPhase.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobMessages.h>
#include <aws/mediaconvert/model/JobSettings.h>
#include <aws/mediaconvert/model/ShareStatus.h>
#include <aws/mediaconvert/model/SimulateReservedQueue.h>
#include <aws/mediaconvert/model/JobStatus.h>
#include <aws/mediaconvert/model/StatusUpdateInterval.h>
#include <aws/mediaconvert/model/Timing.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/HopDestination.h>
#include <aws/mediaconvert/model/OutputGroupDetail.h>
#include <aws/mediaconvert/model/QueueTransition.h>
#include <aws/mediaconvert/model/WarningGroup.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Each job converts an input file into an output file or files. For more
   * information, see the User Guide at
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Job">AWS
   * API Reference</a></p>
   */
  class Job
  {
  public:
    AWS_MEDIACONVERT_API Job() = default;
    AWS_MEDIACONVERT_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const { return m_accelerationSettings; }
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }
    template<typename AccelerationSettingsT = AccelerationSettings>
    void SetAccelerationSettings(AccelerationSettingsT&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::forward<AccelerationSettingsT>(value); }
    template<typename AccelerationSettingsT = AccelerationSettings>
    Job& WithAccelerationSettings(AccelerationSettingsT&& value) { SetAccelerationSettings(std::forward<AccelerationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Describes whether the current job is running with accelerated transcoding. For
     * jobs that have Acceleration (AccelerationMode) set to DISABLED,
     * AccelerationStatus is always NOT_APPLICABLE. For jobs that have Acceleration
     * (AccelerationMode) set to ENABLED or PREFERRED, AccelerationStatus is one of the
     * other states. AccelerationStatus is IN_PROGRESS initially, while the service
     * determines whether the input files and job settings are compatible with
     * accelerated transcoding. If they are, AcclerationStatus is ACCELERATED. If your
     * input files and job settings aren't compatible with accelerated transcoding, the
     * service either fails your job or runs it without accelerated transcoding,
     * depending on how you set Acceleration (AccelerationMode). When the service runs
     * your job without accelerated transcoding, AccelerationStatus is NOT_ACCELERATED.
     */
    inline AccelerationStatus GetAccelerationStatus() const { return m_accelerationStatus; }
    inline bool AccelerationStatusHasBeenSet() const { return m_accelerationStatusHasBeenSet; }
    inline void SetAccelerationStatus(AccelerationStatus value) { m_accelerationStatusHasBeenSet = true; m_accelerationStatus = value; }
    inline Job& WithAccelerationStatus(AccelerationStatus value) { SetAccelerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Job& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The tag type that AWS Billing and Cost Management will use to sort your AWS
     * Elemental MediaConvert costs on any billing report that you set up.
     */
    inline BillingTagsSource GetBillingTagsSource() const { return m_billingTagsSource; }
    inline bool BillingTagsSourceHasBeenSet() const { return m_billingTagsSourceHasBeenSet; }
    inline void SetBillingTagsSource(BillingTagsSource value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }
    inline Job& WithBillingTagsSource(BillingTagsSource value) { SetBillingTagsSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Prevent duplicate jobs from being created and ensure idempotency for your
     * requests. A client request token can be any string that includes up to 64 ASCII
     * characters. If you reuse a client request token within one minute of a
     * successful request, the API returns the job details of the original request
     * instead. For more information see
     * https://docs.aws.amazon.com/mediaconvert/latest/apireference/idempotency.html.
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    Job& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Job& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A job's phase can be PROBING, TRANSCODING OR UPLOADING
     */
    inline JobPhase GetCurrentPhase() const { return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    inline void SetCurrentPhase(JobPhase value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }
    inline Job& WithCurrentPhase(JobPhase value) { SetCurrentPhase(value); return *this;}
    ///@}

    ///@{
    /**
     * Error code for the job
     */
    inline int GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline Job& WithErrorCode(int value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Error message of Job
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    Job& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional list of hop destinations.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const { return m_hopDestinations; }
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }
    template<typename HopDestinationsT = Aws::Vector<HopDestination>>
    void SetHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::forward<HopDestinationsT>(value); }
    template<typename HopDestinationsT = Aws::Vector<HopDestination>>
    Job& WithHopDestinations(HopDestinationsT&& value) { SetHopDestinations(std::forward<HopDestinationsT>(value)); return *this;}
    template<typename HopDestinationsT = HopDestination>
    Job& AddHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.emplace_back(std::forward<HopDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Job& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Job engine version that you requested for your job. Valid versions are in a
     * YYYY-MM-DD format.
     */
    inline const Aws::String& GetJobEngineVersionRequested() const { return m_jobEngineVersionRequested; }
    inline bool JobEngineVersionRequestedHasBeenSet() const { return m_jobEngineVersionRequestedHasBeenSet; }
    template<typename JobEngineVersionRequestedT = Aws::String>
    void SetJobEngineVersionRequested(JobEngineVersionRequestedT&& value) { m_jobEngineVersionRequestedHasBeenSet = true; m_jobEngineVersionRequested = std::forward<JobEngineVersionRequestedT>(value); }
    template<typename JobEngineVersionRequestedT = Aws::String>
    Job& WithJobEngineVersionRequested(JobEngineVersionRequestedT&& value) { SetJobEngineVersionRequested(std::forward<JobEngineVersionRequestedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Job engine version that your job used. Job engine versions are in a
     * YYYY-MM-DD format. When you request an expired version, the response for this
     * property will be empty. Requests to create jobs with an expired version result
     * in a regular job, as if no specific Job engine version was requested. When you
     * request an invalid version, the response for this property will be empty.
     * Requests to create jobs with an invalid version result in a 400 error message,
     * and no job is created.
     */
    inline const Aws::String& GetJobEngineVersionUsed() const { return m_jobEngineVersionUsed; }
    inline bool JobEngineVersionUsedHasBeenSet() const { return m_jobEngineVersionUsedHasBeenSet; }
    template<typename JobEngineVersionUsedT = Aws::String>
    void SetJobEngineVersionUsed(JobEngineVersionUsedT&& value) { m_jobEngineVersionUsedHasBeenSet = true; m_jobEngineVersionUsed = std::forward<JobEngineVersionUsedT>(value); }
    template<typename JobEngineVersionUsedT = Aws::String>
    Job& WithJobEngineVersionUsed(JobEngineVersionUsedT&& value) { SetJobEngineVersionUsed(std::forward<JobEngineVersionUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An estimate of how far your job has progressed. This estimate is shown as a
     * percentage of the total time from when your job leaves its queue to when your
     * output files appear in your output Amazon S3 bucket. AWS Elemental MediaConvert
     * provides jobPercentComplete in CloudWatch STATUS_UPDATE events and in the
     * response to GetJob and ListJobs requests. The jobPercentComplete estimate is
     * reliable for the following input containers: Quicktime, Transport Stream, MP4,
     * and MXF. For some jobs, the service can't provide information about job
     * progress. In those cases, jobPercentComplete returns a null value.
     */
    inline int GetJobPercentComplete() const { return m_jobPercentComplete; }
    inline bool JobPercentCompleteHasBeenSet() const { return m_jobPercentCompleteHasBeenSet; }
    inline void SetJobPercentComplete(int value) { m_jobPercentCompleteHasBeenSet = true; m_jobPercentComplete = value; }
    inline Job& WithJobPercentComplete(int value) { SetJobPercentComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline const Aws::String& GetJobTemplate() const { return m_jobTemplate; }
    inline bool JobTemplateHasBeenSet() const { return m_jobTemplateHasBeenSet; }
    template<typename JobTemplateT = Aws::String>
    void SetJobTemplate(JobTemplateT&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::forward<JobTemplateT>(value); }
    template<typename JobTemplateT = Aws::String>
    Job& WithJobTemplate(JobTemplateT&& value) { SetJobTemplate(std::forward<JobTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains information about the most recent share attempt for the job. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/creating-resource-share.html
     */
    inline const Aws::String& GetLastShareDetails() const { return m_lastShareDetails; }
    inline bool LastShareDetailsHasBeenSet() const { return m_lastShareDetailsHasBeenSet; }
    template<typename LastShareDetailsT = Aws::String>
    void SetLastShareDetails(LastShareDetailsT&& value) { m_lastShareDetailsHasBeenSet = true; m_lastShareDetails = std::forward<LastShareDetailsT>(value); }
    template<typename LastShareDetailsT = Aws::String>
    Job& WithLastShareDetails(LastShareDetailsT&& value) { SetLastShareDetails(std::forward<LastShareDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Provides messages from the service about jobs that you have already successfully
     * submitted.
     */
    inline const JobMessages& GetMessages() const { return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    template<typename MessagesT = JobMessages>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = JobMessages>
    Job& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of output group details
     */
    inline const Aws::Vector<OutputGroupDetail>& GetOutputGroupDetails() const { return m_outputGroupDetails; }
    inline bool OutputGroupDetailsHasBeenSet() const { return m_outputGroupDetailsHasBeenSet; }
    template<typename OutputGroupDetailsT = Aws::Vector<OutputGroupDetail>>
    void SetOutputGroupDetails(OutputGroupDetailsT&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails = std::forward<OutputGroupDetailsT>(value); }
    template<typename OutputGroupDetailsT = Aws::Vector<OutputGroupDetail>>
    Job& WithOutputGroupDetails(OutputGroupDetailsT&& value) { SetOutputGroupDetails(std::forward<OutputGroupDetailsT>(value)); return *this;}
    template<typename OutputGroupDetailsT = OutputGroupDetail>
    Job& AddOutputGroupDetails(OutputGroupDetailsT&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails.emplace_back(std::forward<OutputGroupDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Relative priority on the job.
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline Job& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * When you create a job, you can specify a queue to send it to. If you don't
     * specify, the job will go to the default queue. For more about queues, see the
     * User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    Job& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The job's queue hopping history.
     */
    inline const Aws::Vector<QueueTransition>& GetQueueTransitions() const { return m_queueTransitions; }
    inline bool QueueTransitionsHasBeenSet() const { return m_queueTransitionsHasBeenSet; }
    template<typename QueueTransitionsT = Aws::Vector<QueueTransition>>
    void SetQueueTransitions(QueueTransitionsT&& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions = std::forward<QueueTransitionsT>(value); }
    template<typename QueueTransitionsT = Aws::Vector<QueueTransition>>
    Job& WithQueueTransitions(QueueTransitionsT&& value) { SetQueueTransitions(std::forward<QueueTransitionsT>(value)); return *this;}
    template<typename QueueTransitionsT = QueueTransition>
    Job& AddQueueTransitions(QueueTransitionsT&& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions.emplace_back(std::forward<QueueTransitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The number of times that the service automatically attempted to process your job
     * after encountering an error.
     */
    inline int GetRetryCount() const { return m_retryCount; }
    inline bool RetryCountHasBeenSet() const { return m_retryCountHasBeenSet; }
    inline void SetRetryCount(int value) { m_retryCountHasBeenSet = true; m_retryCount = value; }
    inline Job& WithRetryCount(int value) { SetRetryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The IAM role you use for creating this job. For details about permissions, see
     * the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    Job& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline const JobSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = JobSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = JobSettings>
    Job& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A job's share status can be NOT_SHARED, INITIATED, or SHARED
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline Job& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting when you run a test job to estimate how many reserved
     * transcoding slots (RTS) you need. When this is enabled, MediaConvert runs your
     * job from an on-demand queue with similar performance to what you will see with
     * one RTS in a reserved queue. This setting is disabled by default.
     */
    inline SimulateReservedQueue GetSimulateReservedQueue() const { return m_simulateReservedQueue; }
    inline bool SimulateReservedQueueHasBeenSet() const { return m_simulateReservedQueueHasBeenSet; }
    inline void SetSimulateReservedQueue(SimulateReservedQueue value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = value; }
    inline Job& WithSimulateReservedQueue(SimulateReservedQueue value) { SetSimulateReservedQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Job& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline StatusUpdateInterval GetStatusUpdateInterval() const { return m_statusUpdateInterval; }
    inline bool StatusUpdateIntervalHasBeenSet() const { return m_statusUpdateIntervalHasBeenSet; }
    inline void SetStatusUpdateInterval(StatusUpdateInterval value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = value; }
    inline Job& WithStatusUpdateInterval(StatusUpdateInterval value) { SetStatusUpdateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Information about when jobs are submitted, started, and finished is specified in
     * Unix epoch format in seconds.
     */
    inline const Timing& GetTiming() const { return m_timing; }
    inline bool TimingHasBeenSet() const { return m_timingHasBeenSet; }
    template<typename TimingT = Timing>
    void SetTiming(TimingT&& value) { m_timingHasBeenSet = true; m_timing = std::forward<TimingT>(value); }
    template<typename TimingT = Timing>
    Job& WithTiming(TimingT&& value) { SetTiming(std::forward<TimingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    Job& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    Job& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Contains any warning messages for the job. Use to help identify potential issues
     * with your input, output, or job. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/warning_codes.html
     */
    inline const Aws::Vector<WarningGroup>& GetWarnings() const { return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    template<typename WarningsT = Aws::Vector<WarningGroup>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<WarningGroup>>
    Job& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = WarningGroup>
    Job& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}
  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    AccelerationStatus m_accelerationStatus{AccelerationStatus::NOT_SET};
    bool m_accelerationStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    BillingTagsSource m_billingTagsSource{BillingTagsSource::NOT_SET};
    bool m_billingTagsSourceHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    JobPhase m_currentPhase{JobPhase::NOT_SET};
    bool m_currentPhaseHasBeenSet = false;

    int m_errorCode{0};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<HopDestination> m_hopDestinations;
    bool m_hopDestinationsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_jobEngineVersionRequested;
    bool m_jobEngineVersionRequestedHasBeenSet = false;

    Aws::String m_jobEngineVersionUsed;
    bool m_jobEngineVersionUsedHasBeenSet = false;

    int m_jobPercentComplete{0};
    bool m_jobPercentCompleteHasBeenSet = false;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    Aws::String m_lastShareDetails;
    bool m_lastShareDetailsHasBeenSet = false;

    JobMessages m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<OutputGroupDetail> m_outputGroupDetails;
    bool m_outputGroupDetailsHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    Aws::Vector<QueueTransition> m_queueTransitions;
    bool m_queueTransitionsHasBeenSet = false;

    int m_retryCount{0};
    bool m_retryCountHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    JobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;

    SimulateReservedQueue m_simulateReservedQueue{SimulateReservedQueue::NOT_SET};
    bool m_simulateReservedQueueHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval{StatusUpdateInterval::NOT_SET};
    bool m_statusUpdateIntervalHasBeenSet = false;

    Timing m_timing;
    bool m_timingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;

    Aws::Vector<WarningGroup> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
