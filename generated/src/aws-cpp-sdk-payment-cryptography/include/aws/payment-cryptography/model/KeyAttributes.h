/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyUsage.h>
#include <aws/payment-cryptography/model/KeyClass.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/payment-cryptography/model/KeyModesOfUse.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API KeyAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cryptographic usage of an Amazon Web Services Payment Cryptography key as
     * deﬁned in section A.5.2 of the TR-31 spec.</p>
     */
    inline KeyUsage GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    inline void SetKeyUsage(KeyUsage value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }
    inline KeyAttributes& WithKeyUsage(KeyUsage value) { SetKeyUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Web Services Payment Cryptography key to create, which
     * determines the classiﬁcation of the cryptographic method and whether Amazon Web
     * Services Payment Cryptography key contains a symmetric key or an asymmetric key
     * pair.</p>
     */
    inline KeyClass GetKeyClass() const { return m_keyClass; }
    inline bool KeyClassHasBeenSet() const { return m_keyClassHasBeenSet; }
    inline void SetKeyClass(KeyClass value) { m_keyClassHasBeenSet = true; m_keyClass = value; }
    inline KeyAttributes& WithKeyClass(KeyClass value) { SetKeyClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key algorithm to be use during creation of an Amazon Web Services Payment
     * Cryptography key.</p> <p>For symmetric keys, Amazon Web Services Payment
     * Cryptography supports <code>AES</code> and <code>TDES</code> algorithms. For
     * asymmetric keys, Amazon Web Services Payment Cryptography supports
     * <code>RSA</code> and <code>ECC_NIST</code> algorithms.</p>
     */
    inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(KeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline KeyAttributes& WithKeyAlgorithm(KeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of cryptographic operations that you can perform using the key.</p>
     */
    inline const KeyModesOfUse& GetKeyModesOfUse() const { return m_keyModesOfUse; }
    inline bool KeyModesOfUseHasBeenSet() const { return m_keyModesOfUseHasBeenSet; }
    template<typename KeyModesOfUseT = KeyModesOfUse>
    void SetKeyModesOfUse(KeyModesOfUseT&& value) { m_keyModesOfUseHasBeenSet = true; m_keyModesOfUse = std::forward<KeyModesOfUseT>(value); }
    template<typename KeyModesOfUseT = KeyModesOfUse>
    KeyAttributes& WithKeyModesOfUse(KeyModesOfUseT&& value) { SetKeyModesOfUse(std::forward<KeyModesOfUseT>(value)); return *this;}
    ///@}
  private:

    KeyUsage m_keyUsage{KeyUsage::NOT_SET};
    bool m_keyUsageHasBeenSet = false;

    KeyClass m_keyClass{KeyClass::NOT_SET};
    bool m_keyClassHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    KeyModesOfUse m_keyModesOfUse;
    bool m_keyModesOfUseHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
