/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/FinancialRecordSummary.h>

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
class ListFinancialRecordsResult {
 public:
  AWS_PAYMENTS_API ListFinancialRecordsResult() = default;
  AWS_PAYMENTS_API ListFinancialRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API ListFinancialRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The financial record summaries that match your filters, in the requested
   * order. This list is empty when no record matches.</p>
   */
  inline const Aws::Vector<FinancialRecordSummary>& GetFinancialRecordSummaries() const { return m_financialRecordSummaries; }
  template <typename FinancialRecordSummariesT = Aws::Vector<FinancialRecordSummary>>
  void SetFinancialRecordSummaries(FinancialRecordSummariesT&& value) {
    m_financialRecordSummariesHasBeenSet = true;
    m_financialRecordSummaries = std::forward<FinancialRecordSummariesT>(value);
  }
  template <typename FinancialRecordSummariesT = Aws::Vector<FinancialRecordSummary>>
  ListFinancialRecordsResult& WithFinancialRecordSummaries(FinancialRecordSummariesT&& value) {
    SetFinancialRecordSummaries(std::forward<FinancialRecordSummariesT>(value));
    return *this;
  }
  template <typename FinancialRecordSummariesT = FinancialRecordSummary>
  ListFinancialRecordsResult& AddFinancialRecordSummaries(FinancialRecordSummariesT&& value) {
    m_financialRecordSummariesHasBeenSet = true;
    m_financialRecordSummaries.emplace_back(std::forward<FinancialRecordSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token that indicates the next set of results to retrieve. This
   * value is absent when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFinancialRecordsResult& WithNextToken(NextTokenT&& value) {
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
  ListFinancialRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FinancialRecordSummary> m_financialRecordSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_financialRecordSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
