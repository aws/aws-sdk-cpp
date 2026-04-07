/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/LifeCycleState.h>
#include <aws/s3files/model/PosixUser.h>
#include <aws/s3files/model/RootDirectory.h>
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
class CreateAccessPointResult {
 public:
  AWS_S3FILES_API CreateAccessPointResult() = default;
  AWS_S3FILES_API CreateAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3FILES_API CreateAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the access point.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  CreateAccessPointResult& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the access point.</p>
   */
  inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
  template <typename AccessPointIdT = Aws::String>
  void SetAccessPointId(AccessPointIdT&& value) {
    m_accessPointIdHasBeenSet = true;
    m_accessPointId = std::forward<AccessPointIdT>(value);
  }
  template <typename AccessPointIdT = Aws::String>
  CreateAccessPointResult& WithAccessPointId(AccessPointIdT&& value) {
    SetAccessPointId(std::forward<AccessPointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token that was provided in the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAccessPointResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the S3 File System.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateAccessPointResult& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the access point.</p>
   */
  inline LifeCycleState GetStatus() const { return m_status; }
  inline void SetStatus(LifeCycleState value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateAccessPointResult& WithStatus(LifeCycleState value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the access point owner.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  CreateAccessPointResult& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The POSIX identity configured for this access point.</p>
   */
  inline const PosixUser& GetPosixUser() const { return m_posixUser; }
  template <typename PosixUserT = PosixUser>
  void SetPosixUser(PosixUserT&& value) {
    m_posixUserHasBeenSet = true;
    m_posixUser = std::forward<PosixUserT>(value);
  }
  template <typename PosixUserT = PosixUser>
  CreateAccessPointResult& WithPosixUser(PosixUserT&& value) {
    SetPosixUser(std::forward<PosixUserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root directory configuration for this access point.</p>
   */
  inline const RootDirectory& GetRootDirectory() const { return m_rootDirectory; }
  template <typename RootDirectoryT = RootDirectory>
  void SetRootDirectory(RootDirectoryT&& value) {
    m_rootDirectoryHasBeenSet = true;
    m_rootDirectory = std::forward<RootDirectoryT>(value);
  }
  template <typename RootDirectoryT = RootDirectory>
  CreateAccessPointResult& WithRootDirectory(RootDirectoryT&& value) {
    SetRootDirectory(std::forward<RootDirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the access point.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAccessPointResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAccessPointResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the access point.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateAccessPointResult& WithName(NameT&& value) {
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
  CreateAccessPointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessPointArn;

  Aws::String m_accessPointId;

  Aws::String m_clientToken;

  Aws::String m_fileSystemId;

  LifeCycleState m_status{LifeCycleState::NOT_SET};

  Aws::String m_ownerId;

  PosixUser m_posixUser;

  RootDirectory m_rootDirectory;

  Aws::Vector<Tag> m_tags;

  Aws::String m_name;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessPointArnHasBeenSet = false;
  bool m_accessPointIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_posixUserHasBeenSet = false;
  bool m_rootDirectoryHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
