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
 * <p>Describes an operating system supported by an AMI fulfillment
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/AmazonMachineImageOperatingSystem">AWS
 * API Reference</a></p>
 */
class AmazonMachineImageOperatingSystem {
 public:
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageOperatingSystem() = default;
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageOperatingSystem(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageOperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operating system family, such as Linux or Windows.</p>
   */
  inline const Aws::String& GetOperatingSystemFamilyName() const { return m_operatingSystemFamilyName; }
  inline bool OperatingSystemFamilyNameHasBeenSet() const { return m_operatingSystemFamilyNameHasBeenSet; }
  template <typename OperatingSystemFamilyNameT = Aws::String>
  void SetOperatingSystemFamilyName(OperatingSystemFamilyNameT&& value) {
    m_operatingSystemFamilyNameHasBeenSet = true;
    m_operatingSystemFamilyName = std::forward<OperatingSystemFamilyNameT>(value);
  }
  template <typename OperatingSystemFamilyNameT = Aws::String>
  AmazonMachineImageOperatingSystem& WithOperatingSystemFamilyName(OperatingSystemFamilyNameT&& value) {
    SetOperatingSystemFamilyName(std::forward<OperatingSystemFamilyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific operating system name, such as Amazon Linux 2 or Windows Server
   * 2022.</p>
   */
  inline const Aws::String& GetOperatingSystemName() const { return m_operatingSystemName; }
  inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }
  template <typename OperatingSystemNameT = Aws::String>
  void SetOperatingSystemName(OperatingSystemNameT&& value) {
    m_operatingSystemNameHasBeenSet = true;
    m_operatingSystemName = std::forward<OperatingSystemNameT>(value);
  }
  template <typename OperatingSystemNameT = Aws::String>
  AmazonMachineImageOperatingSystem& WithOperatingSystemName(OperatingSystemNameT&& value) {
    SetOperatingSystemName(std::forward<OperatingSystemNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the operating system.</p>
   */
  inline const Aws::String& GetOperatingSystemVersion() const { return m_operatingSystemVersion; }
  inline bool OperatingSystemVersionHasBeenSet() const { return m_operatingSystemVersionHasBeenSet; }
  template <typename OperatingSystemVersionT = Aws::String>
  void SetOperatingSystemVersion(OperatingSystemVersionT&& value) {
    m_operatingSystemVersionHasBeenSet = true;
    m_operatingSystemVersion = std::forward<OperatingSystemVersionT>(value);
  }
  template <typename OperatingSystemVersionT = Aws::String>
  AmazonMachineImageOperatingSystem& WithOperatingSystemVersion(OperatingSystemVersionT&& value) {
    SetOperatingSystemVersion(std::forward<OperatingSystemVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_operatingSystemFamilyName;

  Aws::String m_operatingSystemName;

  Aws::String m_operatingSystemVersion;
  bool m_operatingSystemFamilyNameHasBeenSet = false;
  bool m_operatingSystemNameHasBeenSet = false;
  bool m_operatingSystemVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
