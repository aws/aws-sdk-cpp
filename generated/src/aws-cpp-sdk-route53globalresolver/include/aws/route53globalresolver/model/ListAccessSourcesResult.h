/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/AccessSourcesItem.h>

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
class ListAccessSourcesResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessSourcesResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListAccessSourcesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array containing information about the access sources, such as the ID,
   * CIDR etc.</p>
   */
  inline const Aws::Vector<AccessSourcesItem>& GetAccessSources() const { return m_accessSources; }
  template <typename AccessSourcesT = Aws::Vector<AccessSourcesItem>>
  void SetAccessSources(AccessSourcesT&& value) {
    m_accessSourcesHasBeenSet = true;
    m_accessSources = std::forward<AccessSourcesT>(value);
  }
  template <typename AccessSourcesT = Aws::Vector<AccessSourcesItem>>
  ListAccessSourcesResult& WithAccessSources(AccessSourcesT&& value) {
    SetAccessSources(std::forward<AccessSourcesT>(value));
    return *this;
  }
  template <typename AccessSourcesT = AccessSourcesItem>
  ListAccessSourcesResult& AddAccessSources(AccessSourcesT&& value) {
    m_accessSourcesHasBeenSet = true;
    m_accessSources.emplace_back(std::forward<AccessSourcesT>(value));
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
  ListAccessSourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<AccessSourcesItem> m_accessSources;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_accessSourcesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
