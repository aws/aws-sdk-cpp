/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Provider.h>
#include <aws/securityagent/model/ProviderType.h>

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
class GetIntegrationResult {
 public:
  AWS_SECURITYAGENT_API GetIntegrationResult() = default;
  AWS_SECURITYAGENT_API GetIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API GetIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier of the integration</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  GetIntegrationResult& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Installation identifier from the provider</p>
   */
  inline const Aws::String& GetInstallationId() const { return m_installationId; }
  template <typename InstallationIdT = Aws::String>
  void SetInstallationId(InstallationIdT&& value) {
    m_installationIdHasBeenSet = true;
    m_installationId = std::forward<InstallationIdT>(value);
  }
  template <typename InstallationIdT = Aws::String>
  GetIntegrationResult& WithInstallationId(InstallationIdT&& value) {
    SetInstallationId(std::forward<InstallationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider type</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline GetIntegrationResult& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of provider integration</p>
   */
  inline ProviderType GetProviderType() const { return m_providerType; }
  inline void SetProviderType(ProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline GetIntegrationResult& WithProviderType(ProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display name for the integration</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetIntegrationResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>KMS key ID for encrypting integration details</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  GetIntegrationResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
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
  GetIntegrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_integrationId;

  Aws::String m_installationId;

  Provider m_provider{Provider::NOT_SET};

  ProviderType m_providerType{ProviderType::NOT_SET};

  Aws::String m_displayName;

  Aws::String m_kmsKeyId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_integrationIdHasBeenSet = false;
  bool m_installationIdHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
