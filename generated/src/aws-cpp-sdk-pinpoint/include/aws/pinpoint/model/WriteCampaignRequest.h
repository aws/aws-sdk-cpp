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
    AWS_PINPOINT_API WriteCampaignRequest() = default;
    AWS_PINPOINT_API WriteCampaignRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteCampaignRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline const Aws::Vector<WriteTreatmentResource>& GetAdditionalTreatments() const { return m_additionalTreatments; }
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }
    template<typename AdditionalTreatmentsT = Aws::Vector<WriteTreatmentResource>>
    void SetAdditionalTreatments(AdditionalTreatmentsT&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::forward<AdditionalTreatmentsT>(value); }
    template<typename AdditionalTreatmentsT = Aws::Vector<WriteTreatmentResource>>
    WriteCampaignRequest& WithAdditionalTreatments(AdditionalTreatmentsT&& value) { SetAdditionalTreatments(std::forward<AdditionalTreatmentsT>(value)); return *this;}
    template<typename AdditionalTreatmentsT = WriteTreatmentResource>
    WriteCampaignRequest& AddAdditionalTreatments(AdditionalTreatmentsT&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.emplace_back(std::forward<AdditionalTreatmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const { return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    void SetCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::forward<CustomDeliveryConfigurationT>(value); }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    WriteCampaignRequest& WithCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { SetCustomDeliveryConfiguration(std::forward<CustomDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WriteCampaignRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline int GetHoldoutPercent() const { return m_holdoutPercent; }
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
    inline const CampaignHook& GetHook() const { return m_hook; }
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }
    template<typename HookT = CampaignHook>
    void SetHook(HookT&& value) { m_hookHasBeenSet = true; m_hook = std::forward<HookT>(value); }
    template<typename HookT = CampaignHook>
    WriteCampaignRequest& WithHook(HookT&& value) { SetHook(std::forward<HookT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const { return m_isPaused; }
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }
    inline WriteCampaignRequest& WithIsPaused(bool value) { SetIsPaused(value); return *this;}
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
    WriteCampaignRequest& WithLimits(LimitsT&& value) { SetLimits(std::forward<LimitsT>(value)); return *this;}
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
    WriteCampaignRequest& WithMessageConfiguration(MessageConfigurationT&& value) { SetMessageConfiguration(std::forward<MessageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the campaign.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WriteCampaignRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    WriteCampaignRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    WriteCampaignRequest& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline int GetSegmentVersion() const { return m_segmentVersion; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    WriteCampaignRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    WriteCampaignRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    WriteCampaignRequest& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const { return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    template<typename TreatmentDescriptionT = Aws::String>
    void SetTreatmentDescription(TreatmentDescriptionT&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::forward<TreatmentDescriptionT>(value); }
    template<typename TreatmentDescriptionT = Aws::String>
    WriteCampaignRequest& WithTreatmentDescription(TreatmentDescriptionT&& value) { SetTreatmentDescription(std::forward<TreatmentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const { return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    template<typename TreatmentNameT = Aws::String>
    void SetTreatmentName(TreatmentNameT&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::forward<TreatmentNameT>(value); }
    template<typename TreatmentNameT = Aws::String>
    WriteCampaignRequest& WithTreatmentName(TreatmentNameT&& value) { SetTreatmentName(std::forward<TreatmentNameT>(value)); return *this;}
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
    inline WriteCampaignRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::Vector<WriteTreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet = false;

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_holdoutPercent{0};
    bool m_holdoutPercentHasBeenSet = false;

    CampaignHook m_hook;
    bool m_hookHasBeenSet = false;

    bool m_isPaused{false};
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

    int m_segmentVersion{0};
    bool m_segmentVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
