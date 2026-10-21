/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>A key-value filter pair used in container association monitoring
 * configurations to narrow which containers are tracked. The key must match
 * exactly. The value can be an exact value or a wildcard pattern.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ContainerAttribute">AWS
 * API Reference</a></p>
 */
class ContainerAttribute {
 public:
  AWS_NETWORKFIREWALL_API ContainerAttribute() = default;
  AWS_NETWORKFIREWALL_API ContainerAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API ContainerAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute key to filter on. For Amazon EKS, specify
   * <code>namespace</code> to filter by namespace, or specify a Kubernetes label
   * key. For Amazon ECS, specify a container instance attribute name. Keys don't
   * support wildcards.</p> <p>Valid characters are letters, numbers, spaces, hyphens
   * (<code>-</code>), underscores (<code>_</code>), periods (<code>.</code>),
   * forward slashes (<code>/</code>), and colons (<code>:</code>).</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ContainerAttribute& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute value to match. You can specify an exact value, such as
   * <code>payments-api</code>, or a wildcard pattern, such as
   * <code>payments-*</code>.</p> <p>Valid characters are letters, numbers, spaces,
   * hyphens (<code>-</code>), underscores (<code>_</code>), periods
   * (<code>.</code>), forward slashes (<code>/</code>), colons (<code>:</code>),
   * asterisks (<code>*</code>), and backslashes (<code>\</code>).</p> <p>Network
   * Firewall evaluates the value using the following rules:</p> <ul> <li> <p>An
   * asterisk (<code>*</code>) matches zero or more characters. For example,
   * <code>payments-*</code> matches <code>payments-</code>,
   * <code>payments-api</code>, and <code>payments-api-v2</code>, and
   * <code>*-prod</code> matches <code>web-prod</code>.</p> </li> <li> <p>The pattern
   * must match the entire value. For example, <code>payments-*</code> doesn't match
   * <code>my-payments-api</code>. To match a value that contains
   * <code>payments</code> anywhere, use <code>*payments*</code>.</p> </li> <li>
   * <p>Matching is case sensitive. For example, <code>Payments-*</code> doesn't
   * match <code>payments-api</code>.</p> </li> <li> <p>To match a literal asterisk,
   * escape it with a backslash (<code>\*</code>). To match a literal backslash, use
   * <code>\\</code>. A backslash followed by any other character matches a literal
   * backslash followed by that character.</p> </li> <li> <p>A wildcard pattern
   * matches only containers that have the attribute. For example, a filter with key
   * <code>app</code> and value <code>*</code> matches every container that has an
   * <code>app</code> label, but doesn't match a container without an
   * <code>app</code> label.</p> </li> <li> <p>A value that doesn't contain
   * <code>*</code> or <code>\</code> matches only that exact value.</p> </li> </ul>
   * <p>A value can contain at most 10 unescaped asterisks. Escaped asterisks
   * (<code>\*</code>) don't count toward this limit. A value can't end with a single
   * unescaped backslash.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ContainerAttribute& WithValue(ValueT&& value) {
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
}  // namespace NetworkFirewall
}  // namespace Aws
