/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptunedata/Neptunedata_EXPORTS.h>

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
class ListIndexRebuildsResult {
 public:
  AWS_NEPTUNEDATA_API ListIndexRebuildsResult() = default;
  AWS_NEPTUNEDATA_API ListIndexRebuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NEPTUNEDATA_API ListIndexRebuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of unique identifiers for index rebuild operations. Use each ID with
   * the GetIndexRebuildStatus operation to retrieve detailed status information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRebuildIds() const { return m_rebuildIds; }
  template <typename RebuildIdsT = Aws::Vector<Aws::String>>
  void SetRebuildIds(RebuildIdsT&& value) {
    m_rebuildIdsHasBeenSet = true;
    m_rebuildIds = std::forward<RebuildIdsT>(value);
  }
  template <typename RebuildIdsT = Aws::Vector<Aws::String>>
  ListIndexRebuildsResult& WithRebuildIds(RebuildIdsT&& value) {
    SetRebuildIds(std::forward<RebuildIdsT>(value));
    return *this;
  }
  template <typename RebuildIdsT = Aws::String>
  ListIndexRebuildsResult& AddRebuildIds(RebuildIdsT&& value) {
    m_rebuildIdsHasBeenSet = true;
    m_rebuildIds.emplace_back(std::forward<RebuildIdsT>(value));
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
  ListIndexRebuildsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_rebuildIds;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rebuildIdsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
