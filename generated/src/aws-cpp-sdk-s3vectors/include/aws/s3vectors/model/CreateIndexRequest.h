/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/model/DataType.h>
#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class CreateIndexRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API CreateIndexRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    AWS_S3VECTORS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the vector bucket to create the vector index in. </p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    CreateIndexRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vector bucket to create the vector
     * index in.</p>
     */
    inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
    inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
    template<typename VectorBucketArnT = Aws::String>
    void SetVectorBucketArn(VectorBucketArnT&& value) { m_vectorBucketArnHasBeenSet = true; m_vectorBucketArn = std::forward<VectorBucketArnT>(value); }
    template<typename VectorBucketArnT = Aws::String>
    CreateIndexRequest& WithVectorBucketArn(VectorBucketArnT&& value) { SetVectorBucketArn(std::forward<VectorBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vector index to create. </p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    CreateIndexRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the vectors to be inserted into the vector index. </p>
     */
    inline DataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(DataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline CreateIndexRequest& WithDataType(DataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the vectors to be inserted into the vector index. </p>
     */
    inline int GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    inline void SetDimension(int value) { m_dimensionHasBeenSet = true; m_dimension = value; }
    inline CreateIndexRequest& WithDimension(int value) { SetDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance metric to be used for similarity search. </p>
     */
    inline DistanceMetric GetDistanceMetric() const { return m_distanceMetric; }
    inline bool DistanceMetricHasBeenSet() const { return m_distanceMetricHasBeenSet; }
    inline void SetDistanceMetric(DistanceMetric value) { m_distanceMetricHasBeenSet = true; m_distanceMetric = value; }
    inline CreateIndexRequest& WithDistanceMetric(DistanceMetric value) { SetDistanceMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata configuration for the vector index. </p>
     */
    inline const MetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
    inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
    template<typename MetadataConfigurationT = MetadataConfiguration>
    void SetMetadataConfiguration(MetadataConfigurationT&& value) { m_metadataConfigurationHasBeenSet = true; m_metadataConfiguration = std::forward<MetadataConfigurationT>(value); }
    template<typename MetadataConfigurationT = MetadataConfiguration>
    CreateIndexRequest& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_vectorBucketArn;
    bool m_vectorBucketArnHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    DataType m_dataType{DataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    int m_dimension{0};
    bool m_dimensionHasBeenSet = false;

    DistanceMetric m_distanceMetric{DistanceMetric::NOT_SET};
    bool m_distanceMetricHasBeenSet = false;

    MetadataConfiguration m_metadataConfiguration;
    bool m_metadataConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws
