﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Parameters required for encryption or decryption of data using
   * DUKPT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/DukptDerivationAttributes">AWS
   * API Reference</a></p>
   */
  class DukptDerivationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptDerivationAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptDerivationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API DukptDerivationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier known as Key Serial Number (KSN) that comes from an
     * encrypting device using DUKPT encryption method. The KSN is derived from the
     * encrypting device unique identifier and an internal transaction counter.</p>
     */
    inline const Aws::String& GetKeySerialNumber() const{ return m_keySerialNumber; }
    inline bool KeySerialNumberHasBeenSet() const { return m_keySerialNumberHasBeenSet; }
    inline void SetKeySerialNumber(const Aws::String& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = value; }
    inline void SetKeySerialNumber(Aws::String&& value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber = std::move(value); }
    inline void SetKeySerialNumber(const char* value) { m_keySerialNumberHasBeenSet = true; m_keySerialNumber.assign(value); }
    inline DukptDerivationAttributes& WithKeySerialNumber(const Aws::String& value) { SetKeySerialNumber(value); return *this;}
    inline DukptDerivationAttributes& WithKeySerialNumber(Aws::String&& value) { SetKeySerialNumber(std::move(value)); return *this;}
    inline DukptDerivationAttributes& WithKeySerialNumber(const char* value) { SetKeySerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key type derived using DUKPT from a Base Derivation Key (BDK) and Key
     * Serial Number (KSN). This must be less than or equal to the strength of the BDK.
     * For example, you can't use <code>AES_128</code> as a derivation type for a BDK
     * of <code>AES_128</code> or <code>TDES_2KEY</code> </p>
     */
    inline const DukptDerivationType& GetDukptKeyDerivationType() const{ return m_dukptKeyDerivationType; }
    inline bool DukptKeyDerivationTypeHasBeenSet() const { return m_dukptKeyDerivationTypeHasBeenSet; }
    inline void SetDukptKeyDerivationType(const DukptDerivationType& value) { m_dukptKeyDerivationTypeHasBeenSet = true; m_dukptKeyDerivationType = value; }
    inline void SetDukptKeyDerivationType(DukptDerivationType&& value) { m_dukptKeyDerivationTypeHasBeenSet = true; m_dukptKeyDerivationType = std::move(value); }
    inline DukptDerivationAttributes& WithDukptKeyDerivationType(const DukptDerivationType& value) { SetDukptKeyDerivationType(value); return *this;}
    inline DukptDerivationAttributes& WithDukptKeyDerivationType(DukptDerivationType&& value) { SetDukptKeyDerivationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of use of DUKPT, which can be for incoming data decryption, outgoing
     * data encryption, or both.</p>
     */
    inline const DukptKeyVariant& GetDukptKeyVariant() const{ return m_dukptKeyVariant; }
    inline bool DukptKeyVariantHasBeenSet() const { return m_dukptKeyVariantHasBeenSet; }
    inline void SetDukptKeyVariant(const DukptKeyVariant& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = value; }
    inline void SetDukptKeyVariant(DukptKeyVariant&& value) { m_dukptKeyVariantHasBeenSet = true; m_dukptKeyVariant = std::move(value); }
    inline DukptDerivationAttributes& WithDukptKeyVariant(const DukptKeyVariant& value) { SetDukptKeyVariant(value); return *this;}
    inline DukptDerivationAttributes& WithDukptKeyVariant(DukptKeyVariant&& value) { SetDukptKeyVariant(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_keySerialNumber;
    bool m_keySerialNumberHasBeenSet = false;

    DukptDerivationType m_dukptKeyDerivationType;
    bool m_dukptKeyDerivationTypeHasBeenSet = false;

    DukptKeyVariant m_dukptKeyVariant;
    bool m_dukptKeyVariantHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
