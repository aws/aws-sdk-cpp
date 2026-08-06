/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AccountFreeTrialStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class ListFreeTrialStatusesV2Result {
 public:
  AWS_SECURITYHUB_API ListFreeTrialStatusesV2Result() = default;
  AWS_SECURITYHUB_API ListFreeTrialStatusesV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API ListFreeTrialStatusesV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of free trial statuses, one for each account in scope.</p>
   */
  inline const Aws::Vector<AccountFreeTrialStatus>& GetAccountFreeTrialStatuses() const { return m_accountFreeTrialStatuses; }
  template <typename AccountFreeTrialStatusesT = Aws::Vector<AccountFreeTrialStatus>>
  void SetAccountFreeTrialStatuses(AccountFreeTrialStatusesT&& value) {
    m_accountFreeTrialStatusesHasBeenSet = true;
    m_accountFreeTrialStatuses = std::forward<AccountFreeTrialStatusesT>(value);
  }
  template <typename AccountFreeTrialStatusesT = Aws::Vector<AccountFreeTrialStatus>>
  ListFreeTrialStatusesV2Result& WithAccountFreeTrialStatuses(AccountFreeTrialStatusesT&& value) {
    SetAccountFreeTrialStatuses(std::forward<AccountFreeTrialStatusesT>(value));
    return *this;
  }
  template <typename AccountFreeTrialStatusesT = AccountFreeTrialStatus>
  ListFreeTrialStatusesV2Result& AddAccountFreeTrialStatuses(AccountFreeTrialStatusesT&& value) {
    m_accountFreeTrialStatusesHasBeenSet = true;
    m_accountFreeTrialStatuses.emplace_back(std::forward<AccountFreeTrialStatusesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use to request the next page of results. If there are
   * no additional results, this value is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFreeTrialStatusesV2Result& WithNextToken(NextTokenT&& value) {
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
  ListFreeTrialStatusesV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AccountFreeTrialStatus> m_accountFreeTrialStatuses;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountFreeTrialStatusesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
