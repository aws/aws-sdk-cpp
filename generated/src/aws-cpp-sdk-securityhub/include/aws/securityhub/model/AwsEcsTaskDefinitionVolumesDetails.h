/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionVolumesHostDetails.h>
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
   * <p>A data volume to mount from another container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionVolumesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionVolumesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about a Docker volume.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& GetDockerVolumeConfiguration() const{ return m_dockerVolumeConfiguration; }

    /**
     * <p>Information about a Docker volume.</p>
     */
    inline bool DockerVolumeConfigurationHasBeenSet() const { return m_dockerVolumeConfigurationHasBeenSet; }

    /**
     * <p>Information about a Docker volume.</p>
     */
    inline void SetDockerVolumeConfiguration(const AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = value; }

    /**
     * <p>Information about a Docker volume.</p>
     */
    inline void SetDockerVolumeConfiguration(AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails&& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = std::move(value); }

    /**
     * <p>Information about a Docker volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithDockerVolumeConfiguration(const AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& value) { SetDockerVolumeConfiguration(value); return *this;}

    /**
     * <p>Information about a Docker volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithDockerVolumeConfiguration(AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails&& value) { SetDockerVolumeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& GetEfsVolumeConfiguration() const{ return m_efsVolumeConfiguration; }

    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline bool EfsVolumeConfigurationHasBeenSet() const { return m_efsVolumeConfigurationHasBeenSet; }

    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline void SetEfsVolumeConfiguration(const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = value; }

    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline void SetEfsVolumeConfiguration(AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails&& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = std::move(value); }

    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithEfsVolumeConfiguration(const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& value) { SetEfsVolumeConfiguration(value); return *this;}

    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithEfsVolumeConfiguration(AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails&& value) { SetEfsVolumeConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesHostDetails& GetHost() const{ return m_host; }

    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline void SetHost(const AwsEcsTaskDefinitionVolumesHostDetails& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline void SetHost(AwsEcsTaskDefinitionVolumesHostDetails&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithHost(const AwsEcsTaskDefinitionVolumesHostDetails& value) { SetHost(value); return *this;}

    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithHost(AwsEcsTaskDefinitionVolumesHostDetails&& value) { SetHost(std::move(value)); return *this;}


    /**
     * <p>The name of the data volume.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data volume.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data volume.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data volume.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data volume.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data volume.</p>
     */
    inline AwsEcsTaskDefinitionVolumesDetails& WithName(const char* value) { SetName(value); return *this;}

  private:

    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails m_dockerVolumeConfiguration;
    bool m_dockerVolumeConfigurationHasBeenSet = false;

    AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails m_efsVolumeConfiguration;
    bool m_efsVolumeConfigurationHasBeenSet = false;

    AwsEcsTaskDefinitionVolumesHostDetails m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
