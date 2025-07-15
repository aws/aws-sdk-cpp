/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3vectors/model/DataType.h>
#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace S3Vectors
{
namespace Model
{

  /**
   * <p> <p>Amazon S3 Vectors is in preview release for Amazon S3 and is
   * subject to change.</p>  <p>The attributes of a vector
   * index.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/Index">AWS API
   * Reference</a></p>
   */
  class Index
  {
  public:
    AWS_S3VECTORS_API Index() = default;
    AWS_S3VECTORS_API Index(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Index& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3VECTORS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the vector bucket that contains the vector index. </p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    Index& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
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
    Index& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vector index.</p>
     */
    inline const Aws::String& GetIndexArn() const { return m_indexArn; }
    inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
    template<typename IndexArnT = Aws::String>
    void SetIndexArn(IndexArnT&& value) { m_indexArnHasBeenSet = true; m_indexArn = std::forward<IndexArnT>(value); }
    template<typename IndexArnT = Aws::String>
    Index& WithIndexArn(IndexArnT&& value) { SetIndexArn(std::forward<IndexArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the vector index was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Index& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the vectors inserted into the vector index. </p>
     */
    inline DataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(DataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline Index& WithDataType(DataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of values in the vectors that are inserted into the vector index.
     * </p>
     */
    inline int GetDimension() const { return m_dimension; }
    inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
    inline void SetDimension(int value) { m_dimensionHasBeenSet = true; m_dimension = value; }
    inline Index& WithDimension(int value) { SetDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance metric to be used for similarity search. </p>
     */
    inline DistanceMetric GetDistanceMetric() const { return m_distanceMetric; }
    inline bool DistanceMetricHasBeenSet() const { return m_distanceMetricHasBeenSet; }
    inline void SetDistanceMetric(DistanceMetric value) { m_distanceMetricHasBeenSet = true; m_distanceMetric = value; }
    inline Index& WithDistanceMetric(DistanceMetric value) { SetDistanceMetric(value); return *this;}
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
    Index& WithMetadataConfiguration(MetadataConfigurationT&& value) { SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_indexArn;
    bool m_indexArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

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
