/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/UpdateCollectionGroupDetail.h>

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
class UpdateCollectionGroupResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API UpdateCollectionGroupResult() = default;
  AWS_OPENSEARCHSERVERLESS_API UpdateCollectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API UpdateCollectionGroupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the updated collection group.</p>
   */
  inline const UpdateCollectionGroupDetail& GetUpdateCollectionGroupDetail() const { return m_updateCollectionGroupDetail; }
  template <typename UpdateCollectionGroupDetailT = UpdateCollectionGroupDetail>
  void SetUpdateCollectionGroupDetail(UpdateCollectionGroupDetailT&& value) {
    m_updateCollectionGroupDetailHasBeenSet = true;
    m_updateCollectionGroupDetail = std::forward<UpdateCollectionGroupDetailT>(value);
  }
  template <typename UpdateCollectionGroupDetailT = UpdateCollectionGroupDetail>
  UpdateCollectionGroupResult& WithUpdateCollectionGroupDetail(UpdateCollectionGroupDetailT&& value) {
    SetUpdateCollectionGroupDetail(std::forward<UpdateCollectionGroupDetailT>(value));
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
  UpdateCollectionGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateCollectionGroupDetail m_updateCollectionGroupDetail;

  Aws::String m_requestId;
  bool m_updateCollectionGroupDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
