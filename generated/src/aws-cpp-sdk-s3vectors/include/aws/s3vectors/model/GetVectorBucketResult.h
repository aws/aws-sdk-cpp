/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/VectorBucket.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace S3Vectors
{
namespace Model
{
  class GetVectorBucketResult
  {
  public:
    AWS_S3VECTORS_API GetVectorBucketResult() = default;
    AWS_S3VECTORS_API GetVectorBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API GetVectorBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attributes of the vector bucket.</p>
     */
    inline const VectorBucket& GetVectorBucket() const { return m_vectorBucket; }
    template<typename VectorBucketT = VectorBucket>
    void SetVectorBucket(VectorBucketT&& value) { m_vectorBucketHasBeenSet = true; m_vectorBucket = std::forward<VectorBucketT>(value); }
    template<typename VectorBucketT = VectorBucket>
    GetVectorBucketResult& WithVectorBucket(VectorBucketT&& value) { SetVectorBucket(std::forward<VectorBucketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVectorBucketResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VectorBucket m_vectorBucket;
    bool m_vectorBucketHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
