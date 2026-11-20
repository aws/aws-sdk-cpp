/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/FinancialRecord.h>

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
class GetFinancialRecordResult {
 public:
  AWS_PAYMENTS_API GetFinancialRecordResult() = default;
  AWS_PAYMENTS_API GetFinancialRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API GetFinancialRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The requested financial record.</p>
   */
  inline const FinancialRecord& GetFinancialRecord() const { return m_financialRecord; }
  template <typename FinancialRecordT = FinancialRecord>
  void SetFinancialRecord(FinancialRecordT&& value) {
    m_financialRecordHasBeenSet = true;
    m_financialRecord = std::forward<FinancialRecordT>(value);
  }
  template <typename FinancialRecordT = FinancialRecord>
  GetFinancialRecordResult& WithFinancialRecord(FinancialRecordT&& value) {
    SetFinancialRecord(std::forward<FinancialRecordT>(value));
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
  GetFinancialRecordResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  FinancialRecord m_financialRecord;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_financialRecordHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
