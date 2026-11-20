/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeBatchSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {
class ListHostedZoneChangeBatchesResult {
 public:
  AWS_ROUTE53_API ListHostedZoneChangeBatchesResult() = default;
  AWS_ROUTE53_API ListHostedZoneChangeBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API ListHostedZoneChangeBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A summary of each change batch on this page of results. The list is empty if
   * there are no change batches in the range that you specified.</p>
   */
  inline const Aws::Vector<ChangeBatchSummary>& GetChangeBatchSummaries() const { return m_changeBatchSummaries; }
  template <typename ChangeBatchSummariesT = Aws::Vector<ChangeBatchSummary>>
  void SetChangeBatchSummaries(ChangeBatchSummariesT&& value) {
    m_changeBatchSummariesHasBeenSet = true;
    m_changeBatchSummaries = std::forward<ChangeBatchSummariesT>(value);
  }
  template <typename ChangeBatchSummariesT = Aws::Vector<ChangeBatchSummary>>
  ListHostedZoneChangeBatchesResult& WithChangeBatchSummaries(ChangeBatchSummariesT&& value) {
    SetChangeBatchSummaries(std::forward<ChangeBatchSummariesT>(value));
    return *this;
  }
  template <typename ChangeBatchSummariesT = ChangeBatchSummary>
  ListHostedZoneChangeBatchesResult& AddChangeBatchSummaries(ChangeBatchSummariesT&& value) {
    m_changeBatchSummariesHasBeenSet = true;
    m_changeBatchSummaries.emplace_back(std::forward<ChangeBatchSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there might be more change batches to list, a token that you can specify
   * in the <code>NextToken</code> parameter of another request to get the next page
   * of results. If there are no more change batches to list, the response doesn't
   * include <code>NextToken</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHostedZoneChangeBatchesResult& WithNextToken(NextTokenT&& value) {
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
  ListHostedZoneChangeBatchesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ChangeBatchSummary> m_changeBatchSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_changeBatchSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
