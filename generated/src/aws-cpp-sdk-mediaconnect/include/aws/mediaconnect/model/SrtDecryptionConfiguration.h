/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SecretsManagerEncryptionKeyConfiguration.h>

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
 * <p>Contains the configuration settings for decrypting SRT streams, including the
 * encryption key details and decryption parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SrtDecryptionConfiguration">AWS
 * API Reference</a></p>
 */
class SrtDecryptionConfiguration {
 public:
  AWS_MEDIACONNECT_API SrtDecryptionConfiguration() = default;
  AWS_MEDIACONNECT_API SrtDecryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SrtDecryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the encryption key configuration used for decrypting SRT streams,
   * including the key source and associated credentials.</p>
   */
  inline const SecretsManagerEncryptionKeyConfiguration& GetEncryptionKey() const { return m_encryptionKey; }
  inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
  template <typename EncryptionKeyT = SecretsManagerEncryptionKeyConfiguration>
  void SetEncryptionKey(EncryptionKeyT&& value) {
    m_encryptionKeyHasBeenSet = true;
    m_encryptionKey = std::forward<EncryptionKeyT>(value);
  }
  template <typename EncryptionKeyT = SecretsManagerEncryptionKeyConfiguration>
  SrtDecryptionConfiguration& WithEncryptionKey(EncryptionKeyT&& value) {
    SetEncryptionKey(std::forward<EncryptionKeyT>(value));
    return *this;
  }
  ///@}
 private:
  SecretsManagerEncryptionKeyConfiguration m_encryptionKey;
  bool m_encryptionKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
