/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityIR {
namespace Model {

/**
 * <p>Represents a single metadata entry associated with a case. Each entry
 * consists of a key-value pair that provides additional contextual information
 * about the case, such as classification tags, custom attributes, or
 * system-generated properties. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/CaseMetadataEntry">AWS
 * API Reference</a></p>
 */
class CaseMetadataEntry {
 public:
  AWS_SECURITYIR_API CaseMetadataEntry() = default;
  AWS_SECURITYIR_API CaseMetadataEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API CaseMetadataEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier for the metadata field. This key uniquely identifies the type
   * of metadata being stored, such as "severity", "category", or "assignee".</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  CaseMetadataEntry& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value associated with the metadata key. This contains the actual data for
   * the metadata field identified by the key.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  CaseMetadataEntry& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;
  bool m_keyHasBeenSet = false;

  Aws::String m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
