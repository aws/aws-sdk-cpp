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
   * <p>Parameters that are required for ARPC response generation using method2 after
   * ARQC verification is successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/CryptogramVerificationArpcMethod2">AWS
   * API Reference</a></p>
   */
  class CryptogramVerificationArpcMethod2
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod2();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API CryptogramVerificationArpcMethod2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline const Aws::String& GetCardStatusUpdate() const{ return m_cardStatusUpdate; }

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline bool CardStatusUpdateHasBeenSet() const { return m_cardStatusUpdateHasBeenSet; }

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline void SetCardStatusUpdate(const Aws::String& value) { m_cardStatusUpdateHasBeenSet = true; m_cardStatusUpdate = value; }

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline void SetCardStatusUpdate(Aws::String&& value) { m_cardStatusUpdateHasBeenSet = true; m_cardStatusUpdate = std::move(value); }

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline void SetCardStatusUpdate(const char* value) { m_cardStatusUpdateHasBeenSet = true; m_cardStatusUpdate.assign(value); }

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithCardStatusUpdate(const Aws::String& value) { SetCardStatusUpdate(value); return *this;}

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithCardStatusUpdate(Aws::String&& value) { SetCardStatusUpdate(std::move(value)); return *this;}

    /**
     * <p>The data indicating whether the issuer approves or declines an online
     * transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithCardStatusUpdate(const char* value) { SetCardStatusUpdate(value); return *this;}


    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline const Aws::String& GetProprietaryAuthenticationData() const{ return m_proprietaryAuthenticationData; }

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline bool ProprietaryAuthenticationDataHasBeenSet() const { return m_proprietaryAuthenticationDataHasBeenSet; }

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline void SetProprietaryAuthenticationData(const Aws::String& value) { m_proprietaryAuthenticationDataHasBeenSet = true; m_proprietaryAuthenticationData = value; }

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline void SetProprietaryAuthenticationData(Aws::String&& value) { m_proprietaryAuthenticationDataHasBeenSet = true; m_proprietaryAuthenticationData = std::move(value); }

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline void SetProprietaryAuthenticationData(const char* value) { m_proprietaryAuthenticationDataHasBeenSet = true; m_proprietaryAuthenticationData.assign(value); }

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithProprietaryAuthenticationData(const Aws::String& value) { SetProprietaryAuthenticationData(value); return *this;}

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithProprietaryAuthenticationData(Aws::String&& value) { SetProprietaryAuthenticationData(std::move(value)); return *this;}

    /**
     * <p>The proprietary authentication data used by issuer for communication during
     * online transaction using an EMV chip card.</p>
     */
    inline CryptogramVerificationArpcMethod2& WithProprietaryAuthenticationData(const char* value) { SetProprietaryAuthenticationData(value); return *this;}

  private:

    Aws::String m_cardStatusUpdate;
    bool m_cardStatusUpdateHasBeenSet = false;

    Aws::String m_proprietaryAuthenticationData;
    bool m_proprietaryAuthenticationDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
