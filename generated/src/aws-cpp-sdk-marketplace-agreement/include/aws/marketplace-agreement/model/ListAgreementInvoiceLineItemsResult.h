/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementInvoiceLineItemGroupSummary.h>

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
class ListAgreementInvoiceLineItemsResult {
 public:
  AWS_AGREEMENTSERVICE_API ListAgreementInvoiceLineItemsResult() = default;
  AWS_AGREEMENTSERVICE_API ListAgreementInvoiceLineItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_AGREEMENTSERVICE_API ListAgreementInvoiceLineItemsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of grouped billing data objects.</p>
   */
  inline const Aws::Vector<AgreementInvoiceLineItemGroupSummary>& GetAgreementInvoiceLineItemGroupSummaries() const {
    return m_agreementInvoiceLineItemGroupSummaries;
  }
  template <typename AgreementInvoiceLineItemGroupSummariesT = Aws::Vector<AgreementInvoiceLineItemGroupSummary>>
  void SetAgreementInvoiceLineItemGroupSummaries(AgreementInvoiceLineItemGroupSummariesT&& value) {
    m_agreementInvoiceLineItemGroupSummariesHasBeenSet = true;
    m_agreementInvoiceLineItemGroupSummaries = std::forward<AgreementInvoiceLineItemGroupSummariesT>(value);
  }
  template <typename AgreementInvoiceLineItemGroupSummariesT = Aws::Vector<AgreementInvoiceLineItemGroupSummary>>
  ListAgreementInvoiceLineItemsResult& WithAgreementInvoiceLineItemGroupSummaries(AgreementInvoiceLineItemGroupSummariesT&& value) {
    SetAgreementInvoiceLineItemGroupSummaries(std::forward<AgreementInvoiceLineItemGroupSummariesT>(value));
    return *this;
  }
  template <typename AgreementInvoiceLineItemGroupSummariesT = AgreementInvoiceLineItemGroupSummary>
  ListAgreementInvoiceLineItemsResult& AddAgreementInvoiceLineItemGroupSummaries(AgreementInvoiceLineItemGroupSummariesT&& value) {
    m_agreementInvoiceLineItemGroupSummariesHasBeenSet = true;
    m_agreementInvoiceLineItemGroupSummaries.emplace_back(std::forward<AgreementInvoiceLineItemGroupSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results. If not present, there are no
   * more results available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgreementInvoiceLineItemsResult& WithNextToken(NextTokenT&& value) {
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
  ListAgreementInvoiceLineItemsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgreementInvoiceLineItemGroupSummary> m_agreementInvoiceLineItemGroupSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementInvoiceLineItemGroupSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
