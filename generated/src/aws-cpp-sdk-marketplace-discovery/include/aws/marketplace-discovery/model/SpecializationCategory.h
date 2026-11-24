/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A category under a specialization that the listing earned.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SpecializationCategory">AWS
 * API Reference</a></p>
 */
class SpecializationCategory {
 public:
  AWS_MARKETPLACEDISCOVERY_API SpecializationCategory() = default;
  AWS_MARKETPLACEDISCOVERY_API SpecializationCategory(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SpecializationCategory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the category.</p>
   */
  inline const Aws::String& GetSpecializationCategoryId() const { return m_specializationCategoryId; }
  inline bool SpecializationCategoryIdHasBeenSet() const { return m_specializationCategoryIdHasBeenSet; }
  template <typename SpecializationCategoryIdT = Aws::String>
  void SetSpecializationCategoryId(SpecializationCategoryIdT&& value) {
    m_specializationCategoryIdHasBeenSet = true;
    m_specializationCategoryId = std::forward<SpecializationCategoryIdT>(value);
  }
  template <typename SpecializationCategoryIdT = Aws::String>
  SpecializationCategory& WithSpecializationCategoryId(SpecializationCategoryIdT&& value) {
    SetSpecializationCategoryId(std::forward<SpecializationCategoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the category displayed to you.</p>
   */
  inline const Aws::String& GetSpecializationCategoryName() const { return m_specializationCategoryName; }
  inline bool SpecializationCategoryNameHasBeenSet() const { return m_specializationCategoryNameHasBeenSet; }
  template <typename SpecializationCategoryNameT = Aws::String>
  void SetSpecializationCategoryName(SpecializationCategoryNameT&& value) {
    m_specializationCategoryNameHasBeenSet = true;
    m_specializationCategoryName = std::forward<SpecializationCategoryNameT>(value);
  }
  template <typename SpecializationCategoryNameT = Aws::String>
  SpecializationCategory& WithSpecializationCategoryName(SpecializationCategoryNameT&& value) {
    SetSpecializationCategoryName(std::forward<SpecializationCategoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the parent specialization.</p>
   */
  inline const Aws::String& GetParentSpecializationId() const { return m_parentSpecializationId; }
  inline bool ParentSpecializationIdHasBeenSet() const { return m_parentSpecializationIdHasBeenSet; }
  template <typename ParentSpecializationIdT = Aws::String>
  void SetParentSpecializationId(ParentSpecializationIdT&& value) {
    m_parentSpecializationIdHasBeenSet = true;
    m_parentSpecializationId = std::forward<ParentSpecializationIdT>(value);
  }
  template <typename ParentSpecializationIdT = Aws::String>
  SpecializationCategory& WithParentSpecializationId(ParentSpecializationIdT&& value) {
    SetParentSpecializationId(std::forward<ParentSpecializationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_specializationCategoryId;

  Aws::String m_specializationCategoryName;

  Aws::String m_parentSpecializationId;
  bool m_specializationCategoryIdHasBeenSet = false;
  bool m_specializationCategoryNameHasBeenSet = false;
  bool m_parentSpecializationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
