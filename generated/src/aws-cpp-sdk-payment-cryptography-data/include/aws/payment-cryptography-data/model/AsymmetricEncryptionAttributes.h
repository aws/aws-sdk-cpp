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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API AsymmetricEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The padding to be included with the data.</p>
     */
    inline const PaddingType& GetPaddingType() const{ return m_paddingType; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline bool PaddingTypeHasBeenSet() const { return m_paddingTypeHasBeenSet; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline void SetPaddingType(const PaddingType& value) { m_paddingTypeHasBeenSet = true; m_paddingType = value; }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline void SetPaddingType(PaddingType&& value) { m_paddingTypeHasBeenSet = true; m_paddingType = std::move(value); }

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline AsymmetricEncryptionAttributes& WithPaddingType(const PaddingType& value) { SetPaddingType(value); return *this;}

    /**
     * <p>The padding to be included with the data.</p>
     */
    inline AsymmetricEncryptionAttributes& WithPaddingType(PaddingType&& value) { SetPaddingType(std::move(value)); return *this;}

  private:

    PaddingType m_paddingType;
    bool m_paddingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
