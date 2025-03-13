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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API VisaAmexDerivationOutputs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the issuer master key for cryptogram (IMK-AC) used
     * by the operation.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyArn() const { return m_authorizationRequestKeyArn; }
    inline bool AuthorizationRequestKeyArnHasBeenSet() const { return m_authorizationRequestKeyArnHasBeenSet; }
    template<typename AuthorizationRequestKeyArnT = Aws::String>
    void SetAuthorizationRequestKeyArn(AuthorizationRequestKeyArnT&& value) { m_authorizationRequestKeyArnHasBeenSet = true; m_authorizationRequestKeyArn = std::forward<AuthorizationRequestKeyArnT>(value); }
    template<typename AuthorizationRequestKeyArnT = Aws::String>
    VisaAmexDerivationOutputs& WithAuthorizationRequestKeyArn(AuthorizationRequestKeyArnT&& value) { SetAuthorizationRequestKeyArn(std::forward<AuthorizationRequestKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the issuer master key for cryptogram (IMK-AC)
     * used by the operation.</p>
     */
    inline const Aws::String& GetAuthorizationRequestKeyCheckValue() const { return m_authorizationRequestKeyCheckValue; }
    inline bool AuthorizationRequestKeyCheckValueHasBeenSet() const { return m_authorizationRequestKeyCheckValueHasBeenSet; }
    template<typename AuthorizationRequestKeyCheckValueT = Aws::String>
    void SetAuthorizationRequestKeyCheckValue(AuthorizationRequestKeyCheckValueT&& value) { m_authorizationRequestKeyCheckValueHasBeenSet = true; m_authorizationRequestKeyCheckValue = std::forward<AuthorizationRequestKeyCheckValueT>(value); }
    template<typename AuthorizationRequestKeyCheckValueT = Aws::String>
    VisaAmexDerivationOutputs& WithAuthorizationRequestKeyCheckValue(AuthorizationRequestKeyCheckValueT&& value) { SetAuthorizationRequestKeyCheckValue(std::forward<AuthorizationRequestKeyCheckValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>keyArn</code> of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekArn() const { return m_currentPinPekArn; }
    inline bool CurrentPinPekArnHasBeenSet() const { return m_currentPinPekArnHasBeenSet; }
    template<typename CurrentPinPekArnT = Aws::String>
    void SetCurrentPinPekArn(CurrentPinPekArnT&& value) { m_currentPinPekArnHasBeenSet = true; m_currentPinPekArn = std::forward<CurrentPinPekArnT>(value); }
    template<typename CurrentPinPekArnT = Aws::String>
    VisaAmexDerivationOutputs& WithCurrentPinPekArn(CurrentPinPekArnT&& value) { SetCurrentPinPekArn(std::forward<CurrentPinPekArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key check value (KCV) of the current PIN PEK.</p>
     */
    inline const Aws::String& GetCurrentPinPekKeyCheckValue() const { return m_currentPinPekKeyCheckValue; }
    inline bool CurrentPinPekKeyCheckValueHasBeenSet() const { return m_currentPinPekKeyCheckValueHasBeenSet; }
    template<typename CurrentPinPekKeyCheckValueT = Aws::String>
    void SetCurrentPinPekKeyCheckValue(CurrentPinPekKeyCheckValueT&& value) { m_currentPinPekKeyCheckValueHasBeenSet = true; m_currentPinPekKeyCheckValue = std::forward<CurrentPinPekKeyCheckValueT>(value); }
    template<typename CurrentPinPekKeyCheckValueT = Aws::String>
    VisaAmexDerivationOutputs& WithCurrentPinPekKeyCheckValue(CurrentPinPekKeyCheckValueT&& value) { SetCurrentPinPekKeyCheckValue(std::forward<CurrentPinPekKeyCheckValueT>(value)); return *this;}
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
