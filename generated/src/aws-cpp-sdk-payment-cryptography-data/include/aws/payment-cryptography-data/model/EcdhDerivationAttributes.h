/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography-data/model/SymmetricKeyAlgorithm.h>
#include <aws/payment-cryptography-data/model/KeyDerivationFunction.h>
#include <aws/payment-cryptography-data/model/KeyDerivationHashAlgorithm.h>
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
   * <p>Parameters required to establish ECDH based key exchange.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-data-2022-02-03/EcdhDerivationAttributes">AWS
   * API Reference</a></p>
   */
  class EcdhDerivationAttributes
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes();
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API EcdhDerivationAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>keyArn</code> of the certificate that signed the client's
     * <code>PublicKeyCertificate</code>.</p>
     */
    inline const Aws::String& GetCertificateAuthorityPublicKeyIdentifier() const{ return m_certificateAuthorityPublicKeyIdentifier; }
    inline bool CertificateAuthorityPublicKeyIdentifierHasBeenSet() const { return m_certificateAuthorityPublicKeyIdentifierHasBeenSet; }
    inline void SetCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = value; }
    inline void SetCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier = std::move(value); }
    inline void SetCertificateAuthorityPublicKeyIdentifier(const char* value) { m_certificateAuthorityPublicKeyIdentifierHasBeenSet = true; m_certificateAuthorityPublicKeyIdentifier.assign(value); }
    inline EcdhDerivationAttributes& WithCertificateAuthorityPublicKeyIdentifier(const Aws::String& value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}
    inline EcdhDerivationAttributes& WithCertificateAuthorityPublicKeyIdentifier(Aws::String&& value) { SetCertificateAuthorityPublicKeyIdentifier(std::move(value)); return *this;}
    inline EcdhDerivationAttributes& WithCertificateAuthorityPublicKeyIdentifier(const char* value) { SetCertificateAuthorityPublicKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client's public key certificate in PEM format (base64 encoded) to use for
     * ECDH key derivation.</p>
     */
    inline const Aws::String& GetPublicKeyCertificate() const{ return m_publicKeyCertificate; }
    inline bool PublicKeyCertificateHasBeenSet() const { return m_publicKeyCertificateHasBeenSet; }
    inline void SetPublicKeyCertificate(const Aws::String& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = value; }
    inline void SetPublicKeyCertificate(Aws::String&& value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate = std::move(value); }
    inline void SetPublicKeyCertificate(const char* value) { m_publicKeyCertificateHasBeenSet = true; m_publicKeyCertificate.assign(value); }
    inline EcdhDerivationAttributes& WithPublicKeyCertificate(const Aws::String& value) { SetPublicKeyCertificate(value); return *this;}
    inline EcdhDerivationAttributes& WithPublicKeyCertificate(Aws::String&& value) { SetPublicKeyCertificate(std::move(value)); return *this;}
    inline EcdhDerivationAttributes& WithPublicKeyCertificate(const char* value) { SetPublicKeyCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key algorithm of the derived ECDH key.</p>
     */
    inline const SymmetricKeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(const SymmetricKeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline void SetKeyAlgorithm(SymmetricKeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }
    inline EcdhDerivationAttributes& WithKeyAlgorithm(const SymmetricKeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}
    inline EcdhDerivationAttributes& WithKeyAlgorithm(SymmetricKeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key derivation function to use for deriving a key using ECDH.</p>
     */
    inline const KeyDerivationFunction& GetKeyDerivationFunction() const{ return m_keyDerivationFunction; }
    inline bool KeyDerivationFunctionHasBeenSet() const { return m_keyDerivationFunctionHasBeenSet; }
    inline void SetKeyDerivationFunction(const KeyDerivationFunction& value) { m_keyDerivationFunctionHasBeenSet = true; m_keyDerivationFunction = value; }
    inline void SetKeyDerivationFunction(KeyDerivationFunction&& value) { m_keyDerivationFunctionHasBeenSet = true; m_keyDerivationFunction = std::move(value); }
    inline EcdhDerivationAttributes& WithKeyDerivationFunction(const KeyDerivationFunction& value) { SetKeyDerivationFunction(value); return *this;}
    inline EcdhDerivationAttributes& WithKeyDerivationFunction(KeyDerivationFunction&& value) { SetKeyDerivationFunction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash type to use for deriving a key using ECDH.</p>
     */
    inline const KeyDerivationHashAlgorithm& GetKeyDerivationHashAlgorithm() const{ return m_keyDerivationHashAlgorithm; }
    inline bool KeyDerivationHashAlgorithmHasBeenSet() const { return m_keyDerivationHashAlgorithmHasBeenSet; }
    inline void SetKeyDerivationHashAlgorithm(const KeyDerivationHashAlgorithm& value) { m_keyDerivationHashAlgorithmHasBeenSet = true; m_keyDerivationHashAlgorithm = value; }
    inline void SetKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm&& value) { m_keyDerivationHashAlgorithmHasBeenSet = true; m_keyDerivationHashAlgorithm = std::move(value); }
    inline EcdhDerivationAttributes& WithKeyDerivationHashAlgorithm(const KeyDerivationHashAlgorithm& value) { SetKeyDerivationHashAlgorithm(value); return *this;}
    inline EcdhDerivationAttributes& WithKeyDerivationHashAlgorithm(KeyDerivationHashAlgorithm&& value) { SetKeyDerivationHashAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A byte string containing information that binds the ECDH derived key to the
     * two parties involved or to the context of the key.</p> <p>It may include details
     * like identities of the two parties deriving the key, context of the operation,
     * session IDs, and optionally a nonce. It must not contain zero bytes, and
     * re-using shared information for multiple ECDH key derivations is not
     * recommended.</p>
     */
    inline const Aws::String& GetSharedInformation() const{ return m_sharedInformation; }
    inline bool SharedInformationHasBeenSet() const { return m_sharedInformationHasBeenSet; }
    inline void SetSharedInformation(const Aws::String& value) { m_sharedInformationHasBeenSet = true; m_sharedInformation = value; }
    inline void SetSharedInformation(Aws::String&& value) { m_sharedInformationHasBeenSet = true; m_sharedInformation = std::move(value); }
    inline void SetSharedInformation(const char* value) { m_sharedInformationHasBeenSet = true; m_sharedInformation.assign(value); }
    inline EcdhDerivationAttributes& WithSharedInformation(const Aws::String& value) { SetSharedInformation(value); return *this;}
    inline EcdhDerivationAttributes& WithSharedInformation(Aws::String&& value) { SetSharedInformation(std::move(value)); return *this;}
    inline EcdhDerivationAttributes& WithSharedInformation(const char* value) { SetSharedInformation(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateAuthorityPublicKeyIdentifier;
    bool m_certificateAuthorityPublicKeyIdentifierHasBeenSet = false;

    Aws::String m_publicKeyCertificate;
    bool m_publicKeyCertificateHasBeenSet = false;

    SymmetricKeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    KeyDerivationFunction m_keyDerivationFunction;
    bool m_keyDerivationFunctionHasBeenSet = false;

    KeyDerivationHashAlgorithm m_keyDerivationHashAlgorithm;
    bool m_keyDerivationHashAlgorithmHasBeenSet = false;

    Aws::String m_sharedInformation;
    bool m_sharedInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
