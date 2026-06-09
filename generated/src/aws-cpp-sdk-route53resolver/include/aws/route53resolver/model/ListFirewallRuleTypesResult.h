/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallRuleTypeDefinition.h>

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
class ListFirewallRuleTypesResult {
 public:
  AWS_ROUTE53RESOLVER_API ListFirewallRuleTypesResult() = default;
  AWS_ROUTE53RESOLVER_API ListFirewallRuleTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53RESOLVER_API ListFirewallRuleTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of the available rule type definitions.</p>
   */
  inline const Aws::Vector<FirewallRuleTypeDefinition>& GetFirewallRuleTypes() const { return m_firewallRuleTypes; }
  template <typename FirewallRuleTypesT = Aws::Vector<FirewallRuleTypeDefinition>>
  void SetFirewallRuleTypes(FirewallRuleTypesT&& value) {
    m_firewallRuleTypesHasBeenSet = true;
    m_firewallRuleTypes = std::forward<FirewallRuleTypesT>(value);
  }
  template <typename FirewallRuleTypesT = Aws::Vector<FirewallRuleTypeDefinition>>
  ListFirewallRuleTypesResult& WithFirewallRuleTypes(FirewallRuleTypesT&& value) {
    SetFirewallRuleTypes(std::forward<FirewallRuleTypesT>(value));
    return *this;
  }
  template <typename FirewallRuleTypesT = FirewallRuleTypeDefinition>
  ListFirewallRuleTypesResult& AddFirewallRuleTypes(FirewallRuleTypesT&& value) {
    m_firewallRuleTypesHasBeenSet = true;
    m_firewallRuleTypes.emplace_back(std::forward<FirewallRuleTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If objects are still available for retrieval, Resolver returns this token in
   * the response. To retrieve the next batch of objects, provide this token in your
   * next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallRuleTypesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListFirewallRuleTypesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FirewallRuleTypeDefinition> m_firewallRuleTypes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_firewallRuleTypesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
