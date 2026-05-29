/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/BatchUpdateFirewallRuleError.h>
#include <aws/route53resolver/model/FirewallRule.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {
class BatchUpdateFirewallRuleResult {
 public:
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleResult() = default;
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53RESOLVER_API BatchUpdateFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The firewall rules that were successfully updated by the request.</p>
   */
  inline const Aws::Vector<FirewallRule>& GetUpdatedFirewallRules() const { return m_updatedFirewallRules; }
  template <typename UpdatedFirewallRulesT = Aws::Vector<FirewallRule>>
  void SetUpdatedFirewallRules(UpdatedFirewallRulesT&& value) {
    m_updatedFirewallRulesHasBeenSet = true;
    m_updatedFirewallRules = std::forward<UpdatedFirewallRulesT>(value);
  }
  template <typename UpdatedFirewallRulesT = Aws::Vector<FirewallRule>>
  BatchUpdateFirewallRuleResult& WithUpdatedFirewallRules(UpdatedFirewallRulesT&& value) {
    SetUpdatedFirewallRules(std::forward<UpdatedFirewallRulesT>(value));
    return *this;
  }
  template <typename UpdatedFirewallRulesT = FirewallRule>
  BatchUpdateFirewallRuleResult& AddUpdatedFirewallRules(UpdatedFirewallRulesT&& value) {
    m_updatedFirewallRulesHasBeenSet = true;
    m_updatedFirewallRules.emplace_back(std::forward<UpdatedFirewallRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors that occurred while updating the firewall rules.</p>
   */
  inline const Aws::Vector<BatchUpdateFirewallRuleError>& GetUpdateErrors() const { return m_updateErrors; }
  template <typename UpdateErrorsT = Aws::Vector<BatchUpdateFirewallRuleError>>
  void SetUpdateErrors(UpdateErrorsT&& value) {
    m_updateErrorsHasBeenSet = true;
    m_updateErrors = std::forward<UpdateErrorsT>(value);
  }
  template <typename UpdateErrorsT = Aws::Vector<BatchUpdateFirewallRuleError>>
  BatchUpdateFirewallRuleResult& WithUpdateErrors(UpdateErrorsT&& value) {
    SetUpdateErrors(std::forward<UpdateErrorsT>(value));
    return *this;
  }
  template <typename UpdateErrorsT = BatchUpdateFirewallRuleError>
  BatchUpdateFirewallRuleResult& AddUpdateErrors(UpdateErrorsT&& value) {
    m_updateErrorsHasBeenSet = true;
    m_updateErrors.emplace_back(std::forward<UpdateErrorsT>(value));
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
  BatchUpdateFirewallRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FirewallRule> m_updatedFirewallRules;

  Aws::Vector<BatchUpdateFirewallRuleError> m_updateErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_updatedFirewallRulesHasBeenSet = false;
  bool m_updateErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
