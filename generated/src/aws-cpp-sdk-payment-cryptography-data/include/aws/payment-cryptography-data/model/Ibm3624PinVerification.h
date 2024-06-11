﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Parameters that are required to generate or verify Ibm3624 PIN verification
   * PIN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/Ibm3624PinVerification">AWS
   * API Reference</a></p>
   */
  class Ibm3624PinVerification
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline const Aws::String& GetDecimalizationTable() const{ return m_decimalizationTable; }
    inline bool DecimalizationTableHasBeenSet() const { return m_decimalizationTableHasBeenSet; }
    inline void SetDecimalizationTable(const Aws::String& value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable = value; }
    inline void SetDecimalizationTable(Aws::String&& value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable = std::move(value); }
    inline void SetDecimalizationTable(const char* value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable.assign(value); }
    inline Ibm3624PinVerification& WithDecimalizationTable(const Aws::String& value) { SetDecimalizationTable(value); return *this;}
    inline Ibm3624PinVerification& WithDecimalizationTable(Aws::String&& value) { SetDecimalizationTable(std::move(value)); return *this;}
    inline Ibm3624PinVerification& WithDecimalizationTable(const char* value) { SetDecimalizationTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN offset value.</p>
     */
    inline const Aws::String& GetPinOffset() const{ return m_pinOffset; }
    inline bool PinOffsetHasBeenSet() const { return m_pinOffsetHasBeenSet; }
    inline void SetPinOffset(const Aws::String& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = value; }
    inline void SetPinOffset(Aws::String&& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = std::move(value); }
    inline void SetPinOffset(const char* value) { m_pinOffsetHasBeenSet = true; m_pinOffset.assign(value); }
    inline Ibm3624PinVerification& WithPinOffset(const Aws::String& value) { SetPinOffset(value); return *this;}
    inline Ibm3624PinVerification& WithPinOffset(Aws::String&& value) { SetPinOffset(std::move(value)); return *this;}
    inline Ibm3624PinVerification& WithPinOffset(const char* value) { SetPinOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline const Aws::String& GetPinValidationData() const{ return m_pinValidationData; }
    inline bool PinValidationDataHasBeenSet() const { return m_pinValidationDataHasBeenSet; }
    inline void SetPinValidationData(const Aws::String& value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData = value; }
    inline void SetPinValidationData(Aws::String&& value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData = std::move(value); }
    inline void SetPinValidationData(const char* value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData.assign(value); }
    inline Ibm3624PinVerification& WithPinValidationData(const Aws::String& value) { SetPinValidationData(value); return *this;}
    inline Ibm3624PinVerification& WithPinValidationData(Aws::String&& value) { SetPinValidationData(std::move(value)); return *this;}
    inline Ibm3624PinVerification& WithPinValidationData(const char* value) { SetPinValidationData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The padding character for validation data.</p>
     */
    inline const Aws::String& GetPinValidationDataPadCharacter() const{ return m_pinValidationDataPadCharacter; }
    inline bool PinValidationDataPadCharacterHasBeenSet() const { return m_pinValidationDataPadCharacterHasBeenSet; }
    inline void SetPinValidationDataPadCharacter(const Aws::String& value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter = value; }
    inline void SetPinValidationDataPadCharacter(Aws::String&& value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter = std::move(value); }
    inline void SetPinValidationDataPadCharacter(const char* value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter.assign(value); }
    inline Ibm3624PinVerification& WithPinValidationDataPadCharacter(const Aws::String& value) { SetPinValidationDataPadCharacter(value); return *this;}
    inline Ibm3624PinVerification& WithPinValidationDataPadCharacter(Aws::String&& value) { SetPinValidationDataPadCharacter(std::move(value)); return *this;}
    inline Ibm3624PinVerification& WithPinValidationDataPadCharacter(const char* value) { SetPinValidationDataPadCharacter(value); return *this;}
    ///@}
  private:

    Aws::String m_decimalizationTable;
    bool m_decimalizationTableHasBeenSet = false;

    Aws::String m_pinOffset;
    bool m_pinOffsetHasBeenSet = false;

    Aws::String m_pinValidationData;
    bool m_pinValidationDataHasBeenSet = false;

    Aws::String m_pinValidationDataPadCharacter;
    bool m_pinValidationDataPadCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
