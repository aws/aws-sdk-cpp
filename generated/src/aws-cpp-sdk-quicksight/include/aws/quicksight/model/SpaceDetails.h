/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceQuickSightResource.h>

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
 * <p>The details of an Amazon QuickSight space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpaceDetails">AWS
 * API Reference</a></p>
 */
class SpaceDetails {
 public:
  AWS_QUICKSIGHT_API SpaceDetails() = default;
  AWS_QUICKSIGHT_API SpaceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SpaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The display name of the space.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SpaceDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the space.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SpaceDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources in the space.</p>
   */
  inline const Aws::Vector<SpaceQuickSightResource>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<SpaceQuickSightResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<SpaceQuickSightResource>>
  SpaceDetails& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = SpaceQuickSightResource>
  SpaceDetails& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the space was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SpaceDetails& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the space was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SpaceDetails& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total consumed source size in bytes.</p>
   */
  inline long long GetConsumedSourceSize() const { return m_consumedSourceSize; }
  inline bool ConsumedSourceSizeHasBeenSet() const { return m_consumedSourceSizeHasBeenSet; }
  inline void SetConsumedSourceSize(long long value) {
    m_consumedSourceSizeHasBeenSet = true;
    m_consumedSourceSize = value;
  }
  inline SpaceDetails& WithConsumedSourceSize(long long value) {
    SetConsumedSourceSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of consumed source documents.</p>
   */
  inline int GetConsumedSourceDocCount() const { return m_consumedSourceDocCount; }
  inline bool ConsumedSourceDocCountHasBeenSet() const { return m_consumedSourceDocCountHasBeenSet; }
  inline void SetConsumedSourceDocCount(int value) {
    m_consumedSourceDocCountHasBeenSet = true;
    m_consumedSourceDocCount = value;
  }
  inline SpaceDetails& WithConsumedSourceDocCount(int value) {
    SetConsumedSourceDocCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user who created the space.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  SpaceDetails& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the user who created the space.</p>
   */
  inline const Aws::String& GetCreatedByArn() const { return m_createdByArn; }
  inline bool CreatedByArnHasBeenSet() const { return m_createdByArnHasBeenSet; }
  template <typename CreatedByArnT = Aws::String>
  void SetCreatedByArn(CreatedByArnT&& value) {
    m_createdByArnHasBeenSet = true;
    m_createdByArn = std::forward<CreatedByArnT>(value);
  }
  template <typename CreatedByArnT = Aws::String>
  SpaceDetails& WithCreatedByArn(CreatedByArnT&& value) {
    SetCreatedByArn(std::forward<CreatedByArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<SpaceQuickSightResource> m_resources;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  long long m_consumedSourceSize{0};

  int m_consumedSourceDocCount{0};

  Aws::String m_createdBy;

  Aws::String m_createdByArn;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_consumedSourceSizeHasBeenSet = false;
  bool m_consumedSourceDocCountHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdByArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
