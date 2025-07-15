/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/model/VectorData.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class QueryVectorsRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API QueryVectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryVectors"; }

    AWS_S3VECTORS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the vector bucket that contains the vector index. </p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    QueryVectorsRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index that you want to query. </p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    QueryVectorsRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the vector index that you want to query.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    QueryVectorsRequest& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return for each query.</p>
     */
    inline int GetTopK() const { return m_topK; }
    inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
    inline void SetTopK(int value) { m_topKHasBeenSet = true; m_topK = value; }
    inline QueryVectorsRequest& WithTopK(int value) { SetTopK(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query vector. Ensure that the query vector has the same dimension as the
     * dimension of the vector index that's being queried. For example, if your vector
     * index contains vectors with 384 dimensions, your query vector must also have 384
     * dimensions. </p>
     */
    inline const VectorData& GetQueryVector() const { return m_queryVector; }
    inline bool QueryVectorHasBeenSet() const { return m_queryVectorHasBeenSet; }
    template<typename QueryVectorT = VectorData>
    void SetQueryVector(QueryVectorT&& value) { m_queryVectorHasBeenSet = true; m_queryVector = std::forward<QueryVectorT>(value); }
    template<typename QueryVectorT = VectorData>
    QueryVectorsRequest& WithQueryVector(QueryVectorT&& value) { SetQueryVector(std::forward<QueryVectorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata filter to apply during the query. For more information about
     * metadata keys, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-vectors-metadata-filtering.html">Metadata
     * filtering</a> in the <i>Amazon S3 User Guide</i>. </p>
     */
    inline Aws::Utils::DocumentView GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Utils::Document>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Utils::Document>
    QueryVectorsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include metadata in the response. The default value is
     * <code>false</code>.</p>
     */
    inline bool GetReturnMetadata() const { return m_returnMetadata; }
    inline bool ReturnMetadataHasBeenSet() const { return m_returnMetadataHasBeenSet; }
    inline void SetReturnMetadata(bool value) { m_returnMetadataHasBeenSet = true; m_returnMetadata = value; }
    inline QueryVectorsRequest& WithReturnMetadata(bool value) { SetReturnMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include the computed distance in the response. The
     * default value is <code>false</code>.</p>
     */
    inline bool GetReturnDistance() const { return m_returnDistance; }
    inline bool ReturnDistanceHasBeenSet() const { return m_returnDistanceHasBeenSet; }
    inline void SetReturnDistance(bool value) { m_returnDistanceHasBeenSet = true; m_returnDistance = value; }
    inline QueryVectorsRequest& WithReturnDistance(bool value) { SetReturnDistance(value); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    int m_topK{0};
    bool m_topKHasBeenSet = false;

    VectorData m_queryVector;
    bool m_queryVectorHasBeenSet = false;

    Aws::Utils::Document m_filter;
    bool m_filterHasBeenSet = false;

    bool m_returnMetadata{false};
    bool m_returnMetadataHasBeenSet = false;

    bool m_returnDistance{false};
    bool m_returnDistanceHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
