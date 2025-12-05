/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterOutputStreamDetails.h>
#include <aws/mediaconnect/model/MediaLiveInputRouterOutputStreamDetails.h>
#include <aws/mediaconnect/model/StandardRouterOutputStreamDetails.h>

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
 * <p>Information about the router output's stream, including connection state and
 * destination details. The specific details provided vary based on the router
 * output type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputStreamDetails">AWS
 * API Reference</a></p>
 */
class RouterOutputStreamDetails {
 public:
  AWS_MEDIACONNECT_API RouterOutputStreamDetails() = default;
  AWS_MEDIACONNECT_API RouterOutputStreamDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputStreamDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const StandardRouterOutputStreamDetails& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardRouterOutputStreamDetails>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardRouterOutputStreamDetails>
  RouterOutputStreamDetails& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaConnectFlowRouterOutputStreamDetails& GetMediaConnectFlow() const { return m_mediaConnectFlow; }
  inline bool MediaConnectFlowHasBeenSet() const { return m_mediaConnectFlowHasBeenSet; }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterOutputStreamDetails>
  void SetMediaConnectFlow(MediaConnectFlowT&& value) {
    m_mediaConnectFlowHasBeenSet = true;
    m_mediaConnectFlow = std::forward<MediaConnectFlowT>(value);
  }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterOutputStreamDetails>
  RouterOutputStreamDetails& WithMediaConnectFlow(MediaConnectFlowT&& value) {
    SetMediaConnectFlow(std::forward<MediaConnectFlowT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaLiveInputRouterOutputStreamDetails& GetMediaLiveInput() const { return m_mediaLiveInput; }
  inline bool MediaLiveInputHasBeenSet() const { return m_mediaLiveInputHasBeenSet; }
  template <typename MediaLiveInputT = MediaLiveInputRouterOutputStreamDetails>
  void SetMediaLiveInput(MediaLiveInputT&& value) {
    m_mediaLiveInputHasBeenSet = true;
    m_mediaLiveInput = std::forward<MediaLiveInputT>(value);
  }
  template <typename MediaLiveInputT = MediaLiveInputRouterOutputStreamDetails>
  RouterOutputStreamDetails& WithMediaLiveInput(MediaLiveInputT&& value) {
    SetMediaLiveInput(std::forward<MediaLiveInputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardRouterOutputStreamDetails m_standard;

  MediaConnectFlowRouterOutputStreamDetails m_mediaConnectFlow;

  MediaLiveInputRouterOutputStreamDetails m_mediaLiveInput;
  bool m_standardHasBeenSet = false;
  bool m_mediaConnectFlowHasBeenSet = false;
  bool m_mediaLiveInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
