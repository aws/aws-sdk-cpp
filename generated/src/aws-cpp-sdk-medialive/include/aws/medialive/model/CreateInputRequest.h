﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/InputType.h>
#include <aws/medialive/model/InputVpcRequest.h>
#include <aws/medialive/model/SrtSettingsRequest.h>
#include <aws/medialive/model/InputNetworkLocation.h>
#include <aws/medialive/model/MulticastSettingsCreateRequest.h>
#include <aws/medialive/model/InputDestinationRequest.h>
#include <aws/medialive/model/InputDeviceSettings.h>
#include <aws/medialive/model/MediaConnectFlowRequest.h>
#include <aws/medialive/model/InputSourceRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * The name of the input<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputRequest">AWS
   * API Reference</a></p>
   */
  class CreateInputRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API CreateInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInput"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Destination settings for PUSH type inputs.
     */
    inline const Aws::Vector<InputDestinationRequest>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<InputDestinationRequest>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<InputDestinationRequest>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline CreateInputRequest& WithDestinations(const Aws::Vector<InputDestinationRequest>& value) { SetDestinations(value); return *this;}
    inline CreateInputRequest& WithDestinations(Aws::Vector<InputDestinationRequest>&& value) { SetDestinations(std::move(value)); return *this;}
    inline CreateInputRequest& AddDestinations(const InputDestinationRequest& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline CreateInputRequest& AddDestinations(InputDestinationRequest&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for the devices.
     */
    inline const Aws::Vector<InputDeviceSettings>& GetInputDevices() const{ return m_inputDevices; }
    inline bool InputDevicesHasBeenSet() const { return m_inputDevicesHasBeenSet; }
    inline void SetInputDevices(const Aws::Vector<InputDeviceSettings>& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = value; }
    inline void SetInputDevices(Aws::Vector<InputDeviceSettings>&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices = std::move(value); }
    inline CreateInputRequest& WithInputDevices(const Aws::Vector<InputDeviceSettings>& value) { SetInputDevices(value); return *this;}
    inline CreateInputRequest& WithInputDevices(Aws::Vector<InputDeviceSettings>&& value) { SetInputDevices(std::move(value)); return *this;}
    inline CreateInputRequest& AddInputDevices(const InputDeviceSettings& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(value); return *this; }
    inline CreateInputRequest& AddInputDevices(InputDeviceSettings&& value) { m_inputDevicesHasBeenSet = true; m_inputDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroups() const{ return m_inputSecurityGroups; }
    inline bool InputSecurityGroupsHasBeenSet() const { return m_inputSecurityGroupsHasBeenSet; }
    inline void SetInputSecurityGroups(const Aws::Vector<Aws::String>& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = value; }
    inline void SetInputSecurityGroups(Aws::Vector<Aws::String>&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = std::move(value); }
    inline CreateInputRequest& WithInputSecurityGroups(const Aws::Vector<Aws::String>& value) { SetInputSecurityGroups(value); return *this;}
    inline CreateInputRequest& WithInputSecurityGroups(Aws::Vector<Aws::String>&& value) { SetInputSecurityGroups(std::move(value)); return *this;}
    inline CreateInputRequest& AddInputSecurityGroups(const Aws::String& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }
    inline CreateInputRequest& AddInputSecurityGroups(Aws::String&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(std::move(value)); return *this; }
    inline CreateInputRequest& AddInputSecurityGroups(const char* value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the MediaConnect Flows that you want to use in this input. You can
     * specify as few as one
Flow and presently, as many as two. The only requirement
     * is when you have more than one is that each Flow is in a
separate Availability
     * Zone as this ensures your EML input is redundant to AZ issues.
     */
    inline const Aws::Vector<MediaConnectFlowRequest>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }
    inline bool MediaConnectFlowsHasBeenSet() const { return m_mediaConnectFlowsHasBeenSet; }
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = value; }
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::move(value); }
    inline CreateInputRequest& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { SetMediaConnectFlows(value); return *this;}
    inline CreateInputRequest& WithMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}
    inline CreateInputRequest& AddMediaConnectFlows(const MediaConnectFlowRequest& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(value); return *this; }
    inline CreateInputRequest& AddMediaConnectFlows(MediaConnectFlowRequest&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(std::move(value)); return *this; }
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
    inline CreateInputRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateInputRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateInputRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Unique identifier of the request to ensure the request is handled
