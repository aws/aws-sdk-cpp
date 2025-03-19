/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
#include <aws/sagemaker/model/JupyterLabAppSettings.h>
#include <aws/sagemaker/model/DefaultSpaceStorageSettings.h>
#include <aws/sagemaker/model/CustomPosixUserConfig.h>
#include <aws/sagemaker/model/CustomFileSystemConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The default settings for shared spaces that users create in the domain.</p>
   * <p>SageMaker applies these settings only to shared spaces. It doesn't apply them
   * to private spaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DefaultSpaceSettings">AWS
   * API Reference</a></p>
   */
  class DefaultSpaceSettings
  {
  public:
    AWS_SAGEMAKER_API DefaultSpaceSettings() = default;
    AWS_SAGEMAKER_API DefaultSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DefaultSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the execution role for the space.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    DefaultSpaceSettings& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group IDs for the Amazon VPC that the space uses for
     * communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    DefaultSpaceSettings& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    DefaultSpaceSettings& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const { return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    void SetJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::forward<JupyterServerAppSettingsT>(value); }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    DefaultSpaceSettings& WithJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { SetJupyterServerAppSettings(std::forward<JupyterServerAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const { return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    void SetKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::forward<KernelGatewayAppSettingsT>(value); }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    DefaultSpaceSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { SetKernelGatewayAppSettings(std::forward<KernelGatewayAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const JupyterLabAppSettings& GetJupyterLabAppSettings() const { return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    template<typename JupyterLabAppSettingsT = JupyterLabAppSettings>
    void SetJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::forward<JupyterLabAppSettingsT>(value); }
    template<typename JupyterLabAppSettingsT = JupyterLabAppSettings>
    DefaultSpaceSettings& WithJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { SetJupyterLabAppSettings(std::forward<JupyterLabAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DefaultSpaceStorageSettings& GetSpaceStorageSettings() const { return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    template<typename SpaceStorageSettingsT = DefaultSpaceStorageSettings>
    void SetSpaceStorageSettings(SpaceStorageSettingsT&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::forward<SpaceStorageSettingsT>(value); }
    template<typename SpaceStorageSettingsT = DefaultSpaceStorageSettings>
    DefaultSpaceSettings& WithSpaceStorageSettings(SpaceStorageSettingsT&& value) { SetSpaceStorageSettings(std::forward<SpaceStorageSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomPosixUserConfig& GetCustomPosixUserConfig() const { return m_customPosixUserConfig; }
    inline bool CustomPosixUserConfigHasBeenSet() const { return m_customPosixUserConfigHasBeenSet; }
    template<typename CustomPosixUserConfigT = CustomPosixUserConfig>
    void SetCustomPosixUserConfig(CustomPosixUserConfigT&& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = std::forward<CustomPosixUserConfigT>(value); }
    template<typename CustomPosixUserConfigT = CustomPosixUserConfig>
    DefaultSpaceSettings& WithCustomPosixUserConfig(CustomPosixUserConfigT&& value) { SetCustomPosixUserConfig(std::forward<CustomPosixUserConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for assigning a custom file system to a domain. Permitted users
     * can access this file system in Amazon SageMaker AI Studio.</p>
     */
    inline const Aws::Vector<CustomFileSystemConfig>& GetCustomFileSystemConfigs() const { return m_customFileSystemConfigs; }
    inline bool CustomFileSystemConfigsHasBeenSet() const { return m_customFileSystemConfigsHasBeenSet; }
    template<typename CustomFileSystemConfigsT = Aws::Vector<CustomFileSystemConfig>>
    void SetCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = std::forward<CustomFileSystemConfigsT>(value); }
    template<typename CustomFileSystemConfigsT = Aws::Vector<CustomFileSystemConfig>>
    DefaultSpaceSettings& WithCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { SetCustomFileSystemConfigs(std::forward<CustomFileSystemConfigsT>(value)); return *this;}
    template<typename CustomFileSystemConfigsT = CustomFileSystemConfig>
    DefaultSpaceSettings& AddCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.emplace_back(std::forward<CustomFileSystemConfigsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;

    JupyterLabAppSettings m_jupyterLabAppSettings;
    bool m_jupyterLabAppSettingsHasBeenSet = false;

    DefaultSpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;

    CustomPosixUserConfig m_customPosixUserConfig;
    bool m_customPosixUserConfigHasBeenSet = false;

    Aws::Vector<CustomFileSystemConfig> m_customFileSystemConfigs;
    bool m_customFileSystemConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
