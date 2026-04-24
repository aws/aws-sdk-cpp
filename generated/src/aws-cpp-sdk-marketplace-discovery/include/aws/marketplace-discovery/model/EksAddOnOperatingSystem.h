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
 * <p>Describes an operating system supported by an EKS add-on fulfillment
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/EksAddOnOperatingSystem">AWS
 * API Reference</a></p>
 */
class EksAddOnOperatingSystem {
 public:
  AWS_MARKETPLACEDISCOVERY_API EksAddOnOperatingSystem() = default;
  AWS_MARKETPLACEDISCOVERY_API EksAddOnOperatingSystem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API EksAddOnOperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operating system family, such as Linux.</p>
   */
  inline const Aws::String& GetOperatingSystemFamilyName() const { return m_operatingSystemFamilyName; }
  inline bool OperatingSystemFamilyNameHasBeenSet() const { return m_operatingSystemFamilyNameHasBeenSet; }
  template <typename OperatingSystemFamilyNameT = Aws::String>
  void SetOperatingSystemFamilyName(OperatingSystemFamilyNameT&& value) {
    m_operatingSystemFamilyNameHasBeenSet = true;
    m_operatingSystemFamilyName = std::forward<OperatingSystemFamilyNameT>(value);
  }
  template <typename OperatingSystemFamilyNameT = Aws::String>
  EksAddOnOperatingSystem& WithOperatingSystemFamilyName(OperatingSystemFamilyNameT&& value) {
    SetOperatingSystemFamilyName(std::forward<OperatingSystemFamilyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific operating system name.</p>
   */
  inline const Aws::String& GetOperatingSystemName() const { return m_operatingSystemName; }
  inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }
  template <typename OperatingSystemNameT = Aws::String>
  void SetOperatingSystemName(OperatingSystemNameT&& value) {
    m_operatingSystemNameHasBeenSet = true;
    m_operatingSystemName = std::forward<OperatingSystemNameT>(value);
  }
  template <typename OperatingSystemNameT = Aws::String>
  EksAddOnOperatingSystem& WithOperatingSystemName(OperatingSystemNameT&& value) {
    SetOperatingSystemName(std::forward<OperatingSystemNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_operatingSystemFamilyName;

  Aws::String m_operatingSystemName;
  bool m_operatingSystemFamilyNameHasBeenSet = false;
  bool m_operatingSystemNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
