/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/FinancialRecord.h>
#include <aws/payments/model/FinancialRecordError.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {
class BatchGetFinancialRecordResult {
 public:
  AWS_PAYMENTS_API BatchGetFinancialRecordResult() = default;
  AWS_PAYMENTS_API BatchGetFinancialRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API BatchGetFinancialRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The financial records that the operation retrieved, in no particular order.
   * This list contains fewer records than you requested when <code>errors</code>
   * names one or more keys.</p>
   */
  inline const Aws::Vector<FinancialRecord>& GetFinancialRecords() const { return m_financialRecords; }
  template <typename FinancialRecordsT = Aws::Vector<FinancialRecord>>
  void SetFinancialRecords(FinancialRecordsT&& value) {
    m_financialRecordsHasBeenSet = true;
    m_financialRecords = std::forward<FinancialRecordsT>(value);
  }
  template <typename FinancialRecordsT = Aws::Vector<FinancialRecord>>
  BatchGetFinancialRecordResult& WithFinancialRecords(FinancialRecordsT&& value) {
    SetFinancialRecords(std::forward<FinancialRecordsT>(value));
    return *this;
  }
  template <typename FinancialRecordsT = FinancialRecord>
  BatchGetFinancialRecordResult& AddFinancialRecords(FinancialRecordsT&& value) {
    m_financialRecordsHasBeenSet = true;
    m_financialRecords.emplace_back(std::forward<FinancialRecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors for the records that the operation couldn't retrieve, one for each
   * record, with the key as you requested it and the reason. This list is empty when
   * the operation retrieved every record.</p>
   */
  inline const Aws::Vector<FinancialRecordError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<FinancialRecordError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<FinancialRecordError>>
  BatchGetFinancialRecordResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = FinancialRecordError>
  BatchGetFinancialRecordResult& AddErrors(ErrorsT&& value) {
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
  BatchGetFinancialRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FinancialRecord> m_financialRecords;

  Aws::Vector<FinancialRecordError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_financialRecordsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
