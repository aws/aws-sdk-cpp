/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/model/VectorBucketSummary.h>
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
  class ListVectorBucketsResult
  {
  public:
    AWS_S3VECTORS_API ListVectorBucketsResult() = default;
    AWS_S3VECTORS_API ListVectorBucketsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3VECTORS_API ListVectorBucketsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The element is included in the response when there are more buckets to be
     * listed with pagination. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVectorBucketsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of vector buckets owned by the requester. </p>
     */
    inline const Aws::Vector<VectorBucketSummary>& GetVectorBuckets() const { return m_vectorBuckets; }
    template<typename VectorBucketsT = Aws::Vector<VectorBucketSummary>>
    void SetVectorBuckets(VectorBucketsT&& value) { m_vectorBucketsHasBeenSet = true; m_vectorBuckets = std::forward<VectorBucketsT>(value); }
    template<typename VectorBucketsT = Aws::Vector<VectorBucketSummary>>
    ListVectorBucketsResult& WithVectorBuckets(VectorBucketsT&& value) { SetVectorBuckets(std::forward<VectorBucketsT>(value)); return *this;}
    template<typename VectorBucketsT = VectorBucketSummary>
    ListVectorBucketsResult& AddVectorBuckets(VectorBucketsT&& value) { m_vectorBucketsHasBeenSet = true; m_vectorBuckets.emplace_back(std::forward<VectorBucketsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVectorBucketsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VectorBucketSummary> m_vectorBuckets;
    bool m_vectorBucketsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
