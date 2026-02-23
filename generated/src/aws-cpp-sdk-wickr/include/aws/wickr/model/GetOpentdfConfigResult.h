/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class GetOpentdfConfigResult {
 public:
  AWS_WICKR_API GetOpentdfConfigResult() = default;
  AWS_WICKR_API GetOpentdfConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetOpentdfConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The OIDC client ID used for authenticating with the OpenTDF provider.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetOpentdfConfigResult& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain of the OpenTDF server.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  GetOpentdfConfigResult& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OIDC client secret used for authenticating with the OpenTDF provider.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  GetOpentdfConfigResult& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider of the OpenTDF platform.</p>
   */
  inline const Aws::String& GetProvider() const { return m_provider; }
  template <typename ProviderT = Aws::String>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::String>
  GetOpentdfConfigResult& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
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
  GetOpentdfConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_domain;

  Aws::String m_clientSecret;

  Aws::String m_provider;

  Aws::String m_requestId;
  bool m_clientIdHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_providerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
