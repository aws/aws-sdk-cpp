/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MEDIAPACKAGEV2_API CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. You can't change the name after you create the channel.</p>
     */
    inline CreateChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateChannelRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateChannelRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateChannelRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline CreateChannelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline CreateChannelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Enter any descriptive text that helps you to identify the channel.</p>
     */
    inline CreateChannelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
