/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/IndexMode.h>
#include <aws/s3vectors/model/QueryText.h>
#include <aws/s3vectors/model/VectorData.h>

#include <utility>

namespace Aws {
namespace S3Vectors {
namespace Model {

/**
 */
class QueryVectorsRequest : public S3VectorsRequest {
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
  template <typename VectorBucketNameT = Aws::String>
  void SetVectorBucketName(VectorBucketNameT&& value) {
    m_vectorBucketNameHasBeenSet = true;
    m_vectorBucketName = std::forward<VectorBucketNameT>(value);
  }
  template <typename VectorBucketNameT = Aws::String>
  QueryVectorsRequest& WithVectorBucketName(VectorBucketNameT&& value) {
    SetVectorBucketName(std::forward<VectorBucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the vector index that you want to query. </p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  QueryVectorsRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the vector index that you want to query.</p>
   */
  inline const Aws::String& GetIndexArn() const { return m_indexArn; }
  inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
  template <typename IndexArnT = Aws::String>
  void SetIndexArn(IndexArnT&& value) {
    m_indexArnHasBeenSet = true;
    m_indexArn = std::forward<IndexArnT>(value);
  }
  template <typename IndexArnT = Aws::String>
  QueryVectorsRequest& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to return for each query.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline QueryVectorsRequest& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query vector for vector similarity search. The query vector must have the
   * same dimension as the vector index. For example, if the vector index has 384
   * dimensions, the query vector must also have 384 dimensions. You can omit this
   * parameter when you supply <code>queryTexts</code> to perform a full-text-only
   * search. A request must include <code>queryVector</code>,
   * <code>queryTexts</code>, or both.</p>
   */
  inline const VectorData& GetQueryVector() const { return m_queryVector; }
  inline bool QueryVectorHasBeenSet() const { return m_queryVectorHasBeenSet; }
  template <typename QueryVectorT = VectorData>
  void SetQueryVector(QueryVectorT&& value) {
    m_queryVectorHasBeenSet = true;
    m_queryVector = std::forward<QueryVectorT>(value);
  }
  template <typename QueryVectorT = VectorData>
  QueryVectorsRequest& WithQueryVector(QueryVectorT&& value) {
    SetQueryVector(std::forward<QueryVectorT>(value));
    return *this;
  }
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
  template <typename FilterT = Aws::Utils::Document>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Aws::Utils::Document>
  QueryVectorsRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode to use to process the query. If you don't specify a query mode, the
   * operation uses the mode that's currently configured for the vector index.</p>
   * <p>Valid values:</p> <ul> <li> <p> <code>CLASSIC</code> - Applies metadata
   * filters during the vector search. You can't specify <code>CLASSIC</code> for an
   * <code>ENHANCED</code> index.</p> </li> <li> <p> <code>ENHANCED</code> - Applies
   * metadata filters before the vector search.</p> </li> </ul>
   */
  inline IndexMode GetQueryMode() const { return m_queryMode; }
  inline bool QueryModeHasBeenSet() const { return m_queryModeHasBeenSet; }
  inline void SetQueryMode(IndexMode value) {
    m_queryModeHasBeenSet = true;
    m_queryMode = value;
  }
  inline QueryVectorsRequest& WithQueryMode(IndexMode value) {
    SetQueryMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to include metadata in the response. The default value is
   * <code>false</code>.</p>
   */
  inline bool GetReturnMetadata() const { return m_returnMetadata; }
  inline bool ReturnMetadataHasBeenSet() const { return m_returnMetadataHasBeenSet; }
  inline void SetReturnMetadata(bool value) {
    m_returnMetadataHasBeenSet = true;
    m_returnMetadata = value;
  }
  inline QueryVectorsRequest& WithReturnMetadata(bool value) {
    SetReturnMetadata(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to include the computed distance in the response. The
   * default value is <code>false</code>.</p>
   */
  inline bool GetReturnDistance() const { return m_returnDistance; }
  inline bool ReturnDistanceHasBeenSet() const { return m_returnDistanceHasBeenSet; }
  inline void SetReturnDistance(bool value) {
    m_returnDistanceHasBeenSet = true;
    m_returnDistance = value;
  }
  inline QueryVectorsRequest& WithReturnDistance(bool value) {
    SetReturnDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Full-text queries for searchable metadata keys. Omit <code>queryVector</code>
   * to run a full-text-only search, or provide both fields to run a hybrid search.
   * Each entry must target a distinct searchable metadata key.</p>
   */
  inline const Aws::Vector<QueryText>& GetQueryTexts() const { return m_queryTexts; }
  inline bool QueryTextsHasBeenSet() const { return m_queryTextsHasBeenSet; }
  template <typename QueryTextsT = Aws::Vector<QueryText>>
  void SetQueryTexts(QueryTextsT&& value) {
    m_queryTextsHasBeenSet = true;
    m_queryTexts = std::forward<QueryTextsT>(value);
  }
  template <typename QueryTextsT = Aws::Vector<QueryText>>
  QueryVectorsRequest& WithQueryTexts(QueryTextsT&& value) {
    SetQueryTexts(std::forward<QueryTextsT>(value));
    return *this;
  }
  template <typename QueryTextsT = QueryText>
  QueryVectorsRequest& AddQueryTexts(QueryTextsT&& value) {
    m_queryTextsHasBeenSet = true;
    m_queryTexts.emplace_back(std::forward<QueryTextsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to include relevance scores in the response. Full-text-only
   * results can include BM25 scores. Hybrid results can also include a Reciprocal
   * Rank Fusion (RRF) score and vector distance. This setting doesn't add scores to
   * vector-only requests. The default value is <code>false</code>.</p>
   */
  inline bool GetReturnScores() const { return m_returnScores; }
  inline bool ReturnScoresHasBeenSet() const { return m_returnScoresHasBeenSet; }
  inline void SetReturnScores(bool value) {
    m_returnScoresHasBeenSet = true;
    m_returnScores = value;
  }
  inline QueryVectorsRequest& WithReturnScores(bool value) {
    SetReturnScores(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous request. The value of this field is empty
   * for an initial request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  QueryVectorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_indexName;

  Aws::String m_indexArn;

  int m_topK{0};

  VectorData m_queryVector;

  Aws::Utils::Document m_filter;

  IndexMode m_queryMode{IndexMode::NOT_SET};

  bool m_returnMetadata{false};

  bool m_returnDistance{false};

  Aws::Vector<QueryText> m_queryTexts;

  bool m_returnScores{false};

  Aws::String m_nextToken;
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_indexArnHasBeenSet = false;
  bool m_topKHasBeenSet = false;
  bool m_queryVectorHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_queryModeHasBeenSet = false;
  bool m_returnMetadataHasBeenSet = false;
  bool m_returnDistanceHasBeenSet = false;
  bool m_queryTextsHasBeenSet = false;
  bool m_returnScoresHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
