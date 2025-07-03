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
#include <aws/mediapackagev2/model/ForceEndpointErrorConfiguration.h>
#include <aws/mediapackagev2/model/ListHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListLowLatencyHlsManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListDashManifestConfiguration.h>
#include <aws/mediapackagev2/model/ListMssManifestConfiguration.h>
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
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API OriginEndpointListConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    OriginEndpointListConfiguration& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

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
    OriginEndpointListConfiguration& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
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
    OriginEndpointListConfiguration& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
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
    OriginEndpointListConfiguration& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
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
    inline OriginEndpointListConfiguration& WithContainerType(ContainerType value) { SetContainerType(value); return *this;}
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
    OriginEndpointListConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    OriginEndpointListConfiguration& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the origin endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    OriginEndpointListConfiguration& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An HTTP live streaming (HLS) manifest configuration.</p>
     */
    inline const Aws::Vector<ListHlsManifestConfiguration>& GetHlsManifests() const { return m_hlsManifests; }
    inline bool HlsManifestsHasBeenSet() const { return m_hlsManifestsHasBeenSet; }
    template<typename HlsManifestsT = Aws::Vector<ListHlsManifestConfiguration>>
    void SetHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests = std::forward<HlsManifestsT>(value); }
    template<typename HlsManifestsT = Aws::Vector<ListHlsManifestConfiguration>>
    OriginEndpointListConfiguration& WithHlsManifests(HlsManifestsT&& value) { SetHlsManifests(std::forward<HlsManifestsT>(value)); return *this;}
    template<typename HlsManifestsT = ListHlsManifestConfiguration>
    OriginEndpointListConfiguration& AddHlsManifests(HlsManifestsT&& value) { m_hlsManifestsHasBeenSet = true; m_hlsManifests.emplace_back(std::forward<HlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A low-latency HLS manifest configuration.</p>
     */
    inline const Aws::Vector<ListLowLatencyHlsManifestConfiguration>& GetLowLatencyHlsManifests() const { return m_lowLatencyHlsManifests; }
    inline bool LowLatencyHlsManifestsHasBeenSet() const { return m_lowLatencyHlsManifestsHasBeenSet; }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<ListLowLatencyHlsManifestConfiguration>>
    void SetLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests = std::forward<LowLatencyHlsManifestsT>(value); }
    template<typename LowLatencyHlsManifestsT = Aws::Vector<ListLowLatencyHlsManifestConfiguration>>
    OriginEndpointListConfiguration& WithLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { SetLowLatencyHlsManifests(std::forward<LowLatencyHlsManifestsT>(value)); return *this;}
    template<typename LowLatencyHlsManifestsT = ListLowLatencyHlsManifestConfiguration>
    OriginEndpointListConfiguration& AddLowLatencyHlsManifests(LowLatencyHlsManifestsT&& value) { m_lowLatencyHlsManifestsHasBeenSet = true; m_lowLatencyHlsManifests.emplace_back(std::forward<LowLatencyHlsManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A DASH manifest configuration.</p>
     */
    inline const Aws::Vector<ListDashManifestConfiguration>& GetDashManifests() const { return m_dashManifests; }
    inline bool DashManifestsHasBeenSet() const { return m_dashManifestsHasBeenSet; }
    template<typename DashManifestsT = Aws::Vector<ListDashManifestConfiguration>>
    void SetDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests = std::forward<DashManifestsT>(value); }
    template<typename DashManifestsT = Aws::Vector<ListDashManifestConfiguration>>
    OriginEndpointListConfiguration& WithDashManifests(DashManifestsT&& value) { SetDashManifests(std::forward<DashManifestsT>(value)); return *this;}
    template<typename DashManifestsT = ListDashManifestConfiguration>
    OriginEndpointListConfiguration& AddDashManifests(DashManifestsT&& value) { m_dashManifestsHasBeenSet = true; m_dashManifests.emplace_back(std::forward<DashManifestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Microsoft Smooth Streaming (MSS) manifest configurations associated
     * with the origin endpoint. Each configuration represents a different MSS
     * streaming option available from this endpoint.</p>
     */
    inline const Aws::Vector<ListMssManifestConfiguration>& GetMssManifests() const { return m_mssManifests; }
    inline bool MssManifestsHasBeenSet() const { return m_mssManifestsHasBeenSet; }
    template<typename MssManifestsT = Aws::Vector<ListMssManifestConfiguration>>
    void SetMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = std::forward<MssManifestsT>(value); }
    template<typename MssManifestsT = Aws::Vector<ListMssManifestConfiguration>>
    OriginEndpointListConfiguration& WithMssManifests(MssManifestsT&& value) { SetMssManifests(std::forward<MssManifestsT>(value)); return *this;}
    template<typename MssManifestsT = ListMssManifestConfiguration>
    OriginEndpointListConfiguration& AddMssManifests(MssManifestsT&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.emplace_back(std::forward<MssManifestsT>(value)); return *this; }
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
    OriginEndpointListConfiguration& WithForceEndpointErrorConfiguration(ForceEndpointErrorConfigurationT&& value) { SetForceEndpointErrorConfiguration(std::forward<ForceEndpointErrorConfigurationT>(value)); return *this;}
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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Vector<ListHlsManifestConfiguration> m_hlsManifests;
    bool m_hlsManifestsHasBeenSet = false;

    Aws::Vector<ListLowLatencyHlsManifestConfiguration> m_lowLatencyHlsManifests;
    bool m_lowLatencyHlsManifestsHasBeenSet = false;

    Aws::Vector<ListDashManifestConfiguration> m_dashManifests;
    bool m_dashManifestsHasBeenSet = false;

    Aws::Vector<ListMssManifestConfiguration> m_mssManifests;
    bool m_mssManifestsHasBeenSet = false;

    ForceEndpointErrorConfiguration m_forceEndpointErrorConfiguration;
    bool m_forceEndpointErrorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
