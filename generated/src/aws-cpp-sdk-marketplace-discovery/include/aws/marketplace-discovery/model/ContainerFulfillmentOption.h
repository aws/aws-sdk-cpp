/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/AwsSupportedService.h>
#include <aws/marketplace-discovery/model/ContainerOperatingSystem.h>
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
 * <p>Describes a container image fulfillment option for container-based
 * deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ContainerFulfillmentOption">AWS
 * API Reference</a></p>
 */
class ContainerFulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API ContainerFulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API ContainerFulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ContainerFulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ContainerFulfillmentOption& WithFulfillmentOptionId(FulfillmentOptionIdT&& value) {
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
  ContainerFulfillmentOption& WithFulfillmentOptionName(FulfillmentOptionNameT&& value) {
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
  inline ContainerFulfillmentOption& WithFulfillmentOptionType(FulfillmentOptionType value) {
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
  ContainerFulfillmentOption& WithFulfillmentOptionDisplayName(FulfillmentOptionDisplayNameT&& value) {
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
  ContainerFulfillmentOption& WithFulfillmentOptionVersion(FulfillmentOptionVersionT&& value) {
    SetFulfillmentOptionVersion(std::forward<FulfillmentOptionVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating systems supported by this container image.</p>
   */
  inline const Aws::Vector<ContainerOperatingSystem>& GetOperatingSystems() const { return m_operatingSystems; }
  inline bool OperatingSystemsHasBeenSet() const { return m_operatingSystemsHasBeenSet; }
  template <typename OperatingSystemsT = Aws::Vector<ContainerOperatingSystem>>
  void SetOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems = std::forward<OperatingSystemsT>(value);
  }
  template <typename OperatingSystemsT = Aws::Vector<ContainerOperatingSystem>>
  ContainerFulfillmentOption& WithOperatingSystems(OperatingSystemsT&& value) {
    SetOperatingSystems(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  template <typename OperatingSystemsT = ContainerOperatingSystem>
  ContainerFulfillmentOption& AddOperatingSystems(OperatingSystemsT&& value) {
    m_operatingSystemsHasBeenSet = true;
    m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS services supported by this container deployment.</p>
   */
  inline const Aws::Vector<AwsSupportedService>& GetAwsSupportedServices() const { return m_awsSupportedServices; }
  inline bool AwsSupportedServicesHasBeenSet() const { return m_awsSupportedServicesHasBeenSet; }
  template <typename AwsSupportedServicesT = Aws::Vector<AwsSupportedService>>
  void SetAwsSupportedServices(AwsSupportedServicesT&& value) {
    m_awsSupportedServicesHasBeenSet = true;
    m_awsSupportedServices = std::forward<AwsSupportedServicesT>(value);
  }
  template <typename AwsSupportedServicesT = Aws::Vector<AwsSupportedService>>
  ContainerFulfillmentOption& WithAwsSupportedServices(AwsSupportedServicesT&& value) {
    SetAwsSupportedServices(std::forward<AwsSupportedServicesT>(value));
    return *this;
  }
  template <typename AwsSupportedServicesT = AwsSupportedService>
  ContainerFulfillmentOption& AddAwsSupportedServices(AwsSupportedServicesT&& value) {
    m_awsSupportedServicesHasBeenSet = true;
    m_awsSupportedServices.emplace_back(std::forward<AwsSupportedServicesT>(value));
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
  ContainerFulfillmentOption& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions on how to deploy and use this container image.</p>
   */
  inline const Aws::String& GetUsageInstructions() const { return m_usageInstructions; }
  inline bool UsageInstructionsHasBeenSet() const { return m_usageInstructionsHasBeenSet; }
  template <typename UsageInstructionsT = Aws::String>
  void SetUsageInstructions(UsageInstructionsT&& value) {
    m_usageInstructionsHasBeenSet = true;
    m_usageInstructions = std::forward<UsageInstructionsT>(value);
  }
  template <typename UsageInstructionsT = Aws::String>
  ContainerFulfillmentOption& WithUsageInstructions(UsageInstructionsT&& value) {
    SetUsageInstructions(std::forward<UsageInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fulfillmentOptionId;

  Aws::String m_fulfillmentOptionName;

  FulfillmentOptionType m_fulfillmentOptionType{FulfillmentOptionType::NOT_SET};

  Aws::String m_fulfillmentOptionDisplayName;

  Aws::String m_fulfillmentOptionVersion;

  Aws::Vector<ContainerOperatingSystem> m_operatingSystems;

  Aws::Vector<AwsSupportedService> m_awsSupportedServices;

  Aws::String m_releaseNotes;

  Aws::String m_usageInstructions;
  bool m_fulfillmentOptionIdHasBeenSet = false;
  bool m_fulfillmentOptionNameHasBeenSet = false;
  bool m_fulfillmentOptionTypeHasBeenSet = false;
  bool m_fulfillmentOptionDisplayNameHasBeenSet = false;
  bool m_fulfillmentOptionVersionHasBeenSet = false;
  bool m_operatingSystemsHasBeenSet = false;
  bool m_awsSupportedServicesHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_usageInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
