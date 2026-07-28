/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TrustedAdvisor {
namespace Model {

/**
 * <p>Summary of a Recommendation for a specific AWS Resource</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/RecommendationForResourceSummary">AWS
 * API Reference</a></p>
 */
class RecommendationForResourceSummary {
 public:
  AWS_TRUSTEDADVISOR_API RecommendationForResourceSummary() = default;
  AWS_TRUSTEDADVISOR_API RecommendationForResourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API RecommendationForResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Check ARN</p>
   */
  inline const Aws::String& GetCheckArn() const { return m_checkArn; }
  inline bool CheckArnHasBeenSet() const { return m_checkArnHasBeenSet; }
  template <typename CheckArnT = Aws::String>
  void SetCheckArn(CheckArnT&& value) {
    m_checkArnHasBeenSet = true;
    m_checkArn = std::forward<CheckArnT>(value);
  }
  template <typename CheckArnT = Aws::String>
  RecommendationForResourceSummary& WithCheckArn(CheckArnT&& value) {
    SetCheckArn(std::forward<CheckArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Recommendation ARN</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  RecommendationForResourceSummary& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Resource ARN</p>
   */
  inline const Aws::String& GetAwsResourceArn() const { return m_awsResourceArn; }
  inline bool AwsResourceArnHasBeenSet() const { return m_awsResourceArnHasBeenSet; }
  template <typename AwsResourceArnT = Aws::String>
  void SetAwsResourceArn(AwsResourceArnT&& value) {
    m_awsResourceArnHasBeenSet = true;
    m_awsResourceArn = std::forward<AwsResourceArnT>(value);
  }
  template <typename AwsResourceArnT = Aws::String>
  RecommendationForResourceSummary& WithAwsResourceArn(AwsResourceArnT&& value) {
    SetAwsResourceArn(std::forward<AwsResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommendation</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RecommendationForResourceSummary& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the recommendation was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  RecommendationForResourceSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion status of the recommendation</p>
   */
  inline ExclusionStatus GetExclusionStatus() const { return m_exclusionStatus; }
  inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
  inline void SetExclusionStatus(ExclusionStatus value) {
    m_exclusionStatusHasBeenSet = true;
    m_exclusionStatus = value;
  }
  inline RecommendationForResourceSummary& WithExclusionStatus(ExclusionStatus value) {
    SetExclusionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata associated with the recommendation</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  RecommendationForResourceSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  RecommendationForResourceSummary& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Pillars that the Recommendation is optimizing</p>
   */
  inline const Aws::Vector<RecommendationPillar>& GetPillars() const { return m_pillars; }
  inline bool PillarsHasBeenSet() const { return m_pillarsHasBeenSet; }
  template <typename PillarsT = Aws::Vector<RecommendationPillar>>
  void SetPillars(PillarsT&& value) {
    m_pillarsHasBeenSet = true;
    m_pillars = std::forward<PillarsT>(value);
  }
  template <typename PillarsT = Aws::Vector<RecommendationPillar>>
  RecommendationForResourceSummary& WithPillars(PillarsT&& value) {
    SetPillars(std::forward<PillarsT>(value));
    return *this;
  }
  inline RecommendationForResourceSummary& AddPillars(RecommendationPillar value) {
    m_pillarsHasBeenSet = true;
    m_pillars.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_checkArn;

  Aws::String m_recommendationArn;

  Aws::String m_awsResourceArn;

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  ExclusionStatus m_exclusionStatus{ExclusionStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_metadata;

  Aws::Vector<RecommendationPillar> m_pillars;
  bool m_checkArnHasBeenSet = false;
  bool m_recommendationArnHasBeenSet = false;
  bool m_awsResourceArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_exclusionStatusHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_pillarsHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
