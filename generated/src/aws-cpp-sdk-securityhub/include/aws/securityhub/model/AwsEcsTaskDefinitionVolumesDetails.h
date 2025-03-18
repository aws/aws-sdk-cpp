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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a Docker volume.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& GetDockerVolumeConfiguration() const { return m_dockerVolumeConfiguration; }
    inline bool DockerVolumeConfigurationHasBeenSet() const { return m_dockerVolumeConfigurationHasBeenSet; }
    template<typename DockerVolumeConfigurationT = AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails>
    void SetDockerVolumeConfiguration(DockerVolumeConfigurationT&& value) { m_dockerVolumeConfigurationHasBeenSet = true; m_dockerVolumeConfiguration = std::forward<DockerVolumeConfigurationT>(value); }
    template<typename DockerVolumeConfigurationT = AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails>
    AwsEcsTaskDefinitionVolumesDetails& WithDockerVolumeConfiguration(DockerVolumeConfigurationT&& value) { SetDockerVolumeConfiguration(std::forward<DockerVolumeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Amazon Elastic File System file system that is used for
     * task storage.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails& GetEfsVolumeConfiguration() const { return m_efsVolumeConfiguration; }
    inline bool EfsVolumeConfigurationHasBeenSet() const { return m_efsVolumeConfigurationHasBeenSet; }
    template<typename EfsVolumeConfigurationT = AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails>
    void SetEfsVolumeConfiguration(EfsVolumeConfigurationT&& value) { m_efsVolumeConfigurationHasBeenSet = true; m_efsVolumeConfiguration = std::forward<EfsVolumeConfigurationT>(value); }
    template<typename EfsVolumeConfigurationT = AwsEcsTaskDefinitionVolumesEfsVolumeConfigurationDetails>
    AwsEcsTaskDefinitionVolumesDetails& WithEfsVolumeConfiguration(EfsVolumeConfigurationT&& value) { SetEfsVolumeConfiguration(std::forward<EfsVolumeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a bind mount host volume.</p>
     */
    inline const AwsEcsTaskDefinitionVolumesHostDetails& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = AwsEcsTaskDefinitionVolumesHostDetails>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = AwsEcsTaskDefinitionVolumesHostDetails>
    AwsEcsTaskDefinitionVolumesDetails& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data volume.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEcsTaskDefinitionVolumesDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
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
