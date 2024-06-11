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
    AWS_PINPOINT_API CampaignResponse();
    AWS_PINPOINT_API CampaignResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline const Aws::Vector<TreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }
    inline void SetAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }
    inline void SetAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }
    inline CampaignResponse& WithAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}
    inline CampaignResponse& WithAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}
    inline CampaignResponse& AddAdditionalTreatments(const TreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }
    inline CampaignResponse& AddAdditionalTreatments(TreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CampaignResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CampaignResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CampaignResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CampaignResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CampaignResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CampaignResponse& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the campaign was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline CampaignResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline CampaignResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline CampaignResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const{ return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    inline void SetCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = value; }
    inline void SetCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::move(value); }
    inline CampaignResponse& WithCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { SetCustomDeliveryConfiguration(value); return *this;}
    inline CampaignResponse& WithCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { SetCustomDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment.</p>
     */
    inline const CampaignState& GetDefaultState() const{ return m_defaultState; }
    inline bool DefaultStateHasBeenSet() const { return m_defaultStateHasBeenSet; }
    inline void SetDefaultState(const CampaignState& value) { m_defaultStateHasBeenSet = true; m_defaultState = value; }
    inline void SetDefaultState(CampaignState&& value) { m_defaultStateHasBeenSet = true; m_defaultState = std::move(value); }
    inline CampaignResponse& WithDefaultState(const CampaignState& value) { SetDefaultState(value); return *this;}
    inline CampaignResponse& WithDefaultState(CampaignState&& value) { SetDefaultState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CampaignResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CampaignResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CampaignResponse& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline int GetHoldoutPercent() const{ return m_holdoutPercent; }
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
    inline const CampaignHook& GetHook() const{ return m_hook; }
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
    inline void SetHook(const CampaignHook& value) { m_hookHasBeenSet = true; m_hook = value; }
    inline void SetHook(CampaignHook&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }
    inline CampaignResponse& WithHook(const CampaignHook& value) { SetHook(value); return *this;}
    inline CampaignResponse& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CampaignResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CampaignResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CampaignResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const{ return m_isPaused; }
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }
    inline CampaignResponse& WithIsPaused(bool value) { SetIsPaused(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }
    inline CampaignResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}
    inline CampaignResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    inline CampaignResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }
    inline CampaignResponse& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}
    inline CampaignResponse& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }
    inline CampaignResponse& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}
    inline CampaignResponse& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CampaignResponse& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CampaignResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CampaignResponse& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline CampaignResponse& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline CampaignResponse& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }
    inline CampaignResponse& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}
    inline CampaignResponse& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}
    inline CampaignResponse& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }
    inline CampaignResponse& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the campaign.</p>
     */
    inline const CampaignState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CampaignResponse& WithState(const CampaignState& value) { SetState(value); return *this;}
    inline CampaignResponse& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CampaignResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CampaignResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CampaignResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CampaignResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CampaignResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CampaignResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CampaignResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CampaignResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CampaignResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message template that’s used for the campaign.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline CampaignResponse& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline CampaignResponse& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the default treatment for the campaign.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }
    inline CampaignResponse& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}
    inline CampaignResponse& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}
    inline CampaignResponse& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the default treatment for the campaign, if the campaign
     * has multiple treatments. A <i>treatment</i> is a variation of a campaign that's
     * used for A/B testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }
    inline CampaignResponse& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}
    inline CampaignResponse& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}
    inline CampaignResponse& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the campaign.</p>
     */
    inline int GetVersion() const{ return m_version; }
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
    inline int GetPriority() const{ return m_priority; }
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

    int m_holdoutPercent;
    bool m_holdoutPercentHasBeenSet = false;

    CampaignHook m_hook;
    bool m_hookHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isPaused;
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

    int m_segmentVersion;
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

    int m_version;
    bool m_versionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
