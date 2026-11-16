/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/CreateMemoryDetail.h>

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
/**
 * <p>The acknowledged memory. It isn't searchable yet when the call
 * returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/CreateMemoryOutput">AWS
 * API Reference</a></p>
 */
class CreateMemoryResult {
 public:
  AWS_OPENSEARCHMEMORY_API CreateMemoryResult() = default;
  AWS_OPENSEARCHMEMORY_API CreateMemoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API CreateMemoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The memory, identified but not yet indexed.</p>
   */
  inline const CreateMemoryDetail& GetMemory() const { return m_memory; }
  template <typename MemoryT = CreateMemoryDetail>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = CreateMemoryDetail>
  CreateMemoryResult& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
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
  CreateMemoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  CreateMemoryDetail m_memory;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_memoryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
