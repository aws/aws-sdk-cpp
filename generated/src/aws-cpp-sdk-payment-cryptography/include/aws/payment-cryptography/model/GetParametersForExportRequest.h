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
  class GetParametersForExportRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersForExport"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline const KeyMaterialType& GetKeyMaterialType() const{ return m_keyMaterialType; }

    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline bool KeyMaterialTypeHasBeenSet() const { return m_keyMaterialTypeHasBeenSet; }

    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline void SetKeyMaterialType(const KeyMaterialType& value) { m_keyMaterialTypeHasBeenSet = true; m_keyMaterialType = value; }

    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline void SetKeyMaterialType(KeyMaterialType&& value) { m_keyMaterialTypeHasBeenSet = true; m_keyMaterialType = std::move(value); }

    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline GetParametersForExportRequest& WithKeyMaterialType(const KeyMaterialType& value) { SetKeyMaterialType(value); return *this;}

    /**
     * <p>The key block format type (for example, TR-34 or TR-31) to use during key
     * material export. Export token is only required for a TR-34 key export,
     * <code>TR34_KEY_BLOCK</code>. Export token is not required for TR-31 key
     * export.</p>
     */
    inline GetParametersForExportRequest& WithKeyMaterialType(KeyMaterialType&& value) { SetKeyMaterialType(std::move(value)); return *this;}


    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline const KeyAlgorithm& GetSigningKeyAlgorithm() const{ return m_signingKeyAlgorithm; }

    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline bool SigningKeyAlgorithmHasBeenSet() const { return m_signingKeyAlgorithmHasBeenSet; }

    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline void SetSigningKeyAlgorithm(const KeyAlgorithm& value) { m_signingKeyAlgorithmHasBeenSet = true; m_signingKeyAlgorithm = value; }

    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline void SetSigningKeyAlgorithm(KeyAlgorithm&& value) { m_signingKeyAlgorithmHasBeenSet = true; m_signingKeyAlgorithm = std::move(value); }

    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline GetParametersForExportRequest& WithSigningKeyAlgorithm(const KeyAlgorithm& value) { SetSigningKeyAlgorithm(value); return *this;}

    /**
     * <p>The signing key algorithm to generate a signing key certificate. This
     * certificate signs the wrapped key under export within the TR-34 key block.
     * <code>RSA_2048</code> is the only signing key algorithm allowed.</p>
     */
    inline GetParametersForExportRequest& WithSigningKeyAlgorithm(KeyAlgorithm&& value) { SetSigningKeyAlgorithm(std::move(value)); return *this;}

  private:

    KeyMaterialType m_keyMaterialType;
    bool m_keyMaterialTypeHasBeenSet = false;

    KeyAlgorithm m_signingKeyAlgorithm;
    bool m_signingKeyAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
