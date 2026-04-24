/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/NetworkTrafficRuleEffect.h>
#include <aws/securityagent/model/NetworkTrafficRuleType.h>

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
 * <p>Network traffic filtering rule</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/NetworkTrafficRule">AWS
 * API Reference</a></p>
 */
class NetworkTrafficRule {
 public:
  AWS_SECURITYAGENT_API NetworkTrafficRule() = default;
  AWS_SECURITYAGENT_API NetworkTrafficRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API NetworkTrafficRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Action to take when the rule matches</p>
   */
  inline NetworkTrafficRuleEffect GetEffect() const { return m_effect; }
  inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
  inline void SetEffect(NetworkTrafficRuleEffect value) {
    m_effectHasBeenSet = true;
    m_effect = value;
  }
  inline NetworkTrafficRule& WithEffect(NetworkTrafficRuleEffect value) {
    SetEffect(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pattern to match against</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  NetworkTrafficRule& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of network traffic rule</p>
   */
  inline NetworkTrafficRuleType GetNetworkTrafficRuleType() const { return m_networkTrafficRuleType; }
  inline bool NetworkTrafficRuleTypeHasBeenSet() const { return m_networkTrafficRuleTypeHasBeenSet; }
  inline void SetNetworkTrafficRuleType(NetworkTrafficRuleType value) {
    m_networkTrafficRuleTypeHasBeenSet = true;
    m_networkTrafficRuleType = value;
  }
  inline NetworkTrafficRule& WithNetworkTrafficRuleType(NetworkTrafficRuleType value) {
    SetNetworkTrafficRuleType(value);
    return *this;
  }
  ///@}
 private:
  NetworkTrafficRuleEffect m_effect{NetworkTrafficRuleEffect::NOT_SET};

  Aws::String m_pattern;

  NetworkTrafficRuleType m_networkTrafficRuleType{NetworkTrafficRuleType::NOT_SET};
  bool m_effectHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_networkTrafficRuleTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
