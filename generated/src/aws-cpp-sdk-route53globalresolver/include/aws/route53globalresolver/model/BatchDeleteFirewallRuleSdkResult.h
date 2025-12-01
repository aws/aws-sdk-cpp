/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BatchDeleteFirewallRuleOutputItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class BatchDeleteFirewallRuleSdkResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleSdkResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleSdkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API BatchDeleteFirewallRuleSdkResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>High level information about the DNS Firewall rules that failed to
   * delete.</p>
   */
  inline const Aws::Vector<BatchDeleteFirewallRuleOutputItem>& GetFailures() const { return m_failures; }
  template <typename FailuresT = Aws::Vector<BatchDeleteFirewallRuleOutputItem>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<BatchDeleteFirewallRuleOutputItem>>
  BatchDeleteFirewallRuleSdkResult& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = BatchDeleteFirewallRuleOutputItem>
  BatchDeleteFirewallRuleSdkResult& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>High level information about the DNS Firewall rules that were deleted
   * successfully.</p>
   */
  inline const Aws::Vector<BatchDeleteFirewallRuleOutputItem>& GetSuccesses() const { return m_successes; }
  template <typename SuccessesT = Aws::Vector<BatchDeleteFirewallRuleOutputItem>>
  void SetSuccesses(SuccessesT&& value) {
    m_successesHasBeenSet = true;
    m_successes = std::forward<SuccessesT>(value);
  }
  template <typename SuccessesT = Aws::Vector<BatchDeleteFirewallRuleOutputItem>>
  BatchDeleteFirewallRuleSdkResult& WithSuccesses(SuccessesT&& value) {
    SetSuccesses(std::forward<SuccessesT>(value));
    return *this;
  }
  template <typename SuccessesT = BatchDeleteFirewallRuleOutputItem>
  BatchDeleteFirewallRuleSdkResult& AddSuccesses(SuccessesT&& value) {
    m_successesHasBeenSet = true;
    m_successes.emplace_back(std::forward<SuccessesT>(value));
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
  BatchDeleteFirewallRuleSdkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchDeleteFirewallRuleOutputItem> m_failures;
  bool m_failuresHasBeenSet = false;

  Aws::Vector<BatchDeleteFirewallRuleOutputItem> m_successes;
  bool m_successesHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
