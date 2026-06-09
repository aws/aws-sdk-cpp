/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/BatchDeleteFirewallRuleError.h>
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
class BatchDeleteFirewallRuleResult {
 public:
  AWS_ROUTE53RESOLVER_API BatchDeleteFirewallRuleResult() = default;
  AWS_ROUTE53RESOLVER_API BatchDeleteFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53RESOLVER_API BatchDeleteFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The firewall rules that were successfully deleted by the request.</p>
   */
  inline const Aws::Vector<FirewallRule>& GetDeletedFirewallRules() const { return m_deletedFirewallRules; }
  template <typename DeletedFirewallRulesT = Aws::Vector<FirewallRule>>
  void SetDeletedFirewallRules(DeletedFirewallRulesT&& value) {
    m_deletedFirewallRulesHasBeenSet = true;
    m_deletedFirewallRules = std::forward<DeletedFirewallRulesT>(value);
  }
  template <typename DeletedFirewallRulesT = Aws::Vector<FirewallRule>>
  BatchDeleteFirewallRuleResult& WithDeletedFirewallRules(DeletedFirewallRulesT&& value) {
    SetDeletedFirewallRules(std::forward<DeletedFirewallRulesT>(value));
    return *this;
  }
  template <typename DeletedFirewallRulesT = FirewallRule>
  BatchDeleteFirewallRuleResult& AddDeletedFirewallRules(DeletedFirewallRulesT&& value) {
    m_deletedFirewallRulesHasBeenSet = true;
    m_deletedFirewallRules.emplace_back(std::forward<DeletedFirewallRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors that occurred while deleting the firewall rules.</p>
   */
  inline const Aws::Vector<BatchDeleteFirewallRuleError>& GetDeleteErrors() const { return m_deleteErrors; }
  template <typename DeleteErrorsT = Aws::Vector<BatchDeleteFirewallRuleError>>
  void SetDeleteErrors(DeleteErrorsT&& value) {
    m_deleteErrorsHasBeenSet = true;
    m_deleteErrors = std::forward<DeleteErrorsT>(value);
  }
  template <typename DeleteErrorsT = Aws::Vector<BatchDeleteFirewallRuleError>>
  BatchDeleteFirewallRuleResult& WithDeleteErrors(DeleteErrorsT&& value) {
    SetDeleteErrors(std::forward<DeleteErrorsT>(value));
    return *this;
  }
  template <typename DeleteErrorsT = BatchDeleteFirewallRuleError>
  BatchDeleteFirewallRuleResult& AddDeleteErrors(DeleteErrorsT&& value) {
    m_deleteErrorsHasBeenSet = true;
    m_deleteErrors.emplace_back(std::forward<DeleteErrorsT>(value));
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
  BatchDeleteFirewallRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FirewallRule> m_deletedFirewallRules;

  Aws::Vector<BatchDeleteFirewallRuleError> m_deleteErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletedFirewallRulesHasBeenSet = false;
  bool m_deleteErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
