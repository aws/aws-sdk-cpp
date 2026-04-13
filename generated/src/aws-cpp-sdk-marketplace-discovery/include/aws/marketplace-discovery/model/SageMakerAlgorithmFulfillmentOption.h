/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>
#include <aws/marketplace-discovery/model/SageMakerAlgorithmRecommendation.h>

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
 * <p>Describes an Amazon SageMaker algorithm fulfillment option, including version
 * details and recommended instance types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SageMakerAlgorithmFulfillmentOption">AWS
 * API Reference</a></p>
 */
class SageMakerAlgorithmFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SageMakerAlgorithmFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the fulfillment option.</p>
   */
  inline const Aws::String& GetFulfillmentOptionId() const { return m_fulfillmentOptionId; }
  inline bool FulfillmentOptionIdHasBeenSet() const { return m_fulfillmentOptionIdHasBeenSet; }
  template <typename FulfillmentOptionIdT = Aws::String>
  void SetFulfillmentOptionId(FulfillmentOptionIdT&& value) {
    m_fulfillmentOptionIdHasBeenSet = true;
    m_fulfillmentOptionId = std::forward<FulfillmentOptionIdT>(value);
  }
  template <typename FulfillmentOptionIdT = Aws::String>
  SageMakerAlgorithmFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
    SetFulfillmentOptionId(std::forward<FulfillmentOptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the fulfillment option.</p>
   */
  inline FulfillmentOptionType GetFulfillmentOptionType() const { return m_fulfillmentOptionType; }
  inline bool FulfillmentOptionTypeHasBeenSet() const { return m_fulfillmentOptionTypeHasBeenSet; }
  inline void SetFulfillmentOptionType(FulfillmentOptionType value) {
    m_fulfillmentOptionTypeHasBeenSet = true;
    m_fulfillmentOptionType = value;
  }
  inline SageMakerAlgorithmFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
    SetFulfillmentOptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable name for the fulfillment option type.</p>
   */
  inline const Aws::String& GetFulfillmentOptionDisplayName() const { return m_fulfillmentOptionDisplayName; }
  inline bool FulfillmentOptionDisplayNameHasBeenSet() const { return m_fulfillmentOptionDisplayNameHasBeenSet; }
  template <typename FulfillmentOptionDisplayNameT = Aws::String>
  void SetFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    m_fulfillmentOptionDisplayNameHasBeenSet = true;
    m_fulfillmentOptionDisplayName = std::forward<FulfillmentOptionDisplayNameT>(value);
  }
  template <typename FulfillmentOptionDisplayNameT = Aws::String>
  SageMakerAlgorithmFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    SetFulfillmentOptionDisplayName(std::forward<FulfillmentOptionDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the fulfillment option.</p>
   */
  inline const Aws::String& GetFulfillmentOptionVersion() const { return m_fulfillmentOptionVersion; }
  inline bool FulfillmentOptionVersionHasBeenSet() const { return m_fulfillmentOptionVersionHasBeenSet; }
  template <typename FulfillmentOptionVersionT = Aws::String>
  void SetFulfillmentOptionVersion(FulfillmentOptionVersionT&& value) {
    m_fulfillmentOptionVersionHasBeenSet = true;
    m_fulfillmentOptionVersion = std::forward<FulfillmentOptionVersionT>(value);
  }
  template <typename FulfillmentOptionVersionT = Aws::String>
  SageMakerAlgorithmFulfillmentOption& WithFulfillmentOptionVersion(FulfillmentOptionVersionT&& value) {
    SetFulfillmentOptionVersion(std::forward<FulfillmentOptionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Release notes describing changes in this version of the fulfillment
   * option.</p>
   */
  inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
  inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
  template <typename ReleaseNotesT = Aws::String>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::String>
  SageMakerAlgorithmFulfillmentOption& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions on how to use this SageMaker algorithm.</p>
   */
  inline const Aws::String& GetUsageInstructions() const { return m_usageInstructions; }
  inline bool UsageInstructionsHasBeenSet() const { return m_usageInstructionsHasBeenSet; }
  template <typename UsageInstructionsT = Aws::String>
  void SetUsageInstructions(UsageInstructionsT&& value) {
    m_usageInstructionsHasBeenSet = true;
    m_usageInstructions = std::forward<UsageInstructionsT>(value);
  }
  template <typename UsageInstructionsT = Aws::String>
  SageMakerAlgorithmFulfillmentOption& WithUsageInstructions(UsageInstructionsT&& value) {
    SetUsageInstructions(std::forward<UsageInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommended instance types for training and inference with this
   * algorithm.</p>
   */
  inline const SageMakerAlgorithmRecommendation& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = SageMakerAlgorithmRecommendation>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = SageMakerAlgorithmRecommendation>
  SageMakerAlgorithmFulfillmentOption& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::String m_fulfillmentOptionVersion;

  Aws::String m_releaseNotes;

  Aws::String m_usageInstructions;

  SageMakerAlgorithmRecommendation m_recommendation;
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_fulfillmentOptionVersionHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_usageInstructionsHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
