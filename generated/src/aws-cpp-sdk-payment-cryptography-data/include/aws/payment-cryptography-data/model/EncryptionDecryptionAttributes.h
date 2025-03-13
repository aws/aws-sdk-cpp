/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/SymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/AsymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/EmvEncryptionAttributes.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EncryptionDecryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required to perform encryption and decryption using
     * symmetric keys.</p>
     */
    inline const SymmetricEncryptionAttributes& GetSymmetric() const { return m_symmetric; }
    inline bool SymmetricHasBeenSet() const { return m_symmetricHasBeenSet; }
    template<typename SymmetricT = SymmetricEncryptionAttributes>
    void SetSymmetric(SymmetricT&& value) { m_symmetricHasBeenSet = true; m_symmetric = std::forward<SymmetricT>(value); }
    template<typename SymmetricT = SymmetricEncryptionAttributes>
    EncryptionDecryptionAttributes& WithSymmetric(SymmetricT&& value) { SetSymmetric(std::forward<SymmetricT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AsymmetricEncryptionAttributes& GetAsymmetric() const { return m_asymmetric; }
    inline bool AsymmetricHasBeenSet() const { return m_asymmetricHasBeenSet; }
    template<typename AsymmetricT = AsymmetricEncryptionAttributes>
    void SetAsymmetric(AsymmetricT&& value) { m_asymmetricHasBeenSet = true; m_asymmetric = std::forward<AsymmetricT>(value); }
    template<typename AsymmetricT = AsymmetricEncryptionAttributes>
    EncryptionDecryptionAttributes& WithAsymmetric(AsymmetricT&& value) { SetAsymmetric(std::forward<AsymmetricT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DukptEncryptionAttributes& GetDukpt() const { return m_dukpt; }
    inline bool DukptHasBeenSet() const { return m_dukptHasBeenSet; }
    template<typename DukptT = DukptEncryptionAttributes>
    void SetDukpt(DukptT&& value) { m_dukptHasBeenSet = true; m_dukpt = std::forward<DukptT>(value); }
    template<typename DukptT = DukptEncryptionAttributes>
    EncryptionDecryptionAttributes& WithDukpt(DukptT&& value) { SetDukpt(std::forward<DukptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters for plaintext encryption using EMV keys.</p>
     */
    inline const EmvEncryptionAttributes& GetEmv() const { return m_emv; }
    inline bool EmvHasBeenSet() const { return m_emvHasBeenSet; }
    template<typename EmvT = EmvEncryptionAttributes>
    void SetEmv(EmvT&& value) { m_emvHasBeenSet = true; m_emv = std::forward<EmvT>(value); }
    template<typename EmvT = EmvEncryptionAttributes>
    EncryptionDecryptionAttributes& WithEmv(EmvT&& value) { SetEmv(std::forward<EmvT>(value)); return *this;}
    ///@}
  private:

    SymmetricEncryptionAttributes m_symmetric;
    bool m_symmetricHasBeenSet = false;

    AsymmetricEncryptionAttributes m_asymmetric;
    bool m_asymmetricHasBeenSet = false;

    DukptEncryptionAttributes m_dukpt;
    bool m_dukptHasBeenSet = false;

    EmvEncryptionAttributes m_emv;
    bool m_emvHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
