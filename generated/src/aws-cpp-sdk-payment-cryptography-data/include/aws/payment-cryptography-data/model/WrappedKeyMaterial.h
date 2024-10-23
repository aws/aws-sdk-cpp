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
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API WrappedKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The TR-31 wrapped key block.</p>
     */
    inline const Aws::String& GetTr31KeyBlock() const{ return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    inline void SetTr31KeyBlock(const Aws::String& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = value; }
    inline void SetTr31KeyBlock(Aws::String&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::move(value); }
    inline void SetTr31KeyBlock(const char* value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock.assign(value); }
    inline WrappedKeyMaterial& WithTr31KeyBlock(const Aws::String& value) { SetTr31KeyBlock(value); return *this;}
    inline WrappedKeyMaterial& WithTr31KeyBlock(Aws::String&& value) { SetTr31KeyBlock(std::move(value)); return *this;}
    inline WrappedKeyMaterial& WithTr31KeyBlock(const char* value) { SetTr31KeyBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter information for deriving a ECDH shared key.</p>
     */
    inline const EcdhDerivationAttributes& GetDiffieHellmanSymmetricKey() const{ return m_diffieHellmanSymmetricKey; }
    inline bool DiffieHellmanSymmetricKeyHasBeenSet() const { return m_diffieHellmanSymmetricKeyHasBeenSet; }
    inline void SetDiffieHellmanSymmetricKey(const EcdhDerivationAttributes& value) { m_diffieHellmanSymmetricKeyHasBeenSet = true; m_diffieHellmanSymmetricKey = value; }
    inline void SetDiffieHellmanSymmetricKey(EcdhDerivationAttributes&& value) { m_diffieHellmanSymmetricKeyHasBeenSet = true; m_diffieHellmanSymmetricKey = std::move(value); }
    inline WrappedKeyMaterial& WithDiffieHellmanSymmetricKey(const EcdhDerivationAttributes& value) { SetDiffieHellmanSymmetricKey(value); return *this;}
    inline WrappedKeyMaterial& WithDiffieHellmanSymmetricKey(EcdhDerivationAttributes&& value) { SetDiffieHellmanSymmetricKey(std::move(value)); return *this;}
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
