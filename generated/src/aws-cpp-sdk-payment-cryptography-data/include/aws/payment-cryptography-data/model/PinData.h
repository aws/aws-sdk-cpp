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
   * <p>Parameters that are required to generate, translate, or verify PIN
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/PinData">AWS
   * API Reference</a></p>
   */
  class PinData
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API PinData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The PIN offset value.</p>
     */
    inline const Aws::String& GetPinOffset() const { return m_pinOffset; }
    inline bool PinOffsetHasBeenSet() const { return m_pinOffsetHasBeenSet; }
    template<typename PinOffsetT = Aws::String>
    void SetPinOffset(PinOffsetT&& value) { m_pinOffsetHasBeenSet = true; m_pinOffset = std::forward<PinOffsetT>(value); }
    template<typename PinOffsetT = Aws::String>
    PinData& WithPinOffset(PinOffsetT&& value) { SetPinOffset(std::forward<PinOffsetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique data to identify a cardholder. In most cases, this is the same as
     * cardholder's Primary Account Number (PAN). If a value is not provided, it
     * defaults to PAN.</p>
     */
    inline const Aws::String& GetVerificationValue() const { return m_verificationValue; }
    inline bool VerificationValueHasBeenSet() const { return m_verificationValueHasBeenSet; }
    template<typename VerificationValueT = Aws::String>
    void SetVerificationValue(VerificationValueT&& value) { m_verificationValueHasBeenSet = true; m_verificationValue = std::forward<VerificationValueT>(value); }
    template<typename VerificationValueT = Aws::String>
    PinData& WithVerificationValue(VerificationValueT&& value) { SetVerificationValue(std::forward<VerificationValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pinOffset;
    bool m_pinOffsetHasBeenSet = false;

    Aws::String m_verificationValue;
    bool m_verificationValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
