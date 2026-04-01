/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/IdCConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class GetApplicationResult {
 public:
  AWS_SECURITYAGENT_API GetApplicationResult() = default;
  AWS_SECURITYAGENT_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Application ID</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetApplicationResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Domain where the application is available</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  GetApplicationResult& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the application, automatically assigned by the service</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  GetApplicationResult& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM Identity Center configuration for the application</p>
   */
  inline const IdCConfiguration& GetIdcConfiguration() const { return m_idcConfiguration; }
  template <typename IdcConfigurationT = IdCConfiguration>
  void SetIdcConfiguration(IdcConfigurationT&& value) {
    m_idcConfigurationHasBeenSet = true;
    m_idcConfiguration = std::forward<IdcConfigurationT>(value);
  }
  template <typename IdcConfigurationT = IdCConfiguration>
  GetApplicationResult& WithIdcConfiguration(IdcConfigurationT&& value) {
    SetIdcConfiguration(std::forward<IdcConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the IAM role that the application uses to access AWS resources on your
   * behalf</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetApplicationResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Default KMS key identifier used to encrypt application data</p>
   */
  inline const Aws::String& GetDefaultKmsKeyId() const { return m_defaultKmsKeyId; }
  template <typename DefaultKmsKeyIdT = Aws::String>
  void SetDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    m_defaultKmsKeyIdHasBeenSet = true;
    m_defaultKmsKeyId = std::forward<DefaultKmsKeyIdT>(value);
  }
  template <typename DefaultKmsKeyIdT = Aws::String>
  GetApplicationResult& WithDefaultKmsKeyId(DefaultKmsKeyIdT&& value) {
    SetDefaultKmsKeyId(std::forward<DefaultKmsKeyIdT>(value));
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
  GetApplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationId;

  Aws::String m_domain;

  Aws::String m_applicationName;

  IdCConfiguration m_idcConfiguration;

  Aws::String m_roleArn;

  Aws::String m_defaultKmsKeyId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationIdHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_applicationNameHasBeenSet = false;
  bool m_idcConfigurationHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_defaultKmsKeyIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