exactly once
     * in case of retries.
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline CreateInputRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateInputRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateInputRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline CreateInputRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateInputRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateInputRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline CreateInputRequest& WithSources(const Aws::Vector<InputSourceRequest>& value) { SetSources(value); return *this;}
    inline CreateInputRequest& WithSources(Aws::Vector<InputSourceRequest>&& value) { SetSources(std::move(value)); return *this;}
    inline CreateInputRequest& AddSources(const InputSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline CreateInputRequest& AddSources(InputSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInputRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateInputRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInputRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateInputRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInputRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInputRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateInputRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateInputRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateInputRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const InputType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const InputType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(InputType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateInputRequest& WithType(const InputType& value) { SetType(value); return *this;}
    inline CreateInputRequest& WithType(InputType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const InputVpcRequest& GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(const InputVpcRequest& value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline void SetVpc(InputVpcRequest&& value) { m_vpcHasBeenSet = true; m_vpc = std::move(value); }
    inline CreateInputRequest& WithVpc(const InputVpcRequest& value) { SetVpc(value); return *this;}
    inline CreateInputRequest& WithVpc(InputVpcRequest&& value) { SetVpc(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettingsRequest& GetSrtSettings() const{ return m_srtSettings; }
    inline bool SrtSettingsHasBeenSet() const { return m_srtSettingsHasBeenSet; }
    inline void SetSrtSettings(const SrtSettingsRequest& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = value; }
    inline void SetSrtSettings(SrtSettingsRequest&& value) { m_srtSettingsHasBeenSet = true; m_srtSettings = std::move(value); }
    inline CreateInputRequest& WithSrtSettings(const SrtSettingsRequest& value) { SetSrtSettings(value); return *this;}
    inline CreateInputRequest& WithSrtSettings(SrtSettingsRequest&& value) { SetSrtSettings(std::move(value)); return *this;}
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
    inline CreateInputRequest& WithInputNetworkLocation(const InputNetworkLocation& value) { SetInputNetworkLocation(value); return *this;}
    inline CreateInputRequest& WithInputNetworkLocation(InputNetworkLocation&& value) { SetInputNetworkLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettingsCreateRequest& GetMulticastSettings() const{ return m_multicastSettings; }
    inline bool MulticastSettingsHasBeenSet() const { return m_multicastSettingsHasBeenSet; }
    inline void SetMulticastSettings(const MulticastSettingsCreateRequest& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = value; }
    inline void SetMulticastSettings(MulticastSettingsCreateRequest&& value) { m_multicastSettingsHasBeenSet = true; m_multicastSettings = std::move(value); }
    inline CreateInputRequest& WithMulticastSettings(const MulticastSettingsCreateRequest& value) { SetMulticastSettings(value); return *this;}
    inline CreateInputRequest& WithMulticastSettings(MulticastSettingsCreateRequest&& value) { SetMulticastSettings(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InputDestinationRequest> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<InputDeviceSettings> m_inputDevices;
    bool m_inputDevicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputSecurityGroups;
    bool m_inputSecurityGroupsHasBeenSet = false;

    Aws::Vector<MediaConnectFlowRequest> m_mediaConnectFlows;
    bool m_mediaConnectFlowsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<InputSourceRequest> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    InputType m_type;
    bool m_typeHasBeenSet = false;

    InputVpcRequest m_vpc;
    bool m_vpcHasBeenSet = false;

    SrtSettingsRequest m_srtSettings;
    bool m_srtSettingsHasBeenSet = false;

    InputNetworkLocation m_inputNetworkLocation;
    bool m_inputNetworkLocationHasBeenSet = false;

    MulticastSettingsCreateRequest m_multicastSettings;
    bool m_multicastSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
