/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
 * <p>The configuration for the Secrets Manager secret that holds the key or
 * passphrase used to encrypt an endpoint connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/EndpointEncryptionSecretConfiguration">AWS
 * API Reference</a></p>
 */
class EndpointEncryptionSecretConfiguration {
 public:
  AWS_MEDIACONNECT_API EndpointEncryptionSecretConfiguration() = default;
  AWS_MEDIACONNECT_API EndpointEncryptionSecretConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API EndpointEncryptionSecretConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret that holds the key or passphrase. The
   * secret must be encrypted with a customer managed Amazon Web Services KMS key
   * that is enabled and symmetric; it cannot use the Amazon Web Services managed key
   * <code>aws/secretsmanager</code>. The secret must be in the same Amazon Web
   * Services account and Region as the endpoint.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  EndpointEncryptionSecretConfiguration& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
