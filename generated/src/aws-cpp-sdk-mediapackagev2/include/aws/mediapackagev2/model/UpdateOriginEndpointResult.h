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
#include <aws/mediapackagev2/model/ForceEndpointErrorConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/GetHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/GetDashManifestConfiguration.h>
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
  class UpdateOriginEndpointResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API UpdateOriginEndpointResult();
    AWS_MEDIAPACKAGEV2_API UpdateOriginEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API UpdateOriginEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateOriginEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateOriginEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }
    inline UpdateOriginEndpointResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline UpdateOriginEndpointResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline UpdateOriginEndpointResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline UpdateOriginEndpointResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointName.assign(value); }
    inline UpdateOriginEndpointResult& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline UpdateOriginEndpointResult& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline const ContainerType& GetContainerType() const{ return m_containerType; }
    inline void SetContainerType(const ContainerType& value) { m_containerType = value; }
    inline void SetContainerType(ContainerType&& value) { m_containerType = std::move(value); }
    inline UpdateOriginEndpointResult& WithContainerType(const ContainerType& value) { SetContainerType(value); return *this;}
    inline UpdateOriginEndpointResult& WithContainerType(ContainerType&& value) { SetContainerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline const Segment& GetSegment() const{ return m_segment; }
    inline void SetSegment(const Segment& value) { m_segment = value; }
    inline void SetSegment(Segment&& value) { m_segment = std::move(value); }
    inline UpdateOriginEndpointResult& WithSegment(const Segment& value) { SetSegment(value); return *this;}
    inline UpdateOriginEndpointResult& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateOriginEndpointResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateOriginEndpointResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline UpdateOriginEndpointResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline UpdateOriginEndpointResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the origin endpoint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateOriginEndpointResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateOriginEndpointResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window.</p>
     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSeconds = value; }
    inline UpdateOriginEndpointResult& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<GetHlsManifestConfiguration>& GetGetHlsManifests() const{ return m_hlsManifests; }
    inline void SetHlsManifests(const Aws::Vector<GetHlsManifestConfiguration>& value) { m_hlsManifests = value; }
    inline void SetHlsManifests(Aws::Vector<GetHlsManifestConfiguration>&& value) { m_hlsManifests = std::move(value); }
    inline UpdateOriginEndpointResult& WithHlsManifests(const Aws::Vector<GetHlsManifestConfiguration>& value) { SetHlsManifests(value); return *this;}
    inline UpdateOriginEndpointResult& WithHlsManifests(Aws::Vector<GetHlsManifestConfiguration>&& value) { SetHlsManifests(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& AddHlsManifests(const GetHlsManifestConfiguration& value) { m_hlsManifests.push_back(value); return *this; }
    inline UpdateOriginEndpointResult& AddHlsManifests(GetHlsManifestConfiguration&& value) { m_hlsManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& GetGetLowLatencyHlsManifests() const{ return m_lowLatencyHlsManifests; }
    inline void SetLowLatencyHlsManifests(const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& value) { m_lowLatencyHlsManifests = value; }
    inline void SetLowLatencyHlsManifests(Aws::Vector<GetLowLatencyHlsManifestConfiguration>&& value) { m_lowLatencyHlsManifests = std::move(value); }
    inline UpdateOriginEndpointResult& WithLowLatencyHlsManifests(const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& value) { SetLowLatencyHlsManifests(value); return *this;}
    inline UpdateOriginEndpointResult& WithLowLatencyHlsManifests(Aws::Vector<GetLowLatencyHlsManifestConfiguration>&& value) { SetLowLatencyHlsManifests(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& AddLowLatencyHlsManifests(const GetLowLatencyHlsManifestConfiguration& value) { m_lowLatencyHlsManifests.push_back(value); return *this; }
    inline UpdateOriginEndpointResult& AddLowLatencyHlsManifests(GetLowLatencyHlsManifestConfiguration&& value) { m_lowLatencyHlsManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The failover settings for the endpoint.</p>
     */
    inline const ForceEndpointErrorConfiguration& GetForceEndpointErrorConfiguration() const{ return m_forceEndpointErrorConfiguration; }
    inline void SetForceEndpointErrorConfiguration(const ForceEndpointErrorConfiguration& value) { m_forceEndpointErrorConfiguration = value; }
    inline void SetForceEndpointErrorConfiguration(ForceEndpointErrorConfiguration&& value) { m_forceEndpointErrorConfiguration = std::move(value); }
    inline UpdateOriginEndpointResult& WithForceEndpointErrorConfiguration(const ForceEndpointErrorConfiguration& value) { SetForceEndpointErrorConfiguration(value); return *this;}
    inline UpdateOriginEndpointResult& WithForceEndpointErrorConfiguration(ForceEndpointErrorConfiguration&& value) { SetForceEndpointErrorConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline UpdateOriginEndpointResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline UpdateOriginEndpointResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateOriginEndpointResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateOriginEndpointResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateOriginEndpointResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateOriginEndpointResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateOriginEndpointResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateOriginEndpointResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateOriginEndpointResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateOriginEndpointResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DASH manifest configuration.</p>
     */
    inline const Aws::Vector<GetDashManifestConfiguration>& GetGetDashManifests() const{ return m_dashManifests; }
    inline void SetDashManifests(const Aws::Vector<GetDashManifestConfiguration>& value) { m_dashManifests = value; }
    inline void SetDashManifests(Aws::Vector<GetDashManifestConfiguration>&& value) { m_dashManifests = std::move(value); }
    inline UpdateOriginEndpointResult& WithDashManifests(const Aws::Vector<GetDashManifestConfiguration>& value) { SetDashManifests(value); return *this;}
    inline UpdateOriginEndpointResult& WithDashManifests(Aws::Vector<GetDashManifestConfiguration>&& value) { SetDashManifests(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& AddDashManifests(const GetDashManifestConfiguration& value) { m_dashManifests.push_back(value); return *this; }
    inline UpdateOriginEndpointResult& AddDashManifests(GetDashManifestConfiguration&& value) { m_dashManifests.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateOriginEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateOriginEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateOriginEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    ForceEndpointErrorConfiguration m_forceEndpointErrorConfiguration;

    Aws::String m_eTag;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<GetDashManifestConfiguration> m_dashManifests;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
