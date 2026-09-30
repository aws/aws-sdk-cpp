/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/IndexMode.h>

#include <utility>

namespace Aws {
namespace S3Vectors {
namespace Model {

/**
 */
class UpdateIndexModeRequest : public S3VectorsRequest {
 public:
  AWS_S3VECTORS_API UpdateIndexModeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateIndexMode"; }

  AWS_S3VECTORS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the vector bucket that contains the vector index.</p>
   */
  inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
  inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
  template <typename VectorBucketNameT = Aws::String>
  void SetVectorBucketName(VectorBucketNameT&& value) {
    m_vectorBucketNameHasBeenSet = true;
    m_vectorBucketName = std::forward<VectorBucketNameT>(value);
  }
  template <typename VectorBucketNameT = Aws::String>
  UpdateIndexModeRequest& WithVectorBucketName(VectorBucketNameT&& value) {
    SetVectorBucketName(std::forward<VectorBucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the vector index to update.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  UpdateIndexModeRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the vector index to update.</p>
   */
  inline const Aws::String& GetIndexArn() const { return m_indexArn; }
  inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
  template <typename IndexArnT = Aws::String>
  void SetIndexArn(IndexArnT&& value) {
    m_indexArnHasBeenSet = true;
    m_indexArn = std::forward<IndexArnT>(value);
  }
  template <typename IndexArnT = Aws::String>
  UpdateIndexModeRequest& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new mode for the vector index.</p> <p>Valid values:</p> <ul> <li> <p>
   * <code>CLASSIC</code> - Applies metadata filters during the vector search. You
   * can specify <code>CLASSIC</code> only for a vector index in a vector bucket
   * created before September 30, 2026.</p> </li> <li> <p> <code>ENHANCED</code> -
   * Applies metadata filters before the vector search.</p> </li> </ul>
   */
  inline IndexMode GetIndexMode() const { return m_indexMode; }
  inline bool IndexModeHasBeenSet() const { return m_indexModeHasBeenSet; }
  inline void SetIndexMode(IndexMode value) {
    m_indexModeHasBeenSet = true;
    m_indexMode = value;
  }
  inline UpdateIndexModeRequest& WithIndexMode(IndexMode value) {
    SetIndexMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_indexName;

  Aws::String m_indexArn;

  IndexMode m_indexMode{IndexMode::NOT_SET};
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_indexArnHasBeenSet = false;
  bool m_indexModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
