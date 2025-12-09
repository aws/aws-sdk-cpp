/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RistRouterInputConfiguration.h>
#include <aws/mediaconnect/model/RtpRouterInputConfiguration.h>
#include <aws/mediaconnect/model/SrtCallerRouterInputConfiguration.h>
#include <aws/mediaconnect/model/SrtListenerRouterInputConfiguration.h>

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
 * <p>The protocol configuration settings for a router input.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class RouterInputProtocolConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterInputProtocolConfiguration() = default;
  AWS_MEDIACONNECT_API RouterInputProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RtpRouterInputConfiguration& GetRtp() const { return m_rtp; }
  inline bool RtpHasBeenSet() const { return m_rtpHasBeenSet; }
  template <typename RtpT = RtpRouterInputConfiguration>
  void SetRtp(RtpT&& value) {
    m_rtpHasBeenSet = true;
    m_rtp = std::forward<RtpT>(value);
  }
  template <typename RtpT = RtpRouterInputConfiguration>
  RouterInputProtocolConfiguration& WithRtp(RtpT&& value) {
    SetRtp(std::forward<RtpT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RistRouterInputConfiguration& GetRist() const { return m_rist; }
  inline bool RistHasBeenSet() const { return m_ristHasBeenSet; }
  template <typename RistT = RistRouterInputConfiguration>
  void SetRist(RistT&& value) {
    m_ristHasBeenSet = true;
    m_rist = std::forward<RistT>(value);
  }
  template <typename RistT = RistRouterInputConfiguration>
  RouterInputProtocolConfiguration& WithRist(RistT&& value) {
    SetRist(std::forward<RistT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SrtListenerRouterInputConfiguration& GetSrtListener() const { return m_srtListener; }
  inline bool SrtListenerHasBeenSet() const { return m_srtListenerHasBeenSet; }
  template <typename SrtListenerT = SrtListenerRouterInputConfiguration>
  void SetSrtListener(SrtListenerT&& value) {
    m_srtListenerHasBeenSet = true;
    m_srtListener = std::forward<SrtListenerT>(value);
  }
  template <typename SrtListenerT = SrtListenerRouterInputConfiguration>
  RouterInputProtocolConfiguration& WithSrtListener(SrtListenerT&& value) {
    SetSrtListener(std::forward<SrtListenerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SrtCallerRouterInputConfiguration& GetSrtCaller() const { return m_srtCaller; }
  inline bool SrtCallerHasBeenSet() const { return m_srtCallerHasBeenSet; }
  template <typename SrtCallerT = SrtCallerRouterInputConfiguration>
  void SetSrtCaller(SrtCallerT&& value) {
    m_srtCallerHasBeenSet = true;
    m_srtCaller = std::forward<SrtCallerT>(value);
  }
  template <typename SrtCallerT = SrtCallerRouterInputConfiguration>
  RouterInputProtocolConfiguration& WithSrtCaller(SrtCallerT&& value) {
    SetSrtCaller(std::forward<SrtCallerT>(value));
    return *this;
  }
  ///@}
 private:
  RtpRouterInputConfiguration m_rtp;

  RistRouterInputConfiguration m_rist;

  SrtListenerRouterInputConfiguration m_srtListener;

  SrtCallerRouterInputConfiguration m_srtCaller;
  bool m_rtpHasBeenSet = false;
  bool m_ristHasBeenSet = false;
  bool m_srtListenerHasBeenSet = false;
  bool m_srtCallerHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
