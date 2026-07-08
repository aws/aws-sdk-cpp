/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ConfigurationTargets.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The access details and targets for connecting to a Microsoft Azure tenant,
 * including the application registration used for authentication and the
 * subscriptions to target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AzureConfiguration">AWS
 * API Reference</a></p>
 */
class AzureConfiguration {
 public:
  AWS_SSM_API AzureConfiguration() = default;
  AWS_SSM_API AzureConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API AzureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Azure tenant.</p>
   */
  inline const Aws::String& GetTenantId() const { return m_tenantId; }
  inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
  template <typename TenantIdT = Aws::String>
  void SetTenantId(TenantIdT&& value) {
    m_tenantIdHasBeenSet = true;
    m_tenantId = std::forward<TenantIdT>(value);
  }
  template <typename TenantIdT = Aws::String>
  AzureConfiguration& WithTenantId(TenantIdT&& value) {
    SetTenantId(std::forward<TenantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the Azure tenant.</p>
   */
  inline const Aws::String& GetTenantDisplayName() const { return m_tenantDisplayName; }
  inline bool TenantDisplayNameHasBeenSet() const { return m_tenantDisplayNameHasBeenSet; }
  template <typename TenantDisplayNameT = Aws::String>
  void SetTenantDisplayName(TenantDisplayNameT&& value) {
    m_tenantDisplayNameHasBeenSet = true;
    m_tenantDisplayName = std::forward<TenantDisplayNameT>(value);
  }
  template <typename TenantDisplayNameT = Aws::String>
  AzureConfiguration& WithTenantDisplayName(TenantDisplayNameT&& value) {
    SetTenantDisplayName(std::forward<TenantDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Azure application registration used for authentication.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  AzureConfiguration& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the Azure application registration.</p>
   */
  inline const Aws::String& GetApplicationDisplayName() const { return m_applicationDisplayName; }
  inline bool ApplicationDisplayNameHasBeenSet() const { return m_applicationDisplayNameHasBeenSet; }
  template <typename ApplicationDisplayNameT = Aws::String>
  void SetApplicationDisplayName(ApplicationDisplayNameT&& value) {
    m_applicationDisplayNameHasBeenSet = true;
    m_applicationDisplayName = std::forward<ApplicationDisplayNameT>(value);
  }
  template <typename ApplicationDisplayNameT = Aws::String>
  AzureConfiguration& WithApplicationDisplayName(ApplicationDisplayNameT&& value) {
    SetApplicationDisplayName(std::forward<ApplicationDisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target Azure subscriptions for the cloud connector.</p>
   */
  inline const ConfigurationTargets& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = ConfigurationTargets>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = ConfigurationTargets>
  AzureConfiguration& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tenantId;

  Aws::String m_tenantDisplayName;

  Aws::String m_applicationId;

  Aws::String m_applicationDisplayName;

  ConfigurationTargets m_targets;
  bool m_tenantIdHasBeenSet = false;
  bool m_tenantDisplayNameHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_applicationDisplayNameHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
