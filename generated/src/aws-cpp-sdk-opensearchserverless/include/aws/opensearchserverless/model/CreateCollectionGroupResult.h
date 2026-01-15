/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CreateCollectionGroupDetail.h>

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
class CreateCollectionGroupResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API CreateCollectionGroupResult() = default;
  AWS_OPENSEARCHSERVERLESS_API CreateCollectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API CreateCollectionGroupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the created collection group.</p>
   */
  inline const CreateCollectionGroupDetail& GetCreateCollectionGroupDetail() const { return m_createCollectionGroupDetail; }
  template <typename CreateCollectionGroupDetailT = CreateCollectionGroupDetail>
  void SetCreateCollectionGroupDetail(CreateCollectionGroupDetailT&& value) {
    m_createCollectionGroupDetailHasBeenSet = true;
    m_createCollectionGroupDetail = std::forward<CreateCollectionGroupDetailT>(value);
  }
  template <typename CreateCollectionGroupDetailT = CreateCollectionGroupDetail>
  CreateCollectionGroupResult& WithCreateCollectionGroupDetail(CreateCollectionGroupDetailT&& value) {
    SetCreateCollectionGroupDetail(std::forward<CreateCollectionGroupDetailT>(value));
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
  CreateCollectionGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  CreateCollectionGroupDetail m_createCollectionGroupDetail;

  Aws::String m_requestId;
  bool m_createCollectionGroupDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
