/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/DataType.h>
#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/s3vectors/model/EncryptionConfiguration.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>

#include <utility>

namespace Aws {
namespace S3Vectors {
namespace Model {

/**
 */
class CreateIndexRequest : public S3VectorsRequest {
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
  template <typename VectorBucketNameT = Aws::String>
  void SetVectorBucketName(VectorBucketNameT&& value) {
    m_vectorBucketNameHasBeenSet = true;
    m_vectorBucketName = std::forward<VectorBucketNameT>(value);
  }
  template <typename VectorBucketNameT = Aws::String>
  CreateIndexRequest& WithVectorBucketName(VectorBucketNameT&& value) {
    SetVectorBucketName(std::forward<VectorBucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the vector bucket to create the vector
   * index in.</p>
   */
  inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
  inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
  template <typename VectorBucketArnT = Aws::String>
  void SetVectorBucketArn(VectorBucketArnT&& value) {
    m_vectorBucketArnHasBeenSet = true;
    m_vectorBucketArn = std::forward<VectorBucketArnT>(value);
  }
  template <typename VectorBucketArnT = Aws::String>
  CreateIndexRequest& WithVectorBucketArn(VectorBucketArnT&& value) {
    SetVectorBucketArn(std::forward<VectorBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the vector index to create. </p>
   */
  inline const Aws::String& GetIndexName() const { return m_indexName; }
  inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
  template <typename IndexNameT = Aws::String>
  void SetIndexName(IndexNameT&& value) {
    m_indexNameHasBeenSet = true;
    m_indexName = std::forward<IndexNameT>(value);
  }
  template <typename IndexNameT = Aws::String>
  CreateIndexRequest& WithIndexName(IndexNameT&& value) {
    SetIndexName(std::forward<IndexNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the vectors to be inserted into the vector index. </p>
   */
  inline DataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(DataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline CreateIndexRequest& WithDataType(DataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions of the vectors to be inserted into the vector index. </p>
   */
  inline int GetDimension() const { return m_dimension; }
  inline bool DimensionHasBeenSet() const { return m_dimensionHasBeenSet; }
  inline void SetDimension(int value) {
    m_dimensionHasBeenSet = true;
    m_dimension = value;
  }
  inline CreateIndexRequest& WithDimension(int value) {
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
  inline CreateIndexRequest& WithDistanceMetric(DistanceMetric value) {
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
  CreateIndexRequest& WithMetadataConfiguration(MetadataConfigurationT&& value) {
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
  CreateIndexRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of user-defined tags that you would like to apply to the vector
   * index that you are creating. A tag is a key-value pair that you apply to your
   * resources. Tags can help you organize, track costs, and control access to
   * resources. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html">Tagging
   * for cost allocation or attribute-based access control (ABAC)</a>.</p>
   * <p>You must have the <code>s3vectors:TagResource</code> permission in addition
   * to <code>s3vectors:CreateIndex</code> permission to create a vector index with
   * tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateIndexRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateIndexRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_vectorBucketArn;

  Aws::String m_indexName;

  DataType m_dataType{DataType::NOT_SET};

  int m_dimension{0};

  DistanceMetric m_distanceMetric{DistanceMetric::NOT_SET};

  MetadataConfiguration m_metadataConfiguration;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_vectorBucketArnHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_dimensionHasBeenSet = false;
  bool m_distanceMetricHasBeenSet = false;
  bool m_metadataConfigurationHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
