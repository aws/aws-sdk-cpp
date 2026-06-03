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
class UpdateWhatsAppFlowAssetsResult {
 public:
  AWS_SOCIALMESSAGING_API UpdateWhatsAppFlowAssetsResult() = default;
  AWS_SOCIALMESSAGING_API UpdateWhatsAppFlowAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API UpdateWhatsAppFlowAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  UpdateWhatsAppFlowAssetsResult& WithValidationErrors(ValidationErrorsT&& value) {
    SetValidationErrors(std::forward<ValidationErrorsT>(value));
    return *this;
  }
  template <typename ValidationErrorsT = Aws::String>
  UpdateWhatsAppFlowAssetsResult& AddValidationErrors(ValidationErrorsT&& value) {
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
  UpdateWhatsAppFlowAssetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_validationErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_validationErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
