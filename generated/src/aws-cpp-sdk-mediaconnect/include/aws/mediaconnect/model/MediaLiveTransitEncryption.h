/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryptionKeyConfiguration.h>
#include <aws/mediaconnect/model/MediaLiveTransitEncryptionKeyType.h>

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
 * <p>The encryption configuration that defines how content is encrypted during
 * transit between MediaConnect Router and MediaLive. This configuration determines
 * whether encryption keys are automatically managed by the service or manually
 * managed through AWS Secrets Manager.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaLiveTransitEncryption">AWS
 * API Reference</a></p>
 */
class MediaLiveTransitEncryption {
 public:
  AWS_MEDIACONNECT_API MediaLiveTransitEncryption() = default;
  AWS_MEDIACONNECT_API MediaLiveTransitEncryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaLiveTransitEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of encryption key to use for MediaLive transit encryption.</p>
   */
  inline MediaLiveTransitEncryptionKeyType GetEncryptionKeyType() const { return m_encryptionKeyType; }
  inline bool EncryptionKeyTypeHasBeenSet() const { return m_encryptionKeyTypeHasBeenSet; }
  inline void SetEncryptionKeyType(MediaLiveTransitEncryptionKeyType value) {
    m_encryptionKeyTypeHasBeenSet = true;
    m_encryptionKeyType = value;
  }
  inline MediaLiveTransitEncryption& WithEncryptionKeyType(MediaLiveTransitEncryptionKeyType value) {
    SetEncryptionKeyType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the MediaLive encryption key.</p>
   */
  inline const MediaLiveTransitEncryptionKeyConfiguration& GetEncryptionKeyConfiguration() const { return m_encryptionKeyConfiguration; }
  inline bool EncryptionKeyConfigurationHasBeenSet() const { return m_encryptionKeyConfigurationHasBeenSet; }
  template <typename EncryptionKeyConfigurationT = MediaLiveTransitEncryptionKeyConfiguration>
  void SetEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    m_encryptionKeyConfigurationHasBeenSet = true;
    m_encryptionKeyConfiguration = std::forward<EncryptionKeyConfigurationT>(value);
  }
  template <typename EncryptionKeyConfigurationT = MediaLiveTransitEncryptionKeyConfiguration>
  MediaLiveTransitEncryption& WithEncryptionKeyConfiguration(EncryptionKeyConfigurationT&& value) {
    SetEncryptionKeyConfiguration(std::forward<EncryptionKeyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  MediaLiveTransitEncryptionKeyType m_encryptionKeyType{MediaLiveTransitEncryptionKeyType::NOT_SET};
  bool m_encryptionKeyTypeHasBeenSet = false;

  MediaLiveTransitEncryptionKeyConfiguration m_encryptionKeyConfiguration;
  bool m_encryptionKeyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
