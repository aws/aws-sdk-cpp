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
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3();
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API PrivateKeyAttributesV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline const PrivateKeyAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline void SetAlgorithm(const PrivateKeyAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline void SetAlgorithm(PrivateKeyAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& WithAlgorithm(const PrivateKeyAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>Defines the algorithm used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& WithAlgorithm(PrivateKeyAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


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
    inline PrivateKeyAttributesV3& WithCryptoProviders(const Aws::Vector<Aws::String>& value) { SetCryptoProviders(value); return *this;}

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& WithCryptoProviders(Aws::Vector<Aws::String>&& value) { SetCryptoProviders(std::move(value)); return *this;}

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& AddCryptoProviders(const Aws::String& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(value); return *this; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& AddCryptoProviders(Aws::String&& value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>Defines the cryptographic providers used to generate the private key.</p>
     */
    inline PrivateKeyAttributesV3& AddCryptoProviders(const char* value) { m_cryptoProvidersHasBeenSet = true; m_cryptoProviders.push_back(value); return *this; }


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
    inline PrivateKeyAttributesV3& WithKeySpec(const KeySpec& value) { SetKeySpec(value); return *this;}

    /**
     * <p>Defines the purpose of the private key. Set it to "KEY_EXCHANGE" or
     * "SIGNATURE" value.</p>
     */
    inline PrivateKeyAttributesV3& WithKeySpec(KeySpec&& value) { SetKeySpec(std::move(value)); return *this;}


    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline const KeyUsageProperty& GetKeyUsageProperty() const{ return m_keyUsageProperty; }

    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline bool KeyUsagePropertyHasBeenSet() const { return m_keyUsagePropertyHasBeenSet; }

    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline void SetKeyUsageProperty(const KeyUsageProperty& value) { m_keyUsagePropertyHasBeenSet = true; m_keyUsageProperty = value; }

    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline void SetKeyUsageProperty(KeyUsageProperty&& value) { m_keyUsagePropertyHasBeenSet = true; m_keyUsageProperty = std::move(value); }

    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline PrivateKeyAttributesV3& WithKeyUsageProperty(const KeyUsageProperty& value) { SetKeyUsageProperty(value); return *this;}

    /**
     * <p>The key usage property defines the purpose of the private key contained in
     * the certificate. You can specify specific purposes using property flags or all
     * by using property type ALL.</p>
     */
    inline PrivateKeyAttributesV3& WithKeyUsageProperty(KeyUsageProperty&& value) { SetKeyUsageProperty(std::move(value)); return *this;}


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
    inline PrivateKeyAttributesV3& WithMinimalKeyLength(int value) { SetMinimalKeyLength(value); return *this;}

  private:

    PrivateKeyAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    Aws::Vector<Aws::String> m_cryptoProviders;
    bool m_cryptoProvidersHasBeenSet = false;

    KeySpec m_keySpec;
    bool m_keySpecHasBeenSet = false;

    KeyUsageProperty m_keyUsageProperty;
    bool m_keyUsagePropertyHasBeenSet = false;

    int m_minimalKeyLength;
    bool m_minimalKeyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
