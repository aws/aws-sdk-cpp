/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AutomaticEndpointEncryptionConfiguration.h>
#include <aws/mediaconnect/model/SecretsManagerEndpointEncryptionConfiguration.h>

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
 * <p>The encryption settings for an endpoint connection. This is a union type, so
 * exactly one of its members is set: <code>secretsManager</code> when you store
 * the encryption key or passphrase in Secrets Manager, or <code>automatic</code>
 * when you let MediaConnect determine the encryption key when the endpoint
 * connects.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/EndpointEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EndpointEncryptionConfiguration {
 public:
  AWS_MEDIACONNECT_API EndpointEncryptionConfiguration() = default;
  AWS_MEDIACONNECT_API EndpointEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API EndpointEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The encryption configuration for a connection that uses a key or passphrase
   * that you store in Secrets Manager.</p>
   */
  inline const SecretsManagerEndpointEncryptionConfiguration& GetSecretsManager() const { return m_secretsManager; }
  inline bool SecretsManagerHasBeenSet() const { return m_secretsManagerHasBeenSet; }
  template <typename SecretsManagerT = SecretsManagerEndpointEncryptionConfiguration>
  void SetSecretsManager(SecretsManagerT&& value) {
    m_secretsManagerHasBeenSet = true;
    m_secretsManager = std::forward<SecretsManagerT>(value);
  }
  template <typename SecretsManagerT = SecretsManagerEndpointEncryptionConfiguration>
  EndpointEncryptionConfiguration& WithSecretsManager(SecretsManagerT&& value) {
    SetSecretsManager(std::forward<SecretsManagerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for automatic encryption, where MediaConnect determines the
   * encryption key when the endpoint connects.</p>
   */
  inline const AutomaticEndpointEncryptionConfiguration& GetAutomatic() const { return m_automatic; }
  inline bool AutomaticHasBeenSet() const { return m_automaticHasBeenSet; }
  template <typename AutomaticT = AutomaticEndpointEncryptionConfiguration>
  void SetAutomatic(AutomaticT&& value) {
    m_automaticHasBeenSet = true;
    m_automatic = std::forward<AutomaticT>(value);
  }
  template <typename AutomaticT = AutomaticEndpointEncryptionConfiguration>
  EndpointEncryptionConfiguration& WithAutomatic(AutomaticT&& value) {
    SetAutomatic(std::forward<AutomaticT>(value));
    return *this;
  }
  ///@}
 private:
  SecretsManagerEndpointEncryptionConfiguration m_secretsManager;

  AutomaticEndpointEncryptionConfiguration m_automatic;
  bool m_secretsManagerHasBeenSet = false;
  bool m_automaticHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
