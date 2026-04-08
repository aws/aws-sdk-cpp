/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageOperatingSystem.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageRecommendation.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>

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
 * <p>Describes an Amazon Machine Image (AMI) fulfillment option, including version
 * details, supported operating systems, and recommended instance
 * types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/AmazonMachineImageFulfillmentOption">AWS
 * API Reference</a></p>
 */
class AmazonMachineImageFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AmazonMachineImageFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
    SetFulfillmentOptionId(std::forward<FulfillmentOptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the fulfillment option version.</p>
   */
  inline const Aws::String& GetFulfillmentOptionName() const { return m_fulfillmentOptionName; }
  inline bool FulfillmentOptionNameHasBeenSet() const { return m_fulfillmentOptionNameHasBeenSet; }
  template <typename FulfillmentOptionNameT = Aws::String>
  void SetFulfillmentOptionName(FulfillmentOptionNameT&& value) {
    m_fulfillmentOptionNameHasBeenSet = true;
    m_fulfillmentOptionName = std::forward<FulfillmentOptionNameT>(value);
  }
  template <typename FulfillmentOptionNameT = Aws::String>
  AmazonMachineImageFulfillmentOption& WithFulfillmentOptionName(FulfillmentOptionNameT&& value) {
    SetFulfillmentOptionName(std::forward<FulfillmentOptionNameT>(value));
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
  AmazonMachineImageFulfillmentOption& WithFulfillmentOptionVersion(FulfillmentOptionVersionT&& value) {
    SetFulfillmentOptionVersion(std::forward<FulfillmentOptionVersionT>(value));
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
  inline AmazonMachineImageFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
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
  AmazonMachineImageFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    SetFulfillmentOptionDisplayName(std::forward<FulfillmentOptionDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating systems supported by this AMI.</p>
   */
  inline const Aws::Vector<AmazonMachineImageOperatingSystem>& GetOperatingSystems() const { return m_operatingSystems; }
  inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
  template <typename OperatingSystemsT = Aws::Vector<AmazonMachineImageOperatingSystem>>
  void SetOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems = std::forward<OperatingSystemsT>(value);
  }
  template <typename OperatingSystemsT = Aws::Vector<AmazonMachineImageOperatingSystem>>
  AmazonMachineImageFulfillmentOption& WithOperatingSystems(OperatingSystemsT&& value) {
    SetOperatingSystems(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  template <typename OperatingSystemsT = AmazonMachineImageOperatingSystem>
  AmazonMachineImageFulfillmentOption& AddOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Recommended instance types for running this AMI.</p>
   */
  inline const AmazonMachineImageRecommendation& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = AmazonMachineImageRecommendation>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = AmazonMachineImageRecommendation>
  AmazonMachineImageFulfillmentOption& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
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
  AmazonMachineImageFulfillmentOption& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions on how to deploy and use this fulfillment option.</p>
   */
  inline const Aws::String& GetUsageInstructions() const { return m_usageInstructions; }
  inline bool UsageInstructionsHasBeenSet() const { return m_usageInstructionsHasBeenSet; }
  template <typename UsageInstructionsT = Aws::String>
  void SetUsageInstructions(UsageInstructionsT&& value) {
    m_usageInstructionsHasBeenSet = true;
    m_usageInstructions = std::forward<UsageInstructionsT>(value);
  }
  template <typename UsageInstructionsT = Aws::String>
  AmazonMachineImageFulfillmentOption& WithUsageInstructions(UsageInstructionsT&& value) {
    SetUsageInstructions(std::forward<UsageInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  Aws::String m_fulfillmentOptionName;

  Aws::String m_fulfillmentOptionVersion;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::Vector<AmazonMachineImageOperatingSystem> m_operatingSystems;

  AmazonMachineImageRecommendation m_recommendation;

  Aws::String m_releaseNotes;

  Aws::String m_usageInstructions;
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionNameHasBeenSet = false;
  bool m_fulfillmentOptionVersionHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_operatingSystemsHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_usageInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
