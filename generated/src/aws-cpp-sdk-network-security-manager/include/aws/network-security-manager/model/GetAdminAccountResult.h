/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AdminAccountDetails.h>

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
class GetAdminAccountResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API GetAdminAccountResult() = default;
  AWS_NETWORKSECURITYMANAGER_API GetAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API GetAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the administrator account.</p>
   */
  inline const AdminAccountDetails& GetAdminAccountDetails() const { return m_adminAccountDetails; }
  template <typename AdminAccountDetailsT = AdminAccountDetails>
  void SetAdminAccountDetails(AdminAccountDetailsT&& value) {
    m_adminAccountDetailsHasBeenSet = true;
    m_adminAccountDetails = std::forward<AdminAccountDetailsT>(value);
  }
  template <typename AdminAccountDetailsT = AdminAccountDetails>
  GetAdminAccountResult& WithAdminAccountDetails(AdminAccountDetailsT&& value) {
    SetAdminAccountDetails(std::forward<AdminAccountDetailsT>(value));
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
  GetAdminAccountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AdminAccountDetails m_adminAccountDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_adminAccountDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
