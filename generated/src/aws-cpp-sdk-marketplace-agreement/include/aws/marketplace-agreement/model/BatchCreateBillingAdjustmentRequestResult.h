/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentError.h>
#include <aws/marketplace-agreement/model/BatchCreateBillingAdjustmentItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {
class BatchCreateBillingAdjustmentRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestResult() = default;
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGREEMENTSERVICE_API BatchCreateBillingAdjustmentRequestResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of successfully created billing adjustment items, each containing the
   * <code>billingAdjustmentRequestId</code> and <code>clientToken</code>.</p>
   */
  inline const Aws::Vector<BatchCreateBillingAdjustmentItem>& GetItems() const { return m_items; }
  template <typename ItemsT = Aws::Vector<BatchCreateBillingAdjustmentItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<BatchCreateBillingAdjustmentItem>>
  BatchCreateBillingAdjustmentRequestResult& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = BatchCreateBillingAdjustmentItem>
  BatchCreateBillingAdjustmentRequestResult& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for entries that failed validation, each containing the
   * <code>clientToken</code>, error <code>code</code>, and <code>message</code>.</p>
   */
  inline const Aws::Vector<BatchCreateBillingAdjustmentError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchCreateBillingAdjustmentError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchCreateBillingAdjustmentError>>
  BatchCreateBillingAdjustmentRequestResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchCreateBillingAdjustmentError>
  BatchCreateBillingAdjustmentRequestResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchCreateBillingAdjustmentRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchCreateBillingAdjustmentItem> m_items;

  Aws::Vector<BatchCreateBillingAdjustmentError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_itemsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
