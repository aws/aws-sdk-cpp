/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ContainerType.h>
#include <aws/mediapackagev2/model/Segment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/CreateHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateLowLatencyHlsManifestConfiguration.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class UpdateOriginEndpointRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API UpdateOriginEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginEndpoint"; }

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
    inline UpdateOriginEndpointRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline UpdateOriginEndpointRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline UpdateOriginEndpointRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


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
    inline UpdateOriginEndpointRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline UpdateOriginEndpointRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline UpdateOriginEndpointRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


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
    inline UpdateOriginEndpointRequest& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline UpdateOriginEndpointRequest& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline UpdateOriginEndpointRequest& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}


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
    inline UpdateOriginEndpointRequest& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline UpdateOriginEndpointRequest& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline const Segment& GetSegment() const{ return m_segment; }

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline void SetSegment(const Segment& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline void SetSegment(Segment&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline UpdateOriginEndpointRequest& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline UpdateOriginEndpointRequest& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


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
    inline UpdateOriginEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline UpdateOriginEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline UpdateOriginEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window. The maximum startover window is 1,209,600
     * seconds (14 days).</p>
     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }

    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window. The maximum startover window is 1,209,600
     * seconds (14 days).</p>
     */
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }

    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window. The maximum startover window is 1,209,600
     * seconds (14 days).</p>
     */
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }

    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window. The maximum startover window is 1,209,600
     * seconds (14 days).</p>
     */
    inline UpdateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<CreateHlsManifestConfiguration>& GetHlsManifests() const{ return m_hlsManifests; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(const Aws::Vector<CreateHlsManifestConfiguration>& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = value; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(Aws::Vector<CreateHlsManifestConfiguration>&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::move(value); }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& WithHlsManifests(const Aws::Vector<CreateHlsManifestConfiguration>& value) { SetHlsManifests(value); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& WithHlsManifests(Aws::Vector<CreateHlsManifestConfiguration>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& AddHlsManifests(const CreateHlsManifestConfiguration& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& AddHlsManifests(CreateHlsManifestConfiguration&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<CreateLowLatencyHlsManifestConfiguration>& GetLowLatencyHlsManifests() const{ return m_lowLatencyHlsManifests; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(const Aws::Vector<CreateLowLatencyHlsManifestConfiguration>& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = value; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(Aws::Vector<CreateLowLatencyHlsManifestConfiguration>&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::move(value); }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& WithLowLatencyHlsManifests(const Aws::Vector<CreateLowLatencyHlsManifestConfiguration>& value) { SetLowLatencyHlsManifests(value); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& WithLowLatencyHlsManifests(Aws::Vector<CreateLowLatencyHlsManifestConfiguration>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& AddLowLatencyHlsManifests(const CreateLowLatencyHlsManifestConfiguration& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(value); return *this; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline UpdateOriginEndpointRequest& AddLowLatencyHlsManifests(CreateLowLatencyHlsManifestConfiguration&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }


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
    inline UpdateOriginEndpointRequest& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline UpdateOriginEndpointRequest& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline UpdateOriginEndpointRequest& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    ContainerType m_containerType;
    bool m_containerTypeHasBeenSet = false;

    Segment m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_startoverWindowSeconds;
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Vector<CreateHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<CreateLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
