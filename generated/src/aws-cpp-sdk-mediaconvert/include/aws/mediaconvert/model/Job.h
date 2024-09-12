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
    AWS_MEDIACONVERT_API Job();
    AWS_MEDIACONVERT_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }
    inline Job& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}
    inline Job& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}
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
    inline const AccelerationStatus& GetAccelerationStatus() const{ return m_accelerationStatus; }
    inline bool AccelerationStatusHasBeenSet() const { return m_accelerationStatusHasBeenSet; }
    inline void SetAccelerationStatus(const AccelerationStatus& value) { m_accelerationStatusHasBeenSet = true; m_accelerationStatus = value; }
    inline void SetAccelerationStatus(AccelerationStatus&& value) { m_accelerationStatusHasBeenSet = true; m_accelerationStatus = std::move(value); }
    inline Job& WithAccelerationStatus(const AccelerationStatus& value) { SetAccelerationStatus(value); return *this;}
    inline Job& WithAccelerationStatus(AccelerationStatus&& value) { SetAccelerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * An identifier for this resource that is unique within all of AWS.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Job& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Job& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Job& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The tag type that AWS Billing and Cost Management will use to sort your AWS
     * Elemental MediaConvert costs on any billing report that you set up.
     */
    inline const BillingTagsSource& GetBillingTagsSource() const{ return m_billingTagsSource; }
    inline bool BillingTagsSourceHasBeenSet() const { return m_billingTagsSourceHasBeenSet; }
    inline void SetBillingTagsSource(const BillingTagsSource& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }
    inline void SetBillingTagsSource(BillingTagsSource&& value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = std::move(value); }
    inline Job& WithBillingTagsSource(const BillingTagsSource& value) { SetBillingTagsSource(value); return *this;}
    inline Job& WithBillingTagsSource(BillingTagsSource&& value) { SetBillingTagsSource(std::move(value)); return *this;}
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
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline Job& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline Job& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline Job& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in Unix epoch format in seconds, when the job got created.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Job& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Job& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A job's phase can be PROBING, TRANSCODING OR UPLOADING
     */
    inline const JobPhase& GetCurrentPhase() const{ return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    inline void SetCurrentPhase(const JobPhase& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }
    inline void SetCurrentPhase(JobPhase&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::move(value); }
    inline Job& WithCurrentPhase(const JobPhase& value) { SetCurrentPhase(value); return *this;}
    inline Job& WithCurrentPhase(JobPhase&& value) { SetCurrentPhase(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Error code for the job
     */
    inline int GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(int value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline Job& WithErrorCode(int value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Error message of Job
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline Job& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline Job& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline Job& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional list of hop destinations.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const{ return m_hopDestinations; }
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }
    inline void SetHopDestinations(const Aws::Vector<HopDestination>& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = value; }
    inline void SetHopDestinations(Aws::Vector<HopDestination>&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::move(value); }
    inline Job& WithHopDestinations(const Aws::Vector<HopDestination>& value) { SetHopDestinations(value); return *this;}
    inline Job& WithHopDestinations(Aws::Vector<HopDestination>&& value) { SetHopDestinations(std::move(value)); return *this;}
    inline Job& AddHopDestinations(const HopDestination& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(value); return *this; }
    inline Job& AddHopDestinations(HopDestination&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A portion of the job's ARN, unique within your AWS Elemental MediaConvert
     * resources
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Job& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Job& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Job& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The Job engine version that you requested for your job. Valid versions are in a
     * YYYY-MM-DD format.
     */
    inline const Aws::String& GetJobEngineVersionRequested() const{ return m_jobEngineVersionRequested; }
    inline bool JobEngineVersionRequestedHasBeenSet() const { return m_jobEngineVersionRequestedHasBeenSet; }
    inline void SetJobEngineVersionRequested(const Aws::String& value) { m_jobEngineVersionRequestedHasBeenSet = true; m_jobEngineVersionRequested = value; }
    inline void SetJobEngineVersionRequested(Aws::String&& value) { m_jobEngineVersionRequestedHasBeenSet = true; m_jobEngineVersionRequested = std::move(value); }
    inline void SetJobEngineVersionRequested(const char* value) { m_jobEngineVersionRequestedHasBeenSet = true; m_jobEngineVersionRequested.assign(value); }
    inline Job& WithJobEngineVersionRequested(const Aws::String& value) { SetJobEngineVersionRequested(value); return *this;}
    inline Job& WithJobEngineVersionRequested(Aws::String&& value) { SetJobEngineVersionRequested(std::move(value)); return *this;}
    inline Job& WithJobEngineVersionRequested(const char* value) { SetJobEngineVersionRequested(value); return *this;}
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
    inline const Aws::String& GetJobEngineVersionUsed() const{ return m_jobEngineVersionUsed; }
    inline bool JobEngineVersionUsedHasBeenSet() const { return m_jobEngineVersionUsedHasBeenSet; }
    inline void SetJobEngineVersionUsed(const Aws::String& value) { m_jobEngineVersionUsedHasBeenSet = true; m_jobEngineVersionUsed = value; }
    inline void SetJobEngineVersionUsed(Aws::String&& value) { m_jobEngineVersionUsedHasBeenSet = true; m_jobEngineVersionUsed = std::move(value); }
    inline void SetJobEngineVersionUsed(const char* value) { m_jobEngineVersionUsedHasBeenSet = true; m_jobEngineVersionUsed.assign(value); }
    inline Job& WithJobEngineVersionUsed(const Aws::String& value) { SetJobEngineVersionUsed(value); return *this;}
    inline Job& WithJobEngineVersionUsed(Aws::String&& value) { SetJobEngineVersionUsed(std::move(value)); return *this;}
    inline Job& WithJobEngineVersionUsed(const char* value) { SetJobEngineVersionUsed(value); return *this;}
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
    inline int GetJobPercentComplete() const{ return m_jobPercentComplete; }
    inline bool JobPercentCompleteHasBeenSet() const { return m_jobPercentCompleteHasBeenSet; }
    inline void SetJobPercentComplete(int value) { m_jobPercentCompleteHasBeenSet = true; m_jobPercentComplete = value; }
    inline Job& WithJobPercentComplete(int value) { SetJobPercentComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * The job template that the job is created from, if it is created from a job
     * template.
     */
    inline const Aws::String& GetJobTemplate() const{ return m_jobTemplate; }
    inline bool JobTemplateHasBeenSet() const { return m_jobTemplateHasBeenSet; }
    inline void SetJobTemplate(const Aws::String& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = value; }
    inline void SetJobTemplate(Aws::String&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::move(value); }
    inline void SetJobTemplate(const char* value) { m_jobTemplateHasBeenSet = true; m_jobTemplate.assign(value); }
    inline Job& WithJobTemplate(const Aws::String& value) { SetJobTemplate(value); return *this;}
    inline Job& WithJobTemplate(Aws::String&& value) { SetJobTemplate(std::move(value)); return *this;}
    inline Job& WithJobTemplate(const char* value) { SetJobTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * Provides messages from the service about jobs that you have already successfully
     * submitted.
     */
    inline const JobMessages& GetMessages() const{ return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    inline void SetMessages(const JobMessages& value) { m_messagesHasBeenSet = true; m_messages = value; }
    inline void SetMessages(JobMessages&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }
    inline Job& WithMessages(const JobMessages& value) { SetMessages(value); return *this;}
    inline Job& WithMessages(JobMessages&& value) { SetMessages(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * List of output group details
     */
    inline const Aws::Vector<OutputGroupDetail>& GetOutputGroupDetails() const{ return m_outputGroupDetails; }
    inline bool OutputGroupDetailsHasBeenSet() const { return m_outputGroupDetailsHasBeenSet; }
    inline void SetOutputGroupDetails(const Aws::Vector<OutputGroupDetail>& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails = value; }
    inline void SetOutputGroupDetails(Aws::Vector<OutputGroupDetail>&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails = std::move(value); }
    inline Job& WithOutputGroupDetails(const Aws::Vector<OutputGroupDetail>& value) { SetOutputGroupDetails(value); return *this;}
    inline Job& WithOutputGroupDetails(Aws::Vector<OutputGroupDetail>&& value) { SetOutputGroupDetails(std::move(value)); return *this;}
    inline Job& AddOutputGroupDetails(const OutputGroupDetail& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails.push_back(value); return *this; }
    inline Job& AddOutputGroupDetails(OutputGroupDetail&& value) { m_outputGroupDetailsHasBeenSet = true; m_outputGroupDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Relative priority on the job.
     */
    inline int GetPriority() const{ return m_priority; }
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
    inline const Aws::String& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }
    inline Job& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}
    inline Job& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}
    inline Job& WithQueue(const char* value) { SetQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * The job's queue hopping history.
     */
    inline const Aws::Vector<QueueTransition>& GetQueueTransitions() const{ return m_queueTransitions; }
    inline bool QueueTransitionsHasBeenSet() const { return m_queueTransitionsHasBeenSet; }
    inline void SetQueueTransitions(const Aws::Vector<QueueTransition>& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions = value; }
    inline void SetQueueTransitions(Aws::Vector<QueueTransition>&& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions = std::move(value); }
    inline Job& WithQueueTransitions(const Aws::Vector<QueueTransition>& value) { SetQueueTransitions(value); return *this;}
    inline Job& WithQueueTransitions(Aws::Vector<QueueTransition>&& value) { SetQueueTransitions(std::move(value)); return *this;}
    inline Job& AddQueueTransitions(const QueueTransition& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions.push_back(value); return *this; }
    inline Job& AddQueueTransitions(QueueTransition&& value) { m_queueTransitionsHasBeenSet = true; m_queueTransitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The number of times that the service automatically attempted to process your job
     * after encountering an error.
     */
    inline int GetRetryCount() const{ return m_retryCount; }
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
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline Job& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline Job& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline Job& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * JobSettings contains all the transcode settings for a job.
     */
    inline const JobSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const JobSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(JobSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline Job& WithSettings(const JobSettings& value) { SetSettings(value); return *this;}
    inline Job& WithSettings(JobSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting when you run a test job to estimate how many reserved
     * transcoding slots (RTS) you need. When this is enabled, MediaConvert runs your
     * job from an on-demand queue with similar performance to what you will see with
     * one RTS in a reserved queue. This setting is disabled by default.
     */
    inline const SimulateReservedQueue& GetSimulateReservedQueue() const{ return m_simulateReservedQueue; }
    inline bool SimulateReservedQueueHasBeenSet() const { return m_simulateReservedQueueHasBeenSet; }
    inline void SetSimulateReservedQueue(const SimulateReservedQueue& value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = value; }
    inline void SetSimulateReservedQueue(SimulateReservedQueue&& value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = std::move(value); }
    inline Job& WithSimulateReservedQueue(const SimulateReservedQueue& value) { SetSimulateReservedQueue(value); return *this;}
    inline Job& WithSimulateReservedQueue(SimulateReservedQueue&& value) { SetSimulateReservedQueue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Job& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline Job& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline const StatusUpdateInterval& GetStatusUpdateInterval() const{ return m_statusUpdateInterval; }
    inline bool StatusUpdateIntervalHasBeenSet() const { return m_statusUpdateIntervalHasBeenSet; }
    inline void SetStatusUpdateInterval(const StatusUpdateInterval& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = value; }
    inline void SetStatusUpdateInterval(StatusUpdateInterval&& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = std::move(value); }
    inline Job& WithStatusUpdateInterval(const StatusUpdateInterval& value) { SetStatusUpdateInterval(value); return *this;}
    inline Job& WithStatusUpdateInterval(StatusUpdateInterval&& value) { SetStatusUpdateInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Information about when jobs are submitted, started, and finished is specified in
     * Unix epoch format in seconds.
     */
    inline const Timing& GetTiming() const{ return m_timing; }
    inline bool TimingHasBeenSet() const { return m_timingHasBeenSet; }
    inline void SetTiming(const Timing& value) { m_timingHasBeenSet = true; m_timing = value; }
    inline void SetTiming(Timing&& value) { m_timingHasBeenSet = true; m_timing = std::move(value); }
    inline Job& WithTiming(const Timing& value) { SetTiming(value); return *this;}
    inline Job& WithTiming(Timing&& value) { SetTiming(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * User-defined metadata that you want to associate with an MediaConvert job. You
     * specify metadata in key/value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const{ return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    inline void SetUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_userMetadataHasBeenSet = true; m_userMetadata = value; }
    inline void SetUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::move(value); }
    inline Job& WithUserMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetUserMetadata(value); return *this;}
    inline Job& WithUserMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetUserMetadata(std::move(value)); return *this;}
    inline Job& AddUserMetadata(const Aws::String& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, const Aws::String& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline Job& AddUserMetadata(const Aws::String& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline Job& AddUserMetadata(const char* key, Aws::String&& value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, std::move(value)); return *this; }
    inline Job& AddUserMetadata(Aws::String&& key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::move(key), value); return *this; }
    inline Job& AddUserMetadata(const char* key, const char* value) { m_userMetadataHasBeenSet = true; m_userMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Contains any warning messages for the job. Use to help identify potential issues
     * with your input, output, or job. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/warning_codes.html
     */
    inline const Aws::Vector<WarningGroup>& GetWarnings() const{ return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    inline void SetWarnings(const Aws::Vector<WarningGroup>& value) { m_warningsHasBeenSet = true; m_warnings = value; }
    inline void SetWarnings(Aws::Vector<WarningGroup>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }
    inline Job& WithWarnings(const Aws::Vector<WarningGroup>& value) { SetWarnings(value); return *this;}
    inline Job& WithWarnings(Aws::Vector<WarningGroup>&& value) { SetWarnings(std::move(value)); return *this;}
    inline Job& AddWarnings(const WarningGroup& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
    inline Job& AddWarnings(WarningGroup&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    AccelerationStatus m_accelerationStatus;
    bool m_accelerationStatusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    BillingTagsSource m_billingTagsSource;
    bool m_billingTagsSourceHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    JobPhase m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    int m_errorCode;
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

    int m_jobPercentComplete;
    bool m_jobPercentCompleteHasBeenSet = false;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    JobMessages m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::Vector<OutputGroupDetail> m_outputGroupDetails;
    bool m_outputGroupDetailsHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    Aws::Vector<QueueTransition> m_queueTransitions;
    bool m_queueTransitionsHasBeenSet = false;

    int m_retryCount;
    bool m_retryCountHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    JobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    SimulateReservedQueue m_simulateReservedQueue;
    bool m_simulateReservedQueueHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval;
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
