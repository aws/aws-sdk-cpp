/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupDetail.h>
#include <aws/opensearchserverless/model/CollectionGroupErrorDetail.h>

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
class BatchGetCollectionGroupResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionGroupResult() = default;
  AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API BatchGetCollectionGroupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about each collection group.</p>
   */
  inline const Aws::Vector<CollectionGroupDetail>& GetCollectionGroupDetails() const { return m_collectionGroupDetails; }
  template <typename CollectionGroupDetailsT = Aws::Vector<CollectionGroupDetail>>
  void SetCollectionGroupDetails(CollectionGroupDetailsT&& value) {
    m_collectionGroupDetailsHasBeenSet = true;
    m_collectionGroupDetails = std::forward<CollectionGroupDetailsT>(value);
  }
  template <typename CollectionGroupDetailsT = Aws::Vector<CollectionGroupDetail>>
  BatchGetCollectionGroupResult& WithCollectionGroupDetails(CollectionGroupDetailsT&& value) {
    SetCollectionGroupDetails(std::forward<CollectionGroupDetailsT>(value));
    return *this;
  }
  template <typename CollectionGroupDetailsT = CollectionGroupDetail>
  BatchGetCollectionGroupResult& AddCollectionGroupDetails(CollectionGroupDetailsT&& value) {
    m_collectionGroupDetailsHasBeenSet = true;
    m_collectionGroupDetails.emplace_back(std::forward<CollectionGroupDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information for the request.</p>
   */
  inline const Aws::Vector<CollectionGroupErrorDetail>& GetCollectionGroupErrorDetails() const { return m_collectionGroupErrorDetails; }
  template <typename CollectionGroupErrorDetailsT = Aws::Vector<CollectionGroupErrorDetail>>
  void SetCollectionGroupErrorDetails(CollectionGroupErrorDetailsT&& value) {
    m_collectionGroupErrorDetailsHasBeenSet = true;
    m_collectionGroupErrorDetails = std::forward<CollectionGroupErrorDetailsT>(value);
  }
  template <typename CollectionGroupErrorDetailsT = Aws::Vector<CollectionGroupErrorDetail>>
  BatchGetCollectionGroupResult& WithCollectionGroupErrorDetails(CollectionGroupErrorDetailsT&& value) {
    SetCollectionGroupErrorDetails(std::forward<CollectionGroupErrorDetailsT>(value));
    return *this;
  }
  template <typename CollectionGroupErrorDetailsT = CollectionGroupErrorDetail>
  BatchGetCollectionGroupResult& AddCollectionGroupErrorDetails(CollectionGroupErrorDetailsT&& value) {
    m_collectionGroupErrorDetailsHasBeenSet = true;
    m_collectionGroupErrorDetails.emplace_back(std::forward<CollectionGroupErrorDetailsT>(value));
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
  BatchGetCollectionGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CollectionGroupDetail> m_collectionGroupDetails;

  Aws::Vector<CollectionGroupErrorDetail> m_collectionGroupErrorDetails;

  Aws::String m_requestId;
  bool m_collectionGroupDetailsHasBeenSet = false;
  bool m_collectionGroupErrorDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
