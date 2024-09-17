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
#include <aws/medialive/model/InputDestination.h>
#include <aws/medialive/model/InputDeviceSettings.h>
#include <aws/medialive/model/MediaConnectFlow.h>
#include <aws/medialive/model/InputSource.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for Input<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Input">AWS API
   * Reference</a></p>
   */
  class Input
  {
  public:
    AWS_MEDIALIVE_API Input();
    AWS_MEDIALIVE_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Input& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Input& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Input& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const{ return m_attachedChannels; }
    inline bool AttachedChannelsHasBeenSet() const { return m_attachedChannelsHasBeenSet; }
    inline void SetAttachedChannels(const Aws::Vector<Aws::String>& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels = value; }
    inline void SetAttachedChannels(Aws::Vector<Aws::String>&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels = std::move(value); }
    inline Input& WithAttachedChannels(const Aws::Vector<Aws::String>& value) { SetAttachedChannels(value); return *this;}
    inline Input& WithAttachedChannels(Aws::Vector<Aws::String>&& value) { SetAttachedChannels(std::move(value)); return *this;}
    inline Input& AddAttachedChannels(const Aws::String& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(value); return *this; }
    inline Input& AddAttachedChannels(Aws::String&& value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(std::move(value)); return *this; }
    inline Input& AddAttachedChannels(const char* value) { m_attachedChannelsHasBeenSet = true; m_attachedChannels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<InputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<InputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline Input& WithDestinations(const Aws::Vector<InputDestination>& value) { SetDestinations(value); return *this;}
    inline Input& WithDestinations(Aws::Vector<InputDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline Input& AddDestinations(const InputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline Input& AddDestinations(InputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Input& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Input& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Input& WithId(const char* value) { SetId(value); return *this;}
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
    inline const InputClass& GetInputClass() const{ return m_inputClass; }
    inline bool InputClassHasBeenSet() const { return m_inputClassHasBeenSet; }
    inline void SetInputClass(const InputClass& value) { m_inputClassHasBeenSet = true; m_inputClass = value; }
    inline void SetInputClass(InputClass&& value) { m_inputClassHasBeenSet = true; m_inputClass = std::move(value); }
    inline Input& WithInputClass(const InputClass& value) { SetInputClass(value); return *this;}
    inline Input& WithInputClass(InputClass&& value) { SetInputClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for the input devices.
     */
    inline const Aws::Vector<InputDeviceSettings>& GetInputDevices() const{ return m_inputDevices; }
    inline bool InputDevicesHasBeenSet() const { return m_inputDevicesHasBeenSet; }
    inline void SetInputDevices(const Aws::Vector<InputDeviceSettings>& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = value; }
    inline void SetInputDevices(Aws::Vector<InputDeviceSettings>&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::move(value); }
    inline Input& WithInputDevices(const Aws::Vector<InputDeviceSettings>& value) { SetInputDevices(value); return *this;}
    inline Input& WithInputDevices(Aws::Vector<InputDeviceSettings>&& value) { SetInputDevices(std::move(value)); return *this;}
    inline Input& AddInputDevices(const InputDeviceSettings& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(value); return *this; }
    inline Input& AddInputDevices(InputDeviceSettings&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of IDs for all Inputs which are partners of this one.
     */
    inline const Aws::Vector<Aws::String>& GetInputPartnerIds() const{ return m_inputPartnerIds; }
    inline bool InputPartnerIdsHasBeenSet() const { return m_inputPartnerIdsHasBeenSet; }
    inline void SetInputPartnerIds(const Aws::Vector<Aws::String>& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds = value; }
    inline void SetInputPartnerIds(Aws::Vector<Aws::String>&& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds = std::move(value); }
    inline Input& WithInputPartnerIds(const Aws::Vector<Aws::String>& value) { SetInputPartnerIds(value); return *this;}
    inline Input& WithInputPartnerIds(Aws::Vector<Aws::String>&& value) { SetInputPartnerIds(std::move(value)); return *this;}
    inline Input& AddInputPartnerIds(const Aws::String& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds.push_back(value); return *this; }
    inline Input& AddInputPartnerIds(Aws::String&& value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds.push_back(std::move(value)); return *this; }
    inline Input& AddInputPartnerIds(const char* value) { m_inputPartnerIdsHasBeenSet = true; m_inputPartnerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Certain pull input sources can be dynamic, meaning that they can have their
     * URL's dynamically changes
during input switch actions. Presently, this
     * functionality only works with MP4_FILE and TS_FILE inputs.
     */
    inline const InputSourceType& GetInputSourceType() const{ return m_inputSourceType; }
    inline bool InputSourceTypeHasBeenSet() const { return m_inputSourceTypeHasBeenSet; }
    inline void SetInputSourceType(const InputSourceType& value) { m_inputSourceTypeHasBeenSet = true; m_inputSourceType = value; }
    inline void SetInputSourceType(InputSourceType&& value) { m_inputSourceTypeHasBeenSet = true; m_inputSourceType = std::move(value); }
    inline Input& WithInputSourceType(const InputSourceType& value) { SetInputSourceType(value); return *this;}
    inline Input& WithInputSourceType(InputSourceType&& value) { SetInputSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaConnect Flows for this input.
     */
    inline const Aws::Vector<MediaConnectFlow>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }
    inline bool MediaConnectFlowsHasBeenSet() const { return m_mediaConnectFlowsHasBeenSet; }
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = value; }
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::move(value); }
    inline Input& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { SetMediaConnectFlows(value); return *this;}
    inline Input& WithMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}
    inline Input& AddMediaConnectFlows(const MediaConnectFlow& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(value); return *this; }
    inline Input& AddMediaConnectFlows(MediaConnectFlow&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The user-assigned name (This is a mutable value).
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Input& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Input& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Input& WithName(const char* value) { SetName(value); return *this;}
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
    inline Input& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Input& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Input& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline Input& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline Input& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline Input& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline Input& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline Input& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the sources of the input (PULL-type).
     */
    inline const Aws::Vector<InputSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<InputSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<InputSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline Input& WithSources(const Aws::Vector<InputSource>& value) { SetSources(value); return *this;}
    inline Input& WithSources(Aws::Vector<InputSource>&& value) { SetSources(std::move(value)); return *this;}
    inline Input& AddSources(const InputSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline Input& AddSources(InputSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const InputState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InputState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InputState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Input& WithState(const InputState& value) { SetState(value); return *this;}
    inline Input& WithState(InputState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Input& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Input& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Input& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Input& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Input& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Input& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Input& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Input& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Input& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const InputType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InputType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InputType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Input& WithType(const InputType& value) { SetType(value); return *this;}
    inline Input& WithType(InputType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettings& GetSrtSettings() const{ return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    inline void SetSrtSettings(const SrtSettings& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = value; }
    inline void SetSrtSettings(SrtSettings&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::move(value); }
    inline Input& WithSrtSettings(const SrtSettings& value) { SetSrtSettings(value); return *this;}
    inline Input& WithSrtSettings(SrtSettings&& value) { SetSrtSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The location of this input. AWS, for an input existing in the AWS Cloud, On-Prem
     * for
an input in a customer network.
     */
    inline const InputNetworkLocation& GetInputNetworkLocation() const{ return m_inputNetworkLocation; }
    inline bool InputNetworkLocationHasBeenSet() const { return m_inputNetworkLocationHasBeenSet; }
    inline void SetInputNetworkLocation(const InputNetworkLocation& value) { m_inputNetworkLocationHasBeenSet = true; m_inputNetworkLocation = value; }
    inline void SetInputNetworkLocation(InputNetworkLocation&& value) { m_inputNetworkLocationHasBeenSet = true; m_inputNetworkLocation = std::move(value); }
    inline Input& WithInputNetworkLocation(const InputNetworkLocation& value) { SetInputNetworkLocation(value); return *this;}
    inline Input& WithInputNetworkLocation(InputNetworkLocation&& value) { SetInputNetworkLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettings& GetMulticastSettings() const{ return m_multicastSettings; }
    inline bool MulticastSettingsHasBeenSet() const { return m_multicastSettingsHasBeenSet; }
    inline void SetMulticastSettings(const MulticastSettings& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = value; }
    inline void SetMulticastSettings(MulticastSettings&& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = std::move(value); }
    inline Input& WithMulticastSettings(const MulticastSettings& value) { SetMulticastSettings(value); return *this;}
    inline Input& WithMulticastSettings(MulticastSettings&& value) { SetMulticastSettings(std::move(value)); return *this;}
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

    InputClass m_inputClass;
    bool m_inputClassHasBeenSet = false;

    Aws::Vector<InputDeviceSettings> m_inputDevices;
    bool m_inputDevicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputPartnerIds;
    bool m_inputPartnerIdsHasBeenSet = false;

    InputSourceType m_inputSourceType;
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

    InputState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    InputType m_type;
    bool m_typeHasBeenSet = false;

    SrtSettings m_srtSettings;
    bool m_srtSettingsHasBeenSet = false;

    InputNetworkLocation m_inputNetworkLocation;
    bool m_inputNetworkLocationHasBeenSet = false;

    MulticastSettings m_multicastSettings;
    bool m_multicastSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
