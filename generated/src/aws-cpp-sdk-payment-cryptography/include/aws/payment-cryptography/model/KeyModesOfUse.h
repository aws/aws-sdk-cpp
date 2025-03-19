/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>The list of cryptographic operations that you can perform using the key. The
   * modes of use are deﬁned in section A.5.3 of the TR-31 spec.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/KeyModesOfUse">AWS
   * API Reference</a></p>
   */
  class KeyModesOfUse
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to encrypt data.</p>
     */
    inline bool GetEncrypt() const { return m_encrypt; }
    inline bool EncryptHasBeenSet() const { return m_encryptHasBeenSet; }
    inline void SetEncrypt(bool value) { m_encryptHasBeenSet = true; m_encrypt = value; }
    inline KeyModesOfUse& WithEncrypt(bool value) { SetEncrypt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to decrypt data.</p>
     */
    inline bool GetDecrypt() const { return m_decrypt; }
    inline bool DecryptHasBeenSet() const { return m_decryptHasBeenSet; }
    inline void SetDecrypt(bool value) { m_decryptHasBeenSet = true; m_decrypt = value; }
    inline KeyModesOfUse& WithDecrypt(bool value) { SetDecrypt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to wrap other keys.</p>
     */
    inline bool GetWrap() const { return m_wrap; }
    inline bool WrapHasBeenSet() const { return m_wrapHasBeenSet; }
    inline void SetWrap(bool value) { m_wrapHasBeenSet = true; m_wrap = value; }
    inline KeyModesOfUse& WithWrap(bool value) { SetWrap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to unwrap other keys.</p>
     */
    inline bool GetUnwrap() const { return m_unwrap; }
    inline bool UnwrapHasBeenSet() const { return m_unwrapHasBeenSet; }
    inline void SetUnwrap(bool value) { m_unwrapHasBeenSet = true; m_unwrap = value; }
    inline KeyModesOfUse& WithUnwrap(bool value) { SetUnwrap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to generate and verify other card and PIN verification keys.</p>
     */
    inline bool GetGenerate() const { return m_generate; }
    inline bool GenerateHasBeenSet() const { return m_generateHasBeenSet; }
    inline void SetGenerate(bool value) { m_generateHasBeenSet = true; m_generate = value; }
    inline KeyModesOfUse& WithGenerate(bool value) { SetGenerate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * for signing.</p>
     */
    inline bool GetSign() const { return m_sign; }
    inline bool SignHasBeenSet() const { return m_signHasBeenSet; }
    inline void SetSign(bool value) { m_signHasBeenSet = true; m_sign = value; }
    inline KeyModesOfUse& WithSign(bool value) { SetSign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to verify signatures.</p>
     */
    inline bool GetVerify() const { return m_verify; }
    inline bool VerifyHasBeenSet() const { return m_verifyHasBeenSet; }
    inline void SetVerify(bool value) { m_verifyHasBeenSet = true; m_verify = value; }
    inline KeyModesOfUse& WithVerify(bool value) { SetVerify(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to derive new keys.</p>
     */
    inline bool GetDeriveKey() const { return m_deriveKey; }
    inline bool DeriveKeyHasBeenSet() const { return m_deriveKeyHasBeenSet; }
    inline void SetDeriveKey(bool value) { m_deriveKeyHasBeenSet = true; m_deriveKey = value; }
    inline KeyModesOfUse& WithDeriveKey(bool value) { SetDeriveKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key has no
     * special restrictions other than the restrictions implied by
     * <code>KeyUsage</code>.</p>
     */
    inline bool GetNoRestrictions() const { return m_noRestrictions; }
    inline bool NoRestrictionsHasBeenSet() const { return m_noRestrictionsHasBeenSet; }
    inline void SetNoRestrictions(bool value) { m_noRestrictionsHasBeenSet = true; m_noRestrictions = value; }
    inline KeyModesOfUse& WithNoRestrictions(bool value) { SetNoRestrictions(value); return *this;}
    ///@}
  private:

    bool m_encrypt{false};
    bool m_encryptHasBeenSet = false;

    bool m_decrypt{false};
    bool m_decryptHasBeenSet = false;

    bool m_wrap{false};
    bool m_wrapHasBeenSet = false;

    bool m_unwrap{false};
    bool m_unwrapHasBeenSet = false;

    bool m_generate{false};
    bool m_generateHasBeenSet = false;

    bool m_sign{false};
    bool m_signHasBeenSet = false;

    bool m_verify{false};
    bool m_verifyHasBeenSet = false;

    bool m_deriveKey{false};
    bool m_deriveKeyHasBeenSet = false;

    bool m_noRestrictions{false};
    bool m_noRestrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
