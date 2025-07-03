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
#include <aws/mediapackagev2/model/ForceEndpointErrorConfiguration.h>
#include <aws/mediapackagev2/model/CreateHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateMssManifestConfiguration.h>
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
    AWS_MEDIAPACKAGEV2_API UpdateOriginEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOriginEndpoint"; }

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
    UpdateOriginEndpointRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group. </p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    UpdateOriginEndpointRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel. </p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    UpdateOriginEndpointRequest& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container attached to this origin endpoint. A container type is a
     * file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. </p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline UpdateOriginEndpointRequest& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment configuration, including the segment name, duration, and other
     * configuration values.</p>
     */
    inline const Segment& GetSegment() const { return m_segment; }
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }
    template<typename SegmentT = Segment>
    void SetSegment(SegmentT&& value) { m_segmentHasBeenSet = true; m_segment = std::forward<SegmentT>(value); }
    template<typename SegmentT = Segment>
    UpdateOriginEndpointRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any descriptive information that you want to add to the origin endpoint for
     * future identification purposes.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateOriginEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the window (in seconds) to create a window of the live stream
     * that's available for on-demand viewing. Viewers can start-over or catch-up on
     * content that falls within the window. The maximum startover window is 1,209,600
     * seconds (14 days).</p>
     */
    inline int GetStartoverWindowSeconds() const { return m_startoverWindowSeconds; }
    inline bool StartoverWindowSecondsHasBeenSet() const { return m_startoverWindowSecondsHasBeenSet; }
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSecondsHasBeenSet = true; m_startoverWindowSeconds = value; }
    inline UpdateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<CreateHlsManifestConfiguration>& GetHlsManifests() const { return m_hlsManifests; }
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }
    template<typename HlsManifestsT = Aws::Vector<CreateHlsManifestConfiguration>>
    void SetHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::forward<HlsManifestsT>(value); }
    template<typename HlsManifestsT = Aws::Vector<CreateHlsManifestConfiguration>>
    UpdateOriginEndpointRequest& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = CreateHlsManifestConfiguration>
    UpdateOriginEndpointRequest& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<CreateLowLatencyHlsManifestConfiguration>& GetLowLatencyHlsManifests() const { return m_lowLatencyHlsManifests; }
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<CreateLowLatencyHlsManifestConfiguration>>
    void SetLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::forward<LowLatencyHlsManifestsT>(value); }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<CreateLowLatencyHlsManifestConfiguration>>
    UpdateOriginEndpointRequest& WithLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { SetLowLatencyHlsManifests(std::forward<LowLatencyHlsManifestsT>(value)); return *this;}
    template<typename LowLatencyHlsManifestsT = CreateLowLatencyHlsManifestConfiguration>
    UpdateOriginEndpointRequest& AddLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.emplace_back(std::forward<LowLatencyHlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DASH manifest configuration.</p>
     */
    inline const Aws::Vector<CreateDashManifestConfiguration>& GetDashManifests() const { return m_dashManifests; }
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }
    template<typename DashManifestsT = Aws::Vector<CreateDashManifestConfiguration>>
    void SetDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::forward<DashManifestsT>(value); }
    template<typename DashManifestsT = Aws::Vector<CreateDashManifestConfiguration>>
    UpdateOriginEndpointRequest& WithDashManifests(DashManifestsT&& value) { SetDashManifests(std::forward<DashManifestsT>(value)); return *this;}
    template<typename DashManifestsT = CreateDashManifestConfiguration>
    UpdateOriginEndpointRequest& AddDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.emplace_back(std::forward<DashManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Microsoft Smooth Streaming (MSS) manifest configurations to update
     * for the origin endpoint. This replaces the existing MSS manifest
     * configurations.</p>
     */
    inline const Aws::Vector<CreateMssManifestConfiguration>& GetMssManifests() const { return m_mssManifests; }
    inline bool MssManifestsHasBeenSet() const { return m_mssManifestsHasBeenSet; }
    template<typename MssManifestsT = Aws::Vector<CreateMssManifestConfiguration>>
    void SetMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = std::forward<MssManifestsT>(value); }
    template<typename MssManifestsT = Aws::Vector<CreateMssManifestConfiguration>>
    UpdateOriginEndpointRequest& WithMssManifests(MssManifestsT&& value) { SetMssManifests(std::forward<MssManifestsT>(value)); return *this;}
    template<typename MssManifestsT = CreateMssManifestConfiguration>
    UpdateOriginEndpointRequest& AddMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.emplace_back(std::forward<MssManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The failover settings for the endpoint.</p>
     */
    inline const ForceEndpointErrorConfiguration& GetForceEndpointErrorConfiguration() const { return m_forceEndpointErrorConfiguration; }
    inline bool ForceEndpointErrorConfigurationHasBeenSet() const { return m_forceEndpointErrorConfigurationHasBeenSet; }
    template<typename ForceEndpointErrorConfigurationT = ForceEndpointErrorConfiguration>
    void SetForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { m_forceEndpointErrorConfigurationHasBeenSet = true; m_forceEndpointErrorConfiguration = std::forward<ForceEndpointErrorConfigurationT>(value); }
    template<typename ForceEndpointErrorConfigurationT = ForceEndpointErrorConfiguration>
    UpdateOriginEndpointRequest& WithForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { SetForceEndpointErrorConfiguration(std::forward<ForceEndpointErrorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected current Entity Tag (ETag) for the resource. If the specified
     * ETag does not match the resource's current entity tag, the update request will
     * be rejected.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    UpdateOriginEndpointRequest& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}
  private:

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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_startoverWindowSeconds{0};
    bool m_startoverWindowSecondsHasBeenSet = false;

    Aws::Vector<CreateHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<CreateLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;

    Aws::Vector<CreateDashManifestConfiguration> m_dashManifests;
    bool m_dashManifestsHasBeenSet = false;

    Aws::Vector<CreateMssManifestConfiguration> m_mssManifests;
    bool m_mssManifestsHasBeenSet = false;

    ForceEndpointErrorConfiguration m_forceEndpointErrorConfiguration;
    bool m_forceEndpointErrorConfigurationHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
