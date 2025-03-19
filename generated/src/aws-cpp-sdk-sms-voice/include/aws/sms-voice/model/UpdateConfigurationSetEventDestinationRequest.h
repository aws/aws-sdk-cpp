/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms-voice/model/EventDestinationDefinition.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * UpdateConfigurationSetEventDestinationRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/UpdateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConfigurationSetEventDestinationRequest : public PinpointSMSVoiceRequest
  {
  public:
    AWS_PINPOINTSMSVOICE_API UpdateConfigurationSetEventDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationSetEventDestination"; }

    AWS_PINPOINTSMSVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * ConfigurationSetName
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EventDestinationDefinition& GetEventDestination() const { return m_eventDestination; }
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }
    template<typename EventDestinationT = EventDestinationDefinition>
    void SetEventDestination(EventDestinationT&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::forward<EventDestinationT>(value); }
    template<typename EventDestinationT = EventDestinationDefinition>
    UpdateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestinationT&& value) { SetEventDestination(std::forward<EventDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * EventDestinationName
     */
    inline const Aws::String& GetEventDestinationName() const { return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    template<typename EventDestinationNameT = Aws::String>
    void SetEventDestinationName(EventDestinationNameT&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::forward<EventDestinationNameT>(value); }
    template<typename EventDestinationNameT = Aws::String>
    UpdateConfigurationSetEventDestinationRequest& WithEventDestinationName(EventDestinationNameT&& value) { SetEventDestinationName(std::forward<EventDestinationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    EventDestinationDefinition m_eventDestination;
    bool m_eventDestinationHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
