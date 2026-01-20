/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/BillingMode.h>
#include <aws/workspaces-instances/model/InstanceConfigurationTenancyEnum.h>
#include <aws/workspaces-instances/model/PlatformTypeEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Represents a single valid configuration combination that an instance type
 * supports, combining tenancy, platform type, and billing mode into one complete
 * configuration specification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/SupportedInstanceConfiguration">AWS
 * API Reference</a></p>
 */
class SupportedInstanceConfiguration {
 public:
  AWS_WORKSPACESINSTANCES_API SupportedInstanceConfiguration() = default;
  AWS_WORKSPACESINSTANCES_API SupportedInstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESINSTANCES_API SupportedInstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the billing mode supported in this configuration combination.</p>
   */
  inline BillingMode GetBillingMode() const { return m_billingMode; }
  inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
  inline void SetBillingMode(BillingMode value) {
    m_billingModeHasBeenSet = true;
    m_billingMode = value;
  }
  inline SupportedInstanceConfiguration& WithBillingMode(BillingMode value) {
    SetBillingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the operating system platform supported in this configuration
   * combination.</p>
   */
  inline PlatformTypeEnum GetPlatformType() const { return m_platformType; }
  inline bool PlatformTypeHasBeenSet() const { return m_platformTypeHasBeenSet; }
  inline void SetPlatformType(PlatformTypeEnum value) {
    m_platformTypeHasBeenSet = true;
    m_platformType = value;
  }
  inline SupportedInstanceConfiguration& WithPlatformType(PlatformTypeEnum value) {
    SetPlatformType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the tenancy model supported in this configuration combination.</p>
   */
  inline InstanceConfigurationTenancyEnum GetTenancy() const { return m_tenancy; }
  inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
  inline void SetTenancy(InstanceConfigurationTenancyEnum value) {
    m_tenancyHasBeenSet = true;
    m_tenancy = value;
  }
  inline SupportedInstanceConfiguration& WithTenancy(InstanceConfigurationTenancyEnum value) {
    SetTenancy(value);
    return *this;
  }
  ///@}
 private:
  BillingMode m_billingMode{BillingMode::NOT_SET};

  PlatformTypeEnum m_platformType{PlatformTypeEnum::NOT_SET};

  InstanceConfigurationTenancyEnum m_tenancy{InstanceConfigurationTenancyEnum::NOT_SET};
  bool m_billingModeHasBeenSet = false;
  bool m_platformTypeHasBeenSet = false;
  bool m_tenancyHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
