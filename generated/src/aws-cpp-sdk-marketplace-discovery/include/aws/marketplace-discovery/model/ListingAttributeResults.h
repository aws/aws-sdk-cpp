/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/CaseStudy.h>
#include <aws/marketplace-discovery/model/SpecializationDetail.h>
#include <aws/marketplace-discovery/model/TrustCenterCertificationAttribute.h>
#include <aws/marketplace-discovery/model/TrustCenterControl.h>
#include <aws/marketplace-discovery/model/TrustCenterDocumentAttribute.h>
#include <aws/marketplace-discovery/model/TrustCenterFaqAttribute.h>
#include <aws/marketplace-discovery/model/TrustCenterSource.h>
#include <aws/marketplace-discovery/model/TrustCenterUpdateAttribute.h>

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
 * <p>An attribute associated with a listing. Each entry contains one attribute
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListingAttributeResults">AWS
 * API Reference</a></p>
 */
class ListingAttributeResults {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListingAttributeResults() = default;
  AWS_MARKETPLACEDISCOVERY_API ListingAttributeResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ListingAttributeResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A case study associated with the listing.</p>
   */
  inline const CaseStudy& GetCaseStudy() const { return m_caseStudy; }
  inline bool CaseStudyHasBeenSet() const { return m_caseStudyHasBeenSet; }
  template <typename CaseStudyT = CaseStudy>
  void SetCaseStudy(CaseStudyT&& value) {
    m_caseStudyHasBeenSet = true;
    m_caseStudy = std::forward<CaseStudyT>(value);
  }
  template <typename CaseStudyT = CaseStudy>
  ListingAttributeResults& WithCaseStudy(CaseStudyT&& value) {
    SetCaseStudy(std::forward<CaseStudyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A specialization earned for the listing. Each result is either a
   * specialization or a category under a specialization.</p>
   */
  inline const SpecializationDetail& GetSpecializationDetail() const { return m_specializationDetail; }
  inline bool SpecializationDetailHasBeenSet() const { return m_specializationDetailHasBeenSet; }
  template <typename SpecializationDetailT = SpecializationDetail>
  void SetSpecializationDetail(SpecializationDetailT&& value) {
    m_specializationDetailHasBeenSet = true;
    m_specializationDetail = std::forward<SpecializationDetailT>(value);
  }
  template <typename SpecializationDetailT = SpecializationDetail>
  ListingAttributeResults& WithSpecializationDetail(SpecializationDetailT&& value) {
    SetSpecializationDetail(std::forward<SpecializationDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center source associated with the listing.</p>
   */
  inline const TrustCenterSource& GetTrustCenterSource() const { return m_trustCenterSource; }
  inline bool TrustCenterSourceHasBeenSet() const { return m_trustCenterSourceHasBeenSet; }
  template <typename TrustCenterSourceT = TrustCenterSource>
  void SetTrustCenterSource(TrustCenterSourceT&& value) {
    m_trustCenterSourceHasBeenSet = true;
    m_trustCenterSource = std::forward<TrustCenterSourceT>(value);
  }
  template <typename TrustCenterSourceT = TrustCenterSource>
  ListingAttributeResults& WithTrustCenterSource(TrustCenterSourceT&& value) {
    SetTrustCenterSource(std::forward<TrustCenterSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center certification associated with the listing.</p>
   */
  inline const TrustCenterCertificationAttribute& GetTrustCenterCertification() const { return m_trustCenterCertification; }
  inline bool TrustCenterCertificationHasBeenSet() const { return m_trustCenterCertificationHasBeenSet; }
  template <typename TrustCenterCertificationT = TrustCenterCertificationAttribute>
  void SetTrustCenterCertification(TrustCenterCertificationT&& value) {
    m_trustCenterCertificationHasBeenSet = true;
    m_trustCenterCertification = std::forward<TrustCenterCertificationT>(value);
  }
  template <typename TrustCenterCertificationT = TrustCenterCertificationAttribute>
  ListingAttributeResults& WithTrustCenterCertification(TrustCenterCertificationT&& value) {
    SetTrustCenterCertification(std::forward<TrustCenterCertificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center document associated with the listing.</p>
   */
  inline const TrustCenterDocumentAttribute& GetTrustCenterDocument() const { return m_trustCenterDocument; }
  inline bool TrustCenterDocumentHasBeenSet() const { return m_trustCenterDocumentHasBeenSet; }
  template <typename TrustCenterDocumentT = TrustCenterDocumentAttribute>
  void SetTrustCenterDocument(TrustCenterDocumentT&& value) {
    m_trustCenterDocumentHasBeenSet = true;
    m_trustCenterDocument = std::forward<TrustCenterDocumentT>(value);
  }
  template <typename TrustCenterDocumentT = TrustCenterDocumentAttribute>
  ListingAttributeResults& WithTrustCenterDocument(TrustCenterDocumentT&& value) {
    SetTrustCenterDocument(std::forward<TrustCenterDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center control associated with the listing.</p>
   */
  inline const TrustCenterControl& GetTrustCenterControl() const { return m_trustCenterControl; }
  inline bool TrustCenterControlHasBeenSet() const { return m_trustCenterControlHasBeenSet; }
  template <typename TrustCenterControlT = TrustCenterControl>
  void SetTrustCenterControl(TrustCenterControlT&& value) {
    m_trustCenterControlHasBeenSet = true;
    m_trustCenterControl = std::forward<TrustCenterControlT>(value);
  }
  template <typename TrustCenterControlT = TrustCenterControl>
  ListingAttributeResults& WithTrustCenterControl(TrustCenterControlT&& value) {
    SetTrustCenterControl(std::forward<TrustCenterControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center frequently asked question associated with the listing.</p>
   */
  inline const TrustCenterFaqAttribute& GetTrustCenterFaq() const { return m_trustCenterFaq; }
  inline bool TrustCenterFaqHasBeenSet() const { return m_trustCenterFaqHasBeenSet; }
  template <typename TrustCenterFaqT = TrustCenterFaqAttribute>
  void SetTrustCenterFaq(TrustCenterFaqT&& value) {
    m_trustCenterFaqHasBeenSet = true;
    m_trustCenterFaq = std::forward<TrustCenterFaqT>(value);
  }
  template <typename TrustCenterFaqT = TrustCenterFaqAttribute>
  ListingAttributeResults& WithTrustCenterFaq(TrustCenterFaqT&& value) {
    SetTrustCenterFaq(std::forward<TrustCenterFaqT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A trust center update associated with the listing.</p>
   */
  inline const TrustCenterUpdateAttribute& GetTrustCenterUpdate() const { return m_trustCenterUpdate; }
  inline bool TrustCenterUpdateHasBeenSet() const { return m_trustCenterUpdateHasBeenSet; }
  template <typename TrustCenterUpdateT = TrustCenterUpdateAttribute>
  void SetTrustCenterUpdate(TrustCenterUpdateT&& value) {
    m_trustCenterUpdateHasBeenSet = true;
    m_trustCenterUpdate = std::forward<TrustCenterUpdateT>(value);
  }
  template <typename TrustCenterUpdateT = TrustCenterUpdateAttribute>
  ListingAttributeResults& WithTrustCenterUpdate(TrustCenterUpdateT&& value) {
    SetTrustCenterUpdate(std::forward<TrustCenterUpdateT>(value));
    return *this;
  }
  ///@}
 private:
  CaseStudy m_caseStudy;

  SpecializationDetail m_specializationDetail;

  TrustCenterSource m_trustCenterSource;

  TrustCenterCertificationAttribute m_trustCenterCertification;

  TrustCenterDocumentAttribute m_trustCenterDocument;

  TrustCenterControl m_trustCenterControl;

  TrustCenterFaqAttribute m_trustCenterFaq;

  TrustCenterUpdateAttribute m_trustCenterUpdate;
  bool m_caseStudyHasBeenSet = false;
  bool m_specializationDetailHasBeenSet = false;
  bool m_trustCenterSourceHasBeenSet = false;
  bool m_trustCenterCertificationHasBeenSet = false;
  bool m_trustCenterDocumentHasBeenSet = false;
  bool m_trustCenterControlHasBeenSet = false;
  bool m_trustCenterFaqHasBeenSet = false;
  bool m_trustCenterUpdateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
