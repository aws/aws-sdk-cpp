/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/RebuildStatus.h>
#include <aws/neptunedata/model/WriteBufferSize.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace neptunedata {
namespace Model {
class CancelIndexRebuildResult {
 public:
  AWS_NEPTUNEDATA_API CancelIndexRebuildResult() = default;
  AWS_NEPTUNEDATA_API CancelIndexRebuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NEPTUNEDATA_API CancelIndexRebuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the cancellation request.</p>
   */
  inline RebuildStatus GetStatus() const { return m_status; }
  inline void SetStatus(RebuildStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CancelIndexRebuildResult& WithStatus(RebuildStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The concurrency of the rebuild being cancelled, echoed from the original
   * <code>StartIndexRebuild</code> request.</p>
   */
  inline int GetConcurrency() const { return m_concurrency; }
  inline void SetConcurrency(int value) {
    m_concurrencyHasBeenSet = true;
    m_concurrency = value;
  }
  inline CancelIndexRebuildResult& WithConcurrency(int value) {
    SetConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>WriteBufferSize</code> of the rebuild being cancelled, echoed from
   * the original <code>StartIndexRebuild</code> request.</p>
   */
  inline WriteBufferSize GetWriteBufferSize() const { return m_writeBufferSize; }
  inline void SetWriteBufferSize(WriteBufferSize value) {
    m_writeBufferSizeHasBeenSet = true;
    m_writeBufferSize = value;
  }
  inline CancelIndexRebuildResult& WithWriteBufferSize(WriteBufferSize value) {
    SetWriteBufferSize(value);
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
  CancelIndexRebuildResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RebuildStatus m_status{RebuildStatus::NOT_SET};

  int m_concurrency{0};

  WriteBufferSize m_writeBufferSize{WriteBufferSize::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_concurrencyHasBeenSet = false;
  bool m_writeBufferSizeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
