/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/Tag.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class CreateFileSystemRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API CreateFileSystemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateFileSystem"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 bucket that will be accessible
   * through the file system. The bucket must exist and be in the same Amazon Web
   * Services Region as the file system.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  CreateFileSystemRequest& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional prefix within the S3 bucket to scope the file system access. If
   * specified, the file system provides access only to objects with keys that begin
   * with this prefix. If not specified, the file system provides access to the
   * entire bucket.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  CreateFileSystemRequest& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure idempotent
   * creation. Up to 64 ASCII characters are allowed. If you don't specify a client
   * token, the Amazon Web Services SDK automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateFileSystemRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN, key ID, or alias of the KMS key to use for encryption. If not
   * specified, the service uses a service-owned key for encryption. You can specify
   * a KMS key using the following formats: key ID, ARN, key alias, or key alias ARN.
   * If you use <code>KmsKeyId</code>, the file system will be encrypted.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateFileSystemRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that grants the S3 Files service permission to read
   * and write data between the file system and the S3 bucket. This role must have
   * the necessary permissions to access the specified bucket and prefix.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateFileSystemRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key-value pairs to apply as tags to the file system resource.
   * Each tag is a user-defined key-value pair. You can use tags to categorize and
   * manage your file systems. Each key must be unique for the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateFileSystemRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateFileSystemRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to acknowledge and accept any warnings about the bucket
   * configuration. If not specified, the operation may fail if there are bucket
   * configuration warnings.</p>
   */
  inline bool GetAcceptBucketWarning() const { return m_acceptBucketWarning; }
  inline bool AcceptBucketWarningHasBeenSet() const { return m_acceptBucketWarningHasBeenSet; }
  inline void SetAcceptBucketWarning(bool value) {
    m_acceptBucketWarningHasBeenSet = true;
    m_acceptBucketWarning = value;
  }
  inline CreateFileSystemRequest& WithAcceptBucketWarning(bool value) {
    SetAcceptBucketWarning(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_prefix;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_kmsKeyId;

  Aws::String m_roleArn;

  Aws::Vector<Tag> m_tags;

  bool m_acceptBucketWarning{false};
  bool m_bucketHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_acceptBucketWarningHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
