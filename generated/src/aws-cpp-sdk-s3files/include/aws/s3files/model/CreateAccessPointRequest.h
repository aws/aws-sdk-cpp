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
#include <aws/s3files/model/PosixUser.h>
#include <aws/s3files/model/RootDirectory.h>
#include <aws/s3files/model/Tag.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class CreateAccessPointRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API CreateAccessPointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPoint"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, Amazon Web
   * Services ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAccessPointRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key-value pairs to apply to the access point for resource
   * tagging.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAccessPointRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAccessPointRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the S3 File System.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateAccessPointRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The POSIX identity with uid, gid, and secondary group IDs for user
   * enforcement when accessing the file system through this access point.</p>
   */
  inline const PosixUser& GetPosixUser() const { return m_posixUser; }
  inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
  template <typename PosixUserT = PosixUser>
  void SetPosixUser(PosixUserT&& value) {
    m_posixUserHasBeenSet = true;
    m_posixUser = std::forward<PosixUserT>(value);
  }
  template <typename PosixUserT = PosixUser>
  CreateAccessPointRequest& WithPosixUser(PosixUserT&& value) {
    SetPosixUser(std::forward<PosixUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root directory path for the access point, with optional creation
   * permissions for newly created directories.</p>
   */
  inline const RootDirectory& GetRootDirectory() const { return m_rootDirectory; }
  inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
  template <typename RootDirectoryT = RootDirectory>
  void SetRootDirectory(RootDirectoryT&& value) {
    m_rootDirectoryHasBeenSet = true;
    m_rootDirectory = std::forward<RootDirectoryT>(value);
  }
  template <typename RootDirectoryT = RootDirectory>
  CreateAccessPointRequest& WithRootDirectory(RootDirectoryT&& value) {
    SetRootDirectory(std::forward<RootDirectoryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Tag> m_tags;

  Aws::String m_fileSystemId;

  PosixUser m_posixUser;

  RootDirectory m_rootDirectory;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_posixUserHasBeenSet = false;
  bool m_rootDirectoryHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
