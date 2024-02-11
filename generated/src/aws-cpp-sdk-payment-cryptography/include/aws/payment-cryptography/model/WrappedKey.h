/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyCheckValueAlgorithm.h>
#include <aws/payment-cryptography/model/WrappedKeyMaterialFormat.h>
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
   * <p>Parameter information for generating a WrappedKeyBlock for key
   * exchange.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/WrappedKey">AWS
   * API Reference</a></p>
   */
  class WrappedKey
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API WrappedKey();
    AWS_PAYMENTCRYPTOGRAPHY_API WrappedKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API WrappedKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline const Aws::String& GetKeyCheckValue() const{ return m_keyCheckValue; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline bool KeyCheckValueHasBeenSet() const { return m_keyCheckValueHasBeenSet; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(const Aws::String& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = value; }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(Aws::String&& value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue = std::move(value); }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline void SetKeyCheckValue(const char* value) { m_keyCheckValueHasBeenSet = true; m_keyCheckValue.assign(value); }

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline WrappedKey& WithKeyCheckValue(const Aws::String& value) { SetKeyCheckValue(value); return *this;}

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline WrappedKey& WithKeyCheckValue(Aws::String&& value) { SetKeyCheckValue(std::move(value)); return *this;}

    /**
     * <p>The key check value (KCV) is used to check if all parties holding a given key
     * have the same key or to detect that a key has changed.</p>
     */
    inline WrappedKey& WithKeyCheckValue(const char* value) { SetKeyCheckValue(value); return *this;}


    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline const KeyCheckValueAlgorithm& GetKeyCheckValueAlgorithm() const{ return m_keyCheckValueAlgorithm; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline bool KeyCheckValueAlgorithmHasBeenSet() const { return m_keyCheckValueAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = value; }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline void SetKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { m_keyCheckValueAlgorithmHasBeenSet = true; m_keyCheckValueAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline WrappedKey& WithKeyCheckValueAlgorithm(const KeyCheckValueAlgorithm& value) { SetKeyCheckValueAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that Amazon Web Services Payment Cryptography uses to calculate
     * the key check value (KCV). It is used to validate the key integrity.</p> <p>For
     * TDES keys, the KCV is computed by encrypting 8 bytes, each with value of zero,
     * with the key to be checked and retaining the 3 highest order bytes of the
     * encrypted result. For AES keys, the KCV is computed using a CMAC algorithm where
     * the input data is 16 bytes of zero and retaining the 3 highest order bytes of
     * the encrypted result.</p>
     */
    inline WrappedKey& WithKeyCheckValueAlgorithm(KeyCheckValueAlgorithm&& value) { SetKeyCheckValueAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline const Aws::String& GetKeyMaterial() const{ return m_keyMaterial; }

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline bool KeyMaterialHasBeenSet() const { return m_keyMaterialHasBeenSet; }

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline void SetKeyMaterial(const Aws::String& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = value; }

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline void SetKeyMaterial(Aws::String&& value) { m_keyMaterialHasBeenSet = true; m_keyMaterial = std::move(value); }

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline void SetKeyMaterial(const char* value) { m_keyMaterialHasBeenSet = true; m_keyMaterial.assign(value); }

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline WrappedKey& WithKeyMaterial(const Aws::String& value) { SetKeyMaterial(value); return *this;}

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline WrappedKey& WithKeyMaterial(Aws::String&& value) { SetKeyMaterial(std::move(value)); return *this;}

    /**
     * <p>Parameter information for generating a wrapped key using TR-31 or TR-34 skey
     * exchange method.</p>
     */
    inline WrappedKey& WithKeyMaterial(const char* value) { SetKeyMaterial(value); return *this;}


    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline const WrappedKeyMaterialFormat& GetWrappedKeyMaterialFormat() const{ return m_wrappedKeyMaterialFormat; }

    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline bool WrappedKeyMaterialFormatHasBeenSet() const { return m_wrappedKeyMaterialFormatHasBeenSet; }

    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline void SetWrappedKeyMaterialFormat(const WrappedKeyMaterialFormat& value) { m_wrappedKeyMaterialFormatHasBeenSet = true; m_wrappedKeyMaterialFormat = value; }

    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline void SetWrappedKeyMaterialFormat(WrappedKeyMaterialFormat&& value) { m_wrappedKeyMaterialFormatHasBeenSet = true; m_wrappedKeyMaterialFormat = std::move(value); }

    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline WrappedKey& WithWrappedKeyMaterialFormat(const WrappedKeyMaterialFormat& value) { SetWrappedKeyMaterialFormat(value); return *this;}

    /**
     * <p>The key block format of a wrapped key.</p>
     */
    inline WrappedKey& WithWrappedKeyMaterialFormat(WrappedKeyMaterialFormat&& value) { SetWrappedKeyMaterialFormat(std::move(value)); return *this;}


    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline const Aws::String& GetWrappingKeyArn() const{ return m_wrappingKeyArn; }

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline bool WrappingKeyArnHasBeenSet() const { return m_wrappingKeyArnHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline void SetWrappingKeyArn(const Aws::String& value) { m_wrappingKeyArnHasBeenSet = true; m_wrappingKeyArn = value; }

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline void SetWrappingKeyArn(Aws::String&& value) { m_wrappingKeyArnHasBeenSet = true; m_wrappingKeyArn = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline void SetWrappingKeyArn(const char* value) { m_wrappingKeyArnHasBeenSet = true; m_wrappingKeyArn.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline WrappedKey& WithWrappingKeyArn(const Aws::String& value) { SetWrappingKeyArn(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline WrappedKey& WithWrappingKeyArn(Aws::String&& value) { SetWrappingKeyArn(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the wrapped key.</p>
     */
    inline WrappedKey& WithWrappingKeyArn(const char* value) { SetWrappingKeyArn(value); return *this;}

  private:

    Aws::String m_keyCheckValue;
    bool m_keyCheckValueHasBeenSet = false;

    KeyCheckValueAlgorithm m_keyCheckValueAlgorithm;
    bool m_keyCheckValueAlgorithmHasBeenSet = false;

    Aws::String m_keyMaterial;
    bool m_keyMaterialHasBeenSet = false;

    WrappedKeyMaterialFormat m_wrappedKeyMaterialFormat;
    bool m_wrappedKeyMaterialFormatHasBeenSet = false;

    Aws::String m_wrappingKeyArn;
    bool m_wrappingKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
