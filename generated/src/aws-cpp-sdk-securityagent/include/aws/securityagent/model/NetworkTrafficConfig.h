/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/CustomHeader.h>
#include <aws/securityagent/model/NetworkTrafficRule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Configuration for network traffic filtering</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/NetworkTrafficConfig">AWS
 * API Reference</a></p>
 */
class NetworkTrafficConfig {
 public:
  AWS_SECURITYAGENT_API NetworkTrafficConfig() = default;
  AWS_SECURITYAGENT_API NetworkTrafficConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API NetworkTrafficConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Traffic filtering rules</p>
   */
  inline const Aws::Vector<NetworkTrafficRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<NetworkTrafficRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<NetworkTrafficRule>>
  NetworkTrafficConfig& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = NetworkTrafficRule>
  NetworkTrafficConfig& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom headers for requests</p>
   */
  inline const Aws::Vector<CustomHeader>& GetCustomHeaders() const { return m_customHeaders; }
  inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
  template <typename CustomHeadersT = Aws::Vector<CustomHeader>>
  void SetCustomHeaders(CustomHeadersT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders = std::forward<CustomHeadersT>(value);
  }
  template <typename CustomHeadersT = Aws::Vector<CustomHeader>>
  NetworkTrafficConfig& WithCustomHeaders(CustomHeadersT&& value) {
    SetCustomHeaders(std::forward<CustomHeadersT>(value));
    return *this;
  }
  template <typename CustomHeadersT = CustomHeader>
  NetworkTrafficConfig& AddCustomHeaders(CustomHeadersT&& value) {
    m_customHeadersHasBeenSet = true;
    m_customHeaders.emplace_back(std::forward<CustomHeadersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NetworkTrafficRule> m_rules;

  Aws::Vector<CustomHeader> m_customHeaders;
  bool m_rulesHasBeenSet = false;
  bool m_customHeadersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
