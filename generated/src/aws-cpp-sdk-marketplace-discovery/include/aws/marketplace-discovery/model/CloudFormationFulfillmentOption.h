/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
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
 * <p>Describes an AWS CloudFormation template fulfillment option for
 * infrastructure deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/CloudFormationFulfillmentOption">AWS
 * API Reference</a></p>
 */
class CloudFormationFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API CloudFormationFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API CloudFormationFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API CloudFormationFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CloudFormationFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
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
  CloudFormationFulfillmentOption& WithFulfillmentOptionName(FulfillmentOptionNameT&& value) {
    SetFulfillmentOptionName(std::forward<FulfillmentOptionNameT>(value));
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
  inline CloudFormationFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
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
  CloudFormationFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
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
  CloudFormationFulfillmentOption& WithFulfillmentOptionVersion(FulfillmentOptionVersionT&& value) {
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
  CloudFormationFulfillmentOption& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions on how to deploy and use this CloudFormation template.</p>
   */
  inline const Aws::String& GetUsageInstructions() const { return m_usageInstructions; }
  inline bool UsageInstructionsHasBeenSet() const { return m_usageInstructionsHasBeenSet; }
  template <typename UsageInstructionsT = Aws::String>
  void SetUsageInstructions(UsageInstructionsT&& value) {
    m_usageInstructionsHasBeenSet = true;
    m_usageInstructions = std::forward<UsageInstructionsT>(value);
  }
  template <typename UsageInstructionsT = Aws::String>
  CloudFormationFulfillmentOption& WithUsageInstructions(UsageInstructionsT&& value) {
    SetUsageInstructions(std::forward<UsageInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the CloudFormation fulfillment option became available
   * for fulfillment.</p>
   */
  inline const Aws::Utils::DateTime& GetAvailableFromTime() const { return m_availableFromTime; }
  inline bool AvailableFromTimeHasBeenSet() const { return m_availableFromTimeHasBeenSet; }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  void SetAvailableFromTime(AvailableFromTimeT&& value) {
    m_availableFromTimeHasBeenSet = true;
    m_availableFromTime = std::forward<AvailableFromTimeT>(value);
  }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  CloudFormationFulfillmentOption& WithAvailableFromTime(AvailableFromTimeT&& value) {
    SetAvailableFromTime(std::forward<AvailableFromTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short description of the fulfillment option.</p>
   */
  inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
  inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
  template <typename ShortDescriptionT = Aws::String>
  void SetShortDescription(ShortDescriptionT&& value) {
    m_shortDescriptionHasBeenSet = true;
    m_shortDescription = std::forward<ShortDescriptionT>(value);
  }
  template <typename ShortDescriptionT = Aws::String>
  CloudFormationFulfillmentOption& WithShortDescription(ShortDescriptionT&& value) {
    SetShortDescription(std::forward<ShortDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the fulfillment option.</p>
   */
  inline const Aws::String& GetLongDescription() const { return m_longDescription; }
  inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
  template <typename LongDescriptionT = Aws::String>
  void SetLongDescription(LongDescriptionT&& value) {
    m_longDescriptionHasBeenSet = true;
    m_longDescription = std::forward<LongDescriptionT>(value);
  }
  template <typename LongDescriptionT = Aws::String>
  CloudFormationFulfillmentOption& WithLongDescription(LongDescriptionT&& value) {
    SetLongDescription(std::forward<LongDescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  Aws::String m_fulfillmentOptionName;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::String m_fulfillmentOptionVersion;

  Aws::String m_releaseNotes;

  Aws::String m_usageInstructions;

  Aws::Utils::DateTime m_availableFromTime{};

  Aws::String m_shortDescription;

  Aws::String m_longDescription;
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionNameHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_fulfillmentOptionVersionHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_usageInstructionsHasBeenSet = false;
  bool m_availableFromTimeHasBeenSet = false;
  bool m_shortDescriptionHasBeenSet = false;
  bool m_longDescriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
