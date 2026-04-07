/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Files {
namespace Model {

/**
 * <p>Contains information about an S3 File System returned in list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListFileSystemsDescription">AWS
 * API Reference</a></p>
 */
class ListFileSystemsDescription {
 public:
  AWS_S3FILES_API ListFileSystemsDescription() = default;
  AWS_S3FILES_API ListFileSystemsDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API ListFileSystemsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time when the file system was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  ListFileSystemsDescription& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the file system.</p>
   */
  inline const Aws::String& GetFileSystemArn() const { return m_fileSystemArn; }
  inline bool FileSystemArnHasBeenSet() const { return m_fileSystemArnHasBeenSet; }
  template <typename FileSystemArnT = Aws::String>
  void SetFileSystemArn(FileSystemArnT&& value) {
    m_fileSystemArnHasBeenSet = true;
    m_fileSystemArn = std::forward<FileSystemArnT>(value);
  }
  template <typename FileSystemArnT = Aws::String>
  ListFileSystemsDescription& WithFileSystemArn(FileSystemArnT&& value) {
    SetFileSystemArn(std::forward<FileSystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the file system.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  ListFileSystemsDescription& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the file system.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListFileSystemsDescription& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  ListFileSystemsDescription& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the file system.</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListFileSystemsDescription& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the file system status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  ListFileSystemsDescription& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used for S3 access.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  ListFileSystemsDescription& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the file system owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  ListFileSystemsDescription& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_fileSystemArn;

  Aws::String m_fileSystemId;

  Aws::String m_name;

  Aws::String m_bucket;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_roleArn;

  Aws::String m_ownerId;
  bool m_creationTimeHasBeenSet = false;
  bool m_fileSystemArnHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_bucketHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
