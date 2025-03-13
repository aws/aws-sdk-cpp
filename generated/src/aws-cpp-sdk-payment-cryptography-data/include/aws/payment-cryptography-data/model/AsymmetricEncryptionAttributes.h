/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
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
   * <p>Parameters for plaintext encryption using asymmetric keys.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/AsymmetricEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class AsymmetricEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The padding to be included with the data.</p>
     */
    inline PaddingType GetPaddingType() const { return m_paddingType; }
    inline bool PaddingTypeHasBeenSet() const { return m_paddingTypeHasBeenSet; }
    inline void SetPaddingType(PaddingType value) { m_paddingTypeHasBeenSet = true; m_paddingType = value; }
    inline AsymmetricEncryptionAttributes& WithPaddingType(PaddingType value) { SetPaddingType(value); return *this;}
    ///@}
  private:

    PaddingType m_paddingType{PaddingType::NOT_SET};
    bool m_paddingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
