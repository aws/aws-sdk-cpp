/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EndpointEncryptionSecretConfiguration.h>
#include <aws/mediaconnect/model/EndpointEncryptionSecretType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The endpoint encryption configuration for connections that use a key or
 * passphrase that you store in Secrets Manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SecretsManagerEndpointEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class SecretsManagerEndpointEncryptionConfiguration {
 public:
  AWS_MEDIACONNECT_API SecretsManagerEndpointEncryptionConfiguration() = default;
  AWS_MEDIACONNECT_API SecretsManagerEndpointEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SecretsManagerEndpointEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of secret used to encrypt the connection. Valid values include the
   * following:</p> <ul> <li> <p> <code>AES_128_KEY</code> – A 128-bit AES encryption
   * key.</p> </li> <li> <p> <code>AES_192_KEY</code> – A 192-bit AES encryption
   * key.</p> </li> <li> <p> <code>AES_256_KEY</code> – A 256-bit AES encryption
   * key.</p> </li> <li> <p> <code>SRT_PASSPHRASE</code> – An SRT passphrase.</p>
   * </li> </ul>
   */
  inline EndpointEncryptionSecretType GetEncryptionSecretType() const { return m_encryptionSecretType; }
  inline bool EncryptionSecretTypeHasBeenSet() const { return m_encryptionSecretTypeHasBeenSet; }
  inline void SetEncryptionSecretType(EndpointEncryptionSecretType value) {
    m_encryptionSecretTypeHasBeenSet = true;
    m_encryptionSecretType = value;
  }
  inline SecretsManagerEndpointEncryptionConfiguration& WithEncryptionSecretType(EndpointEncryptionSecretType value) {
    SetEncryptionSecretType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Secrets Manager secret that holds the key or passphrase used to encrypt
   * the connection.</p>
   */
  inline const EndpointEncryptionSecretConfiguration& GetEncryptionSecret() const { return m_encryptionSecret; }
  inline bool EncryptionSecretHasBeenSet() const { return m_encryptionSecretHasBeenSet; }
  template <typename EncryptionSecretT = EndpointEncryptionSecretConfiguration>
  void SetEncryptionSecret(EncryptionSecretT&& value) {
    m_encryptionSecretHasBeenSet = true;
    m_encryptionSecret = std::forward<EncryptionSecretT>(value);
  }
  template <typename EncryptionSecretT = EndpointEncryptionSecretConfiguration>
  SecretsManagerEndpointEncryptionConfiguration& WithEncryptionSecret(EncryptionSecretT&& value) {
    SetEncryptionSecret(std::forward<EncryptionSecretT>(value));
    return *this;
  }
  ///@}
 private:
  EndpointEncryptionSecretType m_encryptionSecretType{EndpointEncryptionSecretType::NOT_SET};

  EndpointEncryptionSecretConfiguration m_encryptionSecret;
  bool m_encryptionSecretTypeHasBeenSet = false;
  bool m_encryptionSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
