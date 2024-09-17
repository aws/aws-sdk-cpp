/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobTemplateSettings.h>
#include <aws/mediaconvert/model/StatusUpdateInterval.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/HopDestination.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class CreateJobTemplateRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API CreateJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobTemplate"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }
    inline CreateJobTemplateRequest& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}
    inline CreateJobTemplateRequest& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. A category for the job template you are creating
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline CreateJobTemplateRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline CreateJobTemplateRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. A description of the job template you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateJobTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateJobTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Use queue hopping to avoid overly long waits in the backlog of the
     * queue that you submit your job to. Specify an alternate queue and the maximum
     * time that your job will wait in the initial queue before hopping. For more
     * information about this feature, see the AWS Elemental MediaConvert User Guide.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const{ return m_hopDestinations; }
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }
    inline void SetHopDestinations(const Aws::Vector<HopDestination>& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = value; }
    inline void SetHopDestinations(Aws::Vector<HopDestination>&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::move(value); }
    inline CreateJobTemplateRequest& WithHopDestinations(const Aws::Vector<HopDestination>& value) { SetHopDestinations(value); return *this;}
    inline CreateJobTemplateRequest& WithHopDestinations(Aws::Vector<HopDestination>&& value) { SetHopDestinations(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& AddHopDestinations(const HopDestination& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(value); return *this; }
    inline CreateJobTemplateRequest& AddHopDestinations(HopDestination&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the job template you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateJobTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateJobTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CreateJobTemplateRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }
    inline CreateJobTemplateRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}
    inline CreateJobTemplateRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& WithQueue(const char* value) { SetQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline const JobTemplateSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const JobTemplateSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(JobTemplateSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline CreateJobTemplateRequest& WithSettings(const JobTemplateSettings& value) { SetSettings(value); return *this;}
    inline CreateJobTemplateRequest& WithSettings(JobTemplateSettings&& value) { SetSettings(std::move(value)); return *this;}
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
    inline CreateJobTemplateRequest& WithStatusUpdateInterval(const StatusUpdateInterval& value) { SetStatusUpdateInterval(value); return *this;}
    inline CreateJobTemplateRequest& WithStatusUpdateInterval(StatusUpdateInterval&& value) { SetStatusUpdateInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateJobTemplateRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateJobTemplateRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateJobTemplateRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobTemplateRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateJobTemplateRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateJobTemplateRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateJobTemplateRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<HopDestination> m_hopDestinations;
    bool m_hopDestinationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    JobTemplateSettings m_settings;
    bool m_settingsHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval;
    bool m_statusUpdateIntervalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
