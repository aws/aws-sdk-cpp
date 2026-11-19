/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/CustomerAccountSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Information about search customer accounts response.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SearchCustomerAccountsResponse">AWS
 * API Reference</a></p>
 */
class SearchCustomerAccountsResult {
 public:
  AWS_PARTNERCENTRALSELLING_API SearchCustomerAccountsResult() = default;
  AWS_PARTNERCENTRALSELLING_API SearchCustomerAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API SearchCustomerAccountsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The customer accounts that match the request.</p>
   */
  inline const Aws::Vector<CustomerAccountSummary>& GetCustomerAccountSummaries() const { return m_customerAccountSummaries; }
  template <typename CustomerAccountSummariesT = Aws::Vector<CustomerAccountSummary>>
  void SetCustomerAccountSummaries(CustomerAccountSummariesT&& value) {
    m_customerAccountSummariesHasBeenSet = true;
    m_customerAccountSummaries = std::forward<CustomerAccountSummariesT>(value);
  }
  template <typename CustomerAccountSummariesT = Aws::Vector<CustomerAccountSummary>>
  SearchCustomerAccountsResult& WithCustomerAccountSummaries(CustomerAccountSummariesT&& value) {
    SetCustomerAccountSummaries(std::forward<CustomerAccountSummariesT>(value));
    return *this;
  }
  template <typename CustomerAccountSummariesT = CustomerAccountSummary>
  SearchCustomerAccountsResult& AddCustomerAccountSummaries(CustomerAccountSummariesT&& value) {
    m_customerAccountSummariesHasBeenSet = true;
    m_customerAccountSummaries.emplace_back(std::forward<CustomerAccountSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is absent when
   * there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchCustomerAccountsResult& WithNextToken(NextTokenT&& value) {
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
  SearchCustomerAccountsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CustomerAccountSummary> m_customerAccountSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_customerAccountSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
