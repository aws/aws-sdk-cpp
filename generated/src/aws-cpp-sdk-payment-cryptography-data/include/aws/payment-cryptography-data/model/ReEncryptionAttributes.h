/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/SymmetricEncryptionAttributes.h>
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
   * <p>Parameters that are required to perform reencryption operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/ReEncryptionAttributes">AWS
   * API Reference</a></p>
   */
  class ReEncryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DukptEncryptionAttributes& GetDukpt() const{ return m_dukpt; }

    
    inline bool DukptHasBeenSet() const { return m_dukptHasBeenSet; }

    
    inline void SetDukpt(const DukptEncryptionAttributes& value) { m_dukptHasBeenSet = true; m_dukpt = value; }

    
    inline void SetDukpt(DukptEncryptionAttributes&& value) { m_dukptHasBeenSet = true; m_dukpt = std::move(value); }

    
    inline ReEncryptionAttributes& WithDukpt(const DukptEncryptionAttributes& value) { SetDukpt(value); return *this;}

    
    inline ReEncryptionAttributes& WithDukpt(DukptEncryptionAttributes&& value) { SetDukpt(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline const SymmetricEncryptionAttributes& GetSymmetric() const{ return m_symmetric; }

    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline bool SymmetricHasBeenSet() const { return m_symmetricHasBeenSet; }

    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline void SetSymmetric(const SymmetricEncryptionAttributes& value) { m_symmetricHasBeenSet = true; m_symmetric = value; }

    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline void SetSymmetric(SymmetricEncryptionAttributes&& value) { m_symmetricHasBeenSet = true; m_symmetric = std::move(value); }

    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline ReEncryptionAttributes& WithSymmetric(const SymmetricEncryptionAttributes& value) { SetSymmetric(value); return *this;}

    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline ReEncryptionAttributes& WithSymmetric(SymmetricEncryptionAttributes&& value) { SetSymmetric(std::move(value)); return *this;}

  private:

    DukptEncryptionAttributes m_dukpt;
    bool m_dukptHasBeenSet = false;

    SymmetricEncryptionAttributes m_symmetric;
    bool m_symmetricHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
