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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaPinVerificationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline const Aws::String& GetEncryptedPinBlock() const{ return m_encryptedPinBlock; }

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline bool EncryptedPinBlockHasBeenSet() const { return m_encryptedPinBlockHasBeenSet; }

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline void SetEncryptedPinBlock(const Aws::String& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = value; }

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline void SetEncryptedPinBlock(Aws::String&& value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock = std::move(value); }

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline void SetEncryptedPinBlock(const char* value) { m_encryptedPinBlockHasBeenSet = true; m_encryptedPinBlock.assign(value); }

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline VisaPinVerificationValue& WithEncryptedPinBlock(const Aws::String& value) { SetEncryptedPinBlock(value); return *this;}

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline VisaPinVerificationValue& WithEncryptedPinBlock(Aws::String&& value) { SetEncryptedPinBlock(std::move(value)); return *this;}

    /**
     * <p>The encrypted PIN block data to verify.</p>
     */
    inline VisaPinVerificationValue& WithEncryptedPinBlock(const char* value) { SetEncryptedPinBlock(value); return *this;}


    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline int GetPinVerificationKeyIndex() const{ return m_pinVerificationKeyIndex; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline bool PinVerificationKeyIndexHasBeenSet() const { return m_pinVerificationKeyIndexHasBeenSet; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline void SetPinVerificationKeyIndex(int value) { m_pinVerificationKeyIndexHasBeenSet = true; m_pinVerificationKeyIndex = value; }

    /**
     * <p>The value for PIN verification index. It is used in the Visa PIN algorithm to
     * calculate the PVV (PIN Verification Value).</p>
     */
    inline VisaPinVerificationValue& WithPinVerificationKeyIndex(int value) { SetPinVerificationKeyIndex(value); return *this;}

  private:

    Aws::String m_encryptedPinBlock;
    bool m_encryptedPinBlockHasBeenSet = false;

    int m_pinVerificationKeyIndex;
    bool m_pinVerificationKeyIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
