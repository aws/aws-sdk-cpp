/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53Resolver {
namespace Model {

/**
 */
class ListFirewallRuleTypesRequest : public Route53ResolverRequest {
 public:
  AWS_ROUTE53RESOLVER_API ListFirewallRuleTypesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFirewallRuleTypes"; }

  AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An optional filter that restricts the response to a single
   * <a>FirewallRuleType</a> variant. Supported values:
   * <code>FirewallAdvancedContentCategory</code>,
   * <code>FirewallAdvancedThreatCategory</code>, <code>DnsThreatProtection</code>,
   * and <code>PartnerThreatProtection</code>. If omitted, definitions across all
   * variants are returned.</p>
   */
  inline const Aws::String& GetRuleType() const { return m_ruleType; }
  inline bool RuleTypeHasBeenSet() const { return m_ruleTypeHasBeenSet; }
  template <typename RuleTypeT = Aws::String>
  void SetRuleType(RuleTypeT&& value) {
    m_ruleTypeHasBeenSet = true;
    m_ruleType = std::forward<RuleTypeT>(value);
  }
  template <typename RuleTypeT = Aws::String>
  ListFirewallRuleTypesRequest& WithRuleType(RuleTypeT&& value) {
    SetRuleType(std::forward<RuleTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of objects that you want Resolver to return for this
   * request. If more objects are available, in the response, Resolver provides a
   * <code>NextToken</code> value that you can use in a subsequent call to get the
   * next batch of objects.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFirewallRuleTypesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For the first call to this list request, omit this value. When you request a
   * list of objects, Resolver returns at most the number of objects specified in
   * <code>MaxResults</code>. If more objects are available for retrieval, Resolver
   * provides a <code>NextToken</code> value in the response. To retrieve the next
   * batch of objects, use the token that was returned for the prior request in your
   * next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallRuleTypesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleType;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_ruleTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
