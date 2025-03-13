/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/KeyAttributes.h>
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
   * <p>Parameter information for root public key certificate import.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/RootCertificatePublicKey">AWS
   * API Reference</a></p>
   */
  class RootCertificatePublicKey
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API RootCertificatePublicKey() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API RootCertificatePublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API RootCertificatePublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role of the key, the algorithm it supports, and the cryptographic
     * operations allowed with the key. This data is immutable after the root public
     * key is imported.</p>
     */
    inline const KeyAttributes& GetKeyAttributes() const { return m_keyAttributes; }
    inline bool KeyAttributesHasBeenSet() const { return m_keyAttributesHasBeenSet; }
    template<typename KeyAttributesT = KeyAttributes>
    void SetKeyAttributes(KeyAttributesT&& value) { m_keyAttributesHasBeenSet = true; m_keyAttributes = std::forward<KeyAttributesT>(value); }
    template<typename KeyAttributesT = KeyAttributes>
    RootCertificatePublicKey& WithKeyAttributes(KeyAttributesT&& value) { SetKeyAttributes(std::forward<KeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for root public key certificate import.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const { return m_publicKeyCertificate; }
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
    template<typename PublicKeyCertificateT = Aws::String>
    void SetPublicKeyCertificate(PublicKeyCertificateT&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::forward<PublicKeyCertificateT>(value); }
    template<typename PublicKeyCertificateT = Aws::String>
    RootCertificatePublicKey& WithPublicKeyCertificate(PublicKeyCertificateT&& value) { SetPublicKeyCertificate(std::forward<PublicKeyCertificateT>(value)); return *this;}
    ///@}
  private:

    KeyAttributes m_keyAttributes;
    bool m_keyAttributesHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
