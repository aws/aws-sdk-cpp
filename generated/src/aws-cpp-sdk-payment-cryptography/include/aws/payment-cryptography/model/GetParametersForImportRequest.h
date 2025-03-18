/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/model/KeyMaterialType.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class GetParametersForImportRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersForImport"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The method to use for key material import. Import token is only required for
     * TR-34 WrappedKeyBlock (<code>TR34_KEY_BLOCK</code>) and RSA WrappedKeyCryptogram
     * (<code>KEY_CRYPTOGRAM</code>).</p> <p>Import token is not required for TR-31,
     * root public key cerificate or trusted public key certificate.</p>
     */
    inline KeyMaterialType GetKeyMaterialType() const { return m_keyMaterialType; }
    inline bool KeyMaterialTypeHasBeenSet() const { return m_keyMaterialTypeHasBeenSet; }
    inline void SetKeyMaterialType(KeyMaterialType value) { m_keyMaterialTypeHasBeenSet = true; m_keyMaterialType = value; }
    inline GetParametersForImportRequest& WithKeyMaterialType(KeyMaterialType value) { SetKeyMaterialType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import.</p> <p>At this time,
     * <code>RSA_2048</code> is the allowed algorithm for TR-34 WrappedKeyBlock import.
     * Additionally, <code>RSA_2048</code>, <code>RSA_3072</code>,
     * <code>RSA_4096</code> are the allowed algorithms for RSA WrappedKeyCryptogram
     * import.</p>
     */
    inline KeyAlgorithm GetWrappingKeyAlgorithm() const { return m_wrappingKeyAlgorithm; }
    inline bool WrappingKeyAlgorithmHasBeenSet() const { return m_wrappingKeyAlgorithmHasBeenSet; }
    inline void SetWrappingKeyAlgorithm(KeyAlgorithm value) { m_wrappingKeyAlgorithmHasBeenSet = true; m_wrappingKeyAlgorithm = value; }
    inline GetParametersForImportRequest& WithWrappingKeyAlgorithm(KeyAlgorithm value) { SetWrappingKeyAlgorithm(value); return *this;}
    ///@}
  private:

    KeyMaterialType m_keyMaterialType{KeyMaterialType::NOT_SET};
    bool m_keyMaterialTypeHasBeenSet = false;

    KeyAlgorithm m_wrappingKeyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_wrappingKeyAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
