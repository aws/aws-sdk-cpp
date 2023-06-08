/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyClass.h>
#include <aws/payment-cryptography/model/KeyModesOfUse.h>
#include <aws/payment-cryptography/model/KeyUsage.h>
#include <utility>

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
   * <p>The role of the key, the algorithm it supports, and the cryptographic
   * operations allowed with the key. This data is immutable after the key is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/KeyAttributes">AWS
   * API Reference</a></p>
   */
  class KeyAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes();
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }

    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }

    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline KeyAttributes& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline KeyAttributes& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline const KeyClass& GetKeyClass() const{ return m_keyClass; }

    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline bool KeyClassHasBeenSet() const { return m_keyClassHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline void SetKeyClass(const KeyClass& value) { m_keyClassHasBeenSet = true; m_keyClass = value; }

    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline void SetKeyClass(KeyClass&& value) { m_keyClassHasBeenSet = true; m_keyClass = std::move(value); }

    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline KeyAttributes& WithKeyClass(const KeyClass& value) { SetKeyClass(value); return *this;}

    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline KeyAttributes& WithKeyClass(KeyClass&& value) { SetKeyClass(std::move(value)); return *this;}


    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline const KeyModesOfUse& GetKeyModesOfUse() const{ return m_keyModesOfUse; }

    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline bool KeyModesOfUseHasBeenSet() const { return m_keyModesOfUseHasBeenSet; }

    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline void SetKeyModesOfUse(const KeyModesOfUse& value) { m_keyModesOfUseHasBeenSet = true; m_keyModesOfUse = value; }

    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline void SetKeyModesOfUse(KeyModesOfUse&& value) { m_keyModesOfUseHasBeenSet = true; m_keyModesOfUse = std::move(value); }

    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline KeyAttributes& WithKeyModesOfUse(const KeyModesOfUse& value) { SetKeyModesOfUse(value); return *this;}

    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline KeyAttributes& WithKeyModesOfUse(KeyModesOfUse&& value) { SetKeyModesOfUse(std::move(value)); return *this;}


    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline const KeyUsage& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline void SetKeyUsage(const KeyUsage& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline void SetKeyUsage(KeyUsage&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline KeyAttributes& WithKeyUsage(const KeyUsage& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline KeyAttributes& WithKeyUsage(KeyUsage&& value) { SetKeyUsage(std::move(value)); return *this;}

  private:

    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    KeyClass m_keyClass;
    bool m_keyClassHasBeenSet = false;

    KeyModesOfUse m_keyModesOfUse;
    bool m_keyModesOfUseHasBeenSet = false;

    KeyUsage m_keyUsage;
    bool m_keyUsageHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
