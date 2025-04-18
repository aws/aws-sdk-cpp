﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/pinpoint/model/CampaignState.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
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
   * <p>Specifies the settings for a campaign treatment. A <i>treatment</i> is a
   * variation of a campaign that's used for A/B testing of a campaign.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TreatmentResource">AWS
   * API Reference</a></p>
   */
  class TreatmentResource
  {
  public:
    AWS_PINPOINT_API TreatmentResource() = default;
    AWS_PINPOINT_API TreatmentResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TreatmentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const { return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    void SetCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::forward<CustomDeliveryConfigurationT>(value); }
    template<typename CustomDeliveryConfigurationT = CustomDeliveryConfiguration>
    TreatmentResource& WithCustomDeliveryConfiguration(CustomDeliveryConfigurationT&& value) { SetCustomDeliveryConfiguration(std::forward<CustomDeliveryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the treatment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TreatmentResource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const { return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    template<typename MessageConfigurationT = MessageConfiguration>
    void SetMessageConfiguration(MessageConfigurationT&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::forward<MessageConfigurationT>(value); }
    template<typename MessageConfigurationT = MessageConfiguration>
    TreatmentResource& WithMessageConfiguration(MessageConfigurationT&& value) { SetMessageConfiguration(std::forward<MessageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline const Schedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Schedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Schedule>
    TreatmentResource& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) that the treatment is
     * sent to.</p>
     */
    inline int GetSizePercent() const { return m_sizePercent; }
    inline bool SizePercentHasBeenSet() const { return m_sizePercentHasBeenSet; }
    inline void SetSizePercent(int value) { m_sizePercentHasBeenSet = true; m_sizePercent = value; }
    inline TreatmentResource& WithSizePercent(int value) { SetSizePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the treatment.</p>
     */
    inline const CampaignState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = CampaignState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = CampaignState>
    TreatmentResource& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = TemplateConfiguration>
    TreatmentResource& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom description of the treatment.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const { return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    template<typename TreatmentDescriptionT = Aws::String>
    void SetTreatmentDescription(TreatmentDescriptionT&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::forward<TreatmentDescriptionT>(value); }
    template<typename TreatmentDescriptionT = Aws::String>
    TreatmentResource& WithTreatmentDescription(TreatmentDescriptionT&& value) { SetTreatmentDescription(std::forward<TreatmentDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom name of the treatment.</p>
     */
    inline const Aws::String& GetTreatmentName() const { return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    template<typename TreatmentNameT = Aws::String>
    void SetTreatmentName(TreatmentNameT&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::forward<TreatmentNameT>(value); }
    template<typename TreatmentNameT = Aws::String>
    TreatmentResource& WithTreatmentName(TreatmentNameT&& value) { SetTreatmentName(std::forward<TreatmentNameT>(value)); return *this;}
    ///@}
  private:

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    int m_sizePercent{0};
    bool m_sizePercentHasBeenSet = false;

    CampaignState m_state;
    bool m_stateHasBeenSet = false;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet = false;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
