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
   * <p>Parameters that are required to generate or verify Ibm3624 PIN verification
   * PIN.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/Ibm3624PinVerification">AWS
   * API Reference</a></p>
   */
  class Ibm3624PinVerification
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Ibm3624PinVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The decimalization table to use for IBM 3624 PIN algorithm. The table is used
     * to convert the algorithm intermediate result from hexadecimal characters to
     * decimal.</p>
     */
    inline const Aws::String& GetDecimalizationTable() const { return m_decimalizationTable; }
    inline bool DecimalizationTableHasBeenSet() const { return m_decimalizationTableHasBeenSet; }
    template<typename DecimalizationTableT = Aws::String>
    void SetDecimalizationTable(DecimalizationTableT&& value) { m_decimalizationTableHasBeenSet = true; m_decimalizationTable = std::forward<DecimalizationTableT>(value); }
    template<typename DecimalizationTableT = Aws::String>
    Ibm3624PinVerification& WithDecimalizationTable(DecimalizationTableT&& value) { SetDecimalizationTable(std::forward<DecimalizationTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The padding character for validation data.</p>
     */
    inline const Aws::String& GetPinValidationDataPadCharacter() const { return m_pinValidationDataPadCharacter; }
    inline bool PinValidationDataPadCharacterHasBeenSet() const { return m_pinValidationDataPadCharacterHasBeenSet; }
    template<typename PinValidationDataPadCharacterT = Aws::String>
    void SetPinValidationDataPadCharacter(PinValidationDataPadCharacterT&& value) { m_pinValidationDataPadCharacterHasBeenSet = true; m_pinValidationDataPadCharacter = std::forward<PinValidationDataPadCharacterT>(value); }
    template<typename PinValidationDataPadCharacterT = Aws::String>
    Ibm3624PinVerification& WithPinValidationDataPadCharacter(PinValidationDataPadCharacterT&& value) { SetPinValidationDataPadCharacter(std::forward<PinValidationDataPadCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique data for cardholder identification.</p>
     */
    inline const Aws::String& GetPinValidationData() const { return m_pinValidationData; }
    inline bool PinValidationDataHasBeenSet() const { return m_pinValidationDataHasBeenSet; }
    template<typename PinValidationDataT = Aws::String>
    void SetPinValidationData(PinValidationDataT&& value) { m_pinValidationDataHasBeenSet = true; m_pinValidationData = std::forward<PinValidationDataT>(value); }
    template<typename PinValidationDataT = Aws::String>
    Ibm3624PinVerification& WithPinValidationData(PinValidationDataT&& value) { SetPinValidationData(std::forward<PinValidationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN offset value.</p>
     */
    inline const Aws::String& GetPinOffset() const { return m_pinOffset; }
    inline bool PinOffsetHasBeenSet() const { return m_pinOffsetHasBeenSet; }
    template<typename PinOffsetT = Aws::String>
    void SetPinOffset(PinOffsetT&& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = std::forward<PinOffsetT>(value); }
    template<typename PinOffsetT = Aws::String>
    Ibm3624PinVerification& WithPinOffset(PinOffsetT&& value) { SetPinOffset(std::forward<PinOffsetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_decimalizationTable;
    bool m_decimalizationTableHasBeenSet = false;

    Aws::String m_pinValidationDataPadCharacter;
    bool m_pinValidationDataPadCharacterHasBeenSet = false;

    Aws::String m_pinValidationData;
    bool m_pinValidationDataHasBeenSet = false;

    Aws::String m_pinOffset;
    bool m_pinOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
