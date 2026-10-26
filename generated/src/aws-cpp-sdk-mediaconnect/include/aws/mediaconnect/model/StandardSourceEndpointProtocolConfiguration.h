/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RistStandardSourceEndpointConfiguration.h>
#include <aws/mediaconnect/model/RtpStandardSourceEndpointConfiguration.h>
#include <aws/mediaconnect/model/SrtCallerStandardSourceEndpointConfiguration.h>
#include <aws/mediaconnect/model/SrtListenerStandardSourceEndpointConfiguration.h>

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
 * <p>The protocol configuration for a standard source endpoint. This is a union
 * type, so exactly one of its members is set, depending on the protocol that the
 * source endpoint uses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/StandardSourceEndpointProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class StandardSourceEndpointProtocolConfiguration {
 public:
  AWS_MEDIACONNECT_API StandardSourceEndpointProtocolConfiguration() = default;
  AWS_MEDIACONNECT_API StandardSourceEndpointProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API StandardSourceEndpointProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration settings for a source endpoint that uses the RIST
   * protocol.</p>
   */
  inline const RistStandardSourceEndpointConfiguration& GetRist() const { return m_rist; }
  inline bool RistHasBeenSet() const { return m_ristHasBeenSet; }
  template <typename RistT = RistStandardSourceEndpointConfiguration>
  void SetRist(RistT&& value) {
    m_ristHasBeenSet = true;
    m_rist = std::forward<RistT>(value);
  }
  template <typename RistT = RistStandardSourceEndpointConfiguration>
  StandardSourceEndpointProtocolConfiguration& WithRist(RistT&& value) {
    SetRist(std::forward<RistT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a source endpoint that uses SRT in listener
   * mode.</p>
   */
  inline const SrtListenerStandardSourceEndpointConfiguration& GetSrtListener() const { return m_srtListener; }
  inline bool SrtListenerHasBeenSet() const { return m_srtListenerHasBeenSet; }
  template <typename SrtListenerT = SrtListenerStandardSourceEndpointConfiguration>
  void SetSrtListener(SrtListenerT&& value) {
    m_srtListenerHasBeenSet = true;
    m_srtListener = std::forward<SrtListenerT>(value);
  }
  template <typename SrtListenerT = SrtListenerStandardSourceEndpointConfiguration>
  StandardSourceEndpointProtocolConfiguration& WithSrtListener(SrtListenerT&& value) {
    SetSrtListener(std::forward<SrtListenerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a source endpoint that uses SRT in caller
   * mode.</p>
   */
  inline const SrtCallerStandardSourceEndpointConfiguration& GetSrtCaller() const { return m_srtCaller; }
  inline bool SrtCallerHasBeenSet() const { return m_srtCallerHasBeenSet; }
  template <typename SrtCallerT = SrtCallerStandardSourceEndpointConfiguration>
  void SetSrtCaller(SrtCallerT&& value) {
    m_srtCallerHasBeenSet = true;
    m_srtCaller = std::forward<SrtCallerT>(value);
  }
  template <typename SrtCallerT = SrtCallerStandardSourceEndpointConfiguration>
  StandardSourceEndpointProtocolConfiguration& WithSrtCaller(SrtCallerT&& value) {
    SetSrtCaller(std::forward<SrtCallerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for a source endpoint that uses the RTP
   * protocol.</p>
   */
  inline const RtpStandardSourceEndpointConfiguration& GetRtp() const { return m_rtp; }
  inline bool RtpHasBeenSet() const { return m_rtpHasBeenSet; }
  template <typename RtpT = RtpStandardSourceEndpointConfiguration>
  void SetRtp(RtpT&& value) {
    m_rtpHasBeenSet = true;
    m_rtp = std::forward<RtpT>(value);
  }
  template <typename RtpT = RtpStandardSourceEndpointConfiguration>
  StandardSourceEndpointProtocolConfiguration& WithRtp(RtpT&& value) {
    SetRtp(std::forward<RtpT>(value));
    return *this;
  }
  ///@}
 private:
  RistStandardSourceEndpointConfiguration m_rist;

  SrtListenerStandardSourceEndpointConfiguration m_srtListener;

  SrtCallerStandardSourceEndpointConfiguration m_srtCaller;

  RtpStandardSourceEndpointConfiguration m_rtp;
  bool m_ristHasBeenSet = false;
  bool m_srtListenerHasBeenSet = false;
  bool m_srtCallerHasBeenSet = false;
  bool m_rtpHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
