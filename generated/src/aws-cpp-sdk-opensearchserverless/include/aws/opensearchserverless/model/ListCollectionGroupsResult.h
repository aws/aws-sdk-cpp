/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {
class ListCollectionGroupsResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API ListCollectionGroupsResult() = default;
  AWS_OPENSEARCHSERVERLESS_API ListCollectionGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API ListCollectionGroupsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about each collection group.</p>
   */
  inline const Aws::Vector<CollectionGroupSummary>& GetCollectionGroupSummaries() const { return m_collectionGroupSummaries; }
  template <typename CollectionGroupSummariesT = Aws::Vector<CollectionGroupSummary>>
  void SetCollectionGroupSummaries(CollectionGroupSummariesT&& value) {
    m_collectionGroupSummariesHasBeenSet = true;
    m_collectionGroupSummaries = std::forward<CollectionGroupSummariesT>(value);
  }
  template <typename CollectionGroupSummariesT = Aws::Vector<CollectionGroupSummary>>
  ListCollectionGroupsResult& WithCollectionGroupSummaries(CollectionGroupSummariesT&& value) {
    SetCollectionGroupSummaries(std::forward<CollectionGroupSummariesT>(value));
    return *this;
  }
  template <typename CollectionGroupSummariesT = CollectionGroupSummary>
  ListCollectionGroupsResult& AddCollectionGroupSummaries(CollectionGroupSummariesT&& value) {
    m_collectionGroupSummariesHasBeenSet = true;
    m_collectionGroupSummaries.emplace_back(std::forward<CollectionGroupSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When <code>nextToken</code> is returned, there are more results available.
   * The value of <code>nextToken</code> is a unique pagination token for each page.
   * Make the call again using the returned token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCollectionGroupsResult& WithNextToken(NextTokenT&& value) {
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
  ListCollectionGroupsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CollectionGroupSummary> m_collectionGroupSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_collectionGroupSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
