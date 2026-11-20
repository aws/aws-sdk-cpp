/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/CancelChannelContractDetail.h>

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
class CancelChannelContractResult {
 public:
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractResult() = default;
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALCHANNEL_API CancelChannelContractResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the canceled channel contract.</p>
   */
  inline const CancelChannelContractDetail& GetChannelContractDetail() const { return m_channelContractDetail; }
  template <typename ChannelContractDetailT = CancelChannelContractDetail>
  void SetChannelContractDetail(ChannelContractDetailT&& value) {
    m_channelContractDetailHasBeenSet = true;
    m_channelContractDetail = std::forward<ChannelContractDetailT>(value);
  }
  template <typename ChannelContractDetailT = CancelChannelContractDetail>
  CancelChannelContractResult& WithChannelContractDetail(ChannelContractDetailT&& value) {
    SetChannelContractDetail(std::forward<ChannelContractDetailT>(value));
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
  CancelChannelContractResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CancelChannelContractDetail m_channelContractDetail;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_channelContractDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
