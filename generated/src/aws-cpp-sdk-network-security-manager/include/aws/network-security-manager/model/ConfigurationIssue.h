/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>Describes a single configuration value that does not match the intended
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ConfigurationIssue">AWS
 * API Reference</a></p>
 */
class ConfigurationIssue {
 public:
  AWS_NETWORKSECURITYMANAGER_API ConfigurationIssue() = default;
  AWS_NETWORKSECURITYMANAGER_API ConfigurationIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ConfigurationIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the configuration setting that is in conflict.</p>
   */
  inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
  inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
  template <typename ConfigurationNameT = Aws::String>
  void SetConfigurationName(ConfigurationNameT&& value) {
    m_configurationNameHasBeenSet = true;
    m_configurationName = std::forward<ConfigurationNameT>(value);
  }
  template <typename ConfigurationNameT = Aws::String>
  ConfigurationIssue& WithConfigurationName(ConfigurationNameT&& value) {
    SetConfigurationName(std::forward<ConfigurationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration value that AWS Network Security Manager expected.</p>
   */
  inline const Aws::String& GetExpectedValue() const { return m_expectedValue; }
  inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
  template <typename ExpectedValueT = Aws::String>
  void SetExpectedValue(ExpectedValueT&& value) {
    m_expectedValueHasBeenSet = true;
    m_expectedValue = std::forward<ExpectedValueT>(value);
  }
  template <typename ExpectedValueT = Aws::String>
  ConfigurationIssue& WithExpectedValue(ExpectedValueT&& value) {
    SetExpectedValue(std::forward<ExpectedValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration value that was found on the resource.</p>
   */
  inline const Aws::String& GetActualValue() const { return m_actualValue; }
  inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
  template <typename ActualValueT = Aws::String>
  void SetActualValue(ActualValueT&& value) {
    m_actualValueHasBeenSet = true;
    m_actualValue = std::forward<ActualValueT>(value);
  }
  template <typename ActualValueT = Aws::String>
  ConfigurationIssue& WithActualValue(ActualValueT&& value) {
    SetActualValue(std::forward<ActualValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_configurationName;

  Aws::String m_expectedValue;

  Aws::String m_actualValue;
  bool m_configurationNameHasBeenSet = false;
  bool m_expectedValueHasBeenSet = false;
  bool m_actualValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
