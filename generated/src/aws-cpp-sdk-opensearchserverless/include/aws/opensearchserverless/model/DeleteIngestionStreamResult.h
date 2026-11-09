/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionStreamStatus.h>

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
class DeleteIngestionStreamResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API DeleteIngestionStreamResult() = default;
  AWS_OPENSEARCHSERVERLESS_API DeleteIngestionStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API DeleteIngestionStreamResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deleted ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamId() const { return m_ingestionStreamId; }
  template <typename IngestionStreamIdT = Aws::String>
  void SetIngestionStreamId(IngestionStreamIdT&& value) {
    m_ingestionStreamIdHasBeenSet = true;
    m_ingestionStreamId = std::forward<IngestionStreamIdT>(value);
  }
  template <typename IngestionStreamIdT = Aws::String>
  DeleteIngestionStreamResult& WithIngestionStreamId(IngestionStreamIdT&& value) {
    SetIngestionStreamId(std::forward<IngestionStreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion stream belonged
   * to.</p>
   */
  inline const Aws::String& GetCollectionId() const { return m_collectionId; }
  template <typename CollectionIdT = Aws::String>
  void SetCollectionId(CollectionIdT&& value) {
    m_collectionIdHasBeenSet = true;
    m_collectionId = std::forward<CollectionIdT>(value);
  }
  template <typename CollectionIdT = Aws::String>
  DeleteIngestionStreamResult& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deleted ingestion stream.</p>
   */
  inline const Aws::String& GetIngestionStreamName() const { return m_ingestionStreamName; }
  template <typename IngestionStreamNameT = Aws::String>
  void SetIngestionStreamName(IngestionStreamNameT&& value) {
    m_ingestionStreamNameHasBeenSet = true;
    m_ingestionStreamName = std::forward<IngestionStreamNameT>(value);
  }
  template <typename IngestionStreamNameT = Aws::String>
  DeleteIngestionStreamResult& WithIngestionStreamName(IngestionStreamNameT&& value) {
    SetIngestionStreamName(std::forward<IngestionStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the ingestion stream.</p>
   */
  inline IngestionStreamStatus GetStatus() const { return m_status; }
  inline void SetStatus(IngestionStreamStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteIngestionStreamResult& WithStatus(IngestionStreamStatus value) {
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
  DeleteIngestionStreamResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ingestionStreamId;

  Aws::String m_collectionId;

  Aws::String m_ingestionStreamName;

  IngestionStreamStatus m_status{IngestionStreamStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ingestionStreamIdHasBeenSet = false;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionStreamNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
