/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/FailureCategory.h>
#include <aws/resiliencehubv2/model/FindingSeverity.h>
#include <aws/resiliencehubv2/model/FindingStatus.h>
#include <aws/resiliencehubv2/model/PolicyComponent.h>

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
 * <p>Contains summary information about a finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/FindingSummary">AWS
 * API Reference</a></p>
 */
class FindingSummary {
 public:
  AWS_RESILIENCEHUBV2_API FindingSummary() = default;
  AWS_RESILIENCEHUBV2_API FindingSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API FindingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  FindingSummary& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

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
  FindingSummary& WithFindingId(FindingIdT&& value) {
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
  FindingSummary& WithName(NameT&& value) {
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
  FindingSummary& WithDescription(DescriptionT&& value) {
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
  inline FindingSummary& WithFailureCategory(FailureCategory value) {
    SetFailureCategory(value);
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
  inline FindingSummary& WithSeverity(FindingSeverity value) {
    SetSeverity(value);
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
  inline FindingSummary& WithStatus(FindingStatus value) {
    SetStatus(value);
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
  inline FindingSummary& WithPolicyComponent(PolicyComponent value) {
    SetPolicyComponent(value);
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
  FindingSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_findingId;

  Aws::String m_name;

  Aws::String m_description;

  FailureCategory m_failureCategory{FailureCategory::NOT_SET};

  FindingSeverity m_severity{FindingSeverity::NOT_SET};

  FindingStatus m_status{FindingStatus::NOT_SET};

  PolicyComponent m_policyComponent{PolicyComponent::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_serviceArnHasBeenSet = false;
  bool m_findingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_failureCategoryHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_policyComponentHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
