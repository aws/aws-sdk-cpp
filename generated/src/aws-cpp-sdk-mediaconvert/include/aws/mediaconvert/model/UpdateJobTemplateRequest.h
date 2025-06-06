﻿/**
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
    AWS_MEDIACONVERT_API UpdateJobTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobTemplate"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Accelerated transcoding can significantly speed up jobs with long, visually
     * complex content. Outputs that use this feature incur pro-tier pricing. For
     * information about feature limitations, see the AWS Elemental MediaConvert User
     * Guide.
     */
    inline const AccelerationSettings& GetAccelerationSettings() const { return m_accelerationSettings; }
    inline bool AccelerationSettingsHasBeenSet() const { return m_accelerationSettingsHasBeenSet; }
    template<typename AccelerationSettingsT = AccelerationSettings>
    void SetAccelerationSettings(AccelerationSettingsT&& value) { m_accelerationSettingsHasBeenSet = true; m_accelerationSettings = std::forward<AccelerationSettingsT>(value); }
    template<typename AccelerationSettingsT = AccelerationSettings>
    UpdateJobTemplateRequest& WithAccelerationSettings(AccelerationSettingsT&& value) { SetAccelerationSettings(std::forward<AccelerationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new category for the job template, if you are changing it.
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    UpdateJobTemplateRequest& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The new description for the job template, if you are changing it.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateJobTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateJobTemplateRequest& WithHopDestinations(HopDestinationsT&& value) { SetHopDestinations(std::forward<HopDestinationsT>(value)); return *this;}
    template<typename HopDestinationsT = HopDestination>
    UpdateJobTemplateRequest& AddHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.emplace_back(std::forward<HopDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the job template you are modifying
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateJobTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the relative priority for this job. In any given queue, the service
     * begins processing the job with the highest value first. When more than one job
     * has the same priority, the service begins processing the job that you submitted
     * first. If you don't specify a priority, the service uses the default value 0.
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateJobTemplateRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * The new queue for the job template, if you are changing it.
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    UpdateJobTemplateRequest& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * JobTemplateSettings contains all the transcode settings saved in the template
     * that will be applied to jobs created from it.
     */
    inline const JobTemplateSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = JobTemplateSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = JobTemplateSettings>
    UpdateJobTemplateRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
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
    inline UpdateJobTemplateRequest& WithStatusUpdateInterval(StatusUpdateInterval value) { SetStatusUpdateInterval(value); return *this;}
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

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    Aws::String m_queue;
    bool m_queueHasBeenSet = false;

    JobTemplateSettings m_settings;
    bool m_settingsHasBeenSet = false;

    StatusUpdateInterval m_statusUpdateInterval{StatusUpdateInterval::NOT_SET};
    bool m_statusUpdateIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
