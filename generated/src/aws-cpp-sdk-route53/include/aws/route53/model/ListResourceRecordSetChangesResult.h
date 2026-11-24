/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceRecordSetChange.h>

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
class ListResourceRecordSetChangesResult {
 public:
  AWS_ROUTE53_API ListResourceRecordSetChangesResult() = default;
  AWS_ROUTE53_API ListResourceRecordSetChangesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API ListResourceRecordSetChangesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The changes on this page of results. The list is empty if there are no
   * changes that match the request.</p>
   */
  inline const Aws::Vector<ResourceRecordSetChange>& GetResourceRecordSetChanges() const { return m_resourceRecordSetChanges; }
  template <typename ResourceRecordSetChangesT = Aws::Vector<ResourceRecordSetChange>>
  void SetResourceRecordSetChanges(ResourceRecordSetChangesT&& value) {
    m_resourceRecordSetChangesHasBeenSet = true;
    m_resourceRecordSetChanges = std::forward<ResourceRecordSetChangesT>(value);
  }
  template <typename ResourceRecordSetChangesT = Aws::Vector<ResourceRecordSetChange>>
  ListResourceRecordSetChangesResult& WithResourceRecordSetChanges(ResourceRecordSetChangesT&& value) {
    SetResourceRecordSetChanges(std::forward<ResourceRecordSetChangesT>(value));
    return *this;
  }
  template <typename ResourceRecordSetChangesT = ResourceRecordSetChange>
  ListResourceRecordSetChangesResult& AddResourceRecordSetChanges(ResourceRecordSetChangesT&& value) {
    m_resourceRecordSetChangesHasBeenSet = true;
    m_resourceRecordSetChanges.emplace_back(std::forward<ResourceRecordSetChangesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there might be more changes to list, a token that you can specify in the
   * <code>NextToken</code> parameter of another request to get the next page of
   * results. If there are no more changes to list, the response doesn't include
   * <code>NextToken</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourceRecordSetChangesResult& WithNextToken(NextTokenT&& value) {
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
  ListResourceRecordSetChangesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResourceRecordSetChange> m_resourceRecordSetChanges;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resourceRecordSetChangesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
