/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
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
namespace PaymentCryptography
{
namespace Model
{

  /**
   * <p>The shared information used when deriving a key using ECDH.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/DiffieHellmanDerivationData">AWS
   * API Reference</a></p>
   */
  class DiffieHellmanDerivationData
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DiffieHellmanDerivationData() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API DiffieHellmanDerivationData(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API DiffieHellmanDerivationData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing information that binds the ECDH derived key to the two
     * parties involved or to the context of the key.</p> <p>It may include details
     * like identities of the two parties deriving the key, context of the operation,
     * session IDs, and optionally a nonce. It must not contain zero bytes. It is not
     * recommended to reuse shared information for multiple ECDH key derivations, as it
     * could result in derived key material being the same across different
     * derivations.</p>
     */
    inline const Aws::String& GetSharedInformation() const { return m_sharedInformation; }
    inline bool SharedInformationHasBeenSet() const { return m_sharedInformationHasBeenSet; }
    template<typename SharedInformationT = Aws::String>
    void SetSharedInformation(SharedInformationT&& value) { m_sharedInformationHasBeenSet = true; m_sharedInformation = std::forward<SharedInformationT>(value); }
    template<typename SharedInformationT = Aws::String>
    DiffieHellmanDerivationData& WithSharedInformation(SharedInformationT&& value) { SetSharedInformation(std::forward<SharedInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sharedInformation;
    bool m_sharedInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
