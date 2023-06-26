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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/CreateHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateLowLatencyHlsManifestConfiguration.h>
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
  class CreateOriginEndpointRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateOriginEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginEndpoint"; }

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
    inline CreateOriginEndpointRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateOriginEndpointRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateOriginEndpointRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


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
    inline CreateOriginEndpointRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline CreateOriginEndpointRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline CreateOriginEndpointRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}


    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }

    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerTypeHasBeenSet = true; m_containerType = value; }

    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerTypeHasBeenSet = true; m_containerType = std::move(value); }

    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


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
    inline CreateOriginEndpointRequest& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline CreateOriginEndpointRequest& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


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
    inline CreateOriginEndpointRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateOriginEndpointRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline CreateOriginEndpointRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline CreateOriginEndpointRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


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
    inline CreateOriginEndpointRequest& WithHlsManifests(const Aws::Vector<CreateHlsManifestConfiguration>& value) { SetHlsManifests(value); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& WithHlsManifests(Aws::Vector<CreateHlsManifestConfiguration>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& AddHlsManifests(const CreateHlsManifestConfiguration& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(value); return *this; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& AddHlsManifests(CreateHlsManifestConfiguration&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.push_back(std::move(value)); return *this; }


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
    inline CreateOriginEndpointRequest& WithLowLatencyHlsManifests(const Aws::Vector<CreateLowLatencyHlsManifestConfiguration>& value) { SetLowLatencyHlsManifests(value); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& WithLowLatencyHlsManifests(Aws::Vector<CreateLowLatencyHlsManifestConfiguration>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& AddLowLatencyHlsManifests(const CreateLowLatencyHlsManifestConfiguration& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(value); return *this; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline CreateOriginEndpointRequest& AddLowLatencyHlsManifests(CreateLowLatencyHlsManifestConfiguration&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }


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
    inline CreateOriginEndpointRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline CreateOriginEndpointRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_startoverWindowSeconds;
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Vector<CreateHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<CreateLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
