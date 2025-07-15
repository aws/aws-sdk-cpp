/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3vectors/model/PutInputVector.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class PutVectorsRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API PutVectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVectors"; }

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
    PutVectorsRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index where you want to write vectors. </p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    PutVectorsRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the vector index where you want to write vectors.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    PutVectorsRequest& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vectors to add to a vector index. The number of vectors in a single
     * request must not exceed the resource capacity, otherwise the request will be
     * rejected with the error <code>ServiceUnavailableException</code> with the error
     * message "Currently unable to handle the request".</p>
     */
    inline const Aws::Vector<PutInputVector>& GetVectors() const { return m_vectors; }
    inline bool VectorsHasBeenSet() const { return m_vectorsHasBeenSet; }
    template<typename VectorsT = Aws::Vector<PutInputVector>>
    void SetVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors = std::forward<VectorsT>(value); }
    template<typename VectorsT = Aws::Vector<PutInputVector>>
    PutVectorsRequest& WithVectors(VectorsT&& value) { SetVectors(std::forward<VectorsT>(value)); return *this;}
    template<typename VectorsT = PutInputVector>
    PutVectorsRequest& AddVectors(VectorsT&& value) { m_vectorsHasBeenSet = true; m_vectors.emplace_back(std::forward<VectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::Vector<PutInputVector> m_vectors;
    bool m_vectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
