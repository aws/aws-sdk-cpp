/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/FulfillmentOptionType.h>
#include <aws/marketplace-discovery/model/SaasQuickLaunchStatus.h>

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
 * <p>Describes a Software as a Service (SaaS) fulfillment option.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SaasFulfillmentOption">AWS
 * API Reference</a></p>
 */
class SaasFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API SaasFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API SaasFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SaasFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SaasFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
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
  inline SaasFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
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
  SaasFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
    SetFulfillmentOptionDisplayName(std::forward<FulfillmentOptionDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the seller's software registration landing page.</p>
   */
  inline const Aws::String& GetFulfillmentUrl() const { return m_fulfillmentUrl; }
  inline bool FulfillmentUrlHasBeenSet() const { return m_fulfillmentUrlHasBeenSet; }
  template <typename FulfillmentUrlT = Aws::String>
  void SetFulfillmentUrl(FulfillmentUrlT&& value) {
    m_fulfillmentUrlHasBeenSet = true;
    m_fulfillmentUrl = std::forward<FulfillmentUrlT>(value);
  }
  template <typename FulfillmentUrlT = Aws::String>
  SaasFulfillmentOption& WithFulfillmentUrl(FulfillmentUrlT&& value) {
    SetFulfillmentUrl(std::forward<FulfillmentUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions on how to access and use this SaaS product.</p>
   */
  inline const Aws::String& GetUsageInstructions() const { return m_usageInstructions; }
  inline bool UsageInstructionsHasBeenSet() const { return m_usageInstructionsHasBeenSet; }
  template <typename UsageInstructionsT = Aws::String>
  void SetUsageInstructions(UsageInstructionsT&& value) {
    m_usageInstructionsHasBeenSet = true;
    m_usageInstructions = std::forward<UsageInstructionsT>(value);
  }
  template <typename UsageInstructionsT = Aws::String>
  SaasFulfillmentOption& WithUsageInstructions(UsageInstructionsT&& value) {
    SetUsageInstructions(std::forward<UsageInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the SaaS product became available for fulfillment.</p>
   */
  inline const Aws::Utils::DateTime& GetAvailableFromTime() const { return m_availableFromTime; }
  inline bool AvailableFromTimeHasBeenSet() const { return m_availableFromTimeHasBeenSet; }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  void SetAvailableFromTime(AvailableFromTimeT&& value) {
    m_availableFromTimeHasBeenSet = true;
    m_availableFromTime = std::forward<AvailableFromTimeT>(value);
  }
  template <typename AvailableFromTimeT = Aws::Utils::DateTime>
  SaasFulfillmentOption& WithAvailableFromTime(AvailableFromTimeT&& value) {
    SetAvailableFromTime(std::forward<AvailableFromTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL that a buyer uses to launch the seller's SaaS product. This URL is
   * distinct from <code>fulfillmentUrl</code>, which is the seller's software
   * registration landing page.</p>
   */
  inline const Aws::String& GetLaunchUrl() const { return m_launchUrl; }
  inline bool LaunchUrlHasBeenSet() const { return m_launchUrlHasBeenSet; }
  template <typename LaunchUrlT = Aws::String>
  void SetLaunchUrl(LaunchUrlT&& value) {
    m_launchUrlHasBeenSet = true;
    m_launchUrl = std::forward<LaunchUrlT>(value);
  }
  template <typename LaunchUrlT = Aws::String>
  SaasFulfillmentOption& WithLaunchUrl(LaunchUrlT&& value) {
    SetLaunchUrl(std::forward<LaunchUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the SaaS product supports quick-launch deployment.</p>
   */
  inline SaasQuickLaunchStatus GetQuickLaunch() const { return m_quickLaunch; }
  inline bool QuickLaunchHasBeenSet() const { return m_quickLaunchHasBeenSet; }
  inline void SetQuickLaunch(SaasQuickLaunchStatus value) {
    m_quickLaunchHasBeenSet = true;
    m_quickLaunch = value;
  }
  inline SaasFulfillmentOption& WithQuickLaunch(SaasQuickLaunchStatus value) {
    SetQuickLaunch(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::String m_fulfillmentUrl;

  Aws::String m_usageInstructions;

  Aws::Utils::DateTime m_availableFromTime{};

  Aws::String m_launchUrl;

  SaasQuickLaunchStatus m_quickLaunch{SaasQuickLaunchStatus::NOT_SET};
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_fulfillmentUrlHasBeenSet = false;
  bool m_usageInstructionsHasBeenSet = false;
  bool m_availableFromTimeHasBeenSet = false;
  bool m_launchUrlHasBeenSet = false;
  bool m_quickLaunchHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
