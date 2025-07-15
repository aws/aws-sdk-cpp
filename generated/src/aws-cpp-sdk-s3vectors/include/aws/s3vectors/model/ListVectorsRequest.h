/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class ListVectorsRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API ListVectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVectors"; }

    AWS_S3VECTORS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the vector bucket. </p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    ListVectorsRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    ListVectorsRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource Name (ARN) of the vector index.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    ListVectorsRequest& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vectors to return on a page.</p> <p>If you don't
     * specify <code>maxResults</code>, the <code>ListVectors</code> operation uses a
     * default value of 500.</p> <p>If the processed dataset size exceeds 1 MB before
     * reaching the <code>maxResults</code> value, the operation stops and returns the
     * vectors that are retrieved up to that point, along with a <code>nextToken</code>
     * that you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVectorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token from a previous request. The value of this field is empty
     * for an initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVectorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a parallel <code>ListVectors</code> request, <code>segmentCount</code>
     * represents the total number of vector segments into which the
     * <code>ListVectors</code> operation will be divided. The value of
     * <code>segmentCount</code> corresponds to the number of application workers that
     * will perform the parallel <code>ListVectors</code> operation. For example, if
     * you want to use four application threads to list vectors in a vector index,
     * specify a <code>segmentCount</code> value of 4. </p> <p>If you specify a
     * <code>segmentCount</code> value of 1, the <code>ListVectors</code> operation
     * will be sequential rather than parallel.</p> <p>If you specify
     * <code>segmentCount</code>, you must also specify <code>segmentIndex</code>.</p>
     */
    inline int GetSegmentCount() const { return m_segmentCount; }
    inline bool SegmentCountHasBeenSet() const { return m_segmentCountHasBeenSet; }
    inline void SetSegmentCount(int value) { m_segmentCountHasBeenSet = true; m_segmentCount = value; }
    inline ListVectorsRequest& WithSegmentCount(int value) { SetSegmentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a parallel <code>ListVectors</code> request, <code>segmentIndex</code> is
     * the index of the segment from which to list vectors in the current request. It
     * identifies an individual segment to be listed by an application worker. </p>
     * <p>Segment IDs are zero-based, so the first segment is always 0. For example, if
     * you want to use four application threads to list vectors in a vector index, then
     * the first thread specifies a <code>segmentIndex</code> value of 0, the second
     * thread specifies 1, and so on. </p> <p>The value of <code>segmentIndex</code>
     * must be less than the value provided for <code>segmentCount</code>. </p> <p>If
     * you provide <code>segmentIndex</code>, you must also provide
     * <code>segmentCount</code>.</p>
     */
    inline int GetSegmentIndex() const { return m_segmentIndex; }
    inline bool SegmentIndexHasBeenSet() const { return m_segmentIndexHasBeenSet; }
    inline void SetSegmentIndex(int value) { m_segmentIndexHasBeenSet = true; m_segmentIndex = value; }
    inline ListVectorsRequest& WithSegmentIndex(int value) { SetSegmentIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, the vector data of each vector will be included in the response. The
     * default value is <code>false</code>.</p>
     */
    inline bool GetReturnData() const { return m_returnData; }
    inline bool ReturnDataHasBeenSet() const { return m_returnDataHasBeenSet; }
    inline void SetReturnData(bool value) { m_returnDataHasBeenSet = true; m_returnData = value; }
    inline ListVectorsRequest& WithReturnData(bool value) { SetReturnData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, the metadata associated with each vector will be included in the
     * response. The default value is <code>false</code>.</p>
     */
    inline bool GetReturnMetadata() const { return m_returnMetadata; }
    inline bool ReturnMetadataHasBeenSet() const { return m_returnMetadataHasBeenSet; }
    inline void SetReturnMetadata(bool value) { m_returnMetadataHasBeenSet = true; m_returnMetadata = value; }
    inline ListVectorsRequest& WithReturnMetadata(bool value) { SetReturnMetadata(value); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_segmentCount{0};
    bool m_segmentCountHasBeenSet = false;

    int m_segmentIndex{0};
    bool m_segmentIndexHasBeenSet = false;

    bool m_returnData{false};
    bool m_returnDataHasBeenSet = false;

    bool m_returnMetadata{false};
    bool m_returnMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
