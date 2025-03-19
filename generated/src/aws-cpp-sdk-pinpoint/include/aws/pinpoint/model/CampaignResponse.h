/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/pinpoint/model/CampaignState.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/pinpoint/model/TreatmentResource.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status, configuration, and other settings for
   * a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignResponse">AWS
   * API Reference</a></p>
   */
  class CampaignResponse
  {
  public:
    AWS_PINPOINT_API CampaignResponse() = default;
    AWS_PINPOINT_API CampaignResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline const Aws::Vector<TreatmentResource>& GetAdditionalTreatments() const { return m_additionalTreatments; }
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }
    template<typename AdditionalTreatmentsT = Aws::Vector<TreatmentResource>>
    void SetAdditionalTreatments(AdditionalTreatmentsT&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::forward<AdditionalTreatmentsT>(value); }
    template<typename AdditionalTreatmentsT = Aws::Vector<TreatmentResource>>
    CampaignResponse& WithAdditionalTreatments(AdditionalTreatmentsT&& value) { SetAdditionalTreatments(std::forward<AdditionalTreatmentsT>(value)); return *this;}
    template<typename AdditionalTreatmentsT = TreatmentResource>
    CampaignResponse& AddAdditionalTreatments(AdditionalTreatmentsT&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.emplace_back(std::forward<AdditionalTreatmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CampaignResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CampaignResponse& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the campaign was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    CampaignResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const { return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    void SetCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::forward<CustomDeliveryConfigurationT>(value); }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    CampaignResponse& WithCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { SetCustomDeliveryConfiguration(std::forward<CustomDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment.</p>
     */
    inline const CampaignState& GetDefaultState() const { return m_defaultState; }
    inline bool DefaultStateHasBeenSet() const { return m_defaultStateHasBeenSet; }
    template<typename DefaultStateT = CampaignState>
    void SetDefaultState(DefaultStateT&& value) { m_defaultStateHasBeenSet = true; m_defaultState = std::forward<DefaultStateT>(value); }
    template<typename DefaultStateT = CampaignState>
    CampaignResponse& WithDefaultState(DefaultStateT&& value) { SetDefaultState(std::forward<DefaultStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CampaignResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline int GetHoldoutPercent() const { return m_holdoutPercent; }
    inline bool HoldoutPercentHasBeenSet() const { return m_holdoutPercentHasBeenSet; }
    inline void SetHoldoutPercent(int value) { m_holdoutPercentHasBeenSet = true; m_holdoutPercent = value; }
    inline CampaignResponse& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline const CampaignHook& GetHook() const { return m_hook; }
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
    template<typename HookT = CampaignHook>
    void SetHook(HookT&& value) { m_hookHasBeenSet = true; m_hook = std::forward<HookT>(value); }
    template<typename HookT = CampaignHook>
    CampaignResponse& WithHook(HookT&& value) { SetHook(std::forward<HookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CampaignResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const { return m_isPaused; }
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }
    inline CampaignResponse& WithIsPaused(bool value) { SetIsPaused(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    CampaignResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline const CampaignLimits& GetLimits() const { return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    template<typename LimitsT = CampaignLimits>
    void SetLimits(LimitsT&& value) { m_limitsHasBeenSet = true; m_limits = std::forward<LimitsT>(value); }
    template<typename LimitsT = CampaignLimits>
    CampaignResponse& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const { return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    template<typename MessageConfigurationT = MessageConfiguration>
    void SetMessageConfiguration(MessageConfigurationT&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::forward<MessageConfigurationT>(value); }
    template<typename MessageConfigurationT = MessageConfiguration>
    CampaignResponse& WithMessageConfiguration(MessageConfigurationT&& value) { SetMessageConfiguration(std::forward<MessageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CampaignResponse& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    CampaignResponse& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    CampaignResponse& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline int GetSegmentVersion() const { return m_segmentVersion; }
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }
    inline CampaignResponse& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the campaign.</p>
     */
    inline const CampaignState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = CampaignState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = CampaignState>
    CampaignResponse& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CampaignResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CampaignResponse& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The message template that’s used for the campaign.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    CampaignResponse& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the default treatment for the campaign.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const { return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    template<typename TreatmentDescriptionT = Aws::String>
    void SetTreatmentDescription(TreatmentDescriptionT&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::forward<TreatmentDescriptionT>(value); }
    template<typename TreatmentDescriptionT = Aws::String>
    CampaignResponse& WithTreatmentDescription(TreatmentDescriptionT&& value) { SetTreatmentDescription(std::forward<TreatmentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the default treatment for the campaign, if the campaign
     * has multiple treatments. A <i>treatment</i> is a variation of a campaign that's
     * used for A/B testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const { return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    template<typename TreatmentNameT = Aws::String>
    void SetTreatmentName(TreatmentNameT&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::forward<TreatmentNameT>(value); }
    template<typename TreatmentNameT = Aws::String>
    CampaignResponse& WithTreatmentName(TreatmentNameT&& value) { SetTreatmentName(std::forward<TreatmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the campaign.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline CampaignResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the priority of the campaign, used to decide the order of messages
     * displayed to user if there are multiple messages scheduled to be displayed at
     * the same moment.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline CampaignResponse& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::Vector<TreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    CampaignState m_defaultState;
    bool m_defaultStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_holdoutPercent{0};
    bool m_holdoutPercentHasBeenSet = false;

    CampaignHook m_hook;
    bool m_hookHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isPaused{false};
    bool m_isPausedHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet = false;

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    int m_segmentVersion{0};
    bool m_segmentVersionHasBeenSet = false;

    CampaignState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
