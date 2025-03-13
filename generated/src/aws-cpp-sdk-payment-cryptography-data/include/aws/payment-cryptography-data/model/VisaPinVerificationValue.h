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
   * <p>Parameters that are required to generate or verify Visa PVV (PIN Verification
   * Value).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VisaPinVerificationValue">AWS
   * API Reference</a></p>
   */
  class VisaPinVerificationValue
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const { return m_encryptedPinBlock; }
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }
    template<typename EncryptedPinBlockT = Aws::String>
    void SetEncryptedPinBlock(EncryptedPinBlockT&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::forward<EncryptedPinBlockT>(value); }
    template<typename EncryptedPinBlockT = Aws::String>
    VisaPinVerificationValue& WithEncryptedPinBlock(EncryptedPinBlockT&& value) { SetEncryptedPinBlock(std::forward<EncryptedPinBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline int GetPinVerificationKeyIndex() const { return m_pinVerificationKeyIndex; }
    inline bool PinVerificationKeyIndexHasBeenSet() const { return m_pinVerificationKeyIndexHasBeenSet; }
    inline void SetPinVerificationKeyIndex(int value) { m_pinVerificationKeyIndexHasBeenSet = true; m_pinVerificationKeyIndex = value; }
    inline VisaPinVerificationValue& WithPinVerificationKeyIndex(int value) { SetPinVerificationKeyIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    int m_pinVerificationKeyIndex{0};
    bool m_pinVerificationKeyIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
