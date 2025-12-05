/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class ListFirewallRulesRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListFirewallRulesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListFirewallRules"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  AWS_ROUTE53GLOBALRESOLVER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of results to retrieve in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListFirewallRulesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFirewallRulesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the DNS view.</p>
   */
  inline const Aws::String& GetDnsViewId() const { return m_dnsViewId; }
  inline bool DnsViewIdHasBeenSet() const { return m_dnsViewIdHasBeenSet; }
  template <typename DnsViewIdT = Aws::String>
  void SetDnsViewId(DnsViewIdT&& value) {
    m_dnsViewIdHasBeenSet = true;
    m_dnsViewId = std::forward<DnsViewIdT>(value);
  }
  template <typename DnsViewIdT = Aws::String>
  ListFirewallRulesRequest& WithDnsViewId(DnsViewIdT&& value) {
    SetDnsViewId(std::forward<DnsViewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Values to filter the results.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  ListFirewallRulesRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersKeyT = Aws::String, typename FiltersValueT = Aws::Vector<Aws::String>>
  ListFirewallRulesRequest& AddFilters(FiltersKeyT&& key, FiltersValueT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace(std::forward<FiltersKeyT>(key), std::forward<FiltersValueT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_dnsViewId;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_dnsViewIdHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
