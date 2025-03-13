/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/EncryptionMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/PaddingType.h>
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
   * <p>Parameters requried to encrypt plaintext data using symmetric
   * keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/SymmetricEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class SymmetricEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API SymmetricEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The block cipher method to use for encryption.</p>
     */
    inline EncryptionMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(EncryptionMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline SymmetricEncryptionAttributes& WithMode(EncryptionMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An input used to provide the intial state. If no value is provided, Amazon
     * Web Services Payment Cryptography defaults it to zero.</p>
     */
    inline const Aws::String& GetInitializationVector() const { return m_initializationVector; }
    inline bool InitializationVectorHasBeenSet() const { return m_initializationVectorHasBeenSet; }
    template<typename InitializationVectorT = Aws::String>
    void SetInitializationVector(InitializationVectorT&& value) { m_initializationVectorHasBeenSet = true; m_initializationVector = std::forward<InitializationVectorT>(value); }
    template<typename InitializationVectorT = Aws::String>
    SymmetricEncryptionAttributes& WithInitializationVector(InitializationVectorT&& value) { SetInitializationVector(std::forward<InitializationVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The padding to be included with the data.</p>
     */
    inline PaddingType GetPaddingType() const { return m_paddingType; }
    inline bool PaddingTypeHasBeenSet() const { return m_paddingTypeHasBeenSet; }
    inline void SetPaddingType(PaddingType value) { m_paddingTypeHasBeenSet = true; m_paddingType = value; }
    inline SymmetricEncryptionAttributes& WithPaddingType(PaddingType value) { SetPaddingType(value); return *this;}
    ///@}
  private:

    EncryptionMode m_mode{EncryptionMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_initializationVector;
    bool m_initializationVectorHasBeenSet = false;

    PaddingType m_paddingType{PaddingType::NOT_SET};
    bool m_paddingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
