/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AutomaticEncryptionKeyConfiguration.h>
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
 * <p>Configuration settings for the MediaLive transit encryption
 * key.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaLiveTransitEncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class MediaLiveTransitEncryptionKeyConfiguration {
 public:
  AWS_MEDIACONNECT_API MediaLiveTransitEncryptionKeyConfiguration() = default;
  AWS_MEDIACONNECT_API MediaLiveTransitEncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MediaLiveTransitEncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const SecretsManagerEncryptionKeyConfiguration& GetSecretsManager() const { return m_secretsManager; }
  inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
  template <typename SecretsManagerT = SecretsManagerEncryptionKeyConfiguration>
  void SetSecretsManager(SecretsManagerT&& value) {
    m_secretsManagerHasBeenSet = true;
    m_secretsManager = std::forward<SecretsManagerT>(value);
  }
  template <typename SecretsManagerT = SecretsManagerEncryptionKeyConfiguration>
  MediaLiveTransitEncryptionKeyConfiguration& WithSecretsManager(SecretsManagerT&& value) {
    SetSecretsManager(std::forward<SecretsManagerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AutomaticEncryptionKeyConfiguration& GetAutomatic() const { return m_automatic; }
  inline bool AutomaticHasBeenSet() const { return m_automaticHasBeenSet; }
  template <typename AutomaticT = AutomaticEncryptionKeyConfiguration>
  void SetAutomatic(AutomaticT&& value) {
    m_automaticHasBeenSet = true;
    m_automatic = std::forward<AutomaticT>(value);
  }
  template <typename AutomaticT = AutomaticEncryptionKeyConfiguration>
  MediaLiveTransitEncryptionKeyConfiguration& WithAutomatic(AutomaticT&& value) {
    SetAutomatic(std::forward<AutomaticT>(value));
    return *this;
  }
  ///@}
 private:
  SecretsManagerEncryptionKeyConfiguration m_secretsManager;

  AutomaticEncryptionKeyConfiguration m_automatic;
  bool m_secretsManagerHasBeenSet = false;
  bool m_automaticHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
