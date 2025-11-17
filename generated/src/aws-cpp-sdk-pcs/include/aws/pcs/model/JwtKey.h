/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The JWT key stored in AWS Secrets Manager for Slurm REST API
 * authentication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/JwtKey">AWS API
 * Reference</a></p>
 */
class JwtKey {
 public:
  AWS_PCS_API JwtKey() = default;
  AWS_PCS_API JwtKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API JwtKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Secrets Manager secret containing
   * the JWT key.</p>
   */
  inline const Aws::String& GetSecretArn() const { return m_secretArn; }
  inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
  template <typename SecretArnT = Aws::String>
  void SetSecretArn(SecretArnT&& value) {
    m_secretArnHasBeenSet = true;
    m_secretArn = std::forward<SecretArnT>(value);
  }
  template <typename SecretArnT = Aws::String>
  JwtKey& WithSecretArn(SecretArnT&& value) {
    SetSecretArn(std::forward<SecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the AWS Secrets Manager secret containing the JWT key.</p>
   */
  inline const Aws::String& GetSecretVersion() const { return m_secretVersion; }
  inline bool SecretVersionHasBeenSet() const { return m_secretVersionHasBeenSet; }
  template <typename SecretVersionT = Aws::String>
  void SetSecretVersion(SecretVersionT&& value) {
    m_secretVersionHasBeenSet = true;
    m_secretVersion = std::forward<SecretVersionT>(value);
  }
  template <typename SecretVersionT = Aws::String>
  JwtKey& WithSecretVersion(SecretVersionT&& value) {
    SetSecretVersion(std::forward<SecretVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_secretArn;
  bool m_secretArnHasBeenSet = false;

  Aws::String m_secretVersion;
  bool m_secretVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
