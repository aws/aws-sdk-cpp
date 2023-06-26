﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EncryptionMode.h>
#include <aws/payment-cryptography-data/model/PaddingType.h>
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
namespace PaymentCryptographyData
{
namespace Model
{

  /**
   * <p>Parameters requried to encrypt plaintext data using symmetric
   * keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SymmetricEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class SymmetricEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline const Aws::String& GetInitializationVector() const{ return m_initializationVector; }

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline void SetInitializationVector(const Aws::String& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = value; }

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline void SetInitializationVector(Aws::String&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::move(value); }

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline void SetInitializationVector(const char* value) { m_initializationVectorHasBeenSet = true; m_initializationVector.assign(value); }

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline SymmetricEncryptionAttributes& WithInitializationVector(const Aws::String& value) { SetInitializationVector(value); return *this;}

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline SymmetricEncryptionAttributes& WithInitializationVector(Aws::String&& value) { SetInitializationVector(std::move(value)); return *this;}

    /**
     * <p>An input to cryptographic primitive used to provide the intial state. The
     * <code>InitializationVector</code> is typically required have a random or
     * psuedo-random value, but sometimes it only needs to be unpredictable or unique.
     * If a value is not provided, Amazon Web Services Payment Cryptography generates a
     * random value.</p>
     */
    inline SymmetricEncryptionAttributes& WithInitializationVector(const char* value) { SetInitializationVector(value); return *this;}


    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline const EncryptionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline void SetMode(const EncryptionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline void SetMode(EncryptionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline SymmetricEncryptionAttributes& WithMode(const EncryptionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The block cipher mode of operation. Block ciphers are designed to encrypt a
     * block of data of fixed size (for example, 128 bits). The size of the input block
     * is usually same as the size of the encrypted output block, while the key length
     * can be different. A mode of operation describes how to repeatedly apply a
     * cipher's single-block operation to securely transform amounts of data larger
     * than a block.</p>
     */
    inline SymmetricEncryptionAttributes& WithMode(EncryptionMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>The padding to be included with the data.</p>
     */
    inline const PaddingType& GetPaddingType() const{ return m_paddingType; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline bool PaddingTypeHasBeenSet() const { return m_paddingTypeHasBeenSet; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline void SetPaddingType(const PaddingType& value) { m_paddingTypeHasBeenSet = true; m_paddingType = value; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline void SetPaddingType(PaddingType&& value) { m_paddingTypeHasBeenSet = true; m_paddingType = std::move(value); }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline SymmetricEncryptionAttributes& WithPaddingType(const PaddingType& value) { SetPaddingType(value); return *this;}

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline SymmetricEncryptionAttributes& WithPaddingType(PaddingType&& value) { SetPaddingType(std::move(value)); return *this;}

  private:

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    EncryptionMode m_mode;
    bool m_modeHasBeenSet = false;

    PaddingType m_paddingType;
    bool m_paddingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
