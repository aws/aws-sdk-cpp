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
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersForImport"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline const KeyMaterialType& GetKeyMaterialType() const{ return m_keyMaterialType; }

    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline bool KeyMaterialTypeHasBeenSet() const { return m_keyMaterialTypeHasBeenSet; }

    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline void SetKeyMaterialType(const KeyMaterialType& value) { m_keyMaterialTypeHasBeenSet = true; m_keyMaterialType = value; }

    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline void SetKeyMaterialType(KeyMaterialType&& value) { m_keyMaterialTypeHasBeenSet = true; m_keyMaterialType = std::move(value); }

    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline GetParametersForImportRequest& WithKeyMaterialType(const KeyMaterialType& value) { SetKeyMaterialType(value); return *this;}

    /**
     * <p>The key block format type such as TR-34 or TR-31 to use during key material
     * import. Import token is only required for TR-34 key import
     * <code>TR34_KEY_BLOCK</code>. Import token is not required for TR-31 key
     * import.</p>
     */
    inline GetParametersForImportRequest& WithKeyMaterialType(KeyMaterialType&& value) { SetKeyMaterialType(std::move(value)); return *this;}


    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline const KeyAlgorithm& GetWrappingKeyAlgorithm() const{ return m_wrappingKeyAlgorithm; }

    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline bool WrappingKeyAlgorithmHasBeenSet() const { return m_wrappingKeyAlgorithmHasBeenSet; }

    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline void SetWrappingKeyAlgorithm(const KeyAlgorithm& value) { m_wrappingKeyAlgorithmHasBeenSet = true; m_wrappingKeyAlgorithm = value; }

    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline void SetWrappingKeyAlgorithm(KeyAlgorithm&& value) { m_wrappingKeyAlgorithmHasBeenSet = true; m_wrappingKeyAlgorithm = std::move(value); }

    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline GetParametersForImportRequest& WithWrappingKeyAlgorithm(const KeyAlgorithm& value) { SetWrappingKeyAlgorithm(value); return *this;}

    /**
     * <p>The wrapping key algorithm to generate a wrapping key certificate. This
     * certificate wraps the key under import within the TR-34 key block cryptogram.
     * <code>RSA_2048</code> is the only wrapping key algorithm allowed.</p>
     */
    inline GetParametersForImportRequest& WithWrappingKeyAlgorithm(KeyAlgorithm&& value) { SetWrappingKeyAlgorithm(std::move(value)); return *this;}

  private:

    KeyMaterialType m_keyMaterialType;
    bool m_keyMaterialTypeHasBeenSet = false;

    KeyAlgorithm m_wrappingKeyAlgorithm;
    bool m_wrappingKeyAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
