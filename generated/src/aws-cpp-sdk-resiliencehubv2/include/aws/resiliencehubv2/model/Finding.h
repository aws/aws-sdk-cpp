/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/FailureCategory.h>
#include <aws/resiliencehubv2/model/FindingSeverity.h>
#include <aws/resiliencehubv2/model/FindingStatus.h>
#include <aws/resiliencehubv2/model/InfrastructureAndCodeRecommendation.h>
#include <aws/resiliencehubv2/model/ObservabilityRecommendation.h>
#include <aws/resiliencehubv2/model/PolicyComponent.h>
#include <aws/resiliencehubv2/model/TestingRecommendation.h>

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
 * <p>Represents a resilience finding from a failure mode assessment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Finding">AWS
 * API Reference</a></p>
 */
class Finding {
 public:
  AWS_RESILIENCEHUBV2_API Finding() = default;
  AWS_RESILIENCEHUBV2_API Finding(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the finding.</p>
   */
  inline const Aws::String& GetFindingId() const { return m_findingId; }
  inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }
  template <typename FindingIdT = Aws::String>
  void SetFindingId(FindingIdT&& value) {
    m_findingIdHasBeenSet = true;
    m_findingId = std::forward<FindingIdT>(value);
  }
  template <typename FindingIdT = Aws::String>
  Finding& WithFindingId(FindingIdT&& value) {
    SetFindingId(std::forward<FindingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the finding.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Finding& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Finding& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure category of the finding.</p>
   */
  inline FailureCategory GetFailureCategory() const { return m_failureCategory; }
  inline bool FailureCategoryHasBeenSet() const { return m_failureCategoryHasBeenSet; }
  inline void SetFailureCategory(FailureCategory value) {
    m_failureCategoryHasBeenSet = true;
    m_failureCategory = value;
  }
  inline Finding& WithFailureCategory(FailureCategory value) {
    SetFailureCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the finding.</p>
   */
  inline FindingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FindingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Finding& WithStatus(FindingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasoning behind the finding.</p>
   */
  inline const Aws::String& GetReasoning() const { return m_reasoning; }
  inline bool ReasoningHasBeenSet() const { return m_reasoningHasBeenSet; }
  template <typename ReasoningT = Aws::String>
  void SetReasoning(ReasoningT&& value) {
    m_reasoningHasBeenSet = true;
    m_reasoning = std::forward<ReasoningT>(value);
  }
  template <typename ReasoningT = Aws::String>
  Finding& WithReasoning(ReasoningT&& value) {
    SetReasoning(std::forward<ReasoningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A user-provided comment about the finding.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  Finding& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The severity of the finding.</p>
   */
  inline FindingSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(FindingSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline Finding& WithSeverity(FindingSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service functions associated with the finding.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServiceFunctions() const { return m_serviceFunctions; }
  inline bool ServiceFunctionsHasBeenSet() const { return m_serviceFunctionsHasBeenSet; }
  template <typename ServiceFunctionsT = Aws::Vector<Aws::String>>
  void SetServiceFunctions(ServiceFunctionsT&& value) {
    m_serviceFunctionsHasBeenSet = true;
    m_serviceFunctions = std::forward<ServiceFunctionsT>(value);
  }
  template <typename ServiceFunctionsT = Aws::Vector<Aws::String>>
  Finding& WithServiceFunctions(ServiceFunctionsT&& value) {
    SetServiceFunctions(std::forward<ServiceFunctionsT>(value));
    return *this;
  }
  template <typename ServiceFunctionsT = Aws::String>
  Finding& AddServiceFunctions(ServiceFunctionsT&& value) {
    m_serviceFunctionsHasBeenSet = true;
    m_serviceFunctions.emplace_back(std::forward<ServiceFunctionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy component associated with the finding.</p>
   */
  inline PolicyComponent GetPolicyComponent() const { return m_policyComponent; }
  inline bool PolicyComponentHasBeenSet() const { return m_policyComponentHasBeenSet; }
  inline void SetPolicyComponent(PolicyComponent value) {
    m_policyComponentHasBeenSet = true;
    m_policyComponent = value;
  }
  inline Finding& WithPolicyComponent(PolicyComponent value) {
    SetPolicyComponent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Infrastructure and code recommendations to address the finding.</p>
   */
  inline const Aws::Vector<InfrastructureAndCodeRecommendation>& GetInfrastructureAndCodeRecommendations() const {
    return m_infrastructureAndCodeRecommendations;
  }
  inline bool InfrastructureAndCodeRecommendationsHasBeenSet() const { return m_infrastructureAndCodeRecommendationsHasBeenSet; }
  template <typename InfrastructureAndCodeRecommendationsT = Aws::Vector<InfrastructureAndCodeRecommendation>>
  void SetInfrastructureAndCodeRecommendations(InfrastructureAndCodeRecommendationsT&& value) {
    m_infrastructureAndCodeRecommendationsHasBeenSet = true;
    m_infrastructureAndCodeRecommendations = std::forward<InfrastructureAndCodeRecommendationsT>(value);
  }
  template <typename InfrastructureAndCodeRecommendationsT = Aws::Vector<InfrastructureAndCodeRecommendation>>
  Finding& WithInfrastructureAndCodeRecommendations(InfrastructureAndCodeRecommendationsT&& value) {
    SetInfrastructureAndCodeRecommendations(std::forward<InfrastructureAndCodeRecommendationsT>(value));
    return *this;
  }
  template <typename InfrastructureAndCodeRecommendationsT = InfrastructureAndCodeRecommendation>
  Finding& AddInfrastructureAndCodeRecommendations(InfrastructureAndCodeRecommendationsT&& value) {
    m_infrastructureAndCodeRecommendationsHasBeenSet = true;
    m_infrastructureAndCodeRecommendations.emplace_back(std::forward<InfrastructureAndCodeRecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Observability recommendations to address the finding.</p>
   */
  inline const Aws::Vector<ObservabilityRecommendation>& GetObservabilityRecommendations() const { return m_observabilityRecommendations; }
  inline bool ObservabilityRecommendationsHasBeenSet() const { return m_observabilityRecommendationsHasBeenSet; }
  template <typename ObservabilityRecommendationsT = Aws::Vector<ObservabilityRecommendation>>
  void SetObservabilityRecommendations(ObservabilityRecommendationsT&& value) {
    m_observabilityRecommendationsHasBeenSet = true;
    m_observabilityRecommendations = std::forward<ObservabilityRecommendationsT>(value);
  }
  template <typename ObservabilityRecommendationsT = Aws::Vector<ObservabilityRecommendation>>
  Finding& WithObservabilityRecommendations(ObservabilityRecommendationsT&& value) {
    SetObservabilityRecommendations(std::forward<ObservabilityRecommendationsT>(value));
    return *this;
  }
  template <typename ObservabilityRecommendationsT = ObservabilityRecommendation>
  Finding& AddObservabilityRecommendations(ObservabilityRecommendationsT&& value) {
    m_observabilityRecommendationsHasBeenSet = true;
    m_observabilityRecommendations.emplace_back(std::forward<ObservabilityRecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Testing recommendations to address the finding.</p>
   */
  inline const Aws::Vector<TestingRecommendation>& GetTestingRecommendations() const { return m_testingRecommendations; }
  inline bool TestingRecommendationsHasBeenSet() const { return m_testingRecommendationsHasBeenSet; }
  template <typename TestingRecommendationsT = Aws::Vector<TestingRecommendation>>
  void SetTestingRecommendations(TestingRecommendationsT&& value) {
    m_testingRecommendationsHasBeenSet = true;
    m_testingRecommendations = std::forward<TestingRecommendationsT>(value);
  }
  template <typename TestingRecommendationsT = Aws::Vector<TestingRecommendation>>
  Finding& WithTestingRecommendations(TestingRecommendationsT&& value) {
    SetTestingRecommendations(std::forward<TestingRecommendationsT>(value));
    return *this;
  }
  template <typename TestingRecommendationsT = TestingRecommendation>
  Finding& AddTestingRecommendations(TestingRecommendationsT&& value) {
    m_testingRecommendationsHasBeenSet = true;
    m_testingRecommendations.emplace_back(std::forward<TestingRecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the finding was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Finding& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingId;

  Aws::String m_name;

  Aws::String m_description;

  FailureCategory m_failureCategory{FailureCategory::NOT_SET};

  FindingStatus m_status{FindingStatus::NOT_SET};

  Aws::String m_reasoning;

  Aws::String m_comment;

  FindingSeverity m_severity{FindingSeverity::NOT_SET};

  Aws::Vector<Aws::String> m_serviceFunctions;

  PolicyComponent m_policyComponent{PolicyComponent::NOT_SET};

  Aws::Vector<InfrastructureAndCodeRecommendation> m_infrastructureAndCodeRecommendations;

  Aws::Vector<ObservabilityRecommendation> m_observabilityRecommendations;

  Aws::Vector<TestingRecommendation> m_testingRecommendations;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_findingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_failureCategoryHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_reasoningHasBeenSet = false;
  bool m_commentHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_serviceFunctionsHasBeenSet = false;
  bool m_policyComponentHasBeenSet = false;
  bool m_infrastructureAndCodeRecommendationsHasBeenSet = false;
  bool m_observabilityRecommendationsHasBeenSet = false;
  bool m_testingRecommendationsHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
