/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pca-connector-ad/model/KeySpec.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/PrivateKeyAttributesV2">AWS
   * API Reference</a></p>
   */
  class PrivateKeyAttributesV2
  {
  public:
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2() = default;
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCryptoProviders() const { return m_cryptoProviders; }
    inline bool CryptoProvidersHasBeenSet() const { return m_cryptoProvidersHasBeenSet; }
    template<typename CryptoProvidersT = Aws::Vector<Aws::String>>
    void SetCryptoProviders(CryptoProvidersT&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders = std::forward<CryptoProvidersT>(value); }
    template<typename CryptoProvidersT = Aws::Vector<Aws::String>>
    PrivateKeyAttributesV2& WithCryptoProviders(CryptoProvidersT&& value) { SetCryptoProviders(std::forward<CryptoProvidersT>(value)); return *this;}
    template<typename CryptoProvidersT = Aws::String>
    PrivateKeyAttributesV2& AddCryptoProviders(CryptoProvidersT&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.emplace_back(std::forward<CryptoProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline KeySpec GetKeySpec() const { return m_keySpec; }
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }
    inline void SetKeySpec(KeySpec value) { m_keySpecHasBeenSet = true; m_keySpec = value; }
    inline PrivateKeyAttributesV2& WithKeySpec(KeySpec value) { SetKeySpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline int GetMinimalKeyLength() const { return m_minimalKeyLength; }
    inline bool MinimalKeyLengthHasBeenSet() const { return m_minimalKeyLengthHasBeenSet; }
    inline void SetMinimalKeyLength(int value) { m_minimalKeyLengthHasBeenSet = true; m_minimalKeyLength = value; }
    inline PrivateKeyAttributesV2& WithMinimalKeyLength(int value) { SetMinimalKeyLength(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cryptoProviders;
    bool m_cryptoProvidersHasBeenSet = false;

    KeySpec m_keySpec{KeySpec::NOT_SET};
    bool m_keySpecHasBeenSet = false;

    int m_minimalKeyLength{0};
    bool m_minimalKeyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
