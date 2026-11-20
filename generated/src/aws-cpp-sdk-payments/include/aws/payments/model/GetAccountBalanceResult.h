/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/AccountBalance.h>

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
class GetAccountBalanceResult {
 public:
  AWS_PAYMENTS_API GetAccountBalanceResult() = default;
  AWS_PAYMENTS_API GetAccountBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTS_API GetAccountBalanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The balance, as one amount for each merchant of record and currency. This
   * list is empty when your account has nothing in the requested balance.</p>
   */
  inline const Aws::Vector<AccountBalance>& GetAccountBalances() const { return m_accountBalances; }
  template <typename AccountBalancesT = Aws::Vector<AccountBalance>>
  void SetAccountBalances(AccountBalancesT&& value) {
    m_accountBalancesHasBeenSet = true;
    m_accountBalances = std::forward<AccountBalancesT>(value);
  }
  template <typename AccountBalancesT = Aws::Vector<AccountBalance>>
  GetAccountBalanceResult& WithAccountBalances(AccountBalancesT&& value) {
    SetAccountBalances(std::forward<AccountBalancesT>(value));
    return *this;
  }
  template <typename AccountBalancesT = AccountBalance>
  GetAccountBalanceResult& AddAccountBalances(AccountBalancesT&& value) {
    m_accountBalancesHasBeenSet = true;
    m_accountBalances.emplace_back(std::forward<AccountBalancesT>(value));
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
  GetAccountBalanceResult& WithNextToken(NextTokenT&& value) {
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
  GetAccountBalanceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AccountBalance> m_accountBalances;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountBalancesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
