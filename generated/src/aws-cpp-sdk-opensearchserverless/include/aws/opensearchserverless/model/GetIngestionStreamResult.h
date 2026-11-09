/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/IngestionStreamDetail.h>

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
class GetIngestionStreamResult {
 public:
  AWS_OPENSEARCHSERVERLESS_API GetIngestionStreamResult() = default;
  AWS_OPENSEARCHSERVERLESS_API GetIngestionStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVERLESS_API GetIngestionStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details about the requested ingestion stream.</p>
   */
  inline const IngestionStreamDetail& GetIngestionStreamDetail() const { return m_ingestionStreamDetail; }
  template <typename IngestionStreamDetailT = IngestionStreamDetail>
  void SetIngestionStreamDetail(IngestionStreamDetailT&& value) {
    m_ingestionStreamDetailHasBeenSet = true;
    m_ingestionStreamDetail = std::forward<IngestionStreamDetailT>(value);
  }
  template <typename IngestionStreamDetailT = IngestionStreamDetail>
  GetIngestionStreamResult& WithIngestionStreamDetail(IngestionStreamDetailT&& value) {
    SetIngestionStreamDetail(std::forward<IngestionStreamDetailT>(value));
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
  GetIngestionStreamResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  IngestionStreamDetail m_ingestionStreamDetail;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_ingestionStreamDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
