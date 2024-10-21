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
   * <p>The attributes values used for Amex and Visa derivation
   * methods.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/VisaAmexDerivationOutputs">AWS
   * API Reference</a></p>
   */
  class VisaAmexDerivationOutputs
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the issuer master key for cryptogram (IMK-AC) used
     * by the operation.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyArn() const{ return m_authorizationRequestKeyArn; }
    inline bool AuthorizationRequestKeyArnHasBeenSet() const { return m_authorizationRequestKeyArnHasBeenSet; }
    inline void SetAuthorizationRequestKeyArn(const Aws::String& value) { m_authorizationRequestKeyArnHasBeenSet = true; m_authorizationRequestKeyArn = value; }
    inline void SetAuthorizationRequestKeyArn(Aws::String&& value) { m_authorizationRequestKeyArnHasBeenSet = true; m_authorizationRequestKeyArn = std::move(value); }
    inline void SetAuthorizationRequestKeyArn(const char* value) { m_authorizationRequestKeyArnHasBeenSet = true; m_authorizationRequestKeyArn.assign(value); }
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyArn(const Aws::String& value) { SetAuthorizationRequestKeyArn(value); return *this;}
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyArn(Aws::String&& value) { SetAuthorizationRequestKeyArn(std::move(value)); return *this;}
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyArn(const char* value) { SetAuthorizationRequestKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the issuer master key for cryptogram (IMK-AC)
     * used by the operation.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyCheckValue() const{ return m_authorizationRequestKeyCheckValue; }
    inline bool AuthorizationRequestKeyCheckValueHasBeenSet() const { return m_authorizationRequestKeyCheckValueHasBeenSet; }
    inline void SetAuthorizationRequestKeyCheckValue(const Aws::String& value) { m_authorizationRequestKeyCheckValueHasBeenSet = true; m_authorizationRequestKeyCheckValue = value; }
    inline void SetAuthorizationRequestKeyCheckValue(Aws::String&& value) { m_authorizationRequestKeyCheckValueHasBeenSet = true; m_authorizationRequestKeyCheckValue = std::move(value); }
    inline void SetAuthorizationRequestKeyCheckValue(const char* value) { m_authorizationRequestKeyCheckValueHasBeenSet = true; m_authorizationRequestKeyCheckValue.assign(value); }
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyCheckValue(const Aws::String& value) { SetAuthorizationRequestKeyCheckValue(value); return *this;}
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyCheckValue(Aws::String&& value) { SetAuthorizationRequestKeyCheckValue(std::move(value)); return *this;}
    inline VisaAmexDerivationOutputs& WithAuthorizationRequestKeyCheckValue(const char* value) { SetAuthorizationRequestKeyCheckValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyArn</code> of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekArn() const{ return m_currentPinPekArn; }
    inline bool CurrentPinPekArnHasBeenSet() const { return m_currentPinPekArnHasBeenSet; }
    inline void SetCurrentPinPekArn(const Aws::String& value) { m_currentPinPekArnHasBeenSet = true; m_currentPinPekArn = value; }
    inline void SetCurrentPinPekArn(Aws::String&& value) { m_currentPinPekArnHasBeenSet = true; m_currentPinPekArn = std::move(value); }
    inline void SetCurrentPinPekArn(const char* value) { m_currentPinPekArnHasBeenSet = true; m_currentPinPekArn.assign(value); }
    inline VisaAmexDerivationOutputs& WithCurrentPinPekArn(const Aws::String& value) { SetCurrentPinPekArn(value); return *this;}
    inline VisaAmexDerivationOutputs& WithCurrentPinPekArn(Aws::String&& value) { SetCurrentPinPekArn(std::move(value)); return *this;}
    inline VisaAmexDerivationOutputs& WithCurrentPinPekArn(const char* value) { SetCurrentPinPekArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekKeyCheckValue() const{ return m_currentPinPekKeyCheckValue; }
    inline bool CurrentPinPekKeyCheckValueHasBeenSet() const { return m_currentPinPekKeyCheckValueHasBeenSet; }
    inline void SetCurrentPinPekKeyCheckValue(const Aws::String& value) { m_currentPinPekKeyCheckValueHasBeenSet = true; m_currentPinPekKeyCheckValue = value; }
    inline void SetCurrentPinPekKeyCheckValue(Aws::String&& value) { m_currentPinPekKeyCheckValueHasBeenSet = true; m_currentPinPekKeyCheckValue = std::move(value); }
    inline void SetCurrentPinPekKeyCheckValue(const char* value) { m_currentPinPekKeyCheckValueHasBeenSet = true; m_currentPinPekKeyCheckValue.assign(value); }
    inline VisaAmexDerivationOutputs& WithCurrentPinPekKeyCheckValue(const Aws::String& value) { SetCurrentPinPekKeyCheckValue(value); return *this;}
    inline VisaAmexDerivationOutputs& WithCurrentPinPekKeyCheckValue(Aws::String&& value) { SetCurrentPinPekKeyCheckValue(std::move(value)); return *this;}
    inline VisaAmexDerivationOutputs& WithCurrentPinPekKeyCheckValue(const char* value) { SetCurrentPinPekKeyCheckValue(value); return *this;}
    ///@}
  private:

    Aws::String m_authorizationRequestKeyArn;
    bool m_authorizationRequestKeyArnHasBeenSet = false;

    Aws::String m_authorizationRequestKeyCheckValue;
    bool m_authorizationRequestKeyCheckValueHasBeenSet = false;

    Aws::String m_currentPinPekArn;
    bool m_currentPinPekArnHasBeenSet = false;

    Aws::String m_currentPinPekKeyCheckValue;
    bool m_currentPinPekKeyCheckValueHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
