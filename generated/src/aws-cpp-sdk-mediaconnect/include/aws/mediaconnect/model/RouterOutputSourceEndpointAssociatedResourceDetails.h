/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutputMessage.h>
#include <aws/mediaconnect/model/RouterOutputState.h>

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
 * <p>The details of the router output that is associated with a source
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputSourceEndpointAssociatedResourceDetails">AWS
 * API Reference</a></p>
 */
class RouterOutputSourceEndpointAssociatedResourceDetails {
 public:
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointAssociatedResourceDetails() = default;
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointAssociatedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputSourceEndpointAssociatedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the router output.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RouterOutputSourceEndpointAssociatedResourceDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bitrate of the router output, in bits per second.</p>
   */
  inline long long GetMaximumBitrate() const { return m_maximumBitrate; }
  inline bool MaximumBitrateHasBeenSet() const { return m_maximumBitrateHasBeenSet; }
  inline void SetMaximumBitrate(long long value) {
    m_maximumBitrateHasBeenSet = true;
    m_maximumBitrate = value;
  }
  inline RouterOutputSourceEndpointAssociatedResourceDetails& WithMaximumBitrate(long long value) {
    SetMaximumBitrate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the router output.</p>
   */
  inline RouterOutputState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterOutputState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RouterOutputSourceEndpointAssociatedResourceDetails& WithState(RouterOutputState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status messages for the router output.</p>
   */
  inline const Aws::Vector<RouterOutputMessage>& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = Aws::Vector<RouterOutputMessage>>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = Aws::Vector<RouterOutputMessage>>
  RouterOutputSourceEndpointAssociatedResourceDetails& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  template <typename MessagesT = RouterOutputMessage>
  RouterOutputSourceEndpointAssociatedResourceDetails& AddMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages.emplace_back(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  long long m_maximumBitrate{0};

  RouterOutputState m_state{RouterOutputState::NOT_SET};

  Aws::Vector<RouterOutputMessage> m_messages;
  bool m_nameHasBeenSet = false;
  bool m_maximumBitrateHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
