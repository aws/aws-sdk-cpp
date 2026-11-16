/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/MetadataConfigurationAdd.h>
#include <aws/s3vectors/model/MetadataConfigurationDelete.h>

#include <utility>

namespace Aws {
namespace S3Vectors {
namespace Model {

/**
 */
class UpdateMetadataConfigurationRequest : public S3VectorsRequest {
 public:
  AWS_S3VECTORS_API UpdateMetadataConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMetadataConfiguration"; }

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
  UpdateMetadataConfigurationRequest& WithVectorBucketName(VectorBucketNameT&& value) {
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
  UpdateMetadataConfigurationRequest& WithIndexName(IndexNameT&& value) {
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
  UpdateMetadataConfigurationRequest& WithIndexArn(IndexArnT&& value) {
    SetIndexArn(std::forward<IndexArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Text search configurations to add to the vector index.</p>
   */
  inline const MetadataConfigurationAdd& GetAdd() const { return m_add; }
  inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
  template <typename AddT = MetadataConfigurationAdd>
  void SetAdd(AddT&& value) {
    m_addHasBeenSet = true;
    m_add = std::forward<AddT>(value);
  }
  template <typename AddT = MetadataConfigurationAdd>
  UpdateMetadataConfigurationRequest& WithAdd(AddT&& value) {
    SetAdd(std::forward<AddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Text search configurations to delete from the vector index.</p>
   */
  inline const MetadataConfigurationDelete& GetDelete() const { return m_delete; }
  inline bool DeleteHasBeenSet() const { return m_deleteHasBeenSet; }
  template <typename DeleteT = MetadataConfigurationDelete>
  void SetDelete(DeleteT&& value) {
    m_deleteHasBeenSet = true;
    m_delete = std::forward<DeleteT>(value);
  }
  template <typename DeleteT = MetadataConfigurationDelete>
  UpdateMetadataConfigurationRequest& WithDelete(DeleteT&& value) {
    SetDelete(std::forward<DeleteT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vectorBucketName;

  Aws::String m_indexName;

  Aws::String m_indexArn;

  MetadataConfigurationAdd m_add;

  MetadataConfigurationDelete m_delete;
  bool m_vectorBucketNameHasBeenSet = false;
  bool m_indexNameHasBeenSet = false;
  bool m_indexArnHasBeenSet = false;
  bool m_addHasBeenSet = false;
  bool m_deleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Vectors
}  // namespace Aws
