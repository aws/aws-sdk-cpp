/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionMode.h>
#include <aws/payment-cryptography-data/model/DukptDerivationType.h>
#include <aws/payment-cryptography-data/model/DukptKeyVariant.h>
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
   * <p>Parameters that are required to encrypt plaintext data using
   * DUKPT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DukptEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class DukptEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline const Aws::String& GetKeySerialNumber() const { return m_keySerialNumber; }
    inline bool KeySerialNumberHasBeenSet() const { return m_keySerialNumberHasBeenSet; }
    template<typename KeySerialNumberT = Aws::String>
    void SetKeySerialNumber(KeySerialNumberT&& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = std::forward<KeySerialNumberT>(value); }
    template<typename KeySerialNumberT = Aws::String>
    DukptEncryptionAttributes& WithKeySerialNumber(KeySerialNumberT&& value) { SetKeySerialNumber(std::forward<KeySerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p> <p>The default is CBC.</p>
     */
    inline DukptEncryptionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(DukptEncryptionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline DukptEncryptionAttributes& WithMode(DukptEncryptionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key type encrypted using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline DukptDerivationType GetDukptKeyDerivationType() const { return m_dukptKeyDerivationType; }
    inline bool DukptKeyDerivationTypeHasBeenSet() const { return m_dukptKeyDerivationTypeHasBeenSet; }
    inline void SetDukptKeyDerivationType(DukptDerivationType value) { m_dukptKeyDerivationTypeHasBeenSet = true; m_dukptKeyDerivationType = value; }
    inline DukptEncryptionAttributes& WithDukptKeyDerivationType(DukptDerivationType value) { SetDukptKeyDerivationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of use of DUKPT, which can be incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline DukptKeyVariant GetDukptKeyVariant() const { return m_dukptKeyVariant; }
    inline bool DukptKeyVariantHasBeenSet() const { return m_dukptKeyVariantHasBeenSet; }
    inline void SetDukptKeyVariant(DukptKeyVariant value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = value; }
    inline DukptEncryptionAttributes& WithDukptKeyVariant(DukptKeyVariant value) { SetDukptKeyVariant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline const Aws::String& GetInitializationVector() const { return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    template<typename InitializationVectorT = Aws::String>
    void SetInitializationVector(InitializationVectorT&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::forward<InitializationVectorT>(value); }
    template<typename InitializationVectorT = Aws::String>
    DukptEncryptionAttributes& WithInitializationVector(InitializationVectorT&& value) { SetInitializationVector(std::forward<InitializationVectorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;

    DukptEncryptionMode m_mode{DukptEncryptionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    DukptDerivationType m_dukptKeyDerivationType{DukptDerivationType::NOT_SET};
    bool m_dukptKeyDerivationTypeHasBeenSet = false;

    DukptKeyVariant m_dukptKeyVariant{DukptKeyVariant::NOT_SET};
    bool m_dukptKeyVariantHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
