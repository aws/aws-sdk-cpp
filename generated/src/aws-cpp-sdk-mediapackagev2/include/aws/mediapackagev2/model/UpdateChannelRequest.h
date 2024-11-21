/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class UpdateChannelRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }
    inline UpdateChannelRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline UpdateChannelRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline UpdateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline UpdateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline UpdateChannelRequest& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline UpdateChannelRequest& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any descriptive information that you want to add to the channel for future
     * identification purposes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateChannelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateChannelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateChannelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for input switching based on the media quality confidence
     * score (MQCS) as provided from AWS Elemental MediaLive. This setting is valid
     * only when <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const InputSwitchConfiguration& GetInputSwitchConfiguration() const{ return m_inputSwitchConfiguration; }
    inline bool InputSwitchConfigurationHasBeenSet() const { return m_inputSwitchConfigurationHasBeenSet; }
    inline void SetInputSwitchConfiguration(const InputSwitchConfiguration& value) { m_inputSwitchConfigurationHasBeenSet = true; m_inputSwitchConfiguration = value; }
    inline void SetInputSwitchConfiguration(InputSwitchConfiguration&& value) { m_inputSwitchConfigurationHasBeenSet = true; m_inputSwitchConfiguration = std::move(value); }
    inline UpdateChannelRequest& WithInputSwitchConfiguration(const InputSwitchConfiguration& value) { SetInputSwitchConfiguration(value); return *this;}
    inline UpdateChannelRequest& WithInputSwitchConfiguration(InputSwitchConfiguration&& value) { SetInputSwitchConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for what common media server data (CMSD) headers AWS Elemental
     * MediaPackage includes in responses to the CDN. This setting is valid only when
     * <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const OutputHeaderConfiguration& GetOutputHeaderConfiguration() const{ return m_outputHeaderConfiguration; }
    inline bool OutputHeaderConfigurationHasBeenSet() const { return m_outputHeaderConfigurationHasBeenSet; }
    inline void SetOutputHeaderConfiguration(const OutputHeaderConfiguration& value) { m_outputHeaderConfigurationHasBeenSet = true; m_outputHeaderConfiguration = value; }
    inline void SetOutputHeaderConfiguration(OutputHeaderConfiguration&& value) { m_outputHeaderConfigurationHasBeenSet = true; m_outputHeaderConfiguration = std::move(value); }
    inline UpdateChannelRequest& WithOutputHeaderConfiguration(const OutputHeaderConfiguration& value) { SetOutputHeaderConfiguration(value); return *this;}
    inline UpdateChannelRequest& WithOutputHeaderConfiguration(OutputHeaderConfiguration&& value) { SetOutputHeaderConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InputSwitchConfiguration m_inputSwitchConfiguration;
    bool m_inputSwitchConfigurationHasBeenSet = false;

    OutputHeaderConfiguration m_outputHeaderConfiguration;
    bool m_outputHeaderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
