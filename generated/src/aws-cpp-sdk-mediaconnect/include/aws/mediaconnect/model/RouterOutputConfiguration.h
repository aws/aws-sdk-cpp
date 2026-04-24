/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterOutputConfiguration.h>
#include <aws/mediaconnect/model/MediaLiveInputRouterOutputConfiguration.h>
#include <aws/mediaconnect/model/StandardRouterOutputConfiguration.h>

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
 * <p>The configuration settings for a router output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputConfiguration">AWS
 * API Reference</a></p>
 */
class RouterOutputConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterOutputConfiguration() = default;
  AWS_MEDIACONNECT_API RouterOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const StandardRouterOutputConfiguration& GetStandard() const { return m_standard; }
  inline bool StandardHasBeenSet() const { return m_standardHasBeenSet; }
  template <typename StandardT = StandardRouterOutputConfiguration>
  void SetStandard(StandardT&& value) {
    m_standardHasBeenSet = true;
    m_standard = std::forward<StandardT>(value);
  }
  template <typename StandardT = StandardRouterOutputConfiguration>
  RouterOutputConfiguration& WithStandard(StandardT&& value) {
    SetStandard(std::forward<StandardT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaConnectFlowRouterOutputConfiguration& GetMediaConnectFlow() const { return m_mediaConnectFlow; }
  inline bool MediaConnectFlowHasBeenSet() const { return m_mediaConnectFlowHasBeenSet; }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterOutputConfiguration>
  void SetMediaConnectFlow(MediaConnectFlowT&& value) {
    m_mediaConnectFlowHasBeenSet = true;
    m_mediaConnectFlow = std::forward<MediaConnectFlowT>(value);
  }
  template <typename MediaConnectFlowT = MediaConnectFlowRouterOutputConfiguration>
  RouterOutputConfiguration& WithMediaConnectFlow(MediaConnectFlowT&& value) {
    SetMediaConnectFlow(std::forward<MediaConnectFlowT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaLiveInputRouterOutputConfiguration& GetMediaLiveInput() const { return m_mediaLiveInput; }
  inline bool MediaLiveInputHasBeenSet() const { return m_mediaLiveInputHasBeenSet; }
  template <typename MediaLiveInputT = MediaLiveInputRouterOutputConfiguration>
  void SetMediaLiveInput(MediaLiveInputT&& value) {
    m_mediaLiveInputHasBeenSet = true;
    m_mediaLiveInput = std::forward<MediaLiveInputT>(value);
  }
  template <typename MediaLiveInputT = MediaLiveInputRouterOutputConfiguration>
  RouterOutputConfiguration& WithMediaLiveInput(MediaLiveInputT&& value) {
    SetMediaLiveInput(std::forward<MediaLiveInputT>(value));
    return *this;
  }
  ///@}
 private:
  StandardRouterOutputConfiguration m_standard;

  MediaConnectFlowRouterOutputConfiguration m_mediaConnectFlow;

  MediaLiveInputRouterOutputConfiguration m_mediaLiveInput;
  bool m_standardHasBeenSet = false;
  bool m_mediaConnectFlowHasBeenSet = false;
  bool m_mediaLiveInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
