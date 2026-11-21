/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlApplicationStatus.h>
#include <aws/quicksight/model/QuickAuthenticationConfigCreateOutput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class CreateAccessControlApplicationResult {
 public:
  AWS_QUICKSIGHT_API CreateAccessControlApplicationResult() = default;
  AWS_QUICKSIGHT_API CreateAccessControlApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API CreateAccessControlApplicationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateAccessControlApplicationResult& WithStatus(int value) {
    SetStatus(value);
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
  CreateAccessControlApplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access control application.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  CreateAccessControlApplicationResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the access control application.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateAccessControlApplicationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the access control application. A new application is always
   * <code>ENABLED</code>.</p>
   */
  inline AccessControlApplicationStatus GetAccessControlApplicationStatus() const { return m_accessControlApplicationStatus; }
  inline void SetAccessControlApplicationStatus(AccessControlApplicationStatus value) {
    m_accessControlApplicationStatusHasBeenSet = true;
    m_accessControlApplicationStatus = value;
  }
  inline CreateAccessControlApplicationResult& WithAccessControlApplicationStatus(AccessControlApplicationStatus value) {
    SetAccessControlApplicationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the access control application was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  CreateAccessControlApplicationResult& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tenant URL of the access control application.</p>
   */
  inline const Aws::String& GetTenantUrl() const { return m_tenantUrl; }
  template <typename TenantUrlT = Aws::String>
  void SetTenantUrl(TenantUrlT&& value) {
    m_tenantUrlHasBeenSet = true;
    m_tenantUrl = std::forward<TenantUrlT>(value);
  }
  template <typename TenantUrlT = Aws::String>
  CreateAccessControlApplicationResult& WithTenantUrl(TenantUrlT&& value) {
    SetTenantUrl(std::forward<TenantUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services IAM Identity Center application that Quick
   * Sight manages for this access control application. This value is present when
   * the <code>IdpAuthorizingType</code> is <code>IDC_AUTH_CODE</code>, or when a
   * trusted token issuer is configured.</p>
   */
  inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
  template <typename IdcApplicationArnT = Aws::String>
  void SetIdcApplicationArn(IdcApplicationArnT&& value) {
    m_idcApplicationArnHasBeenSet = true;
    m_idcApplicationArn = std::forward<IdcApplicationArnT>(value);
  }
  template <typename IdcApplicationArnT = Aws::String>
  CreateAccessControlApplicationResult& WithIdcApplicationArn(IdcApplicationArnT&& value) {
    SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The generated Quick Sight authentication configuration. It contains the
   * generated client ID.</p>
   */
  inline const QuickAuthenticationConfigCreateOutput& GetQuickAuthenticationConfiguration() const {
    return m_quickAuthenticationConfiguration;
  }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigCreateOutput>
  void SetQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    m_quickAuthenticationConfigurationHasBeenSet = true;
    m_quickAuthenticationConfiguration = std::forward<QuickAuthenticationConfigurationT>(value);
  }
  template <typename QuickAuthenticationConfigurationT = QuickAuthenticationConfigCreateOutput>
  CreateAccessControlApplicationResult& WithQuickAuthenticationConfiguration(QuickAuthenticationConfigurationT&& value) {
    SetQuickAuthenticationConfiguration(std::forward<QuickAuthenticationConfigurationT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::String m_applicationId;

  Aws::String m_arn;

  AccessControlApplicationStatus m_accessControlApplicationStatus{AccessControlApplicationStatus::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_tenantUrl;

  Aws::String m_idcApplicationArn;

  QuickAuthenticationConfigCreateOutput m_quickAuthenticationConfiguration;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_accessControlApplicationStatusHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_tenantUrlHasBeenSet = false;
  bool m_idcApplicationArnHasBeenSet = false;
  bool m_quickAuthenticationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
