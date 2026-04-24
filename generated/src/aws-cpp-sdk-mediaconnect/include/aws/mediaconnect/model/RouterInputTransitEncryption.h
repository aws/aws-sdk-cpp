/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterInputTransitEncryptionKeyConfiguration.h>
#include <aws/mediaconnect/model/RouterInputTransitEncryptionKeyType.h>

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
 * <p>The transit encryption settings for a router input.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterInputTransitEncryption">AWS
 * API Reference</a></p>
 */
class RouterInputTransitEncryption {
 public:
  AWS_MEDIACONNECT_API RouterInputTransitEncryption() = default;
  AWS_MEDIACONNECT_API RouterInputTransitEncryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterInputTransitEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the type of encryption key to use for transit encryption.</p>
   */
  inline RouterInputTransitEncryptionKeyType GetEncryptionKeyType() const { return m_encryptionKeyType; }
  inline bool EncryptionKeyTypeHasBeenSet() const { return m_encryptionKeyTypeHasBeenSet; }
  inline void SetEncryptionKeyType(RouterInputTransitEncryptionKeyType value) {
    m_encryptionKeyTypeHasBeenSet = true;
    m_encryptionKeyType = value;
  }
  inline RouterInputTransitEncryption& WithEncryptionKeyType(RouterInputTransitEncryptionKeyType value) {
    SetEncryptionKeyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the configuration details for the encryption key used in transit
   * encryption, including the key source and associated parameters.</p>
   */
  inline const RouterInputTransitEncryptionKeyConfiguration& GetEncryptionKeyConfiguration() const { return m_encryptionKeyConfiguration; }
  inline bool EncryptionKeyConfigurationHasBeenSet() const { return m_encryptionKeyConfigurationHasBeenSet; }
  template <typename EncryptionKeyConfigurationT = RouterInputTransitEncryptionKeyConfiguration>
  void SetEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    m_encryptionKeyConfigurationHasBeenSet = true;
    m_encryptionKeyConfiguration = std::forward<EncryptionKeyConfigurationT>(value);
  }
  template <typename EncryptionKeyConfigurationT = RouterInputTransitEncryptionKeyConfiguration>
  RouterInputTransitEncryption& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  RouterInputTransitEncryptionKeyType m_encryptionKeyType{RouterInputTransitEncryptionKeyType::NOT_SET};

  RouterInputTransitEncryptionKeyConfiguration m_encryptionKeyConfiguration;
  bool m_encryptionKeyTypeHasBeenSet = false;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
