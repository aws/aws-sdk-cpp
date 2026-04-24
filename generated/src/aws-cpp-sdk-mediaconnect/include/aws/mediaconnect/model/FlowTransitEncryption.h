/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FlowTransitEncryptionKeyConfiguration.h>
#include <aws/mediaconnect/model/FlowTransitEncryptionKeyType.h>

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
 * <p>The configuration that defines how content is encrypted during transit
 * between the MediaConnect router and a MediaConnect flow.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FlowTransitEncryption">AWS
 * API Reference</a></p>
 */
class FlowTransitEncryption {
 public:
  AWS_MEDIACONNECT_API FlowTransitEncryption() = default;
  AWS_MEDIACONNECT_API FlowTransitEncryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API FlowTransitEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of encryption key to use for flow transit encryption.</p>
   */
  inline FlowTransitEncryptionKeyType GetEncryptionKeyType() const { return m_encryptionKeyType; }
  inline bool EncryptionKeyTypeHasBeenSet() const { return m_encryptionKeyTypeHasBeenSet; }
  inline void SetEncryptionKeyType(FlowTransitEncryptionKeyType value) {
    m_encryptionKeyTypeHasBeenSet = true;
    m_encryptionKeyType = value;
  }
  inline FlowTransitEncryption& WithEncryptionKeyType(FlowTransitEncryptionKeyType value) {
    SetEncryptionKeyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the encryption key.</p>
   */
  inline const FlowTransitEncryptionKeyConfiguration& GetEncryptionKeyConfiguration() const { return m_encryptionKeyConfiguration; }
  inline bool EncryptionKeyConfigurationHasBeenSet() const { return m_encryptionKeyConfigurationHasBeenSet; }
  template <typename EncryptionKeyConfigurationT = FlowTransitEncryptionKeyConfiguration>
  void SetEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    m_encryptionKeyConfigurationHasBeenSet = true;
    m_encryptionKeyConfiguration = std::forward<EncryptionKeyConfigurationT>(value);
  }
  template <typename EncryptionKeyConfigurationT = FlowTransitEncryptionKeyConfiguration>
  FlowTransitEncryption& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  FlowTransitEncryptionKeyType m_encryptionKeyType{FlowTransitEncryptionKeyType::NOT_SET};

  FlowTransitEncryptionKeyConfiguration m_encryptionKeyConfiguration;
  bool m_encryptionKeyTypeHasBeenSet = false;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
