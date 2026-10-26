/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration of a file system on a VM cluster.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/FileSystemConfigurationDetails">AWS
 * API Reference</a></p>
 */
class FileSystemConfigurationDetails {
 public:
  AWS_ODB_API FileSystemConfigurationDetails() = default;
  AWS_ODB_API FileSystemConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API FileSystemConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The mount point of the file system.</p>
   */
  inline const Aws::String& GetMountPoint() const { return m_mountPoint; }
  inline bool MountPointHasBeenSet() const { return m_mountPointHasBeenSet; }
  template <typename MountPointT = Aws::String>
  void SetMountPoint(MountPointT&& value) {
    m_mountPointHasBeenSet = true;
    m_mountPoint = std::forward<MountPointT>(value);
  }
  template <typename MountPointT = Aws::String>
  FileSystemConfigurationDetails& WithMountPoint(MountPointT&& value) {
    SetMountPoint(std::forward<MountPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the file system, in gigabytes (GB).</p>
   */
  inline int GetFileSystemSizeInGBs() const { return m_fileSystemSizeInGBs; }
  inline bool FileSystemSizeInGBsHasBeenSet() const { return m_fileSystemSizeInGBsHasBeenSet; }
  inline void SetFileSystemSizeInGBs(int value) {
    m_fileSystemSizeInGBsHasBeenSet = true;
    m_fileSystemSizeInGBs = value;
  }
  inline FileSystemConfigurationDetails& WithFileSystemSizeInGBs(int value) {
    SetFileSystemSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_mountPoint;

  int m_fileSystemSizeInGBs{0};
  bool m_mountPointHasBeenSet = false;
  bool m_fileSystemSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
