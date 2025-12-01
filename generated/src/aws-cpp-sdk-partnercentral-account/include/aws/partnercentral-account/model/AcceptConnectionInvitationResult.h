/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/Connection.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class AcceptConnectionInvitationResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API AcceptConnectionInvitationResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API AcceptConnectionInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API AcceptConnectionInvitationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the accepted connection between the two partners.</p>
   */
  inline const Connection& GetConnection() const { return m_connection; }
  template <typename ConnectionT = Connection>
  void SetConnection(ConnectionT&& value) {
    m_connectionHasBeenSet = true;
    m_connection = std::forward<ConnectionT>(value);
  }
  template <typename ConnectionT = Connection>
  AcceptConnectionInvitationResult& WithConnection(ConnectionT&& value) {
    SetConnection(std::forward<ConnectionT>(value));
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
  AcceptConnectionInvitationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Connection m_connection;
  bool m_connectionHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
