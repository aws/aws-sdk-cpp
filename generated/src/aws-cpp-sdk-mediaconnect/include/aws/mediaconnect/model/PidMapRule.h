/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>A rule that selects elementary streams and specifies the action to apply to
 * them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/PidMapRule">AWS
 * API Reference</a></p>
 */
class PidMapRule {
 public:
  AWS_MEDIACONNECT_API PidMapRule() = default;
  AWS_MEDIACONNECT_API PidMapRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API PidMapRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An expression that selects the elementary streams that this rule applies
   * to.</p>
   */
  inline const Aws::String& GetMatchExpression() const { return m_matchExpression; }
  inline bool MatchExpressionHasBeenSet() const { return m_matchExpressionHasBeenSet; }
  template <typename MatchExpressionT = Aws::String>
  void SetMatchExpression(MatchExpressionT&& value) {
    m_matchExpressionHasBeenSet = true;
    m_matchExpression = std::forward<MatchExpressionT>(value);
  }
  template <typename MatchExpressionT = Aws::String>
  PidMapRule& WithMatchExpression(MatchExpressionT&& value) {
    SetMatchExpression(std::forward<MatchExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to apply to the elementary streams that match this rule.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  PidMapRule& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_matchExpression;

  Aws::String m_action;
  bool m_matchExpressionHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
