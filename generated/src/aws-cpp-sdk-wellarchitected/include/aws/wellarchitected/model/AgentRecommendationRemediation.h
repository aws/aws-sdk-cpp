/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/RemediationStep.h>
#include <aws/wellarchitected/model/RemediationType.h>
#include <aws/wellarchitected/model/ResourceLink.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>The core fields for a remediation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/AgentRecommendationRemediation">AWS
 * API Reference</a></p>
 */
class AgentRecommendationRemediation {
 public:
  AWS_WELLARCHITECTED_API AgentRecommendationRemediation() = default;
  AWS_WELLARCHITECTED_API AgentRecommendationRemediation(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API AgentRecommendationRemediation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the recommendation that this remediation belongs to.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  AgentRecommendationRemediation& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The remediation method.</p>
   */
  inline RemediationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RemediationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgentRecommendationRemediation& WithType(RemediationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The procedural steps to perform the remediation.</p>
   */
  inline const Aws::Vector<RemediationStep>& GetSteps() const { return m_steps; }
  inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
  template <typename StepsT = Aws::Vector<RemediationStep>>
  void SetSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps = std::forward<StepsT>(value);
  }
  template <typename StepsT = Aws::Vector<RemediationStep>>
  AgentRecommendationRemediation& WithSteps(StepsT&& value) {
    SetSteps(std::forward<StepsT>(value));
    return *this;
  }
  template <typename StepsT = RemediationStep>
  AgentRecommendationRemediation& AddSteps(StepsT&& value) {
    m_stepsHasBeenSet = true;
    m_steps.emplace_back(std::forward<StepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>External references associated with the steps.</p>
   */
  inline const Aws::Vector<ResourceLink>& GetResourceLinks() const { return m_resourceLinks; }
  inline bool ResourceLinksHasBeenSet() const { return m_resourceLinksHasBeenSet; }
  template <typename ResourceLinksT = Aws::Vector<ResourceLink>>
  void SetResourceLinks(ResourceLinksT&& value) {
    m_resourceLinksHasBeenSet = true;
    m_resourceLinks = std::forward<ResourceLinksT>(value);
  }
  template <typename ResourceLinksT = Aws::Vector<ResourceLink>>
  AgentRecommendationRemediation& WithResourceLinks(ResourceLinksT&& value) {
    SetResourceLinks(std::forward<ResourceLinksT>(value));
    return *this;
  }
  template <typename ResourceLinksT = ResourceLink>
  AgentRecommendationRemediation& AddResourceLinks(ResourceLinksT&& value) {
    m_resourceLinksHasBeenSet = true;
    m_resourceLinks.emplace_back(std::forward<ResourceLinksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created this remediation.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  AgentRecommendationRemediation& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the remediation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentRecommendationRemediation& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last modified this remediation.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  AgentRecommendationRemediation& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the remediation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  AgentRecommendationRemediation& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  RemediationType m_type{RemediationType::NOT_SET};

  Aws::Vector<RemediationStep> m_steps;

  Aws::Vector<ResourceLink> m_resourceLinks;

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_lastModifiedBy;

  Aws::Utils::DateTime m_lastModifiedAt{};
  bool m_recommendationArnHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_stepsHasBeenSet = false;
  bool m_resourceLinksHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
