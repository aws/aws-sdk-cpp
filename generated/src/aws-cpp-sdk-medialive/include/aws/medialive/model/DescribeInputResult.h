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
    AWS_MEDIALIVE_API DescribeInputResult();
    AWS_MEDIALIVE_API DescribeInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The Unique ARN of the input (generated, immutable).
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeInputResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeInputResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeInputResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of channel IDs that that input is attached to (currently an input can
     * only be attached to one channel).
     */
    inline const Aws::Vector<Aws::String>& GetAttachedChannels() const{ return m_attachedChannels; }
    inline void SetAttachedChannels(const Aws::Vector<Aws::String>& value) { m_attachedChannels = value; }
    inline void SetAttachedChannels(Aws::Vector<Aws::String>&& value) { m_attachedChannels = std::move(value); }
    inline DescribeInputResult& WithAttachedChannels(const Aws::Vector<Aws::String>& value) { SetAttachedChannels(value); return *this;}
    inline DescribeInputResult& WithAttachedChannels(Aws::Vector<Aws::String>&& value) { SetAttachedChannels(std::move(value)); return *this;}
    inline DescribeInputResult& AddAttachedChannels(const Aws::String& value) { m_attachedChannels.push_back(value); return *this; }
    inline DescribeInputResult& AddAttachedChannels(Aws::String&& value) { m_attachedChannels.push_back(std::move(value)); return *this; }
    inline DescribeInputResult& AddAttachedChannels(const char* value) { m_attachedChannels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the destinations of the input (PUSH-type).
     */
    inline const Aws::Vector<InputDestination>& GetDestinations() const{ return m_destinations; }
    inline void SetDestinations(const Aws::Vector<InputDestination>& value) { m_destinations = value; }
    inline void SetDestinations(Aws::Vector<InputDestination>&& value) { m_destinations = std::move(value); }
    inline DescribeInputResult& WithDestinations(const Aws::Vector<InputDestination>& value) { SetDestinations(value); return *this;}
    inline DescribeInputResult& WithDestinations(Aws::Vector<InputDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline DescribeInputResult& AddDestinations(const InputDestination& value) { m_destinations.push_back(value); return *this; }
    inline DescribeInputResult& AddDestinations(InputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The generated ID of the input (unique for user account, immutable).
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline DescribeInputResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeInputResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeInputResult& WithId(const char* value) { SetId(value); return *this;}
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
    inline void SetInputClass(const InputClass& value) { m_inputClass = value; }
    inline void SetInputClass(InputClass&& value) { m_inputClass = std::move(value); }
    inline DescribeInputResult& WithInputClass(const InputClass& value) { SetInputClass(value); return *this;}
    inline DescribeInputResult& WithInputClass(InputClass&& value) { SetInputClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for the input devices.
     */
    inline const Aws::Vector<InputDeviceSettings>& GetInputDevices() const{ return m_inputDevices; }
    inline void SetInputDevices(const Aws::Vector<InputDeviceSettings>& value) { m_inputDevices = value; }
    inline void SetInputDevices(Aws::Vector<InputDeviceSettings>&& value) { m_inputDevices = std::move(value); }
    inline DescribeInputResult& WithInputDevices(const Aws::Vector<InputDeviceSettings>& value) { SetInputDevices(value); return *this;}
    inline DescribeInputResult& WithInputDevices(Aws::Vector<InputDeviceSettings>&& value) { SetInputDevices(std::move(value)); return *this;}
    inline DescribeInputResult& AddInputDevices(const InputDeviceSettings& value) { m_inputDevices.push_back(value); return *this; }
    inline DescribeInputResult& AddInputDevices(InputDeviceSettings&& value) { m_inputDevices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * A list of IDs for all Inputs which are partners of this one.
     */
    inline const Aws::Vector<Aws::String>& GetInputPartnerIds() const{ return m_inputPartnerIds; }
    inline void SetInputPartnerIds(const Aws::Vector<Aws::String>& value) { m_inputPartnerIds = value; }
    inline void SetInputPartnerIds(Aws::Vector<Aws::String>&& value) { m_inputPartnerIds = std::move(value); }
    inline DescribeInputResult& WithInputPartnerIds(const Aws::Vector<Aws::String>& value) { SetInputPartnerIds(value); return *this;}
    inline DescribeInputResult& WithInputPartnerIds(Aws::Vector<Aws::String>&& value) { SetInputPartnerIds(std::move(value)); return *this;}
    inline DescribeInputResult& AddInputPartnerIds(const Aws::String& value) { m_inputPartnerIds.push_back(value); return *this; }
    inline DescribeInputResult& AddInputPartnerIds(Aws::String&& value) { m_inputPartnerIds.push_back(std::move(value)); return *this; }
    inline DescribeInputResult& AddInputPartnerIds(const char* value) { m_inputPartnerIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Certain pull input sources can be dynamic, meaning that they can have their
     * URL's dynamically changes
during input switch actions. Presently, this
     * functionality only works with MP4_FILE and TS_FILE inputs.
     */
    inline const InputSourceType& GetInputSourceType() const{ return m_inputSourceType; }
    inline void SetInputSourceType(const InputSourceType& value) { m_inputSourceType = value; }
    inline void SetInputSourceType(InputSourceType&& value) { m_inputSourceType = std::move(value); }
    inline DescribeInputResult& WithInputSourceType(const InputSourceType& value) { SetInputSourceType(value); return *this;}
    inline DescribeInputResult& WithInputSourceType(InputSourceType&& value) { SetInputSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaConnect Flows for this input.
     */
    inline const Aws::Vector<MediaConnectFlow>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { m_mediaConnectFlows = value; }
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { m_mediaConnectFlows = std::move(value); }
    inline DescribeInputResult& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlow>& value) { SetMediaConnectFlows(value); return *this;}
    inline DescribeInputResult& WithMediaConnectFlows(Aws::Vector<MediaConnectFlow>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}
    inline DescribeInputResult& AddMediaConnectFlows(const MediaConnectFlow& value) { m_mediaConnectFlows.push_back(value); return *this; }
    inline DescribeInputResult& AddMediaConnectFlows(MediaConnectFlow&& value) { m_mediaConnectFlows.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The user-assigned name (This is a mutable value).
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeInputResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeInputResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeInputResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeInputResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeInputResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeInputResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of IDs for all the Input Security Groups attached to the input.
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroups = std::move(value); }
    inline DescribeInputResult& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline DescribeInputResult& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline DescribeInputResult& AddSecurityGroups(const Aws::String& value) { m_securityGroups.push_back(value); return *this; }
    inline DescribeInputResult& AddSecurityGroups(Aws::String&& value) { m_securityGroups.push_back(std::move(value)); return *this; }
    inline DescribeInputResult& AddSecurityGroups(const char* value) { m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the sources of the input (PULL-type).
     */
    inline const Aws::Vector<InputSource>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<InputSource>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<InputSource>&& value) { m_sources = std::move(value); }
    inline DescribeInputResult& WithSources(const Aws::Vector<InputSource>& value) { SetSources(value); return *this;}
    inline DescribeInputResult& WithSources(Aws::Vector<InputSource>&& value) { SetSources(std::move(value)); return *this;}
    inline DescribeInputResult& AddSources(const InputSource& value) { m_sources.push_back(value); return *this; }
    inline DescribeInputResult& AddSources(InputSource&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const InputState& GetState() const{ return m_state; }
    inline void SetState(const InputState& value) { m_state = value; }
    inline void SetState(InputState&& value) { m_state = std::move(value); }
    inline DescribeInputResult& WithState(const InputState& value) { SetState(value); return *this;}
    inline DescribeInputResult& WithState(InputState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeInputResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeInputResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeInputResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeInputResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeInputResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeInputResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeInputResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeInputResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeInputResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const InputType& GetType() const{ return m_type; }
    inline void SetType(const InputType& value) { m_type = value; }
    inline void SetType(InputType&& value) { m_type = std::move(value); }
    inline DescribeInputResult& WithType(const InputType& value) { SetType(value); return *this;}
    inline DescribeInputResult& WithType(InputType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The settings associated with an SRT input.
     */
    inline const SrtSettings& GetSrtSettings() const{ return m_srtSettings; }
    inline void SetSrtSettings(const SrtSettings& value) { m_srtSettings = value; }
    inline void SetSrtSettings(SrtSettings&& value) { m_srtSettings = std::move(value); }
    inline DescribeInputResult& WithSrtSettings(const SrtSettings& value) { SetSrtSettings(value); return *this;}
    inline DescribeInputResult& WithSrtSettings(SrtSettings&& value) { SetSrtSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The location of this input. AWS, for an input existing in the AWS Cloud, On-Prem
     * for
an input in a customer network.
     */
    inline const InputNetworkLocation& GetInputNetworkLocation() const{ return m_inputNetworkLocation; }
    inline void SetInputNetworkLocation(const InputNetworkLocation& value) { m_inputNetworkLocation = value; }
    inline void SetInputNetworkLocation(InputNetworkLocation&& value) { m_inputNetworkLocation = std::move(value); }
    inline DescribeInputResult& WithInputNetworkLocation(const InputNetworkLocation& value) { SetInputNetworkLocation(value); return *this;}
    inline DescribeInputResult& WithInputNetworkLocation(InputNetworkLocation&& value) { SetInputNetworkLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Multicast Input settings.
     */
    inline const MulticastSettings& GetMulticastSettings() const{ return m_multicastSettings; }
    inline void SetMulticastSettings(const MulticastSettings& value) { m_multicastSettings = value; }
    inline void SetMulticastSettings(MulticastSettings&& value) { m_multicastSettings = std::move(value); }
    inline DescribeInputResult& WithMulticastSettings(const MulticastSettings& value) { SetMulticastSettings(value); return *this;}
    inline DescribeInputResult& WithMulticastSettings(MulticastSettings&& value) { SetMulticastSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_attachedChannels;

    Aws::Vector<InputDestination> m_destinations;

    Aws::String m_id;

    InputClass m_inputClass;

    Aws::Vector<InputDeviceSettings> m_inputDevices;

    Aws::Vector<Aws::String> m_inputPartnerIds;

    InputSourceType m_inputSourceType;

    Aws::Vector<MediaConnectFlow> m_mediaConnectFlows;

    Aws::String m_name;

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_securityGroups;

    Aws::Vector<InputSource> m_sources;

    InputState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    InputType m_type;

    SrtSettings m_srtSettings;

    InputNetworkLocation m_inputNetworkLocation;

    MulticastSettings m_multicastSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
