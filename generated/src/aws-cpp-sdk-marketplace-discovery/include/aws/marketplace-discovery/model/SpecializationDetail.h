/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/Specialization.h>
#include <aws/marketplace-discovery/model/SpecializationCategory.h>

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
 * <p>A specialization result for a listing. Exactly one member is set: a
 * specialization or a category under one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SpecializationDetail">AWS
 * API Reference</a></p>
 */
class SpecializationDetail {
 public:
  AWS_MARKETPLACEDISCOVERY_API SpecializationDetail() = default;
  AWS_MARKETPLACEDISCOVERY_API SpecializationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SpecializationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A specialization earned for the listing.</p>
   */
  inline const Specialization& GetSpecialization() const { return m_specialization; }
  inline bool SpecializationHasBeenSet() const { return m_specializationHasBeenSet; }
  template <typename SpecializationT = Specialization>
  void SetSpecialization(SpecializationT&& value) {
    m_specializationHasBeenSet = true;
    m_specialization = std::forward<SpecializationT>(value);
  }
  template <typename SpecializationT = Specialization>
  SpecializationDetail& WithSpecialization(SpecializationT&& value) {
    SetSpecialization(std::forward<SpecializationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A category under a specialization that the listing earned.</p>
   */
  inline const SpecializationCategory& GetSpecializationCategory() const { return m_specializationCategory; }
  inline bool SpecializationCategoryHasBeenSet() const { return m_specializationCategoryHasBeenSet; }
  template <typename SpecializationCategoryT = SpecializationCategory>
  void SetSpecializationCategory(SpecializationCategoryT&& value) {
    m_specializationCategoryHasBeenSet = true;
    m_specializationCategory = std::forward<SpecializationCategoryT>(value);
  }
  template <typename SpecializationCategoryT = SpecializationCategory>
  SpecializationDetail& WithSpecializationCategory(SpecializationCategoryT&& value) {
    SetSpecializationCategory(std::forward<SpecializationCategoryT>(value));
    return *this;
  }
  ///@}
 private:
  Specialization m_specialization;

  SpecializationCategory m_specializationCategory;
  bool m_specializationHasBeenSet = false;
  bool m_specializationCategoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
