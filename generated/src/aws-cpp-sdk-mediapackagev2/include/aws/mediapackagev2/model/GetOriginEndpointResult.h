﻿/**
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
  class GetOriginEndpointResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult() = default;
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetOriginEndpointResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    GetOriginEndpointResult& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetOriginEndpointResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    GetOriginEndpointResult& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container attached to this origin endpoint.</p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline GetOriginEndpointResult& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
    ///@}

    ///@{
    
    inline const Segment& GetSegment() const { return m_segment; }
    template<typename SegmentT = Segment>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Segment>
    GetOriginEndpointResult& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetOriginEndpointResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetOriginEndpointResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the origin endpoint was last reset.</p>
     */
    inline const Aws::Utils::DateTime& GetResetAt() const { return m_resetAt; }
    template<typename ResetAtT = Aws::Utils::DateTime>
    void SetResetAt(ResetAtT&& value) { m_resetAtHasBeenSet = true; m_resetAt = std::forward<ResetAtT>(value); }
    template<typename ResetAtT = Aws::Utils::DateTime>
    GetOriginEndpointResult& WithResetAt(ResetAtT&& value) { SetResetAt(std::forward<ResetAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for your origin endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetOriginEndpointResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window.</p>
     */
    inline int GetStartoverWindowSeconds() const { return m_startoverWindowSeconds; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }
    inline GetOriginEndpointResult& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<GetHlsManifestConfiguration>& GetGetHlsManifests() const { return m_hlsManifests; }
    template<typename HlsManifestsT = Aws::Vector<GetHlsManifestConfiguration>>
    void SetHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::forward<HlsManifestsT>(value); }
    template<typename HlsManifestsT = Aws::Vector<GetHlsManifestConfiguration>>
    GetOriginEndpointResult& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = GetHlsManifestConfiguration>
    GetOriginEndpointResult& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<GetLowLatencyHlsManifestConfiguration>& GetGetLowLatencyHlsManifests() const { return m_lowLatencyHlsManifests; }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<GetLowLatencyHlsManifestConfiguration>>
    void SetLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::forward<LowLatencyHlsManifestsT>(value); }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<GetLowLatencyHlsManifestConfiguration>>
    GetOriginEndpointResult& WithLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { SetLowLatencyHlsManifests(std::forward<LowLatencyHlsManifestsT>(value)); return *this;}
    template<typename LowLatencyHlsManifestsT = GetLowLatencyHlsManifestConfiguration>
    GetOriginEndpointResult& AddLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.emplace_back(std::forward<LowLatencyHlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DASH manifest configuration.</p>
     */
    inline const Aws::Vector<GetDashManifestConfiguration>& GetGetDashManifests() const { return m_dashManifests; }
    template<typename DashManifestsT = Aws::Vector<GetDashManifestConfiguration>>
    void SetDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::forward<DashManifestsT>(value); }
    template<typename DashManifestsT = Aws::Vector<GetDashManifestConfiguration>>
    GetOriginEndpointResult& WithDashManifests(DashManifestsT&& value) { SetDashManifests(std::forward<DashManifestsT>(value)); return *this;}
    template<typename DashManifestsT = GetDashManifestConfiguration>
    GetOriginEndpointResult& AddDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.emplace_back(std::forward<DashManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The failover settings for the endpoint.</p>
     */
    inline const ForceEndpointErrorConfiguration& GetForceEndpointErrorConfiguration() const { return m_forceEndpointErrorConfiguration; }
    template<typename ForceEndpointErrorConfigurationT = ForceEndpointErrorConfiguration>
    void SetForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { m_forceEndpointErrorConfigurationHasBeenSet = true; m_forceEndpointErrorConfiguration = std::forward<ForceEndpointErrorConfigurationT>(value); }
    template<typename ForceEndpointErrorConfigurationT = ForceEndpointErrorConfiguration>
    GetOriginEndpointResult& WithForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { SetForceEndpointErrorConfiguration(std::forward<ForceEndpointErrorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetOriginEndpointResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the origin
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetOriginEndpointResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetOriginEndpointResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOriginEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    ContainerType m_containerType{ContainerType::NOT_SET};
    bool m_containerTypeHasBeenSet = false;

    Segment m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Utils::DateTime m_resetAt{};
    bool m_resetAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_startoverWindowSeconds{0};
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Vector<GetHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<GetLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;

    Aws::Vector<GetDashManifestConfiguration> m_dashManifests;
    bool m_dashManifestsHasBeenSet = false;

    ForceEndpointErrorConfiguration m_forceEndpointErrorConfiguration;
    bool m_forceEndpointErrorConfigurationHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
