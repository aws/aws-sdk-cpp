/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RistRouterOutputConfiguration.h>
#include <aws/mediaconnect/model/RtpRouterOutputConfiguration.h>
#include <aws/mediaconnect/model/SrtCallerRouterOutputConfiguration.h>
#include <aws/mediaconnect/model/SrtListenerRouterOutputConfiguration.h>

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
 * <p>The protocol configuration settings for a router output.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterOutputProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class RouterOutputProtocolConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterOutputProtocolConfiguration() = default;
  AWS_MEDIACONNECT_API RouterOutputProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterOutputProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RtpRouterOutputConfiguration& GetRtp() const { return m_rtp; }
  inline bool RtpHasBeenSet() const { return m_rtpHasBeenSet; }
  template <typename RtpT = RtpRouterOutputConfiguration>
  void SetRtp(RtpT&& value) {
    m_rtpHasBeenSet = true;
    m_rtp = std::forward<RtpT>(value);
  }
  template <typename RtpT = RtpRouterOutputConfiguration>
  RouterOutputProtocolConfiguration& WithRtp(RtpT&& value) {
    SetRtp(std::forward<RtpT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RistRouterOutputConfiguration& GetRist() const { return m_rist; }
  inline bool RistHasBeenSet() const { return m_ristHasBeenSet; }
  template <typename RistT = RistRouterOutputConfiguration>
  void SetRist(RistT&& value) {
    m_ristHasBeenSet = true;
    m_rist = std::forward<RistT>(value);
  }
  template <typename RistT = RistRouterOutputConfiguration>
  RouterOutputProtocolConfiguration& WithRist(RistT&& value) {
    SetRist(std::forward<RistT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SrtListenerRouterOutputConfiguration& GetSrtListener() const { return m_srtListener; }
  inline bool SrtListenerHasBeenSet() const { return m_srtListenerHasBeenSet; }
  template <typename SrtListenerT = SrtListenerRouterOutputConfiguration>
  void SetSrtListener(SrtListenerT&& value) {
    m_srtListenerHasBeenSet = true;
    m_srtListener = std::forward<SrtListenerT>(value);
  }
  template <typename SrtListenerT = SrtListenerRouterOutputConfiguration>
  RouterOutputProtocolConfiguration& WithSrtListener(SrtListenerT&& value) {
    SetSrtListener(std::forward<SrtListenerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SrtCallerRouterOutputConfiguration& GetSrtCaller() const { return m_srtCaller; }
  inline bool SrtCallerHasBeenSet() const { return m_srtCallerHasBeenSet; }
  template <typename SrtCallerT = SrtCallerRouterOutputConfiguration>
  void SetSrtCaller(SrtCallerT&& value) {
    m_srtCallerHasBeenSet = true;
    m_srtCaller = std::forward<SrtCallerT>(value);
  }
  template <typename SrtCallerT = SrtCallerRouterOutputConfiguration>
  RouterOutputProtocolConfiguration& WithSrtCaller(SrtCallerT&& value) {
    SetSrtCaller(std::forward<SrtCallerT>(value));
    return *this;
  }
  ///@}
 private:
  RtpRouterOutputConfiguration m_rtp;
  bool m_rtpHasBeenSet = false;

  RistRouterOutputConfiguration m_rist;
  bool m_ristHasBeenSet = false;

  SrtListenerRouterOutputConfiguration m_srtListener;
  bool m_srtListenerHasBeenSet = false;

  SrtCallerRouterOutputConfiguration m_srtCaller;
  bool m_srtCallerHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
