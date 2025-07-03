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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/CreateHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/CreateMssManifestConfiguration.h>
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
    AWS_MEDIAPACKAGEV2_API CreateOriginEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOriginEndpoint"; }

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
    CreateOriginEndpointRequest& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
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
    CreateOriginEndpointRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and must be unique for your account in the
     * AWS Region and channel. You can't use spaces in the name. You can't change the
     * name after you create the endpoint.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    CreateOriginEndpointRequest& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of container to attach to this origin endpoint. A container type is
     * a file format that encapsulates one or more media streams, such as audio and
     * video, into a single file. You can't change the container type after you create
     * the endpoint.</p>
     */
    inline ContainerType GetContainerType() const { return m_containerType; }
    inline bool ContainerTypeHasBeenSet() const { return m_containerTypeHasBeenSet; }
    inline void SetContainerType(ContainerType value) { m_containerTypeHasBeenSet = true; m_containerType = value; }
    inline CreateOriginEndpointRequest& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
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
    CreateOriginEndpointRequest& WithSegment(SegmentT&& value) { SetSegment(std::forward<SegmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateOriginEndpointRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter any descriptive text that helps you to identify the origin
     * endpoint.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateOriginEndpointRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline CreateOriginEndpointRequest& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}
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
    CreateOriginEndpointRequest& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = CreateHlsManifestConfiguration>
    CreateOriginEndpointRequest& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
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
    CreateOriginEndpointRequest& WithLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { SetLowLatencyHlsManifests(std::forward<LowLatencyHlsManifestsT>(value)); return *this;}
    template<typename LowLatencyHlsManifestsT = CreateLowLatencyHlsManifestConfiguration>
    CreateOriginEndpointRequest& AddLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.emplace_back(std::forward<LowLatencyHlsManifestsT>(value)); return *this; }
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
    CreateOriginEndpointRequest& WithDashManifests(DashManifestsT&& value) { SetDashManifests(std::forward<DashManifestsT>(value)); return *this;}
    template<typename DashManifestsT = CreateDashManifestConfiguration>
    CreateOriginEndpointRequest& AddDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.emplace_back(std::forward<DashManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Microsoft Smooth Streaming (MSS) manifest configurations for the
     * origin endpoint. You can configure multiple MSS manifests to provide different
     * streaming experiences or to support different client requirements.</p>
     */
    inline const Aws::Vector<CreateMssManifestConfiguration>& GetMssManifests() const { return m_mssManifests; }
    inline bool MssManifestsHasBeenSet() const { return m_mssManifestsHasBeenSet; }
    template<typename MssManifestsT = Aws::Vector<CreateMssManifestConfiguration>>
    void SetMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = std::forward<MssManifestsT>(value); }
    template<typename MssManifestsT = Aws::Vector<CreateMssManifestConfiguration>>
    CreateOriginEndpointRequest& WithMssManifests(MssManifestsT&& value) { SetMssManifests(std::forward<MssManifestsT>(value)); return *this;}
    template<typename MssManifestsT = CreateMssManifestConfiguration>
    CreateOriginEndpointRequest& AddMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.emplace_back(std::forward<MssManifestsT>(value)); return *this; }
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
    CreateOriginEndpointRequest& WithForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { SetForceEndpointErrorConfiguration(std::forward<ForceEndpointErrorConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of tag key:value pairs that you define. For
     * example:</p> <p> <code>"Key1": "Value1",</code> </p> <p> <code>"Key2":
     * "Value2"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateOriginEndpointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateOriginEndpointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
