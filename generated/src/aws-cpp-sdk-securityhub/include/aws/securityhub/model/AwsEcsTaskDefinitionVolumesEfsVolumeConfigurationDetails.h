/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails.h>
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
   * <p>Information about the Amazon Elastic File System file system that is used for
   * task storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& GetAuthorizationConfig() const { return m_authorizationConfig; }
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }
    template<typename AuthorizationConfigT = AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails>
    void SetAuthorizationConfig(AuthorizationConfigT&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::forward<AuthorizationConfigT>(value); }
    template<typename AuthorizationConfigT = AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails>
    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithAuthorizationConfig(AuthorizationConfigT&& value) { SetAuthorizationConfig(std::forward<AuthorizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline const Aws::String& GetFilesystemId() const { return m_filesystemId; }
    inline bool FilesystemIdHasBeenSet() const { return m_filesystemIdHasBeenSet; }
    template<typename FilesystemIdT = Aws::String>
    void SetFilesystemId(FilesystemIdT&& value) { m_filesystemIdHasBeenSet = true; m_filesystemId = std::forward<FilesystemIdT>(value); }
    template<typename FilesystemIdT = Aws::String>
    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithFilesystemId(FilesystemIdT&& value) { SetFilesystemId(std::forward<FilesystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline const Aws::String& GetRootDirectory() const { return m_rootDirectory; }
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }
    template<typename RootDirectoryT = Aws::String>
    void SetRootDirectory(RootDirectoryT&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::forward<RootDirectoryT>(value); }
    template<typename RootDirectoryT = Aws::String>
    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithRootDirectory(RootDirectoryT&& value) { SetRootDirectory(std::forward<RootDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline const Aws::String& GetTransitEncryption() const { return m_transitEncryption; }
    inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }
    template<typename TransitEncryptionT = Aws::String>
    void SetTransitEncryption(TransitEncryptionT&& value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = std::forward<TransitEncryptionT>(value); }
    template<typename TransitEncryptionT = Aws::String>
    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryption(TransitEncryptionT&& value) { SetTransitEncryption(std::forward<TransitEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server.</p>
     */
    inline int GetTransitEncryptionPort() const { return m_transitEncryptionPort; }
    inline bool TransitEncryptionPortHasBeenSet() const { return m_transitEncryptionPortHasBeenSet; }
    inline void SetTransitEncryptionPort(int value) { m_transitEncryptionPortHasBeenSet = true; m_transitEncryptionPort = value; }
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryptionPort(int value) { SetTransitEncryptionPort(value); return *this;}
    ///@}
  private:

    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;

    Aws::String m_filesystemId;
    bool m_filesystemIdHasBeenSet = false;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    Aws::String m_transitEncryption;
    bool m_transitEncryptionHasBeenSet = false;

    int m_transitEncryptionPort{0};
    bool m_transitEncryptionPortHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
