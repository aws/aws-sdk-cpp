/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ListLinksResponseStructure.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class ListLinksResult {
 public:
  AWS_RTBFABRIC_API ListLinksResult() = default;
  AWS_RTBFABRIC_API ListLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API ListLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about created links.</p>
   */
  inline const Aws::Vector<ListLinksResponseStructure>& GetLinks() const { return m_links; }
  template <typename LinksT = Aws::Vector<ListLinksResponseStructure>>
  void SetLinks(LinksT&& value) {
    m_linksHasBeenSet = true;
    m_links = std::forward<LinksT>(value);
  }
  template <typename LinksT = Aws::Vector<ListLinksResponseStructure>>
  ListLinksResult& WithLinks(LinksT&& value) {
    SetLinks(std::forward<LinksT>(value));
    return *this;
  }
  template <typename LinksT = ListLinksResponseStructure>
  ListLinksResult& AddLinks(LinksT&& value) {
    m_linksHasBeenSet = true;
    m_links.emplace_back(std::forward<LinksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>nextToken</code> is returned, there are more results available. The
   * value of <code>nextToken</code> is a unique pagination token for each page. Make
   * the call again using the returned token to retrieve the next page. Keep all
   * other arguments unchanged. Each pagination token expires after 24 hours. Using
   * an expired pagination token will return an <i>HTTP 400 InvalidToken
   * error</i>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListLinksResult& WithNextToken(NextTokenT&& value) {
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
  ListLinksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListLinksResponseStructure> m_links;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_linksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
