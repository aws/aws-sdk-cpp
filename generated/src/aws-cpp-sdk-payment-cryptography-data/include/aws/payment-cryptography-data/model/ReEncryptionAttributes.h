/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/SymmetricEncryptionAttributes.h>
#include <aws/payment-cryptography-data/model/DukptEncryptionAttributes.h>
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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API ReEncryptionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameters that are required to encrypt data using symmetric keys.</p>
     */
    inline const SymmetricEncryptionAttributes& GetSymmetric() const { return m_symmetric; }
    inline bool SymmetricHasBeenSet() const { return m_symmetricHasBeenSet; }
    template<typename SymmetricT = SymmetricEncryptionAttributes>
    void SetSymmetric(SymmetricT&& value) { m_symmetricHasBeenSet = true; m_symmetric = std::forward<SymmetricT>(value); }
    template<typename SymmetricT = SymmetricEncryptionAttributes>
    ReEncryptionAttributes& WithSymmetric(SymmetricT&& value) { SetSymmetric(std::forward<SymmetricT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DukptEncryptionAttributes& GetDukpt() const { return m_dukpt; }
    inline bool DukptHasBeenSet() const { return m_dukptHasBeenSet; }
    template<typename DukptT = DukptEncryptionAttributes>
    void SetDukpt(DukptT&& value) { m_dukptHasBeenSet = true; m_dukpt = std::forward<DukptT>(value); }
    template<typename DukptT = DukptEncryptionAttributes>
    ReEncryptionAttributes& WithDukpt(DukptT&& value) { SetDukpt(std::forward<DukptT>(value)); return *this;}
    ///@}
  private:

    SymmetricEncryptionAttributes m_symmetric;
    bool m_symmetricHasBeenSet = false;

    DukptEncryptionAttributes m_dukpt;
    bool m_dukptHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
