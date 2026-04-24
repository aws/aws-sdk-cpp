/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>Describes an AWS service supported by a fulfillment option.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/AwsSupportedService">AWS
 * API Reference</a></p>
 */
class AwsSupportedService {
 public:
  AWS_MARKETPLACEDISCOVERY_API AwsSupportedService() = default;
  AWS_MARKETPLACEDISCOVERY_API AwsSupportedService(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API AwsSupportedService& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The machine-readable identifier of the supported service.</p>
   */
  inline const Aws::String& GetSupportedServiceType() const { return m_supportedServiceType; }
  inline bool SupportedServiceTypeHasBeenSet() const { return m_supportedServiceTypeHasBeenSet; }
  template <typename SupportedServiceTypeT = Aws::String>
  void SetSupportedServiceType(SupportedServiceTypeT&& value) {
    m_supportedServiceTypeHasBeenSet = true;
    m_supportedServiceType = std::forward<SupportedServiceTypeT>(value);
  }
  template <typename SupportedServiceTypeT = Aws::String>
  AwsSupportedService& WithSupportedServiceType(SupportedServiceTypeT&& value) {
    SetSupportedServiceType(std::forward<SupportedServiceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the supported service.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  AwsSupportedService& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the supported service.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AwsSupportedService& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_supportedServiceType;

  Aws::String m_displayName;

  Aws::String m_description;
  bool m_supportedServiceTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
