/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecretsManager {
namespace Model {

/**
 * <p>The metadata needed to successfully rotate a managed external secret. A list
 * of key value pairs in JSON format specified by the partner. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/mes-partners.html">Managed
 * external secret partners</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ExternalSecretRotationMetadataItem">AWS
 * API Reference</a></p>
 */
class ExternalSecretRotationMetadataItem {
 public:
  AWS_SECRETSMANAGER_API ExternalSecretRotationMetadataItem() = default;
  AWS_SECRETSMANAGER_API ExternalSecretRotationMetadataItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API ExternalSecretRotationMetadataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key that identifies the item.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ExternalSecretRotationMetadataItem& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the specified item.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ExternalSecretRotationMetadataItem& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::String m_value;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
