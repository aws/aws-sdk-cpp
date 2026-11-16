/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

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
class DeleteMemoryResult {
 public:
  AWS_OPENSEARCHMEMORY_API DeleteMemoryResult() = default;
  AWS_OPENSEARCHMEMORY_API DeleteMemoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API DeleteMemoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the deleted memory.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  DeleteMemoryResult& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
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
  DeleteMemoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_memoryId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_memoryIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
