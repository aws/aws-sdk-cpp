/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceQuickSightResourceDetails.h>
#include <aws/quicksight/model/SpaceQuickSightResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of a resource in a space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpaceResourceSummary">AWS
 * API Reference</a></p>
 */
class SpaceResourceSummary {
 public:
  AWS_QUICKSIGHT_API SpaceResourceSummary() = default;
  AWS_QUICKSIGHT_API SpaceResourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SpaceResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the resource.</p>
   */
  inline SpaceQuickSightResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(SpaceQuickSightResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline SpaceResourceSummary& WithResourceType(SpaceQuickSightResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the resource.</p>
   */
  inline const SpaceQuickSightResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
  inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  void SetResourceDetails(ResourceDetailsT&& value) {
    m_resourceDetailsHasBeenSet = true;
    m_resourceDetails = std::forward<ResourceDetailsT>(value);
  }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  SpaceResourceSummary& WithResourceDetails(ResourceDetailsT&& value) {
    SetResourceDetails(std::forward<ResourceDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  SpaceResourceSummary& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SpaceResourceSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  SpaceQuickSightResourceType m_resourceType{SpaceQuickSightResourceType::NOT_SET};

  SpaceQuickSightResourceDetails m_resourceDetails;

  Aws::String m_resourceName;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceDetailsHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
