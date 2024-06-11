/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteTreatmentResource">AWS
   * API Reference</a></p>
   */
  class WriteTreatmentResource
  {
  public:
    AWS_PINPOINT_API WriteTreatmentResource();
    AWS_PINPOINT_API WriteTreatmentResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WriteTreatmentResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The delivery configuration settings for sending the treatment through a
     * custom channel. This object is required if the MessageConfiguration object for
     * the treatment specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const{ return m_customDeliveryConfiguration; }
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }
    inline void SetCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = value; }
    inline void SetCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::move(value); }
    inline WriteTreatmentResource& WithCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { SetCustomDeliveryConfiguration(value); return *this;}
    inline WriteTreatmentResource& WithCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { SetCustomDeliveryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message configuration settings for the treatment.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }
    inline WriteTreatmentResource& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}
    inline WriteTreatmentResource& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule settings for the treatment.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline WriteTreatmentResource& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}
    inline WriteTreatmentResource& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allocated percentage of users (segment members) to send the treatment
     * to.</p>
     */
    inline int GetSizePercent() const{ return m_sizePercent; }
    inline bool SizePercentHasBeenSet() const { return m_sizePercentHasBeenSet; }
    inline void SetSizePercent(int value) { m_sizePercentHasBeenSet = true; m_sizePercent = value; }
    inline WriteTreatmentResource& WithSizePercent(int value) { SetSizePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to use for the treatment.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline WriteTreatmentResource& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline WriteTreatmentResource& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom description of the treatment.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }
    inline WriteTreatmentResource& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}
    inline WriteTreatmentResource& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}
    inline WriteTreatmentResource& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the treatment.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }
    inline WriteTreatmentResource& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}
    inline WriteTreatmentResource& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}
    inline WriteTreatmentResource& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}
    ///@}
  private:

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet = false;

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    int m_sizePercent;
    bool m_sizePercentHasBeenSet = false;

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
