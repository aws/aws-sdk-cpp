/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

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
class CreateWhatsAppFlowResult {
 public:
  AWS_SOCIALMESSAGING_API CreateWhatsAppFlowResult() = default;
  AWS_SOCIALMESSAGING_API CreateWhatsAppFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API CreateWhatsAppFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the Flow by Meta.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  CreateWhatsAppFlowResult& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of validation errors returned by Meta, if any. Validation errors must
   * be resolved before the Flow can be published.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValidationErrors() const { return m_validationErrors; }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  void SetValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors = std::forward<ValidationErrorsT>(value);
  }
  template <typename ValidationErrorsT = Aws::Vector<Aws::String>>
  CreateWhatsAppFlowResult& WithValidationErrors(ValidationErrorsT&& value) {
    SetValidationErrors(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  template <typename ValidationErrorsT = Aws::String>
  CreateWhatsAppFlowResult& AddValidationErrors(ValidationErrorsT&& value) {
    m_validationErrorsHasBeenSet = true;
    m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value));
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
  CreateWhatsAppFlowResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_flowId;

  Aws::Vector<Aws::String> m_validationErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_flowIdHasBeenSet = false;
  bool m_validationErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
