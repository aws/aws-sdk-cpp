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
  class UpdateJobTemplateRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API UpdateJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobTemplate"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const{ return m_accelerationSettings; }

    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }

    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline void SetAccelerationSettings(const AccelerationSettings& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = value; }

    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline void SetAccelerationSettings(AccelerationSettings&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::move(value); }

    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline UpdateJobTemplateRequest& WithAccelerationSettings(const AccelerationSettings& value) { SetAccelerationSettings(value); return *this;}

    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline UpdateJobTemplateRequest& WithAccelerationSettings(AccelerationSettings&& value) { SetAccelerationSettings(std::move(value)); return *this;}


    /**
     * The new category for the job template, if you are changing it.
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * The new category for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * The new description for the job template, if you are changing it.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The new description for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Optional list of hop destinations.
     */
    inline const Aws::Vector<HopDestination>& GetHopDestinations() const{ return m_hopDestinations; }

    /**
     * Optional list of hop destinations.
     */
    inline bool HopDestinationsHasBeenSet() const { return m_hopDestinationsHasBeenSet; }

    /**
     * Optional list of hop destinations.
     */
    inline void SetHopDestinations(const Aws::Vector<HopDestination>& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = value; }

    /**
     * Optional list of hop destinations.
     */
    inline void SetHopDestinations(Aws::Vector<HopDestination>&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations = std::move(value); }

    /**
     * Optional list of hop destinations.
     */
    inline UpdateJobTemplateRequest& WithHopDestinations(const Aws::Vector<HopDestination>& value) { SetHopDestinations(value); return *this;}

    /**
     * Optional list of hop destinations.
     */
    inline UpdateJobTemplateRequest& WithHopDestinations(Aws::Vector<HopDestination>&& value) { SetHopDestinations(std::move(value)); return *this;}

    /**
     * Optional list of hop destinations.
     */
    inline UpdateJobTemplateRequest& AddHopDestinations(const HopDestination& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(value); return *this; }

    /**
     * Optional list of hop destinations.
     */
    inline UpdateJobTemplateRequest& AddHopDestinations(HopDestination&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.push_back(std::move(value)); return *this; }


    /**
     * The name of the job template you are modifying
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the job template you are modifying
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the job template you are modifying
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the job template you are modifying
     */
    inline UpdateJobTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline UpdateJobTemplateRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * The new queue for the job template, if you are changing it.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * The new queue for the job template, if you are changing it.
     */
    inline UpdateJobTemplateRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline const JobTemplateSettings& GetSettings() const{ return m_settings; }

    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline void SetSettings(const JobTemplateSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline void SetSettings(JobTemplateSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline UpdateJobTemplateRequest& WithSettings(const JobTemplateSettings& value) { SetSettings(value); return *this;}

    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline UpdateJobTemplateRequest& WithSettings(JobTemplateSettings&& value) { SetSettings(std::move(value)); return *this;}


    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline const StatusUpdateInterval& GetStatusUpdateInterval() const{ return m_statusUpdateInterval; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline bool StatusUpdateIntervalHasBeenSet() const { return m_statusUpdateIntervalHasBeenSet; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline void SetStatusUpdateInterval(const StatusUpdateInterval& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = value; }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline void SetStatusUpdateInterval(StatusUpdateInterval&& value) { m_statusUpdateIntervalHasBeenSet = true; m_statusUpdateInterval = std::move(value); }

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline UpdateJobTemplateRequest& WithStatusUpdateInterval(const StatusUpdateInterval& value) { SetStatusUpdateInterval(value); return *this;}

    /**
     * Specify how often MediaConvert sends STATUS_UPDATE events to Amazon CloudWatch
     * Events. Set the interval, in seconds, between status updates. MediaConvert sends
     * an update at this interval from the time the service begins processing your job
     * to the time it completes the transcode or encounters an error.
     */
    inline UpdateJobTemplateRequest& WithStatusUpdateInterval(StatusUpdateInterval&& value) { SetStatusUpdateInterval(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
