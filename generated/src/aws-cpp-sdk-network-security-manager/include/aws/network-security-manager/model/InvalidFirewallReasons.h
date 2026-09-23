/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ConfigurationIssue.h>

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
 * <p>Details about the ways in which a firewall's configuration differs from the
 * intended configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/InvalidFirewallReasons">AWS
 * API Reference</a></p>
 */
class InvalidFirewallReasons {
 public:
  AWS_NETWORKSECURITYMANAGER_API InvalidFirewallReasons() = default;
  AWS_NETWORKSECURITYMANAGER_API InvalidFirewallReasons(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API InvalidFirewallReasons& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Single-value configuration settings whose values do not match the expected
   * values.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetIncorrectSingleValueConfigurations() const {
    return m_incorrectSingleValueConfigurations;
  }
  inline bool IncorrectSingleValueConfigurationsHasBeenSet() const { return m_incorrectSingleValueConfigurationsHasBeenSet; }
  template <typename IncorrectSingleValueConfigurationsT = Aws::Vector<ConfigurationIssue>>
  void SetIncorrectSingleValueConfigurations(IncorrectSingleValueConfigurationsT&& value) {
    m_incorrectSingleValueConfigurationsHasBeenSet = true;
    m_incorrectSingleValueConfigurations = std::forward<IncorrectSingleValueConfigurationsT>(value);
  }
  template <typename IncorrectSingleValueConfigurationsT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithIncorrectSingleValueConfigurations(IncorrectSingleValueConfigurationsT&& value) {
    SetIncorrectSingleValueConfigurations(std::forward<IncorrectSingleValueConfigurationsT>(value));
    return *this;
  }
  template <typename IncorrectSingleValueConfigurationsT = ConfigurationIssue>
  InvalidFirewallReasons& AddIncorrectSingleValueConfigurations(IncorrectSingleValueConfigurationsT&& value) {
    m_incorrectSingleValueConfigurationsHasBeenSet = true;
    m_incorrectSingleValueConfigurations.emplace_back(std::forward<IncorrectSingleValueConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Appendable configuration values that are expected but missing.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetMissingAppendableConfigurationValues() const {
    return m_missingAppendableConfigurationValues;
  }
  inline bool MissingAppendableConfigurationValuesHasBeenSet() const { return m_missingAppendableConfigurationValuesHasBeenSet; }
  template <typename MissingAppendableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  void SetMissingAppendableConfigurationValues(MissingAppendableConfigurationValuesT&& value) {
    m_missingAppendableConfigurationValuesHasBeenSet = true;
    m_missingAppendableConfigurationValues = std::forward<MissingAppendableConfigurationValuesT>(value);
  }
  template <typename MissingAppendableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithMissingAppendableConfigurationValues(MissingAppendableConfigurationValuesT&& value) {
    SetMissingAppendableConfigurationValues(std::forward<MissingAppendableConfigurationValuesT>(value));
    return *this;
  }
  template <typename MissingAppendableConfigurationValuesT = ConfigurationIssue>
  InvalidFirewallReasons& AddMissingAppendableConfigurationValues(MissingAppendableConfigurationValuesT&& value) {
    m_missingAppendableConfigurationValuesHasBeenSet = true;
    m_missingAppendableConfigurationValues.emplace_back(std::forward<MissingAppendableConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Appendable configuration values that are present but not expected.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetUnexpectedAppendableConfigurationValues() const {
    return m_unexpectedAppendableConfigurationValues;
  }
  inline bool UnexpectedAppendableConfigurationValuesHasBeenSet() const { return m_unexpectedAppendableConfigurationValuesHasBeenSet; }
  template <typename UnexpectedAppendableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  void SetUnexpectedAppendableConfigurationValues(UnexpectedAppendableConfigurationValuesT&& value) {
    m_unexpectedAppendableConfigurationValuesHasBeenSet = true;
    m_unexpectedAppendableConfigurationValues = std::forward<UnexpectedAppendableConfigurationValuesT>(value);
  }
  template <typename UnexpectedAppendableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithUnexpectedAppendableConfigurationValues(UnexpectedAppendableConfigurationValuesT&& value) {
    SetUnexpectedAppendableConfigurationValues(std::forward<UnexpectedAppendableConfigurationValuesT>(value));
    return *this;
  }
  template <typename UnexpectedAppendableConfigurationValuesT = ConfigurationIssue>
  InvalidFirewallReasons& AddUnexpectedAppendableConfigurationValues(UnexpectedAppendableConfigurationValuesT&& value) {
    m_unexpectedAppendableConfigurationValuesHasBeenSet = true;
    m_unexpectedAppendableConfigurationValues.emplace_back(std::forward<UnexpectedAppendableConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Appendable configuration values that are present but in the wrong order.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetIncorrectAppendableConfigurationOrder() const {
    return m_incorrectAppendableConfigurationOrder;
  }
  inline bool IncorrectAppendableConfigurationOrderHasBeenSet() const { return m_incorrectAppendableConfigurationOrderHasBeenSet; }
  template <typename IncorrectAppendableConfigurationOrderT = Aws::Vector<ConfigurationIssue>>
  void SetIncorrectAppendableConfigurationOrder(IncorrectAppendableConfigurationOrderT&& value) {
    m_incorrectAppendableConfigurationOrderHasBeenSet = true;
    m_incorrectAppendableConfigurationOrder = std::forward<IncorrectAppendableConfigurationOrderT>(value);
  }
  template <typename IncorrectAppendableConfigurationOrderT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithIncorrectAppendableConfigurationOrder(IncorrectAppendableConfigurationOrderT&& value) {
    SetIncorrectAppendableConfigurationOrder(std::forward<IncorrectAppendableConfigurationOrderT>(value));
    return *this;
  }
  template <typename IncorrectAppendableConfigurationOrderT = ConfigurationIssue>
  InvalidFirewallReasons& AddIncorrectAppendableConfigurationOrder(IncorrectAppendableConfigurationOrderT&& value) {
    m_incorrectAppendableConfigurationOrderHasBeenSet = true;
    m_incorrectAppendableConfigurationOrder.emplace_back(std::forward<IncorrectAppendableConfigurationOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mergeable configuration values that are expected but missing.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetMissingMergeableConfigurationValues() const {
    return m_missingMergeableConfigurationValues;
  }
  inline bool MissingMergeableConfigurationValuesHasBeenSet() const { return m_missingMergeableConfigurationValuesHasBeenSet; }
  template <typename MissingMergeableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  void SetMissingMergeableConfigurationValues(MissingMergeableConfigurationValuesT&& value) {
    m_missingMergeableConfigurationValuesHasBeenSet = true;
    m_missingMergeableConfigurationValues = std::forward<MissingMergeableConfigurationValuesT>(value);
  }
  template <typename MissingMergeableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithMissingMergeableConfigurationValues(MissingMergeableConfigurationValuesT&& value) {
    SetMissingMergeableConfigurationValues(std::forward<MissingMergeableConfigurationValuesT>(value));
    return *this;
  }
  template <typename MissingMergeableConfigurationValuesT = ConfigurationIssue>
  InvalidFirewallReasons& AddMissingMergeableConfigurationValues(MissingMergeableConfigurationValuesT&& value) {
    m_missingMergeableConfigurationValuesHasBeenSet = true;
    m_missingMergeableConfigurationValues.emplace_back(std::forward<MissingMergeableConfigurationValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mergeable configuration values that are present but not expected.</p>
   */
  inline const Aws::Vector<ConfigurationIssue>& GetUnexpectedMergeableConfigurationValues() const {
    return m_unexpectedMergeableConfigurationValues;
  }
  inline bool UnexpectedMergeableConfigurationValuesHasBeenSet() const { return m_unexpectedMergeableConfigurationValuesHasBeenSet; }
  template <typename UnexpectedMergeableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  void SetUnexpectedMergeableConfigurationValues(UnexpectedMergeableConfigurationValuesT&& value) {
    m_unexpectedMergeableConfigurationValuesHasBeenSet = true;
    m_unexpectedMergeableConfigurationValues = std::forward<UnexpectedMergeableConfigurationValuesT>(value);
  }
  template <typename UnexpectedMergeableConfigurationValuesT = Aws::Vector<ConfigurationIssue>>
  InvalidFirewallReasons& WithUnexpectedMergeableConfigurationValues(UnexpectedMergeableConfigurationValuesT&& value) {
    SetUnexpectedMergeableConfigurationValues(std::forward<UnexpectedMergeableConfigurationValuesT>(value));
    return *this;
  }
  template <typename UnexpectedMergeableConfigurationValuesT = ConfigurationIssue>
  InvalidFirewallReasons& AddUnexpectedMergeableConfigurationValues(UnexpectedMergeableConfigurationValuesT&& value) {
    m_unexpectedMergeableConfigurationValuesHasBeenSet = true;
    m_unexpectedMergeableConfigurationValues.emplace_back(std::forward<UnexpectedMergeableConfigurationValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ConfigurationIssue> m_incorrectSingleValueConfigurations;

  Aws::Vector<ConfigurationIssue> m_missingAppendableConfigurationValues;

  Aws::Vector<ConfigurationIssue> m_unexpectedAppendableConfigurationValues;

  Aws::Vector<ConfigurationIssue> m_incorrectAppendableConfigurationOrder;

  Aws::Vector<ConfigurationIssue> m_missingMergeableConfigurationValues;

  Aws::Vector<ConfigurationIssue> m_unexpectedMergeableConfigurationValues;
  bool m_incorrectSingleValueConfigurationsHasBeenSet = false;
  bool m_missingAppendableConfigurationValuesHasBeenSet = false;
  bool m_unexpectedAppendableConfigurationValuesHasBeenSet = false;
  bool m_incorrectAppendableConfigurationOrderHasBeenSet = false;
  bool m_missingMergeableConfigurationValuesHasBeenSet = false;
  bool m_unexpectedMergeableConfigurationValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
