/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputMessage.h>
#include <aws/mediaconnect/model/RouterInputMetadata.h>

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
 * <p>Detailed metadata information about a router input source.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputSourceMetadataDetails">AWS
 * API Reference</a></p>
 */
class RouterInputSourceMetadataDetails {
 public:
  AWS_MEDIACONNECT_API RouterInputSourceMetadataDetails() = default;
  AWS_MEDIACONNECT_API RouterInputSourceMetadataDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputSourceMetadataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Collection of metadata messages associated with the router input source.</p>
   */
  inline const Aws::Vector<RouterInputMessage>& GetSourceMetadataMessages() const { return m_sourceMetadataMessages; }
  inline bool SourceMetadataMessagesHasBeenSet() const { return m_sourceMetadataMessagesHasBeenSet; }
  template <typename SourceMetadataMessagesT = Aws::Vector<RouterInputMessage>>
  void SetSourceMetadataMessages(SourceMetadataMessagesT&& value) {
    m_sourceMetadataMessagesHasBeenSet = true;
    m_sourceMetadataMessages = std::forward<SourceMetadataMessagesT>(value);
  }
  template <typename SourceMetadataMessagesT = Aws::Vector<RouterInputMessage>>
  RouterInputSourceMetadataDetails& WithSourceMetadataMessages(SourceMetadataMessagesT&& value) {
    SetSourceMetadataMessages(std::forward<SourceMetadataMessagesT>(value));
    return *this;
  }
  template <typename SourceMetadataMessagesT = RouterInputMessage>
  RouterInputSourceMetadataDetails& AddSourceMetadataMessages(SourceMetadataMessagesT&& value) {
    m_sourceMetadataMessagesHasBeenSet = true;
    m_sourceMetadataMessages.emplace_back(std::forward<SourceMetadataMessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the metadata was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  RouterInputSourceMetadataDetails& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata information specific to the router input configuration and
   * state.</p>
   */
  inline const RouterInputMetadata& GetRouterInputMetadata() const { return m_routerInputMetadata; }
  inline bool RouterInputMetadataHasBeenSet() const { return m_routerInputMetadataHasBeenSet; }
  template <typename RouterInputMetadataT = RouterInputMetadata>
  void SetRouterInputMetadata(RouterInputMetadataT&& value) {
    m_routerInputMetadataHasBeenSet = true;
    m_routerInputMetadata = std::forward<RouterInputMetadataT>(value);
  }
  template <typename RouterInputMetadataT = RouterInputMetadata>
  RouterInputSourceMetadataDetails& WithRouterInputMetadata(RouterInputMetadataT&& value) {
    SetRouterInputMetadata(std::forward<RouterInputMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterInputMessage> m_sourceMetadataMessages;
  bool m_sourceMetadataMessagesHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  RouterInputMetadata m_routerInputMetadata;
  bool m_routerInputMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
