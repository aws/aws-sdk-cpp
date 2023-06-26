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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& GetAuthorizationConfig() const{ return m_authorizationConfig; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline bool AuthorizationConfigHasBeenSet() const { return m_authorizationConfigHasBeenSet; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline void SetAuthorizationConfig(const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = value; }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline void SetAuthorizationConfig(AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails&& value) { m_authorizationConfigHasBeenSet = true; m_authorizationConfig = std::move(value); }

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithAuthorizationConfig(const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails& value) { SetAuthorizationConfig(value); return *this;}

    /**
     * <p>The authorization configuration details for the Amazon EFS file system.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithAuthorizationConfig(AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails&& value) { SetAuthorizationConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline const Aws::String& GetFilesystemId() const{ return m_filesystemId; }

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline bool FilesystemIdHasBeenSet() const { return m_filesystemIdHasBeenSet; }

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline void SetFilesystemId(const Aws::String& value) { m_filesystemIdHasBeenSet = true; m_filesystemId = value; }

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline void SetFilesystemId(Aws::String&& value) { m_filesystemIdHasBeenSet = true; m_filesystemId = std::move(value); }

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline void SetFilesystemId(const char* value) { m_filesystemIdHasBeenSet = true; m_filesystemId.assign(value); }

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithFilesystemId(const Aws::String& value) { SetFilesystemId(value); return *this;}

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithFilesystemId(Aws::String&& value) { SetFilesystemId(std::move(value)); return *this;}

    /**
     * <p>The Amazon EFS file system identifier to use.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithFilesystemId(const char* value) { SetFilesystemId(value); return *this;}


    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline const Aws::String& GetRootDirectory() const{ return m_rootDirectory; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline bool RootDirectoryHasBeenSet() const { return m_rootDirectoryHasBeenSet; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(const Aws::String& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = value; }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(Aws::String&& value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory = std::move(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline void SetRootDirectory(const char* value) { m_rootDirectoryHasBeenSet = true; m_rootDirectory.assign(value); }

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithRootDirectory(const Aws::String& value) { SetRootDirectory(value); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithRootDirectory(Aws::String&& value) { SetRootDirectory(std::move(value)); return *this;}

    /**
     * <p>The directory within the Amazon EFS file system to mount as the root
     * directory inside the host.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithRootDirectory(const char* value) { SetRootDirectory(value); return *this;}


    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline const Aws::String& GetTransitEncryption() const{ return m_transitEncryption; }

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline bool TransitEncryptionHasBeenSet() const { return m_transitEncryptionHasBeenSet; }

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline void SetTransitEncryption(const Aws::String& value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = value; }

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline void SetTransitEncryption(Aws::String&& value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption = std::move(value); }

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline void SetTransitEncryption(const char* value) { m_transitEncryptionHasBeenSet = true; m_transitEncryption.assign(value); }

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryption(const Aws::String& value) { SetTransitEncryption(value); return *this;}

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryption(Aws::String&& value) { SetTransitEncryption(std::move(value)); return *this;}

    /**
     * <p>Whether to enable encryption for Amazon EFS data in transit between the
     * Amazon ECS host and the Amazon EFS server. </p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryption(const char* value) { SetTransitEncryption(value); return *this;}


    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server.</p>
     */
    inline int GetTransitEncryptionPort() const{ return m_transitEncryptionPort; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server.</p>
     */
    inline bool TransitEncryptionPortHasBeenSet() const { return m_transitEncryptionPortHasBeenSet; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server.</p>
     */
    inline void SetTransitEncryptionPort(int value) { m_transitEncryptionPortHasBeenSet = true; m_transitEncryptionPort = value; }

    /**
     * <p>The port to use when sending encrypted data between the Amazon ECS host and
     * the Amazon EFS server.</p>
     */
    inline AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& WithTransitEncryptionPort(int value) { SetTransitEncryptionPort(value); return *this;}

  private:

    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationAuthorizationConfigDetails m_authorizationConfig;
    bool m_authorizationConfigHasBeenSet = false;

    Aws::String m_filesystemId;
    bool m_filesystemIdHasBeenSet = false;

    Aws::String m_rootDirectory;
    bool m_rootDirectoryHasBeenSet = false;

    Aws::String m_transitEncryption;
    bool m_transitEncryptionHasBeenSet = false;

    int m_transitEncryptionPort;
    bool m_transitEncryptionPortHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
