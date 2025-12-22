/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/DataType.h>
#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/s3vectors/model/EncryptionConfiguration.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Vectors {
namespace Model {

/**
 * <p>The attributes of a vector index.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3vectors-2025-07-15/Index">AWS API
 * Reference</a></p>
 */
class Index {
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
  template <typename VectorBucketNameT = Aws::String>
  void SetVectorBucketName(VectorBucketNameT&& value) {
    m_vectorBucketNameHasBeenSet = true;
    m_vectorBucketName = std::forward<VectorBucketNameT>(value);
  }
  template <typename VectorBucketNameT = Aws::String>
  Index& WithVectorBucketName(VectorBucketNameT&& value) {
    SetVectorBucketName(std::forward<VectorBucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the vector index.</p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  Index& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the vector index.</p>
   */
  inline const Aws::String& GetIndexArn() const { return m_indexArn; }
  inline bool IndexArnHasBeenSet() const { return m_indexArnHasBeenSet; }
  template <typename IndexArnT = Aws::String>
  void SetIndexArn(IndexArnT&& value) {
    m_indexArnHasBeenSet = true;
    m_indexArn = std::forward<IndexArnT>(value);
  }
  template <typename IndexArnT = Aws::String>
  Index& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date and time when the vector index was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  Index& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the vectors inserted into the vector index. </p>
   */
  inline DataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(DataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline Index& WithDataType(DataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of values in the vectors that are inserted into the vector index.
   * </p>
   */
  inline int GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(int value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline Index& WithDimension(int value) {
    SetDimension(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distance metric to be used for similarity search. </p>
   */
  inline DistanceMetric GetDistanceMetric() const { return m_distanceMetric; }
  inline bool DistanceMetricHasBeenSet() const { return m_distanceMetricHasBeenSet; }
  inline void SetDistanceMetric(DistanceMetric value) {
    m_distanceMetricHasBeenSet = true;
    m_distanceMetric = value;
  }
  inline Index& WithDistanceMetric(DistanceMetric value) {
    SetDistanceMetric(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata configuration for the vector index. </p>
   */
  inline const MetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
  inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
  template <typename MetadataConfigurationT = MetadataConfiguration>
  void SetMetadataConfiguration(MetadataConfigurationT&& value) {
    m_metadataConfigurationHasBeenSet = true;
    m_metadataConfiguration = std::forward<MetadataConfigurationT>(value);
  }
  template <typename MetadataConfigurationT = MetadataConfiguration>
  Index& WithMetadataConfiguration(MetadataConfigurationT&& value) {
    SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for a vector index. By default, if you don't
   * specify, all new vectors in the vector index will use the encryption
   * configuration of the vector bucket.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  Index& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_indexName;

  Aws::String m_indexArn;

  Aws::Utils::DateTime m_creationTime{};

  DataType m_dataType{DataType::NOT_SET};

  int m_dimension{0};

  DistanceMetric m_distanceMetric{DistanceMetric::NOT_SET};

  MetadataConfiguration m_metadataConfiguration;

  EncryptionConfiguration m_encryptionConfiguration;
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_indexArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_dimensionHasBeenSet = false;
  bool m_distanceMetricHasBeenSet = false;
  bool m_metadataConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
