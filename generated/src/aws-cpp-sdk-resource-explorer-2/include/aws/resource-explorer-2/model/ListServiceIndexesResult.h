/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/Index.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {
class ListServiceIndexesResult {
 public:
  AWS_RESOURCEEXPLORER2_API ListServiceIndexesResult() = default;
  AWS_RESOURCEEXPLORER2_API ListServiceIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESOURCEEXPLORER2_API ListServiceIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of <code>Index</code> objects that describe the Resource Explorer
   * indexes found in the specified Regions.</p>
   */
  inline const Aws::Vector<Index>& GetIndexes() const { return m_indexes; }
  template <typename IndexesT = Aws::Vector<Index>>
  void SetIndexes(IndexesT&& value) {
    m_indexesHasBeenSet = true;
    m_indexes = std::forward<IndexesT>(value);
  }
  template <typename IndexesT = Aws::Vector<Index>>
  ListServiceIndexesResult& WithIndexes(IndexesT&& value) {
    SetIndexes(std::forward<IndexesT>(value));
    return *this;
  }
  template <typename IndexesT = Index>
  ListServiceIndexesResult& AddIndexes(IndexesT&& value) {
    m_indexesHasBeenSet = true;
    m_indexes.emplace_back(std::forward<IndexesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent <code>ListServiceIndexes</code>
   * request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServiceIndexesResult& WithNextToken(NextTokenT&& value) {
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
  ListServiceIndexesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Index> m_indexes;
  bool m_indexesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
