/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/HandshakeStatus.h>

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
 * <p>Contains details about an accepted channel handshake.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/AcceptChannelHandshakeDetail">AWS
 * API Reference</a></p>
 */
class AcceptChannelHandshakeDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API AcceptChannelHandshakeDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API AcceptChannelHandshakeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API AcceptChannelHandshakeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the accepted handshake.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AcceptChannelHandshakeDetail& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the accepted handshake.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AcceptChannelHandshakeDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the accepted handshake.</p>
   */
  inline HandshakeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HandshakeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcceptChannelHandshakeDetail& WithStatus(HandshakeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  HandshakeStatus m_status{HandshakeStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
