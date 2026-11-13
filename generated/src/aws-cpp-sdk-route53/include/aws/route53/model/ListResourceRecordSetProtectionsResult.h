/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceRecordSetProtection.h>

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
class ListResourceRecordSetProtectionsResult {
 public:
  AWS_ROUTE53_API ListResourceRecordSetProtectionsResult() = default;
  AWS_ROUTE53_API ListResourceRecordSetProtectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API ListResourceRecordSetProtectionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The protections in the hosted zone. The list is empty if the hosted zone has
   * no protections.</p>
   */
  inline const Aws::Vector<ResourceRecordSetProtection>& GetResourceRecordSetProtections() const { return m_resourceRecordSetProtections; }
  template <typename ResourceRecordSetProtectionsT = Aws::Vector<ResourceRecordSetProtection>>
  void SetResourceRecordSetProtections(ResourceRecordSetProtectionsT&& value) {
    m_resourceRecordSetProtectionsHasBeenSet = true;
    m_resourceRecordSetProtections = std::forward<ResourceRecordSetProtectionsT>(value);
  }
  template <typename ResourceRecordSetProtectionsT = Aws::Vector<ResourceRecordSetProtection>>
  ListResourceRecordSetProtectionsResult& WithResourceRecordSetProtections(ResourceRecordSetProtectionsT&& value) {
    SetResourceRecordSetProtections(std::forward<ResourceRecordSetProtectionsT>(value));
    return *this;
  }
  template <typename ResourceRecordSetProtectionsT = ResourceRecordSetProtection>
  ListResourceRecordSetProtectionsResult& AddResourceRecordSetProtections(ResourceRecordSetProtectionsT&& value) {
    m_resourceRecordSetProtectionsHasBeenSet = true;
    m_resourceRecordSetProtections.emplace_back(std::forward<ResourceRecordSetProtectionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are more protections to list, a token that you can specify in the
   * <code>NextToken</code> parameter of another request to get the next page of
   * results. If there are no more protections to list, the response doesn't include
   * <code>NextToken</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListResourceRecordSetProtectionsResult& WithNextToken(NextTokenT&& value) {
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
  ListResourceRecordSetProtectionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResourceRecordSetProtection> m_resourceRecordSetProtections;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resourceRecordSetProtectionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
