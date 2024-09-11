/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/SrtSettingsRequest.h>
#include <aws/medialive/model/MulticastSettingsUpdateRequest.h>
#include <aws/medialive/model/InputDestinationRequest.h>
#include <aws/medialive/model/InputDeviceRequest.h>
#include <aws/medialive/model/MediaConnectFlowRequest.h>
#include <aws/medialive/model/InputSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update an input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputRequest">AWS
   * API Reference</a></p>
   */
  class UpdateInputRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInput"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Destination settings for PUSH type inputs.
     */
    inline const Aws::Vector<InputDestinationRequest>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<InputDestinationRequest>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<InputDestinationRequest>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline UpdateInputRequest& WithDestinations(const Aws::Vector<InputDestinationRequest>& value) { SetDestinations(value); return *this;}
    inline UpdateInputRequest& WithDestinations(Aws::Vector<InputDestinationRequest>&& value) { SetDestinations(std::move(value)); return *this;}
    inline UpdateInputRequest& AddDestinations(const InputDestinationRequest& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline UpdateInputRequest& AddDestinations(InputDestinationRequest&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for the devices.
     */
    inline const Aws::Vector<InputDeviceRequest>& GetInputDevices() const{ return m_inputDevices; }
    inline bool InputDevicesHasBeenSet() const { return m_inputDevicesHasBeenSet; }
    inline void SetInputDevices(const Aws::Vector<InputDeviceRequest>& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = value; }
    inline void SetInputDevices(Aws::Vector<InputDeviceRequest>&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::move(value); }
    inline UpdateInputRequest& WithInputDevices(const Aws::Vector<InputDeviceRequest>& value) { SetInputDevices(value); return *this;}
    inline UpdateInputRequest& WithInputDevices(Aws::Vector<InputDeviceRequest>&& value) { SetInputDevices(std::move(value)); return *this;}
    inline UpdateInputRequest& AddInputDevices(const InputDeviceRequest& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(value); return *this; }
    inline UpdateInputRequest& AddInputDevices(InputDeviceRequest&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Unique ID of the input.
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }
    inline UpdateInputRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline UpdateInputRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline UpdateInputRequest& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroups() const{ return m_inputSecurityGroups; }
    inline bool InputSecurityGroupsHasBeenSet() const { return m_inputSecurityGroupsHasBeenSet; }
    inline void SetInputSecurityGroups(const Aws::Vector<Aws::String>& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = value; }
    inline void SetInputSecurityGroups(Aws::Vector<Aws::String>&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = std::move(value); }
    inline UpdateInputRequest& WithInputSecurityGroups(const Aws::Vector<Aws::String>& value) { SetInputSecurityGroups(value); return *this;}
    inline UpdateInputRequest& WithInputSecurityGroups(Aws::Vector<Aws::String>&& value) { SetInputSecurityGroups(std::move(value)); return *this;}
    inline UpdateInputRequest& AddInputSecurityGroups(const Aws::String& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }
    inline UpdateInputRequest& AddInputSecurityGroups(Aws::String&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(std::move(value)); return *this; }
    inline UpdateInputRequest& AddInputSecurityGroups(const char* value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.
     */
    inline const Aws::Vector<MediaConnectFlowRequest>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }
    inline bool MediaConnectFlowsHasBeenSet() const { return m_mediaConnectFlowsHasBeenSet; }
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = value; }
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::move(value); }
    inline UpdateInputRequest& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { SetMediaConnectFlows(value); return *this;}
    inline UpdateInputRequest& WithMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}
    inline UpdateInputRequest& AddMediaConnectFlows(const MediaConnectFlowRequest& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(value); return *this; }
    inline UpdateInputRequest& AddMediaConnectFlows(MediaConnectFlowRequest&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Name of the input.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateInputRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateInputRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateInputRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateInputRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateInputRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateInputRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.
     */
    inline const Aws::Vector<InputSourceRequest>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<InputSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<InputSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline UpdateInputRequest& WithSources(const Aws::Vector<InputSourceRequest>& value) { SetSources(value); return *this;}
    inline UpdateInputRequest& WithSources(Aws::Vector<InputSourceRequest>&& value) { SetSources(std::move(value)); return *this;}
    inline UpdateInputRequest& AddSources(const InputSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline UpdateInputRequest& AddSources(InputSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettingsRequest& GetSrtSettings() const{ return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    inline void SetSrtSettings(const SrtSettingsRequest& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = value; }
    inline void SetSrtSettings(SrtSettingsRequest&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::move(value); }
    inline UpdateInputRequest& WithSrtSettings(const SrtSettingsRequest& value) { SetSrtSettings(value); return *this;}
    inline UpdateInputRequest& WithSrtSettings(SrtSettingsRequest&& value) { SetSrtSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettingsUpdateRequest& GetMulticastSettings() const{ return m_multicastSettings; }
    inline bool MulticastSettingsHasBeenSet() const { return m_multicastSettingsHasBeenSet; }
    inline void SetMulticastSettings(const MulticastSettingsUpdateRequest& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = value; }
    inline void SetMulticastSettings(MulticastSettingsUpdateRequest&& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = std::move(value); }
    inline UpdateInputRequest& WithMulticastSettings(const MulticastSettingsUpdateRequest& value) { SetMulticastSettings(value); return *this;}
    inline UpdateInputRequest& WithMulticastSettings(MulticastSettingsUpdateRequest&& value) { SetMulticastSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InputDestinationRequest> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<InputDeviceRequest> m_inputDevices;
    bool m_inputDevicesHasBeenSet = false;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputSecurityGroups;
    bool m_inputSecurityGroupsHasBeenSet = false;

    Aws::Vector<MediaConnectFlowRequest> m_mediaConnectFlows;
    bool m_mediaConnectFlowsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<InputSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;

    SrtSettingsRequest m_srtSettings;
    bool m_srtSettingsHasBeenSet = false;

    MulticastSettingsUpdateRequest m_multicastSettings;
    bool m_multicastSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
