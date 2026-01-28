/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MessageDetail.h>
#include <aws/mediaconnect/model/NdiMediaInfo.h>
#include <aws/mediaconnect/model/NdiSourceInfo.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p> Comprehensive information about the NDI® source that's associated with a
 * flow. This includes the currently active NDI source, a list of all discovered
 * NDI senders, metadata about the media streams, and any relevant status messages.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/NdiSourceMetadataInfo">AWS
 * API Reference</a></p>
 */
class NdiSourceMetadataInfo {
 public:
  AWS_MEDIACONNECT_API NdiSourceMetadataInfo() = default;
  AWS_MEDIACONNECT_API NdiSourceMetadataInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API NdiSourceMetadataInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The connected NDI sender that's currently sending source content to the
   * flow's NDI source. </p>
   */
  inline const NdiSourceInfo& GetActiveSource() const { return m_activeSource; }
  inline bool ActiveSourceHasBeenSet() const { return m_activeSourceHasBeenSet; }
  template <typename ActiveSourceT = NdiSourceInfo>
  void SetActiveSource(ActiveSourceT&& value) {
    m_activeSourceHasBeenSet = true;
    m_activeSource = std::forward<ActiveSourceT>(value);
  }
  template <typename ActiveSourceT = NdiSourceInfo>
  NdiSourceMetadataInfo& WithActiveSource(ActiveSourceT&& value) {
    SetActiveSource(std::forward<ActiveSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of the available upstream NDI senders aggregated from all of your
   * configured discovery servers. </p>
   */
  inline const Aws::Vector<NdiSourceInfo>& GetDiscoveredSources() const { return m_discoveredSources; }
  inline bool DiscoveredSourcesHasBeenSet() const { return m_discoveredSourcesHasBeenSet; }
  template <typename DiscoveredSourcesT = Aws::Vector<NdiSourceInfo>>
  void SetDiscoveredSources(DiscoveredSourcesT&& value) {
    m_discoveredSourcesHasBeenSet = true;
    m_discoveredSources = std::forward<DiscoveredSourcesT>(value);
  }
  template <typename DiscoveredSourcesT = Aws::Vector<NdiSourceInfo>>
  NdiSourceMetadataInfo& WithDiscoveredSources(DiscoveredSourcesT&& value) {
    SetDiscoveredSources(std::forward<DiscoveredSourcesT>(value));
    return *this;
  }
  template <typename DiscoveredSourcesT = NdiSourceInfo>
  NdiSourceMetadataInfo& AddDiscoveredSources(DiscoveredSourcesT&& value) {
    m_discoveredSourcesHasBeenSet = true;
    m_discoveredSources.emplace_back(std::forward<DiscoveredSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Detailed information about the media streams (video, audio, and so on) that
   * are part of the active NDI source. </p>
   */
  inline const NdiMediaInfo& GetMediaInfo() const { return m_mediaInfo; }
  inline bool MediaInfoHasBeenSet() const { return m_mediaInfoHasBeenSet; }
  template <typename MediaInfoT = NdiMediaInfo>
  void SetMediaInfo(MediaInfoT&& value) {
    m_mediaInfoHasBeenSet = true;
    m_mediaInfo = std::forward<MediaInfoT>(value);
  }
  template <typename MediaInfoT = NdiMediaInfo>
  NdiSourceMetadataInfo& WithMediaInfo(MediaInfoT&& value) {
    SetMediaInfo(std::forward<MediaInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Any status messages or error codes related to the NDI source and its
   * metadata. </p>
   */
  inline const Aws::Vector<MessageDetail>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<MessageDetail>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<MessageDetail>>
  NdiSourceMetadataInfo& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = MessageDetail>
  NdiSourceMetadataInfo& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}
 private:
  NdiSourceInfo m_activeSource;

  Aws::Vector<NdiSourceInfo> m_discoveredSources;

  NdiMediaInfo m_mediaInfo;

  Aws::Vector<MessageDetail> m_messages;
  bool m_activeSourceHasBeenSet = false;
  bool m_discoveredSourcesHasBeenSet = false;
  bool m_mediaInfoHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
