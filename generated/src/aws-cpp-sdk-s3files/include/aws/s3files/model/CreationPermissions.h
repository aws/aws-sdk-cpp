/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3files/S3Files_EXPORTS.h>

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
 * <p>Specifies the permissions to set on newly created directories within the file
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3files-2025-05-05/CreationPermissions">AWS
 * API Reference</a></p>
 */
class CreationPermissions {
 public:
  AWS_S3FILES_API CreationPermissions() = default;
  AWS_S3FILES_API CreationPermissions(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API CreationPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3FILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The POSIX user ID to assign to newly created directories.</p>
   */
  inline long long GetOwnerUid() const { return m_ownerUid; }
  inline bool OwnerUidHasBeenSet() const { return m_ownerUidHasBeenSet; }
  inline void SetOwnerUid(long long value) {
    m_ownerUidHasBeenSet = true;
    m_ownerUid = value;
  }
  inline CreationPermissions& WithOwnerUid(long long value) {
    SetOwnerUid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The POSIX group ID to assign to newly created directories.</p>
   */
  inline long long GetOwnerGid() const { return m_ownerGid; }
  inline bool OwnerGidHasBeenSet() const { return m_ownerGidHasBeenSet; }
  inline void SetOwnerGid(long long value) {
    m_ownerGidHasBeenSet = true;
    m_ownerGid = value;
  }
  inline CreationPermissions& WithOwnerGid(long long value) {
    SetOwnerGid(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The octal permissions to assign to newly created directories.</p>
   */
  inline const Aws::String& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = Aws::String>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::String>
  CreationPermissions& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_ownerUid{0};

  long long m_ownerGid{0};

  Aws::String m_permissions;
  bool m_ownerUidHasBeenSet = false;
  bool m_ownerGidHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
