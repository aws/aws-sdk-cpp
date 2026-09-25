/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/TlsEncryptionConfiguration.h>
#include <aws/mediaconnect/model/TlsEncryptionType.h>

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
 * <p>The Transport Layer Security (TLS) encryption settings used to establish a
 * secure connection to a destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TlsEncryption">AWS
 * API Reference</a></p>
 */
class TlsEncryption {
 public:
  AWS_MEDIACONNECT_API TlsEncryption() = default;
  AWS_MEDIACONNECT_API TlsEncryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API TlsEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of TLS encryption to use for the connection.</p>
   */
  inline TlsEncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(TlsEncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline TlsEncryption& WithEncryptionType(TlsEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the specified TLS encryption type.</p>
   */
  inline const TlsEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = TlsEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = TlsEncryptionConfiguration>
  TlsEncryption& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TlsEncryptionType m_encryptionType{TlsEncryptionType::NOT_SET};

  TlsEncryptionConfiguration m_encryptionConfiguration;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
