/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/InputType.h>
#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class CreateChannelRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    CreateChannelRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    CreateChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateChannelRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input type will be an immutable field which will be used to define
     * whether the channel will allow CMAF ingest or HLS ingest. If unprovided, it will
     * default to HLS to preserve current behavior.</p> <p>The allowed values are:</p>
     * <ul> <li> <p> <code>HLS</code> - The HLS streaming specification (which defines
     * M3U8 manifests and TS segments).</p> </li> <li> <p> <code>CMAF</code> - The
     * DASH-IF CMAF Ingest specification (which defines CMAF segments with optional
     * DASH manifests).</p> </li> </ul>
     */
    inline InputType GetInputType() const { return m_inputType; }
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }
    inline void SetInputType(InputType value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline CreateChannelRequest& WithInputType(InputType value) { SetInputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateChannelRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for input switching based on the media quality confidence
     * score (MQCS) as provided from AWS Elemental MediaLive. This setting is valid
     * only when <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const InputSwitchConfiguration& GetInputSwitchConfiguration() const { return m_inputSwitchConfiguration; }
    inline bool InputSwitchConfigurationHasBeenSet() const { return m_inputSwitchConfigurationHasBeenSet; }
    template<typename InputSwitchConfigurationT = InputSwitchConfiguration>
    void SetInputSwitchConfiguration(InputSwitchConfigurationT&& value) { m_inputSwitchConfigurationHasBeenSet = true; m_inputSwitchConfiguration = std::forward<InputSwitchConfigurationT>(value); }
    template<typename InputSwitchConfigurationT = InputSwitchConfiguration>
    CreateChannelRequest& WithInputSwitchConfiguration(InputSwitchConfigurationT&& value) { SetInputSwitchConfiguration(std::forward<InputSwitchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for what common media server data (CMSD) headers AWS Elemental
     * MediaPackage includes in responses to the CDN. This setting is valid only when
     * <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const OutputHeaderConfiguration& GetOutputHeaderConfiguration() const { return m_outputHeaderConfiguration; }
    inline bool OutputHeaderConfigurationHasBeenSet() const { return m_outputHeaderConfigurationHasBeenSet; }
    template<typename OutputHeaderConfigurationT = OutputHeaderConfiguration>
    void SetOutputHeaderConfiguration(OutputHeaderConfigurationT&& value) { m_outputHeaderConfigurationHasBeenSet = true; m_outputHeaderConfiguration = std::forward<OutputHeaderConfigurationT>(value); }
    template<typename OutputHeaderConfigurationT = OutputHeaderConfiguration>
    CreateChannelRequest& WithOutputHeaderConfiguration(OutputHeaderConfigurationT&& value) { SetOutputHeaderConfiguration(std::forward<OutputHeaderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateChannelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateChannelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    InputType m_inputType{InputType::NOT_SET};
    bool m_inputTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InputSwitchConfiguration m_inputSwitchConfiguration;
    bool m_inputSwitchConfigurationHasBeenSet = false;

    OutputHeaderConfiguration m_outputHeaderConfiguration;
    bool m_outputHeaderConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
