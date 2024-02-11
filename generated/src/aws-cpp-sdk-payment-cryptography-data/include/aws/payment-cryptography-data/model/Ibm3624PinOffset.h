/**
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
   * <p>Pparameters that are required to generate or verify Ibm3624 PIN offset
   * PIN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/Ibm3624PinOffset">AWS
   * API Reference</a></p>
   */
  class Ibm3624PinOffset
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinOffset();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinOffset(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinOffset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline const Aws::String& GetDecimalizationTable() const{ return m_decimalizationTable; }

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline bool DecimalizationTableHasBeenSet() const { return m_decimalizationTableHasBeenSet; }

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline void SetDecimalizationTable(const Aws::String& value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable = value; }

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline void SetDecimalizationTable(Aws::String&& value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable = std::move(value); }

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline void SetDecimalizationTable(const char* value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable.assign(value); }

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline Ibm3624PinOffset& WithDecimalizationTable(const Aws::String& value) { SetDecimalizationTable(value); return *this;}

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline Ibm3624PinOffset& WithDecimalizationTable(Aws::String&& value) { SetDecimalizationTable(std::move(value)); return *this;}

    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline Ibm3624PinOffset& WithDecimalizationTable(const char* value) { SetDecimalizationTable(value); return *this;}


    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = value; }

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::move(value); }

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock.assign(value); }

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline Ibm3624PinOffset& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline Ibm3624PinOffset& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}

    /**
     * <p>The encrypted PIN block data. According to ISO 9564 standard, a PIN Block is
     * an encoded representation of a payment card Personal Account Number (PAN) and
     * the cardholder Personal Identification Number (PIN).</p>
     */
    inline Ibm3624PinOffset& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}


    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline const Aws::String& GetPinValidationData() const{ return m_pinValidationData; }

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline bool PinValidationDataHasBeenSet() const { return m_pinValidationDataHasBeenSet; }

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline void SetPinValidationData(const Aws::String& value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData = value; }

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline void SetPinValidationData(Aws::String&& value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData = std::move(value); }

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline void SetPinValidationData(const char* value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData.assign(value); }

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationData(const Aws::String& value) { SetPinValidationData(value); return *this;}

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationData(Aws::String&& value) { SetPinValidationData(std::move(value)); return *this;}

    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationData(const char* value) { SetPinValidationData(value); return *this;}


    /**
     * <p>The padding character for validation data.</p>
     */
    inline const Aws::String& GetPinValidationDataPadCharacter() const{ return m_pinValidationDataPadCharacter; }

    /**
     * <p>The padding character for validation data.</p>
     */
    inline bool PinValidationDataPadCharacterHasBeenSet() const { return m_pinValidationDataPadCharacterHasBeenSet; }

    /**
     * <p>The padding character for validation data.</p>
     */
    inline void SetPinValidationDataPadCharacter(const Aws::String& value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter = value; }

    /**
     * <p>The padding character for validation data.</p>
     */
    inline void SetPinValidationDataPadCharacter(Aws::String&& value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter = std::move(value); }

    /**
     * <p>The padding character for validation data.</p>
     */
    inline void SetPinValidationDataPadCharacter(const char* value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter.assign(value); }

    /**
     * <p>The padding character for validation data.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationDataPadCharacter(const Aws::String& value) { SetPinValidationDataPadCharacter(value); return *this;}

    /**
     * <p>The padding character for validation data.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationDataPadCharacter(Aws::String&& value) { SetPinValidationDataPadCharacter(std::move(value)); return *this;}

    /**
     * <p>The padding character for validation data.</p>
     */
    inline Ibm3624PinOffset& WithPinValidationDataPadCharacter(const char* value) { SetPinValidationDataPadCharacter(value); return *this;}

  private:

    Aws::String m_decimalizationTable;
    bool m_decimalizationTableHasBeenSet = false;

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    Aws::String m_pinValidationData;
    bool m_pinValidationDataHasBeenSet = false;

    Aws::String m_pinValidationDataPadCharacter;
    bool m_pinValidationDataPadCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
