/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionJobDetail.h>

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
class CreateIngestionJobResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API CreateIngestionJobResult() = default;
  AWS_OPENSEARCHSERVERLESS_API CreateIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API CreateIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the created ingestion job.</p>
   */
  inline const IngestionJobDetail& GetIngestionJobDetail() const { return m_ingestionJobDetail; }
  template <typename IngestionJobDetailT = IngestionJobDetail>
  void SetIngestionJobDetail(IngestionJobDetailT&& value) {
    m_ingestionJobDetailHasBeenSet = true;
    m_ingestionJobDetail = std::forward<IngestionJobDetailT>(value);
  }
  template <typename IngestionJobDetailT = IngestionJobDetail>
  CreateIngestionJobResult& WithIngestionJobDetail(IngestionJobDetailT&& value) {
    SetIngestionJobDetail(std::forward<IngestionJobDetailT>(value));
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
  CreateIngestionJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IngestionJobDetail m_ingestionJobDetail;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ingestionJobDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
