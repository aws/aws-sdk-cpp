/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the settings that Amazon EFS uses to create the
   * root directory when a client connects to an access point. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointRootDirectoryCreationInfoDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointRootDirectoryCreationInfoDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails() = default;
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointRootDirectoryCreationInfoDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the POSIX group ID to apply to the root directory. </p>
     */
    inline const Aws::String& GetOwnerGid() const { return m_ownerGid; }
    inline bool OwnerGidHasBeenSet() const { return m_ownerGidHasBeenSet; }
    template<typename OwnerGidT = Aws::String>
    void SetOwnerGid(OwnerGidT&& value) { m_ownerGidHasBeenSet = true; m_ownerGid = std::forward<OwnerGidT>(value); }
    template<typename OwnerGidT = Aws::String>
    AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerGid(OwnerGidT&& value) { SetOwnerGid(std::forward<OwnerGidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the POSIX user ID to apply to the root directory. </p>
     */
    inline const Aws::String& GetOwnerUid() const { return m_ownerUid; }
    inline bool OwnerUidHasBeenSet() const { return m_ownerUidHasBeenSet; }
    template<typename OwnerUidT = Aws::String>
    void SetOwnerUid(OwnerUidT&& value) { m_ownerUidHasBeenSet = true; m_ownerUid = std::forward<OwnerUidT>(value); }
    template<typename OwnerUidT = Aws::String>
    AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithOwnerUid(OwnerUidT&& value) { SetOwnerUid(std::forward<OwnerUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the POSIX permissions to apply to the root directory, in the format
     * of an octal number representing the file's mode bits. </p>
     */
    inline const Aws::String& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::String>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::String>
    AwsEfsAccessPointRootDirectoryCreationInfoDetails& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerGid;
    bool m_ownerGidHasBeenSet = false;

    Aws::String m_ownerUid;
    bool m_ownerUidHasBeenSet = false;

    Aws::String m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
