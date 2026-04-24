/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>
#include <aws/s3files/model/PosixUser.h>
#include <aws/s3files/model/RootDirectory.h>

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
 * <p>Contains information about an S3 File System Access Point returned in list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/ListAccessPointsDescription">AWS
 * API Reference</a></p>
 */
class ListAccessPointsDescription {
 public:
  AWS_S3FILES_API ListAccessPointsDescription() = default;
  AWS_S3FILES_API ListAccessPointsDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API ListAccessPointsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the access point.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  ListAccessPointsDescription& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access point.</p>
   */
  inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
  inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
  template <typename AccessPointIdT = Aws::String>
  void SetAccessPointId(AccessPointIdT&& value) {
    m_accessPointIdHasBeenSet = true;
    m_accessPointId = std::forward<AccessPointIdT>(value);
  }
  template <typename AccessPointIdT = Aws::String>
  ListAccessPointsDescription& WithAccessPointId(AccessPointIdT&& value) {
    SetAccessPointId(std::forward<AccessPointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the S3 File System.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  ListAccessPointsDescription& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the access point.</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListAccessPointsDescription& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the access point owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  ListAccessPointsDescription& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The POSIX identity configured for this access point.</p>
   */
  inline const PosixUser& GetPosixUser() const { return m_posixUser; }
  inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
  template <typename PosixUserT = PosixUser>
  void SetPosixUser(PosixUserT&& value) {
    m_posixUserHasBeenSet = true;
    m_posixUser = std::forward<PosixUserT>(value);
  }
  template <typename PosixUserT = PosixUser>
  ListAccessPointsDescription& WithPosixUser(PosixUserT&& value) {
    SetPosixUser(std::forward<PosixUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root directory configuration for this access point.</p>
   */
  inline const RootDirectory& GetRootDirectory() const { return m_rootDirectory; }
  inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
  template <typename RootDirectoryT = RootDirectory>
  void SetRootDirectory(RootDirectoryT&& value) {
    m_rootDirectoryHasBeenSet = true;
    m_rootDirectory = std::forward<RootDirectoryT>(value);
  }
  template <typename RootDirectoryT = RootDirectory>
  ListAccessPointsDescription& WithRootDirectory(RootDirectoryT&& value) {
    SetRootDirectory(std::forward<RootDirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the access point.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListAccessPointsDescription& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessPointArn;

  Aws::String m_accessPointId;

  Aws::String m_fileSystemId;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_ownerId;

  PosixUser m_posixUser;

  RootDirectory m_rootDirectory;

  Aws::String m_name;
  bool m_accessPointArnHasBeenSet = false;
  bool m_accessPointIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_posixUserHasBeenSet = false;
  bool m_rootDirectoryHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
