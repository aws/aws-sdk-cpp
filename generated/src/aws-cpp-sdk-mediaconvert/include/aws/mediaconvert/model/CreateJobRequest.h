/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/mediaconvert/model/BillingTagsSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobSettings.h>
#include <aws/mediaconvert/model/SimulateReservedQueue.h>
#include <aws/mediaconvert/model/StatusUpdateInterval.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/HopDestination.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Optional. Accelerated transcoding can significantly speed up jobs with long,
     * visually complex content. Outputs that use this feature incur pro-tier pricing.
     * For information about feature limitations, see the AWS Elemental MediaConvert
     * User Guide.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const { return m_accelerationSettings; }
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }
    template<typename AccelerationSettingsT = AccelerationSettings>
    void SetAccelerationSettings(AccelerationSettingsT&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::forward<AccelerationSettingsT>(value); }
    template<typename AccelerationSettingsT = AccelerationSettings>
    CreateJobRequest& WithAccelerationSettings(AccelerationSettingsT&& value) { SetAccelerationSettings(std::forward<AccelerationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optionally choose a Billing tags source that AWS Billing and Cost Management
     * will use to display tags for individual output costs on any billing report that
     * you set up. Leave blank to use the default value, Job.
     */
    inline BillingTagsSource GetBillingTagsSource() const { return m_billingTagsSource; }
    inline bool BillingTagsSourceHasBeenSet() const { return m_billingTagsSourceHasBeenSet; }
    inline void SetBillingTagsSource(BillingTagsSource value) { m_billingTagsSourceHasBeenSet = true; m_billingTagsSource = value; }
    inline CreateJobRequest& WithBillingTagsSource(BillingTagsSource value) { SetBillingTagsSource(value); return *this;}
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
    CreateJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const { return m_hopDestinations; }
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }
    template<typename HopDestinationsT = Aws::Vector<HopDestination>>
    void SetHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::forward<HopDestinationsT>(value); }
    template<typename HopDestinationsT = Aws::Vector<HopDestination>>
    CreateJobRequest& WithHopDestinations(HopDestinationsT&& value) { SetHopDestinations(std::forward<HopDestinationsT>(value)); return *this;}
    template<typename HopDestinationsT = HopDestination>
    CreateJobRequest& AddHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.emplace_back(std::forward<HopDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Use Job engine versions to run jobs for your production workflow on one version,
     * while you test and validate the latest version. To specify a Job engine version:
     * Enter a date in a YYYY-MM-DD format. For a list of valid Job engine versions,
     * submit a ListVersions request. To not specify a Job engine version: Leave blank.
     */
    inline const Aws::String& GetJobEngineVersion() const { return m_jobEngineVersion; }
    inline bool JobEngineVersionHasBeenSet() const { return m_jobEngineVersionHasBeenSet; }
    template<typename JobEngineVersionT = Aws::String>
    void SetJobEngineVersion(JobEngineVersionT&& value) { m_jobEngineVersionHasBeenSet = true; m_jobEngineVersion = std::forward<JobEngineVersionT>(value); }
    template<typename JobEngineVersionT = Aws::String>
    CreateJobRequest& WithJobEngineVersion(JobEngineVersionT&& value) { SetJobEngineVersion(std::forward<JobEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you create a job, you can either specify a job template or
     * specify the transcoding settings individually.
     */
    inline const Aws::String& GetJobTemplate() const { return m_jobTemplate; }
    inline bool JobTemplateHasBeenSet() const { return m_jobTemplateHasBeenSet; }
    template<typename JobTemplateT = Aws::String>
    void SetJobTemplate(JobTemplateT&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::forward<JobTemplateT>(value); }
    template<typename JobTemplateT = Aws::String>
    CreateJobRequest& WithJobTemplate(JobTemplateT&& value) { SetJobTemplate(std::forward<JobTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify the relative priority for this job. In any given queue, the
     * service begins processing the job with the highest value first. When more than
     * one job has the same priority, the service begins processing the job that you
     * submitted first. If you don't specify a priority, the service uses the default
     * value 0.
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. When you create a job, you can specify a queue to send it to. If you
     * don't specify, the job will go to the default queue. For more about queues, see
     * the User Guide topic at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html.
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    CreateJobRequest& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required. The IAM role you use for creating this job. For details about
     * permissions, see the User Guide topic at the User Guide at
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateJobRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
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
    CreateJobRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Enable this setting when you run a test job to estimate how many
     * reserved transcoding slots (RTS) you need. When this is enabled, MediaConvert
     * runs your job from an on-demand queue with similar performance to what you will
     * see with one RTS in a reserved queue. This setting is disabled by default.
     */
    inline SimulateReservedQueue GetSimulateReservedQueue() const { return m_simulateReservedQueue; }
    inline bool SimulateReservedQueueHasBeenSet() const { return m_simulateReservedQueueHasBeenSet; }
    inline void SetSimulateReservedQueue(SimulateReservedQueue value) { m_simulateReservedQueueHasBeenSet = true; m_simulateReservedQueue = value; }
    inline CreateJobRequest& WithSimulateReservedQueue(SimulateReservedQueue value) { SetSimulateReservedQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify how often MediaConvert sends STATUS_UPDATE events to Amazon
     * CloudWatch Events. Set the interval, in seconds, between status updates.
     * MediaConvert sends an update at this interval from the time the service begins
     * processing your job to the time it completes the transcode or encounters an
     * error.
     */
    inline StatusUpdateInterval GetStatusUpdateInterval() const { return m_statusUpdateInterval; }
    inline bool StatusUpdateIntervalHasBeenSet() const { return m_statusUpdateIntervalHasBeenSet; }
    inline void SetStatusUpdateInterval(StatusUpdateInterval value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = value; }
    inline CreateJobRequest& WithStatusUpdateInterval(StatusUpdateInterval value) { SetStatusUpdateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. The tags that you want to add to the resource. You can tag resources
     * with a key-value pair or with only a key.  Use standard AWS tags on your job for
     * automatic integration with AWS services and for custom integrations and
     * workflows.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Optional. User-defined metadata that you want to associate with an MediaConvert
     * job. You specify metadata in key/value pairs.  Use only for existing
     * integrations or workflows that rely on job metadata tags. Otherwise, we
     * recommend that you use standard AWS tags.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserMetadata() const { return m_userMetadata; }
    inline bool UserMetadataHasBeenSet() const { return m_userMetadataHasBeenSet; }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetUserMetadata(UserMetadataT&& value) { m_userMetadataHasBeenSet = true; m_userMetadata = std::forward<UserMetadataT>(value); }
    template<typename UserMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateJobRequest& WithUserMetadata(UserMetadataT&& value) { SetUserMetadata(std::forward<UserMetadataT>(value)); return *this;}
    template<typename UserMetadataKeyT = Aws::String, typename UserMetadataValueT = Aws::String>
    CreateJobRequest& AddUserMetadata(UserMetadataKeyT&& key, UserMetadataValueT&& value) {
      m_userMetadataHasBeenSet = true; m_userMetadata.emplace(std::forward<UserMetadataKeyT>(key), std::forward<UserMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    BillingTagsSource m_billingTagsSource{BillingTagsSource::NOT_SET};
    bool m_billingTagsSourceHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<HopDestination> m_hopDestinations;
    bool m_hopDestinationsHasBeenSet = false;

    Aws::String m_jobEngineVersion;
    bool m_jobEngineVersionHasBeenSet = false;

    Aws::String m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    JobSettings m_settings;
    bool m_settingsHasBeenSet = false;

    SimulateReservedQueue m_simulateReservedQueue{SimulateReservedQueue::NOT_SET};
    bool m_simulateReservedQueueHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval{StatusUpdateInterval::NOT_SET};
    bool m_statusUpdateIntervalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userMetadata;
    bool m_userMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
