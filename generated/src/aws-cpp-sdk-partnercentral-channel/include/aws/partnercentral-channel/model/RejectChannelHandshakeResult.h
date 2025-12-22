/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {
class RejectChannelHandshakeResult {
 public:
  AWS_PARTNERCENTRALCHANNEL_API RejectChannelHandshakeResult() = default;
  AWS_PARTNERCENTRALCHANNEL_API RejectChannelHandshakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALCHANNEL_API RejectChannelHandshakeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the rejected channel handshake.</p>
   */
  inline const RejectChannelHandshakeDetail& GetChannelHandshakeDetail() const { return m_channelHandshakeDetail; }
  template <typename ChannelHandshakeDetailT = RejectChannelHandshakeDetail>
  void SetChannelHandshakeDetail(ChannelHandshakeDetailT&& value) {
    m_channelHandshakeDetailHasBeenSet = true;
    m_channelHandshakeDetail = std::forward<ChannelHandshakeDetailT>(value);
  }
  template <typename ChannelHandshakeDetailT = RejectChannelHandshakeDetail>
  RejectChannelHandshakeResult& WithChannelHandshakeDetail(ChannelHandshakeDetailT&& value) {
    SetChannelHandshakeDetail(std::forward<ChannelHandshakeDetailT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RejectChannelHandshakeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RejectChannelHandshakeDetail m_channelHandshakeDetail;

  Aws::String m_requestId;
  bool m_channelHandshakeDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
