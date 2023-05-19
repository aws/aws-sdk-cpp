/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ContainerType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/ListHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListLowLatencyHlsManifestConfiguration.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The configuration of the origin endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/OriginEndpointListConfiguration">AWS
   * API Reference</a></p>
   */
  class OriginEndpointListConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration();
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline OriginEndpointListConfiguration& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline OriginEndpointListConfiguration& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline OriginEndpointListConfiguration& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline OriginEndpointListConfiguration& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline OriginEndpointListConfiguration& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline OriginEndpointListConfiguration& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline OriginEndpointListConfiguration& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline OriginEndpointListConfiguration& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline OriginEndpointListConfiguration& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline OriginEndpointListConfiguration& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline OriginEndpointListConfiguration& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline OriginEndpointListConfiguration& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}


    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerTypeHasBeenSet = true; m_containerType = value; }

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerTypeHasBeenSet = true; m_containerType = std::move(value); }

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline OriginEndpointListConfiguration& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline OriginEndpointListConfiguration& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline OriginEndpointListConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline OriginEndpointListConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline OriginEndpointListConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline OriginEndpointListConfiguration& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline OriginEndpointListConfiguration& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline OriginEndpointListConfiguration& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline OriginEndpointListConfiguration& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<ListHlsManifestConfiguration>& GetHlsManifests() const{ return m_hlsManifests; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(const Aws::Vector<ListHlsManifestConfiguration>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(Aws::Vector<ListHlsManifestConfiguration>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& WithHlsManifests(const Aws::Vector<ListHlsManifestConfiguration>& value) { SetHlsManifests(value); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& WithHlsManifests(Aws::Vector<ListHlsManifestConfiguration>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& AddHlsManifests(const ListHlsManifestConfiguration& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& AddHlsManifests(ListHlsManifestConfiguration&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<ListLowLatencyHlsManifestConfiguration>& GetLowLatencyHlsManifests() const{ return m_lowLatencyHlsManifests; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(const Aws::Vector<ListLowLatencyHlsManifestConfiguration>& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = value; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(Aws::Vector<ListLowLatencyHlsManifestConfiguration>&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::move(value); }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& WithLowLatencyHlsManifests(const Aws::Vector<ListLowLatencyHlsManifestConfiguration>& value) { SetLowLatencyHlsManifests(value); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& WithLowLatencyHlsManifests(Aws::Vector<ListLowLatencyHlsManifestConfiguration>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& AddLowLatencyHlsManifests(const ListLowLatencyHlsManifestConfiguration& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(value); return *this; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline OriginEndpointListConfiguration& AddLowLatencyHlsManifests(ListLowLatencyHlsManifestConfiguration&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    ContainerType m_containerType;
    bool m_containerTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::Vector<ListHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<ListLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
