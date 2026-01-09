/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * MediaPackage Output Destination Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputDestinationSettings">AWS
 * API Reference</a></p>
 */
class MediaPackageOutputDestinationSettings {
 public:
  AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings() = default;
  AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * ID of the channel in MediaPackage that is the destination for this output group.
   * You do not need to specify the individual inputs in MediaPackage; MediaLive will
   * handle the connection of the two MediaLive pipelines to the two MediaPackage
   * inputs. The MediaPackage channel and MediaLive channel must be in the same
   * region.
   */
  inline const Aws::String& GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  template <typename ChannelIdT = Aws::String>
  void SetChannelId(ChannelIdT&& value) {
    m_channelIdHasBeenSet = true;
    m_channelId = std::forward<ChannelIdT>(value);
  }
  template <typename ChannelIdT = Aws::String>
  MediaPackageOutputDestinationSettings& WithChannelId(ChannelIdT&& value) {
    SetChannelId(std::forward<ChannelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Name of the channel group in MediaPackageV2. Only use if you are sending CMAF
   * Ingest output to a CMAF ingest endpoint on a MediaPackage channel that uses
   * MediaPackage v2.
   */
  inline const Aws::String& GetChannelGroup() const { return m_channelGroup; }
  inline bool ChannelGroupHasBeenSet() const { return m_channelGroupHasBeenSet; }
  template <typename ChannelGroupT = Aws::String>
  void SetChannelGroup(ChannelGroupT&& value) {
    m_channelGroupHasBeenSet = true;
    m_channelGroup = std::forward<ChannelGroupT>(value);
  }
  template <typename ChannelGroupT = Aws::String>
  MediaPackageOutputDestinationSettings& WithChannelGroup(ChannelGroupT&& value) {
    SetChannelGroup(std::forward<ChannelGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Name of the channel in MediaPackageV2. Only use if you are sending CMAF Ingest
   * output to a CMAF ingest endpoint on a MediaPackage channel that uses
   * MediaPackage v2.
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  MediaPackageOutputDestinationSettings& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Endpoint 1 or 2 of the channel in MediaPackageV2. Only use if you are sending
   * CMAF Ingest output to a CMAF ingest endpoint on a MediaPackage channel that uses
   * MediaPackage v2.
   */
  inline const Aws::String& GetChannelEndpointId() const { return m_channelEndpointId; }
  inline bool ChannelEndpointIdHasBeenSet() const { return m_channelEndpointIdHasBeenSet; }
  template <typename ChannelEndpointIdT = Aws::String>
  void SetChannelEndpointId(ChannelEndpointIdT&& value) {
    m_channelEndpointIdHasBeenSet = true;
    m_channelEndpointId = std::forward<ChannelEndpointIdT>(value);
  }
  template <typename ChannelEndpointIdT = Aws::String>
  MediaPackageOutputDestinationSettings& WithChannelEndpointId(ChannelEndpointIdT&& value) {
    SetChannelEndpointId(std::forward<ChannelEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Region the channel group and channel are located in for MediaPackageV2. Only use
   * if you are sending CMAF Ingest output to a CMAF ingest endpoint on a
   * MediaPackage channel that uses MediaPackage v2.
   */
  inline const Aws::String& GetMediaPackageRegionName() const { return m_mediaPackageRegionName; }
  inline bool MediaPackageRegionNameHasBeenSet() const { return m_mediaPackageRegionNameHasBeenSet; }
  template <typename MediaPackageRegionNameT = Aws::String>
  void SetMediaPackageRegionName(MediaPackageRegionNameT&& value) {
    m_mediaPackageRegionNameHasBeenSet = true;
    m_mediaPackageRegionName = std::forward<MediaPackageRegionNameT>(value);
  }
  template <typename MediaPackageRegionNameT = Aws::String>
  MediaPackageOutputDestinationSettings& WithMediaPackageRegionName(MediaPackageRegionNameT&& value) {
    SetMediaPackageRegionName(std::forward<MediaPackageRegionNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelId;

  Aws::String m_channelGroup;

  Aws::String m_channelName;

  Aws::String m_channelEndpointId;

  Aws::String m_mediaPackageRegionName;
  bool m_channelIdHasBeenSet = false;
  bool m_channelGroupHasBeenSet = false;
  bool m_channelNameHasBeenSet = false;
  bool m_channelEndpointIdHasBeenSet = false;
  bool m_mediaPackageRegionNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
