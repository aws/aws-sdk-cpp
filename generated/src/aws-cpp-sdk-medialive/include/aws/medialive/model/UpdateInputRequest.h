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
#include <aws/medialive/model/Smpte2110ReceiverGroupSettings.h>
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
    AWS_MEDIALIVE_API UpdateInputRequest() = default;

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
    inline const Aws::Vector<InputDestinationRequest>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<InputDestinationRequest>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<InputDestinationRequest>>
    UpdateInputRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = InputDestinationRequest>
    UpdateInputRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for the devices.
     */
    inline const Aws::Vector<InputDeviceRequest>& GetInputDevices() const { return m_inputDevices; }
    inline bool InputDevicesHasBeenSet() const { return m_inputDevicesHasBeenSet; }
    template<typename InputDevicesT = Aws::Vector<InputDeviceRequest>>
    void SetInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::forward<InputDevicesT>(value); }
    template<typename InputDevicesT = Aws::Vector<InputDeviceRequest>>
    UpdateInputRequest& WithInputDevices(InputDevicesT&& value) { SetInputDevices(std::forward<InputDevicesT>(value)); return *this;}
    template<typename InputDevicesT = InputDeviceRequest>
    UpdateInputRequest& AddInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.emplace_back(std::forward<InputDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Unique ID of the input.
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    UpdateInputRequest& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroups() const { return m_inputSecurityGroups; }
    inline bool InputSecurityGroupsHasBeenSet() const { return m_inputSecurityGroupsHasBeenSet; }
    template<typename InputSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetInputSecurityGroups(InputSecurityGroupsT&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = std::forward<InputSecurityGroupsT>(value); }
    template<typename InputSecurityGroupsT = Aws::Vector<Aws::String>>
    UpdateInputRequest& WithInputSecurityGroups(InputSecurityGroupsT&& value) { SetInputSecurityGroups(std::forward<InputSecurityGroupsT>(value)); return *this;}
    template<typename InputSecurityGroupsT = Aws::String>
    UpdateInputRequest& AddInputSecurityGroups(InputSecurityGroupsT&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.emplace_back(std::forward<InputSecurityGroupsT>(value)); return *this; }
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
    inline const Aws::Vector<MediaConnectFlowRequest>& GetMediaConnectFlows() const { return m_mediaConnectFlows; }
    inline bool MediaConnectFlowsHasBeenSet() const { return m_mediaConnectFlowsHasBeenSet; }
    template<typename MediaConnectFlowsT = Aws::Vector<MediaConnectFlowRequest>>
    void SetMediaConnectFlows(MediaConnectFlowsT&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::forward<MediaConnectFlowsT>(value); }
    template<typename MediaConnectFlowsT = Aws::Vector<MediaConnectFlowRequest>>
    UpdateInputRequest& WithMediaConnectFlows(MediaConnectFlowsT&& value) { SetMediaConnectFlows(std::forward<MediaConnectFlowsT>(value)); return *this;}
    template<typename MediaConnectFlowsT = MediaConnectFlowRequest>
    UpdateInputRequest& AddMediaConnectFlows(MediaConnectFlowsT&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.emplace_back(std::forward<MediaConnectFlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Name of the input.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateInputRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateInputRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.
     */
    inline const Aws::Vector<InputSourceRequest>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<InputSourceRequest>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<InputSourceRequest>>
    UpdateInputRequest& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = InputSourceRequest>
    UpdateInputRequest& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettingsRequest& GetSrtSettings() const { return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    template<typename SrtSettingsT = SrtSettingsRequest>
    void SetSrtSettings(SrtSettingsT&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::forward<SrtSettingsT>(value); }
    template<typename SrtSettingsT = SrtSettingsRequest>
    UpdateInputRequest& WithSrtSettings(SrtSettingsT&& value) { SetSrtSettings(std::forward<SrtSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettingsUpdateRequest& GetMulticastSettings() const { return m_multicastSettings; }
    inline bool MulticastSettingsHasBeenSet() const { return m_multicastSettingsHasBeenSet; }
    template<typename MulticastSettingsT = MulticastSettingsUpdateRequest>
    void SetMulticastSettings(MulticastSettingsT&& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = std::forward<MulticastSettingsT>(value); }
    template<typename MulticastSettingsT = MulticastSettingsUpdateRequest>
    UpdateInputRequest& WithMulticastSettings(MulticastSettingsT&& value) { SetMulticastSettings(std::forward<MulticastSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter if the input is a SMPTE 2110 input, to identify the
     * stream sources for this input.
     */
    inline const Smpte2110ReceiverGroupSettings& GetSmpte2110ReceiverGroupSettings() const { return m_smpte2110ReceiverGroupSettings; }
    inline bool Smpte2110ReceiverGroupSettingsHasBeenSet() const { return m_smpte2110ReceiverGroupSettingsHasBeenSet; }
    template<typename Smpte2110ReceiverGroupSettingsT = Smpte2110ReceiverGroupSettings>
    void SetSmpte2110ReceiverGroupSettings(Smpte2110ReceiverGroupSettingsT&& value) { m_smpte2110ReceiverGroupSettingsHasBeenSet = true; m_smpte2110ReceiverGroupSettings = std::forward<Smpte2110ReceiverGroupSettingsT>(value); }
    template<typename Smpte2110ReceiverGroupSettingsT = Smpte2110ReceiverGroupSettings>
    UpdateInputRequest& WithSmpte2110ReceiverGroupSettings(Smpte2110ReceiverGroupSettingsT&& value) { SetSmpte2110ReceiverGroupSettings(std::forward<Smpte2110ReceiverGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSdiSources() const { return m_sdiSources; }
    inline bool SdiSourcesHasBeenSet() const { return m_sdiSourcesHasBeenSet; }
    template<typename SdiSourcesT = Aws::Vector<Aws::String>>
    void SetSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources = std::forward<SdiSourcesT>(value); }
    template<typename SdiSourcesT = Aws::Vector<Aws::String>>
    UpdateInputRequest& WithSdiSources(SdiSourcesT&& value) { SetSdiSources(std::forward<SdiSourcesT>(value)); return *this;}
    template<typename SdiSourcesT = Aws::String>
    UpdateInputRequest& AddSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources.emplace_back(std::forward<SdiSourcesT>(value)); return *this; }
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

    Smpte2110ReceiverGroupSettings m_smpte2110ReceiverGroupSettings;
    bool m_smpte2110ReceiverGroupSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sdiSources;
    bool m_sdiSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
