/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeDetail.h>

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
class CreateChannelHandshakeResult {
 public:
  AWS_PARTNERCENTRALCHANNEL_API CreateChannelHandshakeResult() = default;
  AWS_PARTNERCENTRALCHANNEL_API CreateChannelHandshakeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALCHANNEL_API CreateChannelHandshakeResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the created channel handshake.</p>
   */
  inline const CreateChannelHandshakeDetail& GetChannelHandshakeDetail() const { return m_channelHandshakeDetail; }
  template <typename ChannelHandshakeDetailT = CreateChannelHandshakeDetail>
  void SetChannelHandshakeDetail(ChannelHandshakeDetailT&& value) {
    m_channelHandshakeDetailHasBeenSet = true;
    m_channelHandshakeDetail = std::forward<ChannelHandshakeDetailT>(value);
  }
  template <typename ChannelHandshakeDetailT = CreateChannelHandshakeDetail>
  CreateChannelHandshakeResult& WithChannelHandshakeDetail(ChannelHandshakeDetailT&& value) {
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
  CreateChannelHandshakeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  CreateChannelHandshakeDetail m_channelHandshakeDetail;
  bool m_channelHandshakeDetailHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
