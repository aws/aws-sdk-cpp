/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class RegisterOidcConfigTestRequest : public WickrRequest {
 public:
  AWS_WICKR_API RegisterOidcConfigTestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterOidcConfigTest"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network for which the OIDC configuration will be
   * tested.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  RegisterOidcConfigTestRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional authentication parameters to include in the test (optional).</p>
   */
  inline const Aws::String& GetExtraAuthParams() const { return m_extraAuthParams; }
  inline bool ExtraAuthParamsHasBeenSet() const { return m_extraAuthParamsHasBeenSet; }
  template <typename ExtraAuthParamsT = Aws::String>
  void SetExtraAuthParams(ExtraAuthParamsT&& value) {
    m_extraAuthParamsHasBeenSet = true;
    m_extraAuthParams = std::forward<ExtraAuthParamsT>(value);
  }
  template <typename ExtraAuthParamsT = Aws::String>
  RegisterOidcConfigTestRequest& WithExtraAuthParams(ExtraAuthParamsT&& value) {
    SetExtraAuthParams(std::forward<ExtraAuthParamsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL of the OIDC provider to test.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  RegisterOidcConfigTestRequest& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth scopes to test with the OIDC provider.</p>
   */
  inline const Aws::String& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::String>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::String>
  RegisterOidcConfigTestRequest& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CA certificate for secure communication with the OIDC provider
   * (optional).</p>
   */
  inline const Aws::String& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = Aws::String>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = Aws::String>
  RegisterOidcConfigTestRequest& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_extraAuthParams;

  Aws::String m_issuer;

  Aws::String m_scopes;

  Aws::String m_certificate;
  bool m_networkIdHasBeenSet = false;
  bool m_extraAuthParamsHasBeenSet = false;
  bool m_issuerHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_certificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
