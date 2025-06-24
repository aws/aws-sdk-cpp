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
#include <aws/payment-cryptography/model/ImportDiffieHellmanTr31KeyBlock.h>
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
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information for root public key certificate import.</p>
     */
    inline const RootCertificatePublicKey& GetRootCertificatePublicKey() const { return m_rootCertificatePublicKey; }
    inline bool RootCertificatePublicKeyHasBeenSet() const { return m_rootCertificatePublicKeyHasBeenSet; }
    template<typename RootCertificatePublicKeyT = RootCertificatePublicKey>
    void SetRootCertificatePublicKey(RootCertificatePublicKeyT&& value) { m_rootCertificatePublicKeyHasBeenSet = true; m_rootCertificatePublicKey = std::forward<RootCertificatePublicKeyT>(value); }
    template<typename RootCertificatePublicKeyT = RootCertificatePublicKey>
    ImportKeyMaterial& WithRootCertificatePublicKey(RootCertificatePublicKeyT&& value) { SetRootCertificatePublicKey(std::forward<RootCertificatePublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for trusted public key certificate import.</p>
     */
    inline const TrustedCertificatePublicKey& GetTrustedCertificatePublicKey() const { return m_trustedCertificatePublicKey; }
    inline bool TrustedCertificatePublicKeyHasBeenSet() const { return m_trustedCertificatePublicKeyHasBeenSet; }
    template<typename TrustedCertificatePublicKeyT = TrustedCertificatePublicKey>
    void SetTrustedCertificatePublicKey(TrustedCertificatePublicKeyT&& value) { m_trustedCertificatePublicKeyHasBeenSet = true; m_trustedCertificatePublicKey = std::forward<TrustedCertificatePublicKeyT>(value); }
    template<typename TrustedCertificatePublicKeyT = TrustedCertificatePublicKey>
    ImportKeyMaterial& WithTrustedCertificatePublicKey(TrustedCertificatePublicKeyT&& value) { SetTrustedCertificatePublicKey(std::forward<TrustedCertificatePublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using symmetric TR-31 key
     * exchange method.</p>
     */
    inline const ImportTr31KeyBlock& GetTr31KeyBlock() const { return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    template<typename Tr31KeyBlockT = ImportTr31KeyBlock>
    void SetTr31KeyBlock(Tr31KeyBlockT&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::forward<Tr31KeyBlockT>(value); }
    template<typename Tr31KeyBlockT = ImportTr31KeyBlock>
    ImportKeyMaterial& WithTr31KeyBlock(Tr31KeyBlockT&& value) { SetTr31KeyBlock(std::forward<Tr31KeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline const ImportTr34KeyBlock& GetTr34KeyBlock() const { return m_tr34KeyBlock; }
    inline bool Tr34KeyBlockHasBeenSet() const { return m_tr34KeyBlockHasBeenSet; }
    template<typename Tr34KeyBlockT = ImportTr34KeyBlock>
    void SetTr34KeyBlock(Tr34KeyBlockT&& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = std::forward<Tr34KeyBlockT>(value); }
    template<typename Tr34KeyBlockT = ImportTr34KeyBlock>
    ImportKeyMaterial& WithTr34KeyBlock(Tr34KeyBlockT&& value) { SetTr34KeyBlock(std::forward<Tr34KeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material import using asymmetric RSA wrap and
     * unwrap key exchange method.</p>
     */
    inline const ImportKeyCryptogram& GetKeyCryptogram() const { return m_keyCryptogram; }
    inline bool KeyCryptogramHasBeenSet() const { return m_keyCryptogramHasBeenSet; }
    template<typename KeyCryptogramT = ImportKeyCryptogram>
    void SetKeyCryptogram(KeyCryptogramT&& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = std::forward<KeyCryptogramT>(value); }
    template<typename KeyCryptogramT = ImportKeyCryptogram>
    ImportKeyMaterial& WithKeyCryptogram(KeyCryptogramT&& value) { SetKeyCryptogram(std::forward<KeyCryptogramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key derivation parameter information for key material import using asymmetric
     * ECDH key exchange method.</p>
     */
    inline const ImportDiffieHellmanTr31KeyBlock& GetDiffieHellmanTr31KeyBlock() const { return m_diffieHellmanTr31KeyBlock; }
    inline bool DiffieHellmanTr31KeyBlockHasBeenSet() const { return m_diffieHellmanTr31KeyBlockHasBeenSet; }
    template<typename DiffieHellmanTr31KeyBlockT = ImportDiffieHellmanTr31KeyBlock>
    void SetDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) { m_diffieHellmanTr31KeyBlockHasBeenSet = true; m_diffieHellmanTr31KeyBlock = std::forward<DiffieHellmanTr31KeyBlockT>(value); }
    template<typename DiffieHellmanTr31KeyBlockT = ImportDiffieHellmanTr31KeyBlock>
    ImportKeyMaterial& WithDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) { SetDiffieHellmanTr31KeyBlock(std::forward<DiffieHellmanTr31KeyBlockT>(value)); return *this;}
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

    ImportDiffieHellmanTr31KeyBlock m_diffieHellmanTr31KeyBlock;
    bool m_diffieHellmanTr31KeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
