/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/AsymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionAttributes.h>
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
   * <p>Parameters that are required to perform encryption and decryption
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EncryptionDecryptionAttributes">AWS
   * API Reference</a></p>
   */
  class EncryptionDecryptionAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AsymmetricEncryptionAttributes& GetAsymmetric() const{ return m_asymmetric; }

    
    inline bool AsymmetricHasBeenSet() const { return m_asymmetricHasBeenSet; }

    
    inline void SetAsymmetric(const AsymmetricEncryptionAttributes& value) { m_asymmetricHasBeenSet = true; m_asymmetric = value; }

    
    inline void SetAsymmetric(AsymmetricEncryptionAttributes&& value) { m_asymmetricHasBeenSet = true; m_asymmetric = std::move(value); }

    
    inline EncryptionDecryptionAttributes& WithAsymmetric(const AsymmetricEncryptionAttributes& value) { SetAsymmetric(value); return *this;}

    
    inline EncryptionDecryptionAttributes& WithAsymmetric(AsymmetricEncryptionAttributes&& value) { SetAsymmetric(std::move(value)); return *this;}


    
    inline const DukptEncryptionAttributes& GetDukpt() const{ return m_dukpt; }

    
    inline bool DukptHasBeenSet() const { return m_dukptHasBeenSet; }

    
    inline void SetDukpt(const DukptEncryptionAttributes& value) { m_dukptHasBeenSet = true; m_dukpt = value; }

    
    inline void SetDukpt(DukptEncryptionAttributes&& value) { m_dukptHasBeenSet = true; m_dukpt = std::move(value); }

    
    inline EncryptionDecryptionAttributes& WithDukpt(const DukptEncryptionAttributes& value) { SetDukpt(value); return *this;}

    
    inline EncryptionDecryptionAttributes& WithDukpt(DukptEncryptionAttributes&& value) { SetDukpt(std::move(value)); return *this;}


    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline const EmvEncryptionAttributes& GetEmv() const{ return m_emv; }

    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline bool EmvHasBeenSet() const { return m_emvHasBeenSet; }

    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline void SetEmv(const EmvEncryptionAttributes& value) { m_emvHasBeenSet = true; m_emv = value; }

    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline void SetEmv(EmvEncryptionAttributes&& value) { m_emvHasBeenSet = true; m_emv = std::move(value); }

    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline EncryptionDecryptionAttributes& WithEmv(const EmvEncryptionAttributes& value) { SetEmv(value); return *this;}

    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline EncryptionDecryptionAttributes& WithEmv(EmvEncryptionAttributes&& value) { SetEmv(std::move(value)); return *this;}


    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline const SymmetricEncryptionAttributes& GetSymmetric() const{ return m_symmetric; }

    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline bool SymmetricHasBeenSet() const { return m_symmetricHasBeenSet; }

    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline void SetSymmetric(const SymmetricEncryptionAttributes& value) { m_symmetricHasBeenSet = true; m_symmetric = value; }

    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline void SetSymmetric(SymmetricEncryptionAttributes&& value) { m_symmetricHasBeenSet = true; m_symmetric = std::move(value); }

    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline EncryptionDecryptionAttributes& WithSymmetric(const SymmetricEncryptionAttributes& value) { SetSymmetric(value); return *this;}

    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline EncryptionDecryptionAttributes& WithSymmetric(SymmetricEncryptionAttributes&& value) { SetSymmetric(std::move(value)); return *this;}

  private:

    AsymmetricEncryptionAttributes m_asymmetric;
    bool m_asymmetricHasBeenSet = false;

    DukptEncryptionAttributes m_dukpt;
    bool m_dukptHasBeenSet = false;

    EmvEncryptionAttributes m_emv;
    bool m_emvHasBeenSet = false;

    SymmetricEncryptionAttributes m_symmetric;
    bool m_symmetricHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
