/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents a category classification for tasks</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Category">AWS
 * API Reference</a></p>
 */
class Category {
 public:
  AWS_SECURITYAGENT_API Category() = default;
  AWS_SECURITYAGENT_API Category(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Category& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Name of the category</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Category& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this is the primary category for the task</p>
   */
  inline bool GetIsPrimary() const { return m_isPrimary; }
  inline bool IsPrimaryHasBeenSet() const { return m_isPrimaryHasBeenSet; }
  inline void SetIsPrimary(bool value) {
    m_isPrimaryHasBeenSet = true;
    m_isPrimary = value;
  }
  inline Category& WithIsPrimary(bool value) {
    SetIsPrimary(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  bool m_isPrimary{false};
  bool m_nameHasBeenSet = false;
  bool m_isPrimaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
