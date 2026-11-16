/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Vectors {
namespace Model {
class UpdateMetadataConfigurationResult {
 public:
  AWS_S3VECTORS_API UpdateMetadataConfigurationResult() = default;
  AWS_S3VECTORS_API UpdateMetadataConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3VECTORS_API UpdateMetadataConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated vector index.</p>
   */
  inline const Aws::String& GetIndexArn() const { return m_indexArn; }
  template <typename IndexArnT = Aws::String>
  void SetIndexArn(IndexArnT&& value) {
    m_indexArnHasBeenSet = true;
    m_indexArn = std::forward<IndexArnT>(value);
  }
  template <typename IndexArnT = Aws::String>
  UpdateMetadataConfigurationResult& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
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
  UpdateMetadataConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_indexArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_indexArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
