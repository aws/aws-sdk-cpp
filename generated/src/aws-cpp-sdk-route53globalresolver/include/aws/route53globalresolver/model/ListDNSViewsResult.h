/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/DNSViewSummary.h>

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
class ListDNSViewsResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListDNSViewsResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListDNSViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListDNSViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response. Provide this token in the next call to get the results not
   * returned in this call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDNSViewsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of information about the DNS views, such as whether DNSSEC is
   * enabled, creation time, etc.</p>
   */
  inline const Aws::Vector<DNSViewSummary>& GetDnsViews() const { return m_dnsViews; }
  template <typename DnsViewsT = Aws::Vector<DNSViewSummary>>
  void SetDnsViews(DnsViewsT&& value) {
    m_dnsViewsHasBeenSet = true;
    m_dnsViews = std::forward<DnsViewsT>(value);
  }
  template <typename DnsViewsT = Aws::Vector<DNSViewSummary>>
  ListDNSViewsResult& WithDnsViews(DnsViewsT&& value) {
    SetDnsViews(std::forward<DnsViewsT>(value));
    return *this;
  }
  template <typename DnsViewsT = DNSViewSummary>
  ListDNSViewsResult& AddDnsViews(DnsViewsT&& value) {
    m_dnsViewsHasBeenSet = true;
    m_dnsViews.emplace_back(std::forward<DnsViewsT>(value));
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
  ListDNSViewsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<DNSViewSummary> m_dnsViews;
  bool m_dnsViewsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
