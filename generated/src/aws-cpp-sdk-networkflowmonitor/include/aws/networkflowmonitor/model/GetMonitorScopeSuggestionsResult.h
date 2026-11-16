/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/AccountToAdd.h>
#include <aws/networkflowmonitor/model/ScopeCoverageStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {
class GetMonitorScopeSuggestionsResult {
 public:
  AWS_NETWORKFLOWMONITOR_API GetMonitorScopeSuggestionsResult() = default;
  AWS_NETWORKFLOWMONITOR_API GetMonitorScopeSuggestionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFLOWMONITOR_API GetMonitorScopeSuggestionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The coverage status of the monitoring scope for the monitor. The status can
   * be one of the following</p> <ul> <li> <p> <code>COMPLETE</code>: The scope
   * includes every account that sends traffic to, or receives traffic from,
   * resources in the monitor.</p> </li> <li> <p> <code>INCOMPLETE</code>: There are
   * accounts that you can add to the scope.</p> </li> <li> <p> <code>PENDING</code>:
   * Network Flow Monitor is determining the coverage of the scope.</p> </li> <li>
   * <p> <code>STALE</code>: The coverage of the scope was last determined too long
   * ago to be current.</p> </li> </ul>
   */
  inline ScopeCoverageStatus GetStatus() const { return m_status; }
  inline void SetStatus(ScopeCoverageStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetMonitorScopeSuggestionsResult& WithStatus(ScopeCoverageStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts that you can add to the monitoring scope, so that Network Flow
   * Monitor can resolve the network paths for traffic to and from resources in those
   * accounts.</p>
   */
  inline const Aws::Vector<AccountToAdd>& GetAccountsToAdd() const { return m_accountsToAdd; }
  template <typename AccountsToAddT = Aws::Vector<AccountToAdd>>
  void SetAccountsToAdd(AccountsToAddT&& value) {
    m_accountsToAddHasBeenSet = true;
    m_accountsToAdd = std::forward<AccountsToAddT>(value);
  }
  template <typename AccountsToAddT = Aws::Vector<AccountToAdd>>
  GetMonitorScopeSuggestionsResult& WithAccountsToAdd(AccountsToAddT&& value) {
    SetAccountsToAdd(std::forward<AccountsToAddT>(value));
    return *this;
  }
  template <typename AccountsToAddT = AccountToAdd>
  GetMonitorScopeSuggestionsResult& AddAccountsToAdd(AccountsToAddT&& value) {
    m_accountsToAddHasBeenSet = true;
    m_accountsToAdd.emplace_back(std::forward<AccountsToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. You receive this token from a previous
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetMonitorScopeSuggestionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when Network Flow Monitor last determined the coverage of
   * the monitoring scope.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetMonitorScopeSuggestionsResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  GetMonitorScopeSuggestionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ScopeCoverageStatus m_status{ScopeCoverageStatus::NOT_SET};

  Aws::Vector<AccountToAdd> m_accountsToAdd;

  Aws::String m_nextToken;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_accountsToAddHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
