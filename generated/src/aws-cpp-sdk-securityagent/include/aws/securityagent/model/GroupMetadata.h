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
 * <p>Contains metadata about an IAM Identity Center group member, including the
 * group display name and description.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/GroupMetadata">AWS
 * API Reference</a></p>
 */
class GroupMetadata {
 public:
  AWS_SECURITYAGENT_API GroupMetadata() = default;
  AWS_SECURITYAGENT_API GroupMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API GroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display name of the group.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GroupMetadata& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the group.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GroupMetadata& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_description;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
