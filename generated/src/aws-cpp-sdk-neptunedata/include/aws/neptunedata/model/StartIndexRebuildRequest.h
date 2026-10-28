/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/NeptunedataRequest.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/Scope.h>
#include <aws/neptunedata/model/WriteBufferSize.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace neptunedata {
namespace Model {

/**
 */
class StartIndexRebuildRequest : public NeptunedataRequest {
 public:
  AWS_NEPTUNEDATA_API StartIndexRebuildRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartIndexRebuild"; }

  AWS_NEPTUNEDATA_API Aws::String SerializePayload() const override;

  AWS_NEPTUNEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Specifies the scope of the rebuild operation. Possible values are:</p> <ul>
   * <li> <p> <code>ALL</code> - Rebuild all (quads and dictionaries). This is the
   * default if not specified.</p> </li> <li> <p> <code>QUADS</code> - Rebuild only
   * the quad indexes. </p> </li> <li> <p> <code>DICTIONARIES</code> - Rebuild only
   * the dictionaries.</p> </li> </ul>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline StartIndexRebuildRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of concurrent indexes to rebuild in parallel. If not specified,
   * defaults to <code>1</code>.</p> <p>Valid values are between <code>1</code> and
   * the number of vCPUs available on the writer instance. If the value exceeds the
   * available vCPUs, it is capped at the maximum instead of returning an
   * <code>InvalidParameterException</code>. The effective (capped) value is returned
   * in the response.</p> <p>Higher concurrency can shorten the overall rebuild, but
   * also increases CPU and I/O load during the operation.</p>
   */
  inline int GetConcurrency() const { return m_concurrency; }
  inline bool ConcurrencyHasBeenSet() const { return m_concurrencyHasBeenSet; }
  inline void SetConcurrency(int value) {
    m_concurrencyHasBeenSet = true;
    m_concurrency = value;
  }
  inline StartIndexRebuildRequest& WithConcurrency(int value) {
    SetConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the buffer size used for tracking concurrent write operations during
   * the index rebuild. If your database has high write traffic during the rebuild, a
   * larger buffer prevents the operation from failing due to buffer overflow.
   * Possible values are:</p> <ul> <li> <p> <code>LOW</code> - Suitable for databases
   * with light to moderate write activity. This is the default.</p> </li> <li> <p>
   * <code>MEDIUM</code> - Recommended for databases with sustained write traffic or
   * bulk loading.</p> </li> <li> <p> <code>HIGH</code> - Use when rebuilding indexes
   * during heavy write workloads or continuous bulk data ingestion.</p> </li> </ul>
   * <p>If your rebuild fails and you are actively writing data to the database,
   * retry with a higher <code>writeBufferSize</code> value. For bulk load
   * operations, consider using <code>HIGH</code>.</p>
   */
  inline WriteBufferSize GetWriteBufferSize() const { return m_writeBufferSize; }
  inline bool WriteBufferSizeHasBeenSet() const { return m_writeBufferSizeHasBeenSet; }
  inline void SetWriteBufferSize(WriteBufferSize value) {
    m_writeBufferSizeHasBeenSet = true;
    m_writeBufferSize = value;
  }
  inline StartIndexRebuildRequest& WithWriteBufferSize(WriteBufferSize value) {
    SetWriteBufferSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you don't specify a client token, the SDK
   * automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartIndexRebuildRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Scope m_scope{Scope::NOT_SET};

  int m_concurrency{0};

  WriteBufferSize m_writeBufferSize{WriteBufferSize::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_scopeHasBeenSet = false;
  bool m_concurrencyHasBeenSet = false;
  bool m_writeBufferSizeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
