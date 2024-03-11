/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class UpdateChannelGroupRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API UpdateChannelGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannelGroup"; }

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
    inline UpdateChannelGroupRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline UpdateChannelGroupRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline UpdateChannelGroupRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline UpdateChannelGroupRequest& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline UpdateChannelGroupRequest& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline UpdateChannelGroupRequest& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline UpdateChannelGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline UpdateChannelGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the channel group for
     * future identification purposes.</p>
     */
    inline UpdateChannelGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
