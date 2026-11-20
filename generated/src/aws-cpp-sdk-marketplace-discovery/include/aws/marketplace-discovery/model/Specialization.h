/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SpecializationTypeDetail.h>

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
 * <p>A specialization earned for the listing, such as an AWS
 * Competency.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/Specialization">AWS
 * API Reference</a></p>
 */
class Specialization {
 public:
  AWS_MARKETPLACEDISCOVERY_API Specialization() = default;
  AWS_MARKETPLACEDISCOVERY_API Specialization(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Specialization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the specialization.</p>
   */
  inline const Aws::String& GetSpecializationId() const { return m_specializationId; }
  inline bool SpecializationIdHasBeenSet() const { return m_specializationIdHasBeenSet; }
  template <typename SpecializationIdT = Aws::String>
  void SetSpecializationId(SpecializationIdT&& value) {
    m_specializationIdHasBeenSet = true;
    m_specializationId = std::forward<SpecializationIdT>(value);
  }
  template <typename SpecializationIdT = Aws::String>
  Specialization& WithSpecializationId(SpecializationIdT&& value) {
    SetSpecializationId(std::forward<SpecializationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the specialization displayed to you.</p>
   */
  inline const Aws::String& GetSpecializationName() const { return m_specializationName; }
  inline bool SpecializationNameHasBeenSet() const { return m_specializationNameHasBeenSet; }
  template <typename SpecializationNameT = Aws::String>
  void SetSpecializationName(SpecializationNameT&& value) {
    m_specializationNameHasBeenSet = true;
    m_specializationName = std::forward<SpecializationNameT>(value);
  }
  template <typename SpecializationNameT = Aws::String>
  Specialization& WithSpecializationName(SpecializationNameT&& value) {
    SetSpecializationName(std::forward<SpecializationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the specialization displayed to you.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Specialization& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types that categorize this specialization.</p>
   */
  inline const Aws::Vector<SpecializationTypeDetail>& GetSpecializationTypes() const { return m_specializationTypes; }
  inline bool SpecializationTypesHasBeenSet() const { return m_specializationTypesHasBeenSet; }
  template <typename SpecializationTypesT = Aws::Vector<SpecializationTypeDetail>>
  void SetSpecializationTypes(SpecializationTypesT&& value) {
    m_specializationTypesHasBeenSet = true;
    m_specializationTypes = std::forward<SpecializationTypesT>(value);
  }
  template <typename SpecializationTypesT = Aws::Vector<SpecializationTypeDetail>>
  Specialization& WithSpecializationTypes(SpecializationTypesT&& value) {
    SetSpecializationTypes(std::forward<SpecializationTypesT>(value));
    return *this;
  }
  template <typename SpecializationTypesT = SpecializationTypeDetail>
  Specialization& AddSpecializationTypes(SpecializationTypesT&& value) {
    m_specializationTypesHasBeenSet = true;
    m_specializationTypes.emplace_back(std::forward<SpecializationTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifiers of the case studies that this specialization cites. Retrieve
   * the case studies with the <code>CASE_STUDY</code> attribute type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCaseStudyIds() const { return m_caseStudyIds; }
  inline bool CaseStudyIdsHasBeenSet() const { return m_caseStudyIdsHasBeenSet; }
  template <typename CaseStudyIdsT = Aws::Vector<Aws::String>>
  void SetCaseStudyIds(CaseStudyIdsT&& value) {
    m_caseStudyIdsHasBeenSet = true;
    m_caseStudyIds = std::forward<CaseStudyIdsT>(value);
  }
  template <typename CaseStudyIdsT = Aws::Vector<Aws::String>>
  Specialization& WithCaseStudyIds(CaseStudyIdsT&& value) {
    SetCaseStudyIds(std::forward<CaseStudyIdsT>(value));
    return *this;
  }
  template <typename CaseStudyIdsT = Aws::String>
  Specialization& AddCaseStudyIds(CaseStudyIdsT&& value) {
    m_caseStudyIdsHasBeenSet = true;
    m_caseStudyIds.emplace_back(std::forward<CaseStudyIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_specializationId;

  Aws::String m_specializationName;

  Aws::String m_description;

  Aws::Vector<SpecializationTypeDetail> m_specializationTypes;

  Aws::Vector<Aws::String> m_caseStudyIds;
  bool m_specializationIdHasBeenSet = false;
  bool m_specializationNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_specializationTypesHasBeenSet = false;
  bool m_caseStudyIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
