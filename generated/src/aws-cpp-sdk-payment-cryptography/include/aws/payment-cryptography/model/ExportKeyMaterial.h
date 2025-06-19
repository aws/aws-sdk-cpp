/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/ExportTr31KeyBlock.h>
#include <aws/payment-cryptography/model/ExportTr34KeyBlock.h>
#include <aws/payment-cryptography/model/ExportKeyCryptogram.h>
#include <aws/payment-cryptography/model/ExportDiffieHellmanTr31KeyBlock.h>
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
   * <p>Parameter information for key material export from Amazon Web Services
   * Payment Cryptography using TR-31 or TR-34 or RSA wrap and unwrap key exchange
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/ExportKeyMaterial">AWS
   * API Reference</a></p>
   */
  class ExportKeyMaterial
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyMaterial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Parameter information for key material export using symmetric TR-31 key
     * exchange method.</p>
     */
    inline const ExportTr31KeyBlock& GetTr31KeyBlock() const { return m_tr31KeyBlock; }
    inline bool Tr31KeyBlockHasBeenSet() const { return m_tr31KeyBlockHasBeenSet; }
    template<typename Tr31KeyBlockT = ExportTr31KeyBlock>
    void SetTr31KeyBlock(Tr31KeyBlockT&& value) { m_tr31KeyBlockHasBeenSet = true; m_tr31KeyBlock = std::forward<Tr31KeyBlockT>(value); }
    template<typename Tr31KeyBlockT = ExportTr31KeyBlock>
    ExportKeyMaterial& WithTr31KeyBlock(Tr31KeyBlockT&& value) { SetTr31KeyBlock(std::forward<Tr31KeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material export using the asymmetric TR-34 key
     * exchange method.</p>
     */
    inline const ExportTr34KeyBlock& GetTr34KeyBlock() const { return m_tr34KeyBlock; }
    inline bool Tr34KeyBlockHasBeenSet() const { return m_tr34KeyBlockHasBeenSet; }
    template<typename Tr34KeyBlockT = ExportTr34KeyBlock>
    void SetTr34KeyBlock(Tr34KeyBlockT&& value) { m_tr34KeyBlockHasBeenSet = true; m_tr34KeyBlock = std::forward<Tr34KeyBlockT>(value); }
    template<typename Tr34KeyBlockT = ExportTr34KeyBlock>
    ExportKeyMaterial& WithTr34KeyBlock(Tr34KeyBlockT&& value) { SetTr34KeyBlock(std::forward<Tr34KeyBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter information for key material export using asymmetric RSA wrap and
     * unwrap key exchange method</p>
     */
    inline const ExportKeyCryptogram& GetKeyCryptogram() const { return m_keyCryptogram; }
    inline bool KeyCryptogramHasBeenSet() const { return m_keyCryptogramHasBeenSet; }
    template<typename KeyCryptogramT = ExportKeyCryptogram>
    void SetKeyCryptogram(KeyCryptogramT&& value) { m_keyCryptogramHasBeenSet = true; m_keyCryptogram = std::forward<KeyCryptogramT>(value); }
    template<typename KeyCryptogramT = ExportKeyCryptogram>
    ExportKeyMaterial& WithKeyCryptogram(KeyCryptogramT&& value) { SetKeyCryptogram(std::forward<KeyCryptogramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key derivation parameter information for key material export using asymmetric
     * ECDH key exchange method.</p>
     */
    inline const ExportDiffieHellmanTr31KeyBlock& GetDiffieHellmanTr31KeyBlock() const { return m_diffieHellmanTr31KeyBlock; }
    inline bool DiffieHellmanTr31KeyBlockHasBeenSet() const { return m_diffieHellmanTr31KeyBlockHasBeenSet; }
    template<typename DiffieHellmanTr31KeyBlockT = ExportDiffieHellmanTr31KeyBlock>
    void SetDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) { m_diffieHellmanTr31KeyBlockHasBeenSet = true; m_diffieHellmanTr31KeyBlock = std::forward<DiffieHellmanTr31KeyBlockT>(value); }
    template<typename DiffieHellmanTr31KeyBlockT = ExportDiffieHellmanTr31KeyBlock>
    ExportKeyMaterial& WithDiffieHellmanTr31KeyBlock(DiffieHellmanTr31KeyBlockT&& value) { SetDiffieHellmanTr31KeyBlock(std::forward<DiffieHellmanTr31KeyBlockT>(value)); return *this;}
    ///@}
  private:

    ExportTr31KeyBlock m_tr31KeyBlock;
    bool m_tr31KeyBlockHasBeenSet = false;

    ExportTr34KeyBlock m_tr34KeyBlock;
    bool m_tr34KeyBlockHasBeenSet = false;

    ExportKeyCryptogram m_keyCryptogram;
    bool m_keyCryptogramHasBeenSet = false;

    ExportDiffieHellmanTr31KeyBlock m_diffieHellmanTr31KeyBlock;
    bool m_diffieHellmanTr31KeyBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
