/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class CreateVectorBucketResult {
 public:
  AWS_S3VECTORS_API CreateVectorBucketResult() = default;
  AWS_S3VECTORS_API CreateVectorBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3VECTORS_API CreateVectorBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the newly created vector bucket.</p>
   */
  inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
  template <typename VectorBucketArnT = Aws::String>
  void SetVectorBucketArn(VectorBucketArnT&& value) {
    m_vectorBucketArnHasBeenSet = true;
    m_vectorBucketArn = std::forward<VectorBucketArnT>(value);
  }
  template <typename VectorBucketArnT = Aws::String>
  CreateVectorBucketResult& WithVectorBucketArn(VectorBucketArnT&& value) {
    SetVectorBucketArn(std::forward<VectorBucketArnT>(value));
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
  CreateVectorBucketResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketArn;

  Aws::String m_requestId;
  bool m_vectorBucketArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
