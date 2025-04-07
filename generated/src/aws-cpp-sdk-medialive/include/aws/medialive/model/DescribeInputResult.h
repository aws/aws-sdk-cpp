/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputClass.h>
#include <aws/medialive/model/InputSourceType.h>
#include <aws/medialive/model/InputState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputType.h>
#include <aws/medialive/model/SrtSettings.h>
#include <aws/medialive/model/InputNetworkLocation.h>
#include <aws/medialive/model/MulticastSettings.h>
#include <aws/medialive/model/Smpte2110ReceiverGroupSettings.h>
#include <aws/medialive/model/InputDestination.h>
#include <aws/medialive/model/InputDeviceSettings.h>
#include <aws/medialive/model/MediaConnectFlow.h>
#include <aws/medialive/model/InputSource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeInputResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputResponse">AWS
   * API Reference</a></p>
   */
  class DescribeInputResult
  {
  public:
    AWS_MEDIALIVE_API DescribeInputResult() = default;
    AWS_MEDIALIVE_API DescribeInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeInputResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const { return m_attachedChannels; }
    template<typename AttachedChannelsT = Aws::Vector<Aws::String>>
    void SetAttachedChannels(AttachedChannelsT&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels = std::forward<AttachedChannelsT>(value); }
    template<typename AttachedChannelsT = Aws::Vector<Aws::String>>
    DescribeInputResult& WithAttachedChannels(AttachedChannelsT&& value) { SetAttachedChannels(std::forward<AttachedChannelsT>(value)); return *this;}
    template<typename AttachedChannelsT = Aws::String>
    DescribeInputResult& AddAttachedChannels(AttachedChannelsT&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.emplace_back(std::forward<AttachedChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const { return m_destinations; }
    template<typename DestinationsT = Aws::Vector<InputDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<InputDestination>>
    DescribeInputResult& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = InputDestination>
    DescribeInputResult& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DescribeInputResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * STANDARD - MediaLive expects two sources to be connected to this input. If the
     * channel is also STANDARD, both sources will be ingested. If the channel is
     * SINGLE_PIPELINE, only the first source will be ingested; the second source will
     * always be ignored, even if the first source fails.
SINGLE_PIPELINE - You can
     * connect only one source to this input. If the ChannelClass is also
     * SINGLE_PIPELINE, this value is valid. If the ChannelClass is STANDARD, this
     * value is not valid because the channel requires two sources in the input.
     */
    inline InputClass GetInputClass() const { return m_inputClass; }
    inline void SetInputClass(InputClass value) { m_inputClassHasBeenSet = true; m_inputClass = value; }
    inline DescribeInputResult& WithInputClass(InputClass value) { SetInputClass(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for the input devices.
     */
    inline const Aws::Vector<InputDeviceSettings>& GetInputDevices() const { return m_inputDevices; }
    template<typename InputDevicesT = Aws::Vector<InputDeviceSettings>>
    void SetInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::forward<InputDevicesT>(value); }
    template<typename InputDevicesT = Aws::Vector<InputDeviceSettings>>
    DescribeInputResult& WithInputDevices(InputDevicesT&& value) { SetInputDevices(std::forward<InputDevicesT>(value)); return *this;}
    template<typename InputDevicesT = InputDeviceSettings>
    DescribeInputResult& AddInputDevices(InputDevicesT&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.emplace_back(std::forward<InputDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of IDs for all Inputs which are partners of this one.
     */
    inline const Aws::Vector<Aws::String>& GetInputPartnerIds() const { return m_inputPartnerIds; }
    template<typename InputPartnerIdsT = Aws::Vector<Aws::String>>
    void SetInputPartnerIds(InputPartnerIdsT&& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds = std::forward<InputPartnerIdsT>(value); }
    template<typename InputPartnerIdsT = Aws::Vector<Aws::String>>
    DescribeInputResult& WithInputPartnerIds(InputPartnerIdsT&& value) { SetInputPartnerIds(std::forward<InputPartnerIdsT>(value)); return *this;}
    template<typename InputPartnerIdsT = Aws::String>
    DescribeInputResult& AddInputPartnerIds(InputPartnerIdsT&& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds.emplace_back(std::forward<InputPartnerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Certain pull input sources can be dynamic, meaning that they can have their
     * URL's dynamically changes
during input switch actions. Presently, this
     * functionality only works with MP4_FILE and TS_FILE inputs.
     */
    inline InputSourceType GetInputSourceType() const { return m_inputSourceType; }
    inline void SetInputSourceType(InputSourceType value) { m_inputSourceTypeHasBeenSet = true; m_inputSourceType = value; }
    inline DescribeInputResult& WithInputSourceType(InputSourceType value) { SetInputSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaConnect Flows for this input.
     */
    inline const Aws::Vector<MediaConnectFlow>& GetMediaConnectFlows() const { return m_mediaConnectFlows; }
    template<typename MediaConnectFlowsT = Aws::Vector<MediaConnectFlow>>
    void SetMediaConnectFlows(MediaConnectFlowsT&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::forward<MediaConnectFlowsT>(value); }
    template<typename MediaConnectFlowsT = Aws::Vector<MediaConnectFlow>>
    DescribeInputResult& WithMediaConnectFlows(MediaConnectFlowsT&& value) { SetMediaConnectFlows(std::forward<MediaConnectFlowsT>(value)); return *this;}
    template<typename MediaConnectFlowsT = MediaConnectFlow>
    DescribeInputResult& AddMediaConnectFlows(MediaConnectFlowsT&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.emplace_back(std::forward<MediaConnectFlowsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The user-assigned name (This is a mutable value).
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeInputResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeInputResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    DescribeInputResult& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    DescribeInputResult& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of the sources of the input (PULL-type).
     */
    inline const Aws::Vector<InputSource>& GetSources() const { return m_sources; }
    template<typename SourcesT = Aws::Vector<InputSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<InputSource>>
    DescribeInputResult& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = InputSource>
    DescribeInputResult& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline InputState GetState() const { return m_state; }
    inline void SetState(InputState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeInputResult& WithState(InputState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeInputResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeInputResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline InputType GetType() const { return m_type; }
    inline void SetType(InputType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeInputResult& WithType(InputType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettings& GetSrtSettings() const { return m_srtSettings; }
    template<typename SrtSettingsT = SrtSettings>
    void SetSrtSettings(SrtSettingsT&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::forward<SrtSettingsT>(value); }
    template<typename SrtSettingsT = SrtSettings>
    DescribeInputResult& WithSrtSettings(SrtSettingsT&& value) { SetSrtSettings(std::forward<SrtSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The location of this input. AWS, for an input existing in the AWS Cloud, On-Prem
     * for
an input in a customer network.
     */
    inline InputNetworkLocation GetInputNetworkLocation() const { return m_inputNetworkLocation; }
    inline void SetInputNetworkLocation(InputNetworkLocation value) { m_inputNetworkLocationHasBeenSet = true; m_inputNetworkLocation = value; }
    inline DescribeInputResult& WithInputNetworkLocation(InputNetworkLocation value) { SetInputNetworkLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettings& GetMulticastSettings() const { return m_multicastSettings; }
    template<typename MulticastSettingsT = MulticastSettings>
    void SetMulticastSettings(MulticastSettingsT&& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = std::forward<MulticastSettingsT>(value); }
    template<typename MulticastSettingsT = MulticastSettings>
    DescribeInputResult& WithMulticastSettings(MulticastSettingsT&& value) { SetMulticastSettings(std::forward<MulticastSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter if the input is a SMPTE 2110 input, to identify the
     * stream sources for this input.
     */
    inline const Smpte2110ReceiverGroupSettings& GetSmpte2110ReceiverGroupSettings() const { return m_smpte2110ReceiverGroupSettings; }
    template<typename Smpte2110ReceiverGroupSettingsT = Smpte2110ReceiverGroupSettings>
    void SetSmpte2110ReceiverGroupSettings(Smpte2110ReceiverGroupSettingsT&& value) { m_smpte2110ReceiverGroupSettingsHasBeenSet = true; m_smpte2110ReceiverGroupSettings = std::forward<Smpte2110ReceiverGroupSettingsT>(value); }
    template<typename Smpte2110ReceiverGroupSettingsT = Smpte2110ReceiverGroupSettings>
    DescribeInputResult& WithSmpte2110ReceiverGroupSettings(Smpte2110ReceiverGroupSettingsT&& value) { SetSmpte2110ReceiverGroupSettings(std::forward<Smpte2110ReceiverGroupSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetSdiSources() const { return m_sdiSources; }
    template<typename SdiSourcesT = Aws::Vector<Aws::String>>
    void SetSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources = std::forward<SdiSourcesT>(value); }
    template<typename SdiSourcesT = Aws::Vector<Aws::String>>
    DescribeInputResult& WithSdiSources(SdiSourcesT&& value) { SetSdiSources(std::forward<SdiSourcesT>(value)); return *this;}
    template<typename SdiSourcesT = Aws::String>
    DescribeInputResult& AddSdiSources(SdiSourcesT&& value) { m_sdiSourcesHasBeenSet = true; m_sdiSources.emplace_back(std::forward<SdiSourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInputResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_attachedChannels;
    bool m_attachedChannelsHasBeenSet = false;

    Aws::Vector<InputDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InputClass m_inputClass{InputClass::NOT_SET};
    bool m_inputClassHasBeenSet = false;

    Aws::Vector<InputDeviceSettings> m_inputDevices;
    bool m_inputDevicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputPartnerIds;
    bool m_inputPartnerIdsHasBeenSet = false;

    InputSourceType m_inputSourceType{InputSourceType::NOT_SET};
    bool m_inputSourceTypeHasBeenSet = false;

    Aws::Vector<MediaConnectFlow> m_mediaConnectFlows;
    bool m_mediaConnectFlowsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::Vector<InputSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    InputState m_state{InputState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    InputType m_type{InputType::NOT_SET};
    bool m_typeHasBeenSet = false;

    SrtSettings m_srtSettings;
    bool m_srtSettingsHasBeenSet = false;

    InputNetworkLocation m_inputNetworkLocation{InputNetworkLocation::NOT_SET};
    bool m_inputNetworkLocationHasBeenSet = false;

    MulticastSettings m_multicastSettings;
    bool m_multicastSettingsHasBeenSet = false;

    Smpte2110ReceiverGroupSettings m_smpte2110ReceiverGroupSettings;
    bool m_smpte2110ReceiverGroupSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sdiSources;
    bool m_sdiSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
