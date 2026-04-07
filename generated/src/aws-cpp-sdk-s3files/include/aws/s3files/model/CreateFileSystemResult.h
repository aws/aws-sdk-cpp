/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>
#include <aws/s3files/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {
class CreateFileSystemResult {
 public:
  AWS_S3FILES_API CreateFileSystemResult() = default;
  AWS_S3FILES_API CreateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API CreateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The time when the file system was created, in seconds since
   * 1970-01-01T00:00:00Z (Unix epoch time).</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  CreateFileSystemResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN for the S3 file system, in the format
   * <code>arn:aws:s3files:region:account-id:file-system/file-system-id</code>.</p>
   */
  inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
  template <typename FileSystemArnT = Aws::String>
  void SetFileSystemArn(FileSystemArnT&& value) {
    m_fileSystemArnHasBeenSet = true;
    m_fileSystemArn = std::forward<FileSystemArnT>(value);
  }
  template <typename FileSystemArnT = Aws::String>
  CreateFileSystemResult& WithFileSystemArn(FileSystemArnT&& value) {
    SetFileSystemArn(std::forward<FileSystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the file system, assigned by S3 Files. This ID is used to reference
   * the file system in subsequent API calls.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateFileSystemResult& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 bucket associated with the file
   * system.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  CreateFileSystemResult& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix within the S3 bucket that scopes the file system access.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  CreateFileSystemResult& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token used for idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateFileSystemResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN or alias of the KMS key used for encryption.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateFileSystemResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the file system. Valid values are:
   * <code>AVAILABLE</code> (the file system is available for use),
   * <code>CREATING</code> (the file system is being created), <code>DELETING</code>
   * (the file system is being deleted), <code>DELETED</code> (the file system has
   * been deleted), <code>ERROR</code> (the file system is in an error state), or
   * <code>UPDATING</code> (the file system is being updated).</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateFileSystemResult& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the file system status. This field provides more
   * details when the status is <code>ERROR</code>, or during state transitions.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  CreateFileSystemResult& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role used for S3 access.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateFileSystemResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the file system owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  CreateFileSystemResult& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the file system.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateFileSystemResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateFileSystemResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the file system, derived from the <code>Name</code> tag if
   * present.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateFileSystemResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateFileSystemResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_fileSystemArn;

  Aws::String m_fileSystemId;

  Aws::String m_bucket;

  Aws::String m_prefix;

  Aws::String m_clientToken;

  Aws::String m_kmsKeyId;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_roleArn;

  Aws::String m_ownerId;

  Aws::Vector<Tag> m_tags;

  Aws::String m_name;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_creationTimeHasBeenSet = false;
  bool m_fileSystemArnHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_bucketHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
