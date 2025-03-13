/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEfsAccessPointPosixUserDetails.h>
#include <aws/securityhub/model/AwsEfsAccessPointRootDirectoryDetails.h>
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
   * <p>Provides information about an Amazon EFS access point. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEfsAccessPointDetails">AWS
   * API Reference</a></p>
   */
  class AwsEfsAccessPointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails() = default;
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEfsAccessPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon EFS access point. </p>
     */
    inline const Aws::String& GetAccessPointId() const { return m_accessPointId; }
    inline bool AccessPointIdHasBeenSet() const { return m_accessPointIdHasBeenSet; }
    template<typename AccessPointIdT = Aws::String>
    void SetAccessPointId(AccessPointIdT&& value) { m_accessPointIdHasBeenSet = true; m_accessPointId = std::forward<AccessPointIdT>(value); }
    template<typename AccessPointIdT = Aws::String>
    AwsEfsAccessPointDetails& WithAccessPointId(AccessPointIdT&& value) { SetAccessPointId(std::forward<AccessPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EFS access point. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsEfsAccessPointDetails& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opaque string specified in the request to ensure idempotent creation.
     * </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AwsEfsAccessPointDetails& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EFS file system that the access point applies to. </p>
     */
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    AwsEfsAccessPointDetails& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full POSIX identity, including the user ID, group ID, and secondary group
     * IDs on the access point, that is used for all file operations by NFS clients
     * using the access point. </p>
     */
    inline const AwsEfsAccessPointPosixUserDetails& GetPosixUser() const { return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    template<typename PosixUserT = AwsEfsAccessPointPosixUserDetails>
    void SetPosixUser(PosixUserT&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::forward<PosixUserT>(value); }
    template<typename PosixUserT = AwsEfsAccessPointPosixUserDetails>
    AwsEfsAccessPointDetails& WithPosixUser(PosixUserT&& value) { SetPosixUser(std::forward<PosixUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory on the Amazon EFS file system that the access point exposes as
     * the root directory to NFS clients using the access point. </p>
     */
    inline const AwsEfsAccessPointRootDirectoryDetails& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = AwsEfsAccessPointRootDirectoryDetails>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = AwsEfsAccessPointRootDirectoryDetails>
    AwsEfsAccessPointDetails& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPointId;
    bool m_accessPointIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    AwsEfsAccessPointPosixUserDetails m_posixUser;
    bool m_posixUserHasBeenSet = false;

    AwsEfsAccessPointRootDirectoryDetails m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
