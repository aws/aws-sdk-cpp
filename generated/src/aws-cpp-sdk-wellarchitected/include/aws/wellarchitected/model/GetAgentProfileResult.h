/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/AggregationConfiguration.h>
#include <aws/wellarchitected/model/Pillar.h>
#include <aws/wellarchitected/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class GetAgentProfileResult {
 public:
  AWS_WELLARCHITECTED_API GetAgentProfileResult() = default;
  AWS_WELLARCHITECTED_API GetAgentProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API GetAgentProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The system name of the profile.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAgentProfileResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the profile.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  GetAgentProfileResult& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAgentProfileResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business overview of the profile.</p>
   */
  inline const Aws::String& GetBusinessOverview() const { return m_businessOverview; }
  template <typename BusinessOverviewT = Aws::String>
  void SetBusinessOverview(BusinessOverviewT&& value) {
    m_businessOverviewHasBeenSet = true;
    m_businessOverview = std::forward<BusinessOverviewT>(value);
  }
  template <typename BusinessOverviewT = Aws::String>
  GetAgentProfileResult& WithBusinessOverview(BusinessOverviewT&& value) {
    SetBusinessOverview(std::forward<BusinessOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Well-Architected Tool Framework pillars associated with the profile.</p>
   */
  inline const Aws::Vector<Pillar>& GetPillars() const { return m_pillars; }
  template <typename PillarsT = Aws::Vector<Pillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<Pillar>>
  GetAgentProfileResult& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline GetAgentProfileResult& AddPillars(Pillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether deletion protection is enabled.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline GetAgentProfileResult& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM execution role.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  GetAgentProfileResult& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregation configuration.</p>
   */
  inline const Aws::Vector<AggregationConfiguration>& GetAggregationConfiguration() const { return m_aggregationConfiguration; }
  template <typename AggregationConfigurationT = Aws::Vector<AggregationConfiguration>>
  void SetAggregationConfiguration(AggregationConfigurationT&& value) {
    m_aggregationConfigurationHasBeenSet = true;
    m_aggregationConfiguration = std::forward<AggregationConfigurationT>(value);
  }
  template <typename AggregationConfigurationT = Aws::Vector<AggregationConfiguration>>
  GetAgentProfileResult& WithAggregationConfiguration(AggregationConfigurationT&& value) {
    SetAggregationConfiguration(std::forward<AggregationConfigurationT>(value));
    return *this;
  }
  template <typename AggregationConfigurationT = AggregationConfiguration>
  GetAgentProfileResult& AddAggregationConfiguration(AggregationConfigurationT&& value) {
    m_aggregationConfigurationHasBeenSet = true;
    m_aggregationConfiguration.emplace_back(std::forward<AggregationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the profile.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetAgentProfileResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the profile is valid for scheduled recommendation
   * generation.</p>
   */
  inline bool GetEligibleForScheduledGeneration() const { return m_eligibleForScheduledGeneration; }
  inline void SetEligibleForScheduledGeneration(bool value) {
    m_eligibleForScheduledGenerationHasBeenSet = true;
    m_eligibleForScheduledGeneration = value;
  }
  inline GetAgentProfileResult& WithEligibleForScheduledGeneration(bool value) {
    SetEligibleForScheduledGeneration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the profile is valid for manual architecture
   * generation.</p>
   */
  inline bool GetEligibleForArchitectureGeneration() const { return m_eligibleForArchitectureGeneration; }
  inline void SetEligibleForArchitectureGeneration(bool value) {
    m_eligibleForArchitectureGenerationHasBeenSet = true;
    m_eligibleForArchitectureGeneration = value;
  }
  inline GetAgentProfileResult& WithEligibleForArchitectureGeneration(bool value) {
    SetEligibleForArchitectureGeneration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of field paths to error messages for invalid or missing input
   * fields.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetFieldErrors() const { return m_fieldErrors; }
  template <typename FieldErrorsT = Aws::Map<Aws::String, Aws::String>>
  void SetFieldErrors(FieldErrorsT&& value) {
    m_fieldErrorsHasBeenSet = true;
    m_fieldErrors = std::forward<FieldErrorsT>(value);
  }
  template <typename FieldErrorsT = Aws::Map<Aws::String, Aws::String>>
  GetAgentProfileResult& WithFieldErrors(FieldErrorsT&& value) {
    SetFieldErrors(std::forward<FieldErrorsT>(value));
    return *this;
  }
  template <typename FieldErrorsKeyT = Aws::String, typename FieldErrorsValueT = Aws::String>
  GetAgentProfileResult& AddFieldErrors(FieldErrorsKeyT&& key, FieldErrorsValueT&& value) {
    m_fieldErrorsHasBeenSet = true;
    m_fieldErrors.emplace(std::forward<FieldErrorsKeyT>(key), std::forward<FieldErrorsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the profile.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  GetAgentProfileResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  GetAgentProfileResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created this profile.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetAgentProfileResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the profile was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgentProfileResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last modified this profile.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  GetAgentProfileResult& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the profile was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  GetAgentProfileResult& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAgentProfileResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_displayName;

  Aws::String m_description;

  Aws::String m_businessOverview;

  Aws::Vector<Pillar> m_pillars;

  bool m_deletionProtection{false};

  Aws::String m_executionRoleArn;

  Aws::Vector<AggregationConfiguration> m_aggregationConfiguration;

  Aws::String m_arn;

  bool m_eligibleForScheduledGeneration{false};

  bool m_eligibleForArchitectureGeneration{false};

  Aws::Map<Aws::String, Aws::String> m_fieldErrors;

  Aws::Vector<Tag> m_tags;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_lastModifiedBy;

  Aws::Utils::DateTime m_lastModifiedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_businessOverviewHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_aggregationConfigurationHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_eligibleForScheduledGenerationHasBeenSet = false;
  bool m_eligibleForArchitectureGenerationHasBeenSet = false;
  bool m_fieldErrorsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
