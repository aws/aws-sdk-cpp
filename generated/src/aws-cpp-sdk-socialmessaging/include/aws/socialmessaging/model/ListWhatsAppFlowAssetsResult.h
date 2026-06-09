/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowAsset.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {
class ListWhatsAppFlowAssetsResult {
 public:
  AWS_SOCIALMESSAGING_API ListWhatsAppFlowAssetsResult() = default;
  AWS_SOCIALMESSAGING_API ListWhatsAppFlowAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API ListWhatsAppFlowAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of Flow assets with download URLs.</p>
   */
  inline const Aws::Vector<MetaFlowAsset>& GetFlowAssets() const { return m_flowAssets; }
  template <typename FlowAssetsT = Aws::Vector<MetaFlowAsset>>
  void SetFlowAssets(FlowAssetsT&& value) {
    m_flowAssetsHasBeenSet = true;
    m_flowAssets = std::forward<FlowAssetsT>(value);
  }
  template <typename FlowAssetsT = Aws::Vector<MetaFlowAsset>>
  ListWhatsAppFlowAssetsResult& WithFlowAssets(FlowAssetsT&& value) {
    SetFlowAssets(std::forward<FlowAssetsT>(value));
    return *this;
  }
  template <typename FlowAssetsT = MetaFlowAsset>
  ListWhatsAppFlowAssetsResult& AddFlowAssets(FlowAssetsT&& value) {
    m_flowAssetsHasBeenSet = true;
    m_flowAssets.emplace_back(std::forward<FlowAssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results, if any.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWhatsAppFlowAssetsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListWhatsAppFlowAssetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MetaFlowAsset> m_flowAssets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_flowAssetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
