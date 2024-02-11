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
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse();
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeyModesOfUse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to decrypt data.</p>
     */
    inline bool GetDecrypt() const{ return m_decrypt; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to decrypt data.</p>
     */
    inline bool DecryptHasBeenSet() const { return m_decryptHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to decrypt data.</p>
     */
    inline void SetDecrypt(bool value) { m_decryptHasBeenSet = true; m_decrypt = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to decrypt data.</p>
     */
    inline KeyModesOfUse& WithDecrypt(bool value) { SetDecrypt(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to derive new keys.</p>
     */
    inline bool GetDeriveKey() const{ return m_deriveKey; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to derive new keys.</p>
     */
    inline bool DeriveKeyHasBeenSet() const { return m_deriveKeyHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to derive new keys.</p>
     */
    inline void SetDeriveKey(bool value) { m_deriveKeyHasBeenSet = true; m_deriveKey = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to derive new keys.</p>
     */
    inline KeyModesOfUse& WithDeriveKey(bool value) { SetDeriveKey(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to encrypt data.</p>
     */
    inline bool GetEncrypt() const{ return m_encrypt; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to encrypt data.</p>
     */
    inline bool EncryptHasBeenSet() const { return m_encryptHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to encrypt data.</p>
     */
    inline void SetEncrypt(bool value) { m_encryptHasBeenSet = true; m_encrypt = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to encrypt data.</p>
     */
    inline KeyModesOfUse& WithEncrypt(bool value) { SetEncrypt(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to generate and verify other card and PIN verification keys.</p>
     */
    inline bool GetGenerate() const{ return m_generate; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to generate and verify other card and PIN verification keys.</p>
     */
    inline bool GenerateHasBeenSet() const { return m_generateHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to generate and verify other card and PIN verification keys.</p>
     */
    inline void SetGenerate(bool value) { m_generateHasBeenSet = true; m_generate = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to generate and verify other card and PIN verification keys.</p>
     */
    inline KeyModesOfUse& WithGenerate(bool value) { SetGenerate(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key has no
     * special restrictions other than the restrictions implied by
     * <code>KeyUsage</code>.</p>
     */
    inline bool GetNoRestrictions() const{ return m_noRestrictions; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key has no
     * special restrictions other than the restrictions implied by
     * <code>KeyUsage</code>.</p>
     */
    inline bool NoRestrictionsHasBeenSet() const { return m_noRestrictionsHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key has no
     * special restrictions other than the restrictions implied by
     * <code>KeyUsage</code>.</p>
     */
    inline void SetNoRestrictions(bool value) { m_noRestrictionsHasBeenSet = true; m_noRestrictions = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key has no
     * special restrictions other than the restrictions implied by
     * <code>KeyUsage</code>.</p>
     */
    inline KeyModesOfUse& WithNoRestrictions(bool value) { SetNoRestrictions(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * for signing.</p>
     */
    inline bool GetSign() const{ return m_sign; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * for signing.</p>
     */
    inline bool SignHasBeenSet() const { return m_signHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * for signing.</p>
     */
    inline void SetSign(bool value) { m_signHasBeenSet = true; m_sign = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * for signing.</p>
     */
    inline KeyModesOfUse& WithSign(bool value) { SetSign(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to unwrap other keys.</p>
     */
    inline bool GetUnwrap() const{ return m_unwrap; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to unwrap other keys.</p>
     */
    inline bool UnwrapHasBeenSet() const { return m_unwrapHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to unwrap other keys.</p>
     */
    inline void SetUnwrap(bool value) { m_unwrapHasBeenSet = true; m_unwrap = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to unwrap other keys.</p>
     */
    inline KeyModesOfUse& WithUnwrap(bool value) { SetUnwrap(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to verify signatures.</p>
     */
    inline bool GetVerify() const{ return m_verify; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to verify signatures.</p>
     */
    inline bool VerifyHasBeenSet() const { return m_verifyHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to verify signatures.</p>
     */
    inline void SetVerify(bool value) { m_verifyHasBeenSet = true; m_verify = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to verify signatures.</p>
     */
    inline KeyModesOfUse& WithVerify(bool value) { SetVerify(value); return *this;}


    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to wrap other keys.</p>
     */
    inline bool GetWrap() const{ return m_wrap; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to wrap other keys.</p>
     */
    inline bool WrapHasBeenSet() const { return m_wrapHasBeenSet; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to wrap other keys.</p>
     */
    inline void SetWrap(bool value) { m_wrapHasBeenSet = true; m_wrap = value; }

    /**
     * <p>Speciﬁes whether an Amazon Web Services Payment Cryptography key can be used
     * to wrap other keys.</p>
     */
    inline KeyModesOfUse& WithWrap(bool value) { SetWrap(value); return *this;}

  private:

    bool m_decrypt;
    bool m_decryptHasBeenSet = false;

    bool m_deriveKey;
    bool m_deriveKeyHasBeenSet = false;

    bool m_encrypt;
    bool m_encryptHasBeenSet = false;

    bool m_generate;
    bool m_generateHasBeenSet = false;

    bool m_noRestrictions;
    bool m_noRestrictionsHasBeenSet = false;

    bool m_sign;
    bool m_signHasBeenSet = false;

    bool m_unwrap;
    bool m_unwrapHasBeenSet = false;

    bool m_verify;
    bool m_verifyHasBeenSet = false;

    bool m_wrap;
    bool m_wrapHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
