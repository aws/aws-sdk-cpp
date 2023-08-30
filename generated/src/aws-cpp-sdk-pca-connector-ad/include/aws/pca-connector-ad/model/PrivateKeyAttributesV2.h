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
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2();
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCryptoProviders() const{ return m_cryptoProviders; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline bool CryptoProvidersHasBeenSet() const { return m_cryptoProvidersHasBeenSet; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline void SetCryptoProviders(const Aws::Vector<Aws::String>& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders = value; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline void SetCryptoProviders(Aws::Vector<Aws::String>&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders = std::move(value); }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV2& WithCryptoProviders(const Aws::Vector<Aws::String>& value) { SetCryptoProviders(value); return *this;}

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV2& WithCryptoProviders(Aws::Vector<Aws::String>&& value) { SetCryptoProviders(std::move(value)); return *this;}

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV2& AddCryptoProviders(const Aws::String& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(value); return *this; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV2& AddCryptoProviders(Aws::String&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV2& AddCryptoProviders(const char* value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(value); return *this; }


    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline const KeySpec& GetKeySpec() const{ return m_keySpec; }

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline bool KeySpecHasBeenSet() const { return m_keySpecHasBeenSet; }

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline void SetKeySpec(const KeySpec& value) { m_keySpecHasBeenSet = true; m_keySpec = value; }

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline void SetKeySpec(KeySpec&& value) { m_keySpecHasBeenSet = true; m_keySpec = std::move(value); }

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline PrivateKeyAttributesV2& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline PrivateKeyAttributesV2& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline int GetMinimalKeyLength() const{ return m_minimalKeyLength; }

    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline bool MinimalKeyLengthHasBeenSet() const { return m_minimalKeyLengthHasBeenSet; }

    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline void SetMinimalKeyLength(int value) { m_minimalKeyLengthHasBeenSet = true; m_minimalKeyLength = value; }

    /**
     * <p>Set the minimum key length of the private key.</p>
     */
    inline PrivateKeyAttributesV2& WithMinimalKeyLength(int value) { SetMinimalKeyLength(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_cryptoProviders;
    bool m_cryptoProvidersHasBeenSet = false;

    KeySpec m_keySpec;
    bool m_keySpecHasBeenSet = false;

    int m_minimalKeyLength;
    bool m_minimalKeyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
