/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/RootCertificatePublicKey.h>
#include <aws/payment-cryptography/model/TrustedCertificatePublicKey.h>
#include <aws/payment-cryptography/model/ImportTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ImportTr34KeyBlock.h>
#include <aws/payment-cryptography/model/ImportKeyCryptogram.h>
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
   * <p>Parameter information for key material import into Amazon Web Services
   * Payment Cryptography using TR-31 or TR-34 or RSA wrap and unwrap key exchange
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ImportKeyMaterial">AWS
   * API Reference</a></p>
   */
  class ImportKeyMaterial
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial();
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information for root public key certificate import.</p>
     */
    inline const RootCertificatePublicKey& GetRootCertificatePublicKey() const{ return m_rootCertificatePublicKey; }
    inline bool RootCertificatePublicKeyHasBeenSet() const { return m_rootCertificatePublicKeyHasBeenSet; }
    inline void SetRootCertificatePublicKey(const RootCertificatePublicKey& value) { m_rootCertificatePublicKeyHasBeenSet = true; m_rootCertificatePublicKey = value; }
    inline void SetRootCertificatePublicKey(RootCertificatePublicKey&& value) { m_rootCertificatePublicKeyHasBeenSet = true; m_rootCertificatePublicKey = std::move(value); }
    inline ImportKeyMaterial& WithRootCertificatePublicKey(const RootCertificatePublicKey& value) { SetRootCertificatePublicKey(value); return *this;}
    inline ImportKeyMaterial& WithRootCertificatePublicKey(RootCertificatePublicKey&& value) { SetRootCertificatePublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline const TrustedCertificatePublicKey& GetTrustedCertificatePublicKey() const{ return m_trustedCertificatePublicKey; }
    inline bool TrustedCertificatePublicKeyHasBeenSet() const { return m_trustedCertificatePublicKeyHasBeenSet; }
    inline void SetTrustedCertificatePublicKey(const TrustedCertificatePublicKey& value) { m_trustedCertificatePublicKeyHasBeenSet = true; m_trustedCertificatePublicKey = value; }
    inline void SetTrustedCertificatePublicKey(TrustedCertificatePublicKey&& value) { m_trustedCertificatePublicKeyHasBeenSet = true; m_trustedCertificatePublicKey = std::move(value); }
    inline ImportKeyMaterial& WithTrustedCertificatePublicKey(const TrustedCertificatePublicKey& value) { SetTrustedCertificatePublicKey(value); return *this;}
    inline ImportKeyMaterial& WithTrustedCertificatePublicKey(TrustedCertificatePublicKey&& value) { SetTrustedCertificatePublicKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using symmetric TR-31 key
     * exchange method.</p>
     */
    inline const ImportTr31KeyBlock& GetTr31KeyBlock() const{ return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    inline void SetTr31KeyBlock(const ImportTr31KeyBlock& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = value; }
    inline void SetTr31KeyBlock(ImportTr31KeyBlock&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::move(value); }
    inline ImportKeyMaterial& WithTr31KeyBlock(const ImportTr31KeyBlock& value) { SetTr31KeyBlock(value); return *this;}
    inline ImportKeyMaterial& WithTr31KeyBlock(ImportTr31KeyBlock&& value) { SetTr31KeyBlock(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline const ImportTr34KeyBlock& GetTr34KeyBlock() const{ return m_tr34KeyBlock; }
    inline bool Tr34KeyBlockHasBeenSet() const { return m_tr34KeyBlockHasBeenSet; }
    inline void SetTr34KeyBlock(const ImportTr34KeyBlock& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = value; }
    inline void SetTr34KeyBlock(ImportTr34KeyBlock&& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = std::move(value); }
    inline ImportKeyMaterial& WithTr34KeyBlock(const ImportTr34KeyBlock& value) { SetTr34KeyBlock(value); return *this;}
    inline ImportKeyMaterial& WithTr34KeyBlock(ImportTr34KeyBlock&& value) { SetTr34KeyBlock(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using asymmetric RSA wrap and
     * unwrap key exchange method.</p>
     */
    inline const ImportKeyCryptogram& GetKeyCryptogram() const{ return m_keyCryptogram; }
    inline bool KeyCryptogramHasBeenSet() const { return m_keyCryptogramHasBeenSet; }
    inline void SetKeyCryptogram(const ImportKeyCryptogram& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = value; }
    inline void SetKeyCryptogram(ImportKeyCryptogram&& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = std::move(value); }
    inline ImportKeyMaterial& WithKeyCryptogram(const ImportKeyCryptogram& value) { SetKeyCryptogram(value); return *this;}
    inline ImportKeyMaterial& WithKeyCryptogram(ImportKeyCryptogram&& value) { SetKeyCryptogram(std::move(value)); return *this;}
    ///@}
  private:

    RootCertificatePublicKey m_rootCertificatePublicKey;
    bool m_rootCertificatePublicKeyHasBeenSet = false;

    TrustedCertificatePublicKey m_trustedCertificatePublicKey;
    bool m_trustedCertificatePublicKeyHasBeenSet = false;

    ImportTr31KeyBlock m_tr31KeyBlock;
    bool m_tr31KeyBlockHasBeenSet = false;

    ImportTr34KeyBlock m_tr34KeyBlock;
    bool m_tr34KeyBlockHasBeenSet = false;

    ImportKeyCryptogram m_keyCryptogram;
    bool m_keyCryptogramHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
