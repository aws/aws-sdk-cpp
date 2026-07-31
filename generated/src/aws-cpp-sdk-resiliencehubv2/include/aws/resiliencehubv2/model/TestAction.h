/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents a fault action that a test runs, along with the resource type it
 * targets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestAction">AWS
 * API Reference</a></p>
 */
class TestAction {
 public:
  AWS_RESILIENCEHUBV2_API TestAction() = default;
  AWS_RESILIENCEHUBV2_API TestAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the fault action.</p>
   */
  inline const Aws::String& GetActionId() const { return m_actionId; }
  inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }
  template <typename ActionIdT = Aws::String>
  void SetActionId(ActionIdT&& value) {
    m_actionIdHasBeenSet = true;
    m_actionId = std::forward<ActionIdT>(value);
  }
  template <typename ActionIdT = Aws::String>
  TestAction& WithActionId(ActionIdT&& value) {
    SetActionId(std::forward<ActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the fault action.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TestAction& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource type that the action targets.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  TestAction& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_actionId;

  Aws::String m_description;

  Aws::String m_resourceType;
  bool m_actionIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
