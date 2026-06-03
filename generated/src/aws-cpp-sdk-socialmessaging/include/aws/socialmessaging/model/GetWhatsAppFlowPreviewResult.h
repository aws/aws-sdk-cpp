/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowPreviewInfo.h>

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
class GetWhatsAppFlowPreviewResult {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowPreviewResult() = default;
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowPreviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowPreviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the Flow.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  GetWhatsAppFlowPreviewResult& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preview URL and its expiration timestamp.</p>
   */
  inline const MetaFlowPreviewInfo& GetPreview() const { return m_preview; }
  template <typename PreviewT = MetaFlowPreviewInfo>
  void SetPreview(PreviewT&& value) {
    m_previewHasBeenSet = true;
    m_preview = std::forward<PreviewT>(value);
  }
  template <typename PreviewT = MetaFlowPreviewInfo>
  GetWhatsAppFlowPreviewResult& WithPreview(PreviewT&& value) {
    SetPreview(std::forward<PreviewT>(value));
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
  GetWhatsAppFlowPreviewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_flowId;

  MetaFlowPreviewInfo m_preview;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_flowIdHasBeenSet = false;
  bool m_previewHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
