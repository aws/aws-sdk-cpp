/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ContainerType.h>
#include <aws/mediapackagev2/model/Segment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/GetHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetLowLatencyHlsManifestConfiguration.h>
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
namespace mediapackagev2
{
namespace Model
{
  class GetOriginEndpointResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult();
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline GetOriginEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline GetOriginEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline GetOriginEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline GetOriginEndpointResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline GetOriginEndpointResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline GetOriginEndpointResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline GetOriginEndpointResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline GetOriginEndpointResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline GetOriginEndpointResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointName = value; }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointName = std::move(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline void SetOriginEndpointName(const char* value) { m_originEndpointName.assign(value); }

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline GetOriginEndpointResult& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline GetOriginEndpointResult& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline GetOriginEndpointResult& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}


    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }

    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline void SetContainerType(const ContainerType& value) { m_containerType = value; }

    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline void SetContainerType(ContainerType&& value) { m_containerType = std::move(value); }

    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline GetOriginEndpointResult& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}

    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline GetOriginEndpointResult& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}


    
    inline const Segment& GetSegment() const{ return m_segment; }

    
    inline void SetSegment(const Segment& value) { m_segment = value; }

    
    inline void SetSegment(Segment&& value) { m_segment = std::move(value); }

    
    inline GetOriginEndpointResult& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    
    inline GetOriginEndpointResult& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}


    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline GetOriginEndpointResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline GetOriginEndpointResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline GetOriginEndpointResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline GetOriginEndpointResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline GetOriginEndpointResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline GetOriginEndpointResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline GetOriginEndpointResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window.</p>
     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }

    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window.</p>
     */
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSeconds = value; }

    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window.</p>
     */
    inline GetOriginEndpointResult& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<GetHlsManifestConfiguration>& GetGetHlsManifests() const{ return m_hlsManifests; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(const Aws::Vector<GetHlsManifestConfiguration>& value) { m_hlsManifests = value; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline void SetHlsManifests(Aws::Vector<GetHlsManifestConfiguration>&& value) { m_hlsManifests = std::move(value); }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline GetOriginEndpointResult& WithHlsManifests(const Aws::Vector<GetHlsManifestConfiguration>& value) { SetHlsManifests(value); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline GetOriginEndpointResult& WithHlsManifests(Aws::Vector<GetHlsManifestConfiguration>&& value) { SetHlsManifests(std::move(value)); return *this;}

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline GetOriginEndpointResult& AddHlsManifests(const GetHlsManifestConfiguration& value) { m_hlsManifests.push_back(value); return *this; }

    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline GetOriginEndpointResult& AddHlsManifests(GetHlsManifestConfiguration&& value) { m_hlsManifests.push_back(std::move(value)); return *this; }


    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& GetGetLowLatencyHlsManifests() const{ return m_lowLatencyHlsManifests; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& value) { m_lowLatencyHlsManifests = value; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline void SetLowLatencyHlsManifests(Aws::Vector<GetLowLatencyHlsManifestConfiguration>&& value) { m_lowLatencyHlsManifests = std::move(value); }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline GetOriginEndpointResult& WithLowLatencyHlsManifests(const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& value) { SetLowLatencyHlsManifests(value); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline GetOriginEndpointResult& WithLowLatencyHlsManifests(Aws::Vector<GetLowLatencyHlsManifestConfiguration>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline GetOriginEndpointResult& AddLowLatencyHlsManifests(const GetLowLatencyHlsManifestConfiguration& value) { m_lowLatencyHlsManifests.push_back(value); return *this; }

    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline GetOriginEndpointResult& AddLowLatencyHlsManifests(GetLowLatencyHlsManifestConfiguration&& value) { m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }


    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline GetOriginEndpointResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline GetOriginEndpointResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline GetOriginEndpointResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline GetOriginEndpointResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOriginEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOriginEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOriginEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_channelGroupName;

    Aws::String m_channelName;

    Aws::String m_originEndpointName;

    ContainerType m_containerType;

    Segment m_segment;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_description;

    int m_startoverWindowSeconds;

    Aws::Vector<GetHlsManifestConfiguration> m_hlsManifests;

    Aws::Vector<GetLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;

    Aws::String m_eTag;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
