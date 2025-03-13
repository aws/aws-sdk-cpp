/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes Network File System (NFS) file share default values. Files and
   * folders stored as Amazon S3 objects in S3 buckets don't, by default, have Unix
   * file permissions assigned to them. Upon discovery in an S3 bucket by Storage
   * Gateway, the S3 objects that represent files and folders are assigned these
   * default Unix permissions. This operation is only supported for S3 File
   * Gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NFSFileShareDefaults">AWS
   * API Reference</a></p>
   */
  class NFSFileShareDefaults
  {
  public:
    AWS_STORAGEGATEWAY_API NFSFileShareDefaults() = default;
    AWS_STORAGEGATEWAY_API NFSFileShareDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API NFSFileShareDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Unix file mode in the form "nnnn". For example, <code>0666</code>
     * represents the default file mode inside the file share. The default value is
     * <code>0666</code>.</p>
     */
    inline const Aws::String& GetFileMode() const { return m_fileMode; }
    inline bool FileModeHasBeenSet() const { return m_fileModeHasBeenSet; }
    template<typename FileModeT = Aws::String>
    void SetFileMode(FileModeT&& value) { m_fileModeHasBeenSet = true; m_fileMode = std::forward<FileModeT>(value); }
    template<typename FileModeT = Aws::String>
    NFSFileShareDefaults& WithFileMode(FileModeT&& value) { SetFileMode(std::forward<FileModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix directory mode in the form "nnnn". For example, <code>0666</code>
     * represents the default access mode for all directories inside the file share.
     * The default value is <code>0777</code>.</p>
     */
    inline const Aws::String& GetDirectoryMode() const { return m_directoryMode; }
    inline bool DirectoryModeHasBeenSet() const { return m_directoryModeHasBeenSet; }
    template<typename DirectoryModeT = Aws::String>
    void SetDirectoryMode(DirectoryModeT&& value) { m_directoryModeHasBeenSet = true; m_directoryMode = std::forward<DirectoryModeT>(value); }
    template<typename DirectoryModeT = Aws::String>
    NFSFileShareDefaults& WithDirectoryMode(DirectoryModeT&& value) { SetDirectoryMode(std::forward<DirectoryModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default group ID for the file share (unless the files have another group
     * ID specified). The default value is <code>nfsnobody</code>.</p>
     */
    inline long long GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(long long value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline NFSFileShareDefaults& WithGroupId(long long value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default owner ID for files in the file share (unless the files have
     * another owner ID specified). The default value is <code>nfsnobody</code>.</p>
     */
    inline long long GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(long long value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline NFSFileShareDefaults& WithOwnerId(long long value) { SetOwnerId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileMode;
    bool m_fileModeHasBeenSet = false;

    Aws::String m_directoryMode;
    bool m_directoryModeHasBeenSet = false;

    long long m_groupId{0};
    bool m_groupIdHasBeenSet = false;

    long long m_ownerId{0};
    bool m_ownerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
