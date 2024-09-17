/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/pinpoint/model/WriteTreatmentResource.h>
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
   * <p>Specifies the configuration and other settings for a campaign.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteCampaignRequest">AWS
   * API Reference</a></p>
   */
  class WriteCampaignRequest
  {
  public:
    AWS_PINPOINT_API WriteCampaignRequest();
    AWS_PINPOINT_API WriteCampaignRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteCampaignRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline const Aws::Vector<WriteTreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }
    inline void SetAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }
    inline void SetAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }
    inline WriteCampaignRequest& WithAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}
    inline WriteCampaignRequest& WithAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}
    inline WriteCampaignRequest& AddAdditionalTreatments(const WriteTreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }
    inline WriteCampaignRequest& AddAdditionalTreatments(WriteTreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const{ return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    inline void SetCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = value; }
    inline void SetCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::move(value); }
    inline WriteCampaignRequest& WithCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { SetCustomDeliveryConfiguration(value); return *this;}
    inline WriteCampaignRequest& WithCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { SetCustomDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WriteCampaignRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WriteCampaignRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WriteCampaignRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline int GetHoldoutPercent() const{ return m_holdoutPercent; }
    inline bool HoldoutPercentHasBeenSet() const { return m_holdoutPercentHasBeenSet; }
    inline void SetHoldoutPercent(int value) { m_holdoutPercentHasBeenSet = true; m_holdoutPercent = value; }
    inline WriteCampaignRequest& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline const CampaignHook& GetHook() const{ return m_hook; }
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
    inline void SetHook(const CampaignHook& value) { m_hookHasBeenSet = true; m_hook = value; }
    inline void SetHook(CampaignHook&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }
    inline WriteCampaignRequest& WithHook(const CampaignHook& value) { SetHook(value); return *this;}
    inline WriteCampaignRequest& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const{ return m_isPaused; }
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }
    inline WriteCampaignRequest& WithIsPaused(bool value) { SetIsPaused(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }
    inline WriteCampaignRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}
    inline WriteCampaignRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }
    inline WriteCampaignRequest& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}
    inline WriteCampaignRequest& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline WriteCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline WriteCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline WriteCampaignRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline WriteCampaignRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline WriteCampaignRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }
    inline WriteCampaignRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}
    inline WriteCampaignRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}
    inline WriteCampaignRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }
    inline WriteCampaignRequest& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>As of <b>22-05-2023</b> tags has been deprecated for update operations.
     * After this date any value in tags is not processed and an error code is not
     * returned. To manage tags we recommend using either <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/apireference/tags-resource-arn.html">Tags</a>
     * in the <i>API Reference for Amazon Pinpoint</i>, <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/resourcegroupstaggingapi/index.html">resourcegroupstaggingapi</a>
     * commands in the <i>AWS Command Line Interface Documentation</i> or <a
     * href="https://sdk.amazonaws.com/java/api/latest/software/amazon/awssdk/services/resourcegroupstaggingapi/package-summary.html">resourcegroupstaggingapi</a>
     * in the <i>AWS SDK</i>.</p> <p>(Deprecated) A string-to-string map of
     * key-value pairs that defines the tags to associate with the campaign. Each tag
     * consists of a required tag key and an associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline WriteCampaignRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline WriteCampaignRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline WriteCampaignRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline WriteCampaignRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline WriteCampaignRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline WriteCampaignRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline WriteCampaignRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline WriteCampaignRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline WriteCampaignRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline WriteCampaignRequest& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline WriteCampaignRequest& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }
    inline WriteCampaignRequest& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}
    inline WriteCampaignRequest& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}
    inline WriteCampaignRequest& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }
    inline WriteCampaignRequest& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}
    inline WriteCampaignRequest& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}
    inline WriteCampaignRequest& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}
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
    inline WriteCampaignRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::Vector<WriteTreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet = false;

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_holdoutPercent;
    bool m_holdoutPercentHasBeenSet = false;

    CampaignHook m_hook;
    bool m_hookHasBeenSet = false;

    bool m_isPaused;
    bool m_isPausedHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
