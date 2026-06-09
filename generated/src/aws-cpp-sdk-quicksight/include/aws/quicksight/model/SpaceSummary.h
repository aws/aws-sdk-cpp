/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>A summary of an Amazon QuickSight space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SpaceSummary">AWS
 * API Reference</a></p>
 */
class SpaceSummary {
 public:
  AWS_QUICKSIGHT_API SpaceSummary() = default;
  AWS_QUICKSIGHT_API SpaceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SpaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  SpaceSummary& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the space.</p>
   */
  inline const Aws::String& GetSpaceArn() const { return m_spaceArn; }
  inline bool SpaceArnHasBeenSet() const { return m_spaceArnHasBeenSet; }
  template <typename SpaceArnT = Aws::String>
  void SetSpaceArn(SpaceArnT&& value) {
    m_spaceArnHasBeenSet = true;
    m_spaceArn = std::forward<SpaceArnT>(value);
  }
  template <typename SpaceArnT = Aws::String>
  SpaceSummary& WithSpaceArn(SpaceArnT&& value) {
    SetSpaceArn(std::forward<SpaceArnT>(value));
    return *this;
  }
  ///@}

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
  SpaceSummary& WithName(NameT&& value) {
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
  SpaceSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  SpaceSummary& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline SpaceSummary& WithConsumedSourceSize(long long value) {
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
  inline SpaceSummary& WithConsumedSourceDocCount(int value) {
    SetConsumedSourceDocCount(value);
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
  SpaceSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  SpaceSummary& WithCreatedBy(CreatedByT&& value) {
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
  SpaceSummary& WithCreatedByArn(CreatedByArnT&& value) {
    SetCreatedByArn(std::forward<CreatedByArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of resources in the space.</p>
   */
  inline int GetResourcesCount() const { return m_resourcesCount; }
  inline bool ResourcesCountHasBeenSet() const { return m_resourcesCountHasBeenSet; }
  inline void SetResourcesCount(int value) {
    m_resourcesCountHasBeenSet = true;
    m_resourcesCount = value;
  }
  inline SpaceSummary& WithResourcesCount(int value) {
    SetResourcesCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_spaceId;

  Aws::String m_spaceArn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_updatedAt{};

  long long m_consumedSourceSize{0};

  int m_consumedSourceDocCount{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_createdByArn;

  int m_resourcesCount{0};
  bool m_spaceIdHasBeenSet = false;
  bool m_spaceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_consumedSourceSizeHasBeenSet = false;
  bool m_consumedSourceDocCountHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdByArnHasBeenSet = false;
  bool m_resourcesCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
