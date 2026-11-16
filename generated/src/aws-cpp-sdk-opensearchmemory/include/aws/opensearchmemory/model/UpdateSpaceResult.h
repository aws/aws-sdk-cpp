/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/SpaceStatus.h>

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
class UpdateSpaceResult {
 public:
  AWS_OPENSEARCHMEMORY_API UpdateSpaceResult() = default;
  AWS_OPENSEARCHMEMORY_API UpdateSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API UpdateSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  UpdateSpaceResult& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the space: <code>UPDATING</code> when the change has to be
   * applied to the space's strategies, retention, or extraction model. Otherwise,
   * the space's current status.</p>
   */
  inline SpaceStatus GetStatus() const { return m_status; }
  inline void SetStatus(SpaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateSpaceResult& WithStatus(SpaceStatus value) {
    SetStatus(value);
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
  UpdateSpaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  SpaceStatus m_status{SpaceStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
