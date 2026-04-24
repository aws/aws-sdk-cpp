/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodPayload.h>
#include <aws/partnercentral-channel/model/StartServicePeriodPayload.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Contains the payload data for different types of channel
 * handshakes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ChannelHandshakePayload">AWS
 * API Reference</a></p>
 */
class ChannelHandshakePayload {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakePayload() = default;
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakePayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ChannelHandshakePayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Payload for starting a service period handshake.</p>
   */
  inline const StartServicePeriodPayload& GetStartServicePeriodPayload() const { return m_startServicePeriodPayload; }
  inline bool StartServicePeriodPayloadHasBeenSet() const { return m_startServicePeriodPayloadHasBeenSet; }
  template <typename StartServicePeriodPayloadT = StartServicePeriodPayload>
  void SetStartServicePeriodPayload(StartServicePeriodPayloadT&& value) {
    m_startServicePeriodPayloadHasBeenSet = true;
    m_startServicePeriodPayload = std::forward<StartServicePeriodPayloadT>(value);
  }
  template <typename StartServicePeriodPayloadT = StartServicePeriodPayload>
  ChannelHandshakePayload& WithStartServicePeriodPayload(StartServicePeriodPayloadT&& value) {
    SetStartServicePeriodPayload(std::forward<StartServicePeriodPayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Payload for revoking a service period handshake.</p>
   */
  inline const RevokeServicePeriodPayload& GetRevokeServicePeriodPayload() const { return m_revokeServicePeriodPayload; }
  inline bool RevokeServicePeriodPayloadHasBeenSet() const { return m_revokeServicePeriodPayloadHasBeenSet; }
  template <typename RevokeServicePeriodPayloadT = RevokeServicePeriodPayload>
  void SetRevokeServicePeriodPayload(RevokeServicePeriodPayloadT&& value) {
    m_revokeServicePeriodPayloadHasBeenSet = true;
    m_revokeServicePeriodPayload = std::forward<RevokeServicePeriodPayloadT>(value);
  }
  template <typename RevokeServicePeriodPayloadT = RevokeServicePeriodPayload>
  ChannelHandshakePayload& WithRevokeServicePeriodPayload(RevokeServicePeriodPayloadT&& value) {
    SetRevokeServicePeriodPayload(std::forward<RevokeServicePeriodPayloadT>(value));
    return *this;
  }
  ///@}
 private:
  StartServicePeriodPayload m_startServicePeriodPayload;

  RevokeServicePeriodPayload m_revokeServicePeriodPayload;
  bool m_startServicePeriodPayloadHasBeenSet = false;
  bool m_revokeServicePeriodPayloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
