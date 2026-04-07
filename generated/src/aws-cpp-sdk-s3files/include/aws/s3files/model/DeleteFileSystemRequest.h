/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Files {
namespace Model {

/**
 */
class DeleteFileSystemRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API DeleteFileSystemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteFileSystem"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  AWS_S3FILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the S3 File System to delete.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  DeleteFileSystemRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If true, allows deletion of a file system that contains data pending export
   * to S3. If false (the default), the deletion will fail if there is data that has
   * not yet been exported to the S3 bucket. Use this parameter with caution as it
   * may result in data loss.</p>
   */
  inline bool GetForceDelete() const { return m_forceDelete; }
  inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }
  inline void SetForceDelete(bool value) {
    m_forceDeleteHasBeenSet = true;
    m_forceDelete = value;
  }
  inline DeleteFileSystemRequest& WithForceDelete(bool value) {
    SetForceDelete(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemId;

  bool m_forceDelete{false};
  bool m_fileSystemIdHasBeenSet = false;
  bool m_forceDeleteHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
