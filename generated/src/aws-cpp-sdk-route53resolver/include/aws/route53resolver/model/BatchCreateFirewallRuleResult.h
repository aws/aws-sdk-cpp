/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/BatchCreateFirewallRuleError.h>
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
class BatchCreateFirewallRuleResult {
 public:
  AWS_ROUTE53RESOLVER_API BatchCreateFirewallRuleResult() = default;
  AWS_ROUTE53RESOLVER_API BatchCreateFirewallRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53RESOLVER_API BatchCreateFirewallRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The firewall rules that were successfully created by the request.</p>
   */
  inline const Aws::Vector<FirewallRule>& GetCreatedFirewallRules() const { return m_createdFirewallRules; }
  template <typename CreatedFirewallRulesT = Aws::Vector<FirewallRule>>
  void SetCreatedFirewallRules(CreatedFirewallRulesT&& value) {
    m_createdFirewallRulesHasBeenSet = true;
    m_createdFirewallRules = std::forward<CreatedFirewallRulesT>(value);
  }
  template <typename CreatedFirewallRulesT = Aws::Vector<FirewallRule>>
  BatchCreateFirewallRuleResult& WithCreatedFirewallRules(CreatedFirewallRulesT&& value) {
    SetCreatedFirewallRules(std::forward<CreatedFirewallRulesT>(value));
    return *this;
  }
  template <typename CreatedFirewallRulesT = FirewallRule>
  BatchCreateFirewallRuleResult& AddCreatedFirewallRules(CreatedFirewallRulesT&& value) {
    m_createdFirewallRulesHasBeenSet = true;
    m_createdFirewallRules.emplace_back(std::forward<CreatedFirewallRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors that occurred while creating the firewall rules.</p>
   */
  inline const Aws::Vector<BatchCreateFirewallRuleError>& GetCreateErrors() const { return m_createErrors; }
  template <typename CreateErrorsT = Aws::Vector<BatchCreateFirewallRuleError>>
  void SetCreateErrors(CreateErrorsT&& value) {
    m_createErrorsHasBeenSet = true;
    m_createErrors = std::forward<CreateErrorsT>(value);
  }
  template <typename CreateErrorsT = Aws::Vector<BatchCreateFirewallRuleError>>
  BatchCreateFirewallRuleResult& WithCreateErrors(CreateErrorsT&& value) {
    SetCreateErrors(std::forward<CreateErrorsT>(value));
    return *this;
  }
  template <typename CreateErrorsT = BatchCreateFirewallRuleError>
  BatchCreateFirewallRuleResult& AddCreateErrors(CreateErrorsT&& value) {
    m_createErrorsHasBeenSet = true;
    m_createErrors.emplace_back(std::forward<CreateErrorsT>(value));
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
  BatchCreateFirewallRuleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FirewallRule> m_createdFirewallRules;

  Aws::Vector<BatchCreateFirewallRuleError> m_createErrors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_createdFirewallRulesHasBeenSet = false;
  bool m_createErrorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
