/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/CreationPermissions.h>

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
 * <p>Specifies the root directory path and optional creation permissions for newly
 * created directories.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/RootDirectory">AWS
 * API Reference</a></p>
 */
class RootDirectory {
 public:
  AWS_S3FILES_API RootDirectory() = default;
  AWS_S3FILES_API RootDirectory(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API RootDirectory& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path to use as the root directory for the access point.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  RootDirectory& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permissions to set on newly created directories.</p>
   */
  inline const CreationPermissions& GetCreationPermissions() const { return m_creationPermissions; }
  inline bool CreationPermissionsHasBeenSet() const { return m_creationPermissionsHasBeenSet; }
  template <typename CreationPermissionsT = CreationPermissions>
  void SetCreationPermissions(CreationPermissionsT&& value) {
    m_creationPermissionsHasBeenSet = true;
    m_creationPermissions = std::forward<CreationPermissionsT>(value);
  }
  template <typename CreationPermissionsT = CreationPermissions>
  RootDirectory& WithCreationPermissions(CreationPermissionsT&& value) {
    SetCreationPermissions(std::forward<CreationPermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  CreationPermissions m_creationPermissions;
  bool m_pathHasBeenSet = false;
  bool m_creationPermissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
