/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionJobStatus.h>

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
class CancelIngestionJobResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API CancelIngestionJobResult() = default;
  AWS_OPENSEARCHSERVERLESS_API CancelIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API CancelIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the cancelled ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobId() const { return m_ingestionJobId; }
  template <typename IngestionJobIdT = Aws::String>
  void SetIngestionJobId(IngestionJobIdT&& value) {
    m_ingestionJobIdHasBeenSet = true;
    m_ingestionJobId = std::forward<IngestionJobIdT>(value);
  }
  template <typename IngestionJobIdT = Aws::String>
  CancelIngestionJobResult& WithIngestionJobId(IngestionJobIdT&& value) {
    SetIngestionJobId(std::forward<IngestionJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the collection that the ingestion job belongs
   * to.</p>
   */
  inline const Aws::String& GetCollectionId() const { return m_collectionId; }
  template <typename CollectionIdT = Aws::String>
  void SetCollectionId(CollectionIdT&& value) {
    m_collectionIdHasBeenSet = true;
    m_collectionId = std::forward<CollectionIdT>(value);
  }
  template <typename CollectionIdT = Aws::String>
  CancelIngestionJobResult& WithCollectionId(CollectionIdT&& value) {
    SetCollectionId(std::forward<CollectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the cancelled ingestion job.</p>
   */
  inline const Aws::String& GetIngestionJobName() const { return m_ingestionJobName; }
  template <typename IngestionJobNameT = Aws::String>
  void SetIngestionJobName(IngestionJobNameT&& value) {
    m_ingestionJobNameHasBeenSet = true;
    m_ingestionJobName = std::forward<IngestionJobNameT>(value);
  }
  template <typename IngestionJobNameT = Aws::String>
  CancelIngestionJobResult& WithIngestionJobName(IngestionJobNameT&& value) {
    SetIngestionJobName(std::forward<IngestionJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the ingestion job.</p>
   */
  inline IngestionJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(IngestionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CancelIngestionJobResult& WithStatus(IngestionJobStatus value) {
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
  CancelIngestionJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_ingestionJobId;

  Aws::String m_collectionId;

  Aws::String m_ingestionJobName;

  IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ingestionJobIdHasBeenSet = false;
  bool m_collectionIdHasBeenSet = false;
  bool m_ingestionJobNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
