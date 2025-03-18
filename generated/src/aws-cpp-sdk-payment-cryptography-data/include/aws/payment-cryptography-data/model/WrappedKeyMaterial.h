/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/EcdhDerivationAttributes.h>
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
   * <p>Parameter information of a WrappedKeyBlock for encryption key
   * exchange.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/WrappedKeyMaterial">AWS
   * API Reference</a></p>
   */
  class WrappedKeyMaterial
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The TR-31 wrapped key block.</p>
     */
    inline const Aws::String& GetTr31KeyBlock() const { return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    template<typename Tr31KeyBlockT = Aws::String>
    void SetTr31KeyBlock(Tr31KeyBlockT&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::forward<Tr31KeyBlockT>(value); }
    template<typename Tr31KeyBlockT = Aws::String>
    WrappedKeyMaterial& WithTr31KeyBlock(Tr31KeyBlockT&& value) { SetTr31KeyBlock(std::forward<Tr31KeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter information for deriving a ECDH shared key.</p>
     */
    inline const EcdhDerivationAttributes& GetDiffieHellmanSymmetricKey() const { return m_diffieHellmanSymmetricKey; }
    inline bool DiffieHellmanSymmetricKeyHasBeenSet() const { return m_diffieHellmanSymmetricKeyHasBeenSet; }
    template<typename DiffieHellmanSymmetricKeyT = EcdhDerivationAttributes>
    void SetDiffieHellmanSymmetricKey(DiffieHellmanSymmetricKeyT&& value) { m_diffieHellmanSymmetricKeyHasBeenSet = true; m_diffieHellmanSymmetricKey = std::forward<DiffieHellmanSymmetricKeyT>(value); }
    template<typename DiffieHellmanSymmetricKeyT = EcdhDerivationAttributes>
    WrappedKeyMaterial& WithDiffieHellmanSymmetricKey(DiffieHellmanSymmetricKeyT&& value) { SetDiffieHellmanSymmetricKey(std::forward<DiffieHellmanSymmetricKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tr31KeyBlock;
    bool m_tr31KeyBlockHasBeenSet = false;

    EcdhDerivationAttributes m_diffieHellmanSymmetricKey;
    bool m_diffieHellmanSymmetricKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
