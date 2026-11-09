/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/RebuildStatus.h>
#include <aws/neptunedata/model/Scope.h>
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
class StartIndexRebuildResult {
 public:
  AWS_NEPTUNEDATA_API StartIndexRebuildResult() = default;
  AWS_NEPTUNEDATA_API StartIndexRebuildResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NEPTUNEDATA_API StartIndexRebuildResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the rebuild operation. See <code>RebuildStatus</code>
   * for possible values.</p>
   */
  inline RebuildStatus GetStatus() const { return m_status; }
  inline void SetStatus(RebuildStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartIndexRebuildResult& WithStatus(RebuildStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the index rebuild job. Use this ID with the
   * GetIndexRebuildStatus operation to check the progress of the rebuild.</p>
   */
  inline const Aws::String& GetRebuildId() const { return m_rebuildId; }
  template <typename RebuildIdT = Aws::String>
  void SetRebuildId(RebuildIdT&& value) {
    m_rebuildIdHasBeenSet = true;
    m_rebuildId = std::forward<RebuildIdT>(value);
  }
  template <typename RebuildIdT = Aws::String>
  StartIndexRebuildResult& WithRebuildId(RebuildIdT&& value) {
    SetRebuildId(std::forward<RebuildIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the rebuild operation that was requested. See <code>Scope</code>
   * for possible values: <code>ALL</code>, <code>QUADS</code>, or
   * <code>DICTIONARIES</code>.</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline StartIndexRebuildResult& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective concurrency used for this rebuild. This is the value supplied
   * in the request, capped at the number of vCPUs on the writer instance.</p>
   */
  inline int GetConcurrency() const { return m_concurrency; }
  inline void SetConcurrency(int value) {
    m_concurrencyHasBeenSet = true;
    m_concurrency = value;
  }
  inline StartIndexRebuildResult& WithConcurrency(int value) {
    SetConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>WriteBufferSize</code> applied to this rebuild. See the
   * <code>WriteBufferSize</code> enum for possible values.</p>
   */
  inline WriteBufferSize GetWriteBufferSize() const { return m_writeBufferSize; }
  inline void SetWriteBufferSize(WriteBufferSize value) {
    m_writeBufferSizeHasBeenSet = true;
    m_writeBufferSize = value;
  }
  inline StartIndexRebuildResult& WithWriteBufferSize(WriteBufferSize value) {
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
  StartIndexRebuildResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RebuildStatus m_status{RebuildStatus::NOT_SET};

  Aws::String m_rebuildId;

  Scope m_scope{Scope::NOT_SET};

  int m_concurrency{0};

  WriteBufferSize m_writeBufferSize{WriteBufferSize::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_rebuildIdHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_concurrencyHasBeenSet = false;
  bool m_writeBufferSizeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
