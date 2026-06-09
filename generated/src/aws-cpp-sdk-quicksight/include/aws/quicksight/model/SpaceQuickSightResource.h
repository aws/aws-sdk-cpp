/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>A QuickSight resource that is associated with a space.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpaceQuickSightResource">AWS
 * API Reference</a></p>
 */
class SpaceQuickSightResource {
 public:
  AWS_QUICKSIGHT_API SpaceQuickSightResource() = default;
  AWS_QUICKSIGHT_API SpaceQuickSightResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SpaceQuickSightResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the QuickSight resource.</p>
   */
  inline SpaceQuickSightResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(SpaceQuickSightResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline SpaceQuickSightResource& WithResourceType(SpaceQuickSightResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the QuickSight resource.</p>
   */
  inline const SpaceQuickSightResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
  inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  void SetResourceDetails(ResourceDetailsT&& value) {
    m_resourceDetailsHasBeenSet = true;
    m_resourceDetails = std::forward<ResourceDetailsT>(value);
  }
  template <typename ResourceDetailsT = SpaceQuickSightResourceDetails>
  SpaceQuickSightResource& WithResourceDetails(ResourceDetailsT&& value) {
    SetResourceDetails(std::forward<ResourceDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  SpaceQuickSightResourceType m_resourceType{SpaceQuickSightResourceType::NOT_SET};

  SpaceQuickSightResourceDetails m_resourceDetails;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
