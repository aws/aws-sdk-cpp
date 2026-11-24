/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/CaseStudyResource.h>
#include <aws/marketplace-discovery/model/EngagementDates.h>

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
 * <p>A case study associated with a listing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/CaseStudy">AWS
 * API Reference</a></p>
 */
class CaseStudy {
 public:
  AWS_MARKETPLACEDISCOVERY_API CaseStudy() = default;
  AWS_MARKETPLACEDISCOVERY_API CaseStudy(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API CaseStudy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the case study.</p>
   */
  inline const Aws::String& GetCaseStudyId() const { return m_caseStudyId; }
  inline bool CaseStudyIdHasBeenSet() const { return m_caseStudyIdHasBeenSet; }
  template <typename CaseStudyIdT = Aws::String>
  void SetCaseStudyId(CaseStudyIdT&& value) {
    m_caseStudyIdHasBeenSet = true;
    m_caseStudyId = std::forward<CaseStudyIdT>(value);
  }
  template <typename CaseStudyIdT = Aws::String>
  CaseStudy& WithCaseStudyId(CaseStudyIdT&& value) {
    SetCaseStudyId(std::forward<CaseStudyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The case study name displayed to you.</p>
   */
  inline const Aws::String& GetCaseStudyName() const { return m_caseStudyName; }
  inline bool CaseStudyNameHasBeenSet() const { return m_caseStudyNameHasBeenSet; }
  template <typename CaseStudyNameT = Aws::String>
  void SetCaseStudyName(CaseStudyNameT&& value) {
    m_caseStudyNameHasBeenSet = true;
    m_caseStudyName = std::forward<CaseStudyNameT>(value);
  }
  template <typename CaseStudyNameT = Aws::String>
  CaseStudy& WithCaseStudyName(CaseStudyNameT&& value) {
    SetCaseStudyName(std::forward<CaseStudyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A brief value proposition for the case study.</p>
   */
  inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
  inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
  template <typename ShortDescriptionT = Aws::String>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = Aws::String>
  CaseStudy& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key implementation dates for the engagement.</p>
   */
  inline const EngagementDates& GetEngagementDates() const { return m_engagementDates; }
  inline bool EngagementDatesHasBeenSet() const { return m_engagementDatesHasBeenSet; }
  template <typename EngagementDatesT = EngagementDates>
  void SetEngagementDates(EngagementDatesT&& value) {
    m_engagementDatesHasBeenSet = true;
    m_engagementDates = std::forward<EngagementDatesT>(value);
  }
  template <typename EngagementDatesT = EngagementDates>
  CaseStudy& WithEngagementDates(EngagementDatesT&& value) {
    SetEngagementDates(std::forward<EngagementDatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business challenge that the engagement addresses.</p>
   */
  inline const Aws::String& GetChallenge() const { return m_challenge; }
  inline bool ChallengeHasBeenSet() const { return m_challengeHasBeenSet; }
  template <typename ChallengeT = Aws::String>
  void SetChallenge(ChallengeT&& value) {
    m_challengeHasBeenSet = true;
    m_challenge = std::forward<ChallengeT>(value);
  }
  template <typename ChallengeT = Aws::String>
  CaseStudy& WithChallenge(ChallengeT&& value) {
    SetChallenge(std::forward<ChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the partner resolved the challenge.</p>
   */
  inline const Aws::String& GetResolution() const { return m_resolution; }
  inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
  template <typename ResolutionT = Aws::String>
  void SetResolution(ResolutionT&& value) {
    m_resolutionHasBeenSet = true;
    m_resolution = std::forward<ResolutionT>(value);
  }
  template <typename ResolutionT = Aws::String>
  CaseStudy& WithResolution(ResolutionT&& value) {
    SetResolution(std::forward<ResolutionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The implementation approach used for the engagement.</p>
   */
  inline const Aws::String& GetImplementationApproach() const { return m_implementationApproach; }
  inline bool ImplementationApproachHasBeenSet() const { return m_implementationApproachHasBeenSet; }
  template <typename ImplementationApproachT = Aws::String>
  void SetImplementationApproach(ImplementationApproachT&& value) {
    m_implementationApproachHasBeenSet = true;
    m_implementationApproach = std::forward<ImplementationApproachT>(value);
  }
  template <typename ImplementationApproachT = Aws::String>
  CaseStudy& WithImplementationApproach(ImplementationApproachT&& value) {
    SetImplementationApproach(std::forward<ImplementationApproachT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results and outcomes achieved by the engagement.</p>
   */
  inline const Aws::String& GetOutcome() const { return m_outcome; }
  inline bool OutcomeHasBeenSet() const { return m_outcomeHasBeenSet; }
  template <typename OutcomeT = Aws::String>
  void SetOutcome(OutcomeT&& value) {
    m_outcomeHasBeenSet = true;
    m_outcome = std::forward<OutcomeT>(value);
  }
  template <typename OutcomeT = Aws::String>
  CaseStudy& WithOutcome(OutcomeT&& value) {
    SetOutcome(std::forward<OutcomeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resources related to the case study.</p>
   */
  inline const Aws::Vector<CaseStudyResource>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<CaseStudyResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<CaseStudyResource>>
  CaseStudy& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = CaseStudyResource>
  CaseStudy& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseStudyId;

  Aws::String m_caseStudyName;

  Aws::String m_shortDescription;

  EngagementDates m_engagementDates;

  Aws::String m_challenge;

  Aws::String m_resolution;

  Aws::String m_implementationApproach;

  Aws::String m_outcome;

  Aws::Vector<CaseStudyResource> m_resources;
  bool m_caseStudyIdHasBeenSet = false;
  bool m_caseStudyNameHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_engagementDatesHasBeenSet = false;
  bool m_challengeHasBeenSet = false;
  bool m_resolutionHasBeenSet = false;
  bool m_implementationApproachHasBeenSet = false;
  bool m_outcomeHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
