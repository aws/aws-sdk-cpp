/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/JwtKey.h>

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
 * <p>The JWT authentication configuration for Slurm REST API access.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/JwtAuth">AWS API
 * Reference</a></p>
 */
class JwtAuth {
 public:
  AWS_PCS_API JwtAuth() = default;
  AWS_PCS_API JwtAuth(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API JwtAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JWT key for Slurm REST API authentication.</p>
   */
  inline const JwtKey& GetJwtKey() const { return m_jwtKey; }
  inline bool JwtKeyHasBeenSet() const { return m_jwtKeyHasBeenSet; }
  template <typename JwtKeyT = JwtKey>
  void SetJwtKey(JwtKeyT&& value) {
    m_jwtKeyHasBeenSet = true;
    m_jwtKey = std::forward<JwtKeyT>(value);
  }
  template <typename JwtKeyT = JwtKey>
  JwtAuth& WithJwtKey(JwtKeyT&& value) {
    SetJwtKey(std::forward<JwtKeyT>(value));
    return *this;
  }
  ///@}
 private:
  JwtKey m_jwtKey;
  bool m_jwtKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
