/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminAccountSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {
class ListAdminAccountsResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API ListAdminAccountsResult() = default;
  AWS_NETWORKSECURITYMANAGER_API ListAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API ListAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token for the next page of results. To retrieve the next page, call the
   * operation again and provide this value. When there are no more results, this
   * value is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAdminAccountsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of administrator accounts.</p>
   */
  inline const Aws::Vector<AdminAccountSummary>& GetAdminAccounts() const { return m_adminAccounts; }
  template <typename AdminAccountsT = Aws::Vector<AdminAccountSummary>>
  void SetAdminAccounts(AdminAccountsT&& value) {
    m_adminAccountsHasBeenSet = true;
    m_adminAccounts = std::forward<AdminAccountsT>(value);
  }
  template <typename AdminAccountsT = Aws::Vector<AdminAccountSummary>>
  ListAdminAccountsResult& WithAdminAccounts(AdminAccountsT&& value) {
    SetAdminAccounts(std::forward<AdminAccountsT>(value));
    return *this;
  }
  template <typename AdminAccountsT = AdminAccountSummary>
  ListAdminAccountsResult& AddAdminAccounts(AdminAccountsT&& value) {
    m_adminAccountsHasBeenSet = true;
    m_adminAccounts.emplace_back(std::forward<AdminAccountsT>(value));
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
  ListAdminAccountsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AdminAccountSummary> m_adminAccounts;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_adminAccountsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
