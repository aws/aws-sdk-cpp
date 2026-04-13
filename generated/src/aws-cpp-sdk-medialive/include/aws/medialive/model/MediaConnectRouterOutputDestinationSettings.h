/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MediaConnectRouterOutputEncryptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * MediaConnect Router Output Destination Settings<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectRouterOutputDestinationSettings">AWS
 * API Reference</a></p>
 */
class MediaConnectRouterOutputDestinationSettings {
 public:
  AWS_MEDIALIVE_API MediaConnectRouterOutputDestinationSettings() = default;
  AWS_MEDIALIVE_API MediaConnectRouterOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaConnectRouterOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Encryption configuration for MediaConnect router. When using SECRETS_MANAGER
   * encryption, you must provide the ARN of the secret used to encrypt data in
   * transit. When using AUTOMATIC encryption, a service-managed secret will be used
   * instead.
   */
  inline MediaConnectRouterOutputEncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(MediaConnectRouterOutputEncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline MediaConnectRouterOutputDestinationSettings& WithEncryptionType(MediaConnectRouterOutputEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * ARN of the secret used to encrypt this input. Used only with the SECRETS_MANAGER
   * encryption type.
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  MediaConnectRouterOutputDestinationSettings& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  MediaConnectRouterOutputEncryptionType m_encryptionType{MediaConnectRouterOutputEncryptionType::NOT_SET};

  Aws::String m_secretArn;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
