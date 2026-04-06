/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyMaterialType.h>

#include <utility>

namespace Aws {
namespace PaymentCryptography {
namespace Model {

/**
 */
class GetParametersForExportRequest : public PaymentCryptographyRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetParametersForExport"; }

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The key block format type (for example, TR-34 or TR-31) to use during key
   * material export. Export token is only required for a TR-34 key export,
   * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
   * export.</p>
   */
  inline KeyMaterialType GetKeyMaterialType() const { return m_keyMaterialType; }
  inline bool KeyMaterialTypeHasBeenSet() const { return m_keyMaterialTypeHasBeenSet; }
  inline void SetKeyMaterialType(KeyMaterialType value) {
    m_keyMaterialTypeHasBeenSet = true;
    m_keyMaterialType = value;
  }
  inline GetParametersForExportRequest& WithKeyMaterialType(KeyMaterialType value) {
    SetKeyMaterialType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing key algorithm to generate a signing key certificate. This
   * certificate signs the wrapped key under export within the TR-34 key block.
   * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
   */
  inline KeyAlgorithm GetSigningKeyAlgorithm() const { return m_signingKeyAlgorithm; }
  inline bool SigningKeyAlgorithmHasBeenSet() const { return m_signingKeyAlgorithmHasBeenSet; }
  inline void SetSigningKeyAlgorithm(KeyAlgorithm value) {
    m_signingKeyAlgorithmHasBeenSet = true;
    m_signingKeyAlgorithm = value;
  }
  inline GetParametersForExportRequest& WithSigningKeyAlgorithm(KeyAlgorithm value) {
    SetSigningKeyAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to reuse the existing export token and signing key
   * certificate. If set to <code>true</code> and a valid export token exists for the
   * same key material type and signing key algorithm with at least 7 days of
   * remaining validity, the existing token and signing key certificate are returned.
   * Otherwise, a new export token and signing key certificate are generated. The
   * default value is <code>false</code>, which generates a new export token and
   * signing key certificate on every call.</p>
   */
  inline bool GetReuseLastGeneratedToken() const { return m_reuseLastGeneratedToken; }
  inline bool ReuseLastGeneratedTokenHasBeenSet() const { return m_reuseLastGeneratedTokenHasBeenSet; }
  inline void SetReuseLastGeneratedToken(bool value) {
    m_reuseLastGeneratedTokenHasBeenSet = true;
    m_reuseLastGeneratedToken = value;
  }
  inline GetParametersForExportRequest& WithReuseLastGeneratedToken(bool value) {
    SetReuseLastGeneratedToken(value);
    return *this;
  }
  ///@}
 private:
  KeyMaterialType m_keyMaterialType{KeyMaterialType::NOT_SET};

  KeyAlgorithm m_signingKeyAlgorithm{KeyAlgorithm::NOT_SET};

  bool m_reuseLastGeneratedToken{false};
  bool m_keyMaterialTypeHasBeenSet = false;
  bool m_signingKeyAlgorithmHasBeenSet = false;
  bool m_reuseLastGeneratedTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
