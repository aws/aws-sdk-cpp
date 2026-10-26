/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RistStandardDestinationEndpointConfiguration.h>
#include <aws/mediaconnect/model/RtpStandardDestinationEndpointConfiguration.h>
#include <aws/mediaconnect/model/SrtCallerStandardDestinationEndpointConfiguration.h>
#include <aws/mediaconnect/model/SrtListenerStandardDestinationEndpointConfiguration.h>

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
 * <p>The protocol configuration for a standard destination endpoint. This is a
 * union type, so exactly one of its members is set, depending on the protocol that
 * the destination endpoint uses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardDestinationEndpointProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class StandardDestinationEndpointProtocolConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardDestinationEndpointProtocolConfiguration() = default;
  AWS_MEDIACONNECT_API StandardDestinationEndpointProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardDestinationEndpointProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for a destination endpoint that uses the RIST
   * protocol.</p>
   */
  inline const RistStandardDestinationEndpointConfiguration& GetRist() const { return m_rist; }
  inline bool RistHasBeenSet() const { return m_ristHasBeenSet; }
  template <typename RistT = RistStandardDestinationEndpointConfiguration>
  void SetRist(RistT&& value) {
    m_ristHasBeenSet = true;
    m_rist = std::forward<RistT>(value);
  }
  template <typename RistT = RistStandardDestinationEndpointConfiguration>
  StandardDestinationEndpointProtocolConfiguration& WithRist(RistT&& value) {
    SetRist(std::forward<RistT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a destination endpoint that uses SRT in
   * listener mode.</p>
   */
  inline const SrtListenerStandardDestinationEndpointConfiguration& GetSrtListener() const { return m_srtListener; }
  inline bool SrtListenerHasBeenSet() const { return m_srtListenerHasBeenSet; }
  template <typename SrtListenerT = SrtListenerStandardDestinationEndpointConfiguration>
  void SetSrtListener(SrtListenerT&& value) {
    m_srtListenerHasBeenSet = true;
    m_srtListener = std::forward<SrtListenerT>(value);
  }
  template <typename SrtListenerT = SrtListenerStandardDestinationEndpointConfiguration>
  StandardDestinationEndpointProtocolConfiguration& WithSrtListener(SrtListenerT&& value) {
    SetSrtListener(std::forward<SrtListenerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a destination endpoint that uses SRT in caller
   * mode.</p>
   */
  inline const SrtCallerStandardDestinationEndpointConfiguration& GetSrtCaller() const { return m_srtCaller; }
  inline bool SrtCallerHasBeenSet() const { return m_srtCallerHasBeenSet; }
  template <typename SrtCallerT = SrtCallerStandardDestinationEndpointConfiguration>
  void SetSrtCaller(SrtCallerT&& value) {
    m_srtCallerHasBeenSet = true;
    m_srtCaller = std::forward<SrtCallerT>(value);
  }
  template <typename SrtCallerT = SrtCallerStandardDestinationEndpointConfiguration>
  StandardDestinationEndpointProtocolConfiguration& WithSrtCaller(SrtCallerT&& value) {
    SetSrtCaller(std::forward<SrtCallerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a destination endpoint that uses the RTP
   * protocol.</p>
   */
  inline const RtpStandardDestinationEndpointConfiguration& GetRtp() const { return m_rtp; }
  inline bool RtpHasBeenSet() const { return m_rtpHasBeenSet; }
  template <typename RtpT = RtpStandardDestinationEndpointConfiguration>
  void SetRtp(RtpT&& value) {
    m_rtpHasBeenSet = true;
    m_rtp = std::forward<RtpT>(value);
  }
  template <typename RtpT = RtpStandardDestinationEndpointConfiguration>
  StandardDestinationEndpointProtocolConfiguration& WithRtp(RtpT&& value) {
    SetRtp(std::forward<RtpT>(value));
    return *this;
  }
  ///@}
 private:
  RistStandardDestinationEndpointConfiguration m_rist;

  SrtListenerStandardDestinationEndpointConfiguration m_srtListener;

  SrtCallerStandardDestinationEndpointConfiguration m_srtCaller;

  RtpStandardDestinationEndpointConfiguration m_rtp;
  bool m_ristHasBeenSet = false;
  bool m_srtListenerHasBeenSet = false;
  bool m_srtCallerHasBeenSet = false;
  bool m_rtpHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
