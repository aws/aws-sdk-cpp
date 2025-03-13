/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AccelerationSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobTemplateSettings.h>
#include <aws/mediaconvert/model/StatusUpdateInterval.h>
#include <aws/mediaconvert/model/Type.h>
#include <aws/mediaconvert/model/HopDestination.h>
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
   * A job template is a pre-made set of encoding instructions that you can use to
   * quickly create a job.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplate">AWS
   * API Reference</a></p>
   */
  class JobTemplate
  {
  public:
    AWS_MEDIACONVERT_API JobTemplate() = default;
    AWS_MEDIACONVERT_API JobTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    JobTemplate& WithAccelerationSettings(AccelerationSettingsT&& value) { SetAccelerationSettings(std::forward<AccelerationSettingsT>(value)); return *this;}
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
    JobTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional category you create to organize your job templates.
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    JobTemplate& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds for Job template creation.
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    JobTemplate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An optional description you create for each job template.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    JobTemplate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    JobTemplate& WithHopDestinations(HopDestinationsT&& value) { SetHopDestinations(std::forward<HopDestinationsT>(value)); return *this;}
    template<typename HopDestinationsT = HopDestination>
    JobTemplate& AddHopDestinations(HopDestinationsT&& value) { m_hopDestinationsHasBeenSet = true; m_hopDestinations.emplace_back(std::forward<HopDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The timestamp in epoch seconds when the Job template was last updated.
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    JobTemplate& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A name you create for each job template. Each name must be unique within your
     * account.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobTemplate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Relative priority on the job.
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline JobTemplate& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional. The queue that jobs created from this template are assigned to. If you
     * don't specify this, jobs will go to the default queue.
     */
    inline const Aws::String& GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    template<typename QueueT = Aws::String>
    void SetQueue(QueueT&& value) { m_queueHasBeenSet = true; m_queue = std::forward<QueueT>(value); }
    template<typename QueueT = Aws::String>
    JobTemplate& WithQueue(QueueT&& value) { SetQueue(std::forward<QueueT>(value)); return *this;}
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
    JobTemplate& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
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
    inline JobTemplate& WithStatusUpdateInterval(StatusUpdateInterval value) { SetStatusUpdateInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * A job template can be of two types: system or custom. System or built-in job
     * templates can't be modified or deleted by the user.
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline JobTemplate& WithType(Type value) { SetType(value); return *this;}
    ///@}
  private:

    AccelerationSettings m_accelerationSettings;
    bool m_accelerationSettingsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<HopDestination> m_hopDestinations;
    bool m_hopDestinationsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

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

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
