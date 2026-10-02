/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/TriggerFilterMatchMode.h>
#include <aws/securityagent/model/TriggerFilterType.h>

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
 * <p>A condition on a pull request value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/TriggerFilter">AWS
 * API Reference</a></p>
 */
class TriggerFilter {
 public:
  AWS_SECURITYAGENT_API TriggerFilter() = default;
  AWS_SECURITYAGENT_API TriggerFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API TriggerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The pull request value to match.</p>
   */
  inline TriggerFilterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TriggerFilterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline TriggerFilter& WithType(TriggerFilterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The regular expressions to match against the value.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPatterns() const { return m_patterns; }
  inline bool PatternsHasBeenSet() const { return m_patternsHasBeenSet; }
  template <typename PatternsT = Aws::Vector<Aws::String>>
  void SetPatterns(PatternsT&& value) {
    m_patternsHasBeenSet = true;
    m_patterns = std::forward<PatternsT>(value);
  }
  template <typename PatternsT = Aws::Vector<Aws::String>>
  TriggerFilter& WithPatterns(PatternsT&& value) {
    SetPatterns(std::forward<PatternsT>(value));
    return *this;
  }
  template <typename PatternsT = Aws::String>
  TriggerFilter& AddPatterns(PatternsT&& value) {
    m_patternsHasBeenSet = true;
    m_patterns.emplace_back(std::forward<PatternsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the value must match the patterns. The default is
   * <code>INCLUDE</code>.</p>
   */
  inline TriggerFilterMatchMode GetMatchMode() const { return m_matchMode; }
  inline bool MatchModeHasBeenSet() const { return m_matchModeHasBeenSet; }
  inline void SetMatchMode(TriggerFilterMatchMode value) {
    m_matchModeHasBeenSet = true;
    m_matchMode = value;
  }
  inline TriggerFilter& WithMatchMode(TriggerFilterMatchMode value) {
    SetMatchMode(value);
    return *this;
  }
  ///@}
 private:
  TriggerFilterType m_type{TriggerFilterType::NOT_SET};

  Aws::Vector<Aws::String> m_patterns;

  TriggerFilterMatchMode m_matchMode{TriggerFilterMatchMode::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_patternsHasBeenSet = false;
  bool m_matchModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
