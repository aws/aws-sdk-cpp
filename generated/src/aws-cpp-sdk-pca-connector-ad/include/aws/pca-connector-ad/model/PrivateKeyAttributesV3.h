/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/PrivateKeyAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/model/KeySpec.h>
#include <aws/pca-connector-ad/model/KeyUsageProperty.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Defines the attributes of the private key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/PrivateKeyAttributesV3">AWS
   * API Reference</a></p>
   */
  class PrivateKeyAttributesV3
  {
  public:
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3() = default;
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline PrivateKeyAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(PrivateKeyAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline PrivateKeyAttributesV3& WithAlgorithm(PrivateKeyAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCryptoProviders() const { return m_cryptoProviders; }
    inline bool CryptoProvidersHasBeenSet() const { return m_cryptoProvidersHasBeenSet; }
    template<typename CryptoProvidersT = Aws::Vector<Aws::String>>
    void SetCryptoProviders(CryptoProvidersT&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders = std::forward<CryptoProvidersT>(value); }
    template<typename CryptoProvidersT = Aws::Vector<Aws::String>>
    PrivateKeyAttributesV3& WithCryptoProviders(CryptoProvidersT&& value) { SetCryptoProviders(std::forward<CryptoProvidersT>(value)); return *this;}
    template<typename CryptoProvidersT = Aws::String>
    PrivateKeyAttributesV3& AddCryptoProviders(CryptoProvidersT&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.emplace_back(std::forward<CryptoProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline KeySpec GetKeySpec() const { return m_keySpec; }
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }
    inline void SetKeySpec(KeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline PrivateKeyAttributesV3& WithKeySpec(KeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline const KeyUsageProperty& GetKeyUsageProperty() const { return m_keyUsageProperty; }
    inline bool KeyUsagePropertyHasBeenSet() const { return m_keyUsagePropertyHasBeenSet; }
    template<typename KeyUsagePropertyT = KeyUsageProperty>
    void SetKeyUsageProperty(KeyUsagePropertyT&& value) { m_keyUsagePropertyHasBeenSet = true; m_keyUsageProperty = std::forward<KeyUsagePropertyT>(value); }
    template<typename KeyUsagePropertyT = KeyUsageProperty>
    PrivateKeyAttributesV3& WithKeyUsageProperty(KeyUsagePropertyT&& value) { SetKeyUsageProperty(std::forward<KeyUsagePropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline int GetMinimalKeyLength() const { return m_minimalKeyLength; }
    inline bool MinimalKeyLengthHasBeenSet() const { return m_minimalKeyLengthHasBeenSet; }
    inline void SetMinimalKeyLength(int value) { m_minimalKeyLengthHasBeenSet = true; m_minimalKeyLength = value; }
    inline PrivateKeyAttributesV3& WithMinimalKeyLength(int value) { SetMinimalKeyLength(value); return *this;}
    ///@}
  private:

    PrivateKeyAlgorithm m_algorithm{PrivateKeyAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_cryptoProviders;
    bool m_cryptoProvidersHasBeenSet = false;

    KeySpec m_keySpec{KeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    KeyUsageProperty m_keyUsageProperty;
    bool m_keyUsagePropertyHasBeenSet = false;

    int m_minimalKeyLength{0};
    bool m_minimalKeyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
