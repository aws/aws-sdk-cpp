/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RistRouterInputConfiguration.h>
#include <aws/mediaconnect/model/RtpRouterInputConfiguration.h>

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
 * <p>Protocol configuration settings for merge router inputs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MergeRouterInputProtocolConfiguration">AWS
 * API Reference</a></p>
 */
class MergeRouterInputProtocolConfiguration {
 public:
  AWS_MEDIACONNECT_API MergeRouterInputProtocolConfiguration() = default;
  AWS_MEDIACONNECT_API MergeRouterInputProtocolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MergeRouterInputProtocolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MergeRouterInputProtocolConfiguration& WithRtp(RtpT&& value) {
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
  MergeRouterInputProtocolConfiguration& WithRist(RistT&& value) {
    SetRist(std::forward<RistT>(value));
    return *this;
  }
  ///@}
 private:
  RtpRouterInputConfiguration m_rtp;

  RistRouterInputConfiguration m_rist;
  bool m_rtpHasBeenSet = false;
  bool m_ristHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
