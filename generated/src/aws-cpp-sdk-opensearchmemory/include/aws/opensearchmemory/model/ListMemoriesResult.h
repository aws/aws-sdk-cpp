/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/MemoryListSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {
class ListMemoriesResult {
 public:
  AWS_OPENSEARCHMEMORY_API ListMemoriesResult() = default;
  AWS_OPENSEARCHMEMORY_API ListMemoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API ListMemoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The memories, in the requested order. Empty when there are none.</p>
   */
  inline const Aws::Vector<MemoryListSummary>& GetMemories() const { return m_memories; }
  template <typename MemoriesT = Aws::Vector<MemoryListSummary>>
  void SetMemories(MemoriesT&& value) {
    m_memoriesHasBeenSet = true;
    m_memories = std::forward<MemoriesT>(value);
  }
  template <typename MemoriesT = Aws::Vector<MemoryListSummary>>
  ListMemoriesResult& WithMemories(MemoriesT&& value) {
    SetMemories(std::forward<MemoriesT>(value));
    return *this;
  }
  template <typename MemoriesT = MemoryListSummary>
  ListMemoriesResult& AddMemories(MemoriesT&& value) {
    m_memoriesHasBeenSet = true;
    m_memories.emplace_back(std::forward<MemoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Absent when there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMemoriesResult& WithNextToken(NextTokenT&& value) {
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
  ListMemoriesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<MemoryListSummary> m_memories;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_memoriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
