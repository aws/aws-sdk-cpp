﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class CreateAutomationRuleV2Result {
 public:
  AWS_SECURITYHUB_API CreateAutomationRuleV2Result() = default;
  AWS_SECURITYHUB_API CreateAutomationRuleV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API CreateAutomationRuleV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the V2 automation rule.</p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  CreateAutomationRuleV2Result& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the V2 automation rule.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  CreateAutomationRuleV2Result& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateAutomationRuleV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleArn;
  bool m_ruleArnHasBeenSet = false;

  Aws::String m_ruleId;
  bool m_ruleIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
