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
    AWS_SAGEMAKER_API DefaultSpaceSettings();
    AWS_SAGEMAKER_API DefaultSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DefaultSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the execution role for the space.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline DefaultSpaceSettings& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline DefaultSpaceSettings& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline DefaultSpaceSettings& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group IDs for the Amazon VPC that the space uses for
     * communication.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline DefaultSpaceSettings& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline DefaultSpaceSettings& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline DefaultSpaceSettings& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline DefaultSpaceSettings& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline DefaultSpaceSettings& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const{ return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    inline void SetJupyterServerAppSettings(const JupyterServerAppSettings& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = value; }
    inline void SetJupyterServerAppSettings(JupyterServerAppSettings&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::move(value); }
    inline DefaultSpaceSettings& WithJupyterServerAppSettings(const JupyterServerAppSettings& value) { SetJupyterServerAppSettings(value); return *this;}
    inline DefaultSpaceSettings& WithJupyterServerAppSettings(JupyterServerAppSettings&& value) { SetJupyterServerAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const{ return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    inline void SetKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = value; }
    inline void SetKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::move(value); }
    inline DefaultSpaceSettings& WithKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { SetKernelGatewayAppSettings(value); return *this;}
    inline DefaultSpaceSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { SetKernelGatewayAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const JupyterLabAppSettings& GetJupyterLabAppSettings() const{ return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    inline void SetJupyterLabAppSettings(const JupyterLabAppSettings& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = value; }
    inline void SetJupyterLabAppSettings(JupyterLabAppSettings&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::move(value); }
    inline DefaultSpaceSettings& WithJupyterLabAppSettings(const JupyterLabAppSettings& value) { SetJupyterLabAppSettings(value); return *this;}
    inline DefaultSpaceSettings& WithJupyterLabAppSettings(JupyterLabAppSettings&& value) { SetJupyterLabAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DefaultSpaceStorageSettings& GetSpaceStorageSettings() const{ return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    inline void SetSpaceStorageSettings(const DefaultSpaceStorageSettings& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = value; }
    inline void SetSpaceStorageSettings(DefaultSpaceStorageSettings&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::move(value); }
    inline DefaultSpaceSettings& WithSpaceStorageSettings(const DefaultSpaceStorageSettings& value) { SetSpaceStorageSettings(value); return *this;}
    inline DefaultSpaceSettings& WithSpaceStorageSettings(DefaultSpaceStorageSettings&& value) { SetSpaceStorageSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomPosixUserConfig& GetCustomPosixUserConfig() const{ return m_customPosixUserConfig; }
    inline bool CustomPosixUserConfigHasBeenSet() const { return m_customPosixUserConfigHasBeenSet; }
    inline void SetCustomPosixUserConfig(const CustomPosixUserConfig& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = value; }
    inline void SetCustomPosixUserConfig(CustomPosixUserConfig&& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = std::move(value); }
    inline DefaultSpaceSettings& WithCustomPosixUserConfig(const CustomPosixUserConfig& value) { SetCustomPosixUserConfig(value); return *this;}
    inline DefaultSpaceSettings& WithCustomPosixUserConfig(CustomPosixUserConfig&& value) { SetCustomPosixUserConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for assigning a custom file system to a domain. Permitted users
     * can access this file system in Amazon SageMaker AI Studio.</p>
     */
    inline const Aws::Vector<CustomFileSystemConfig>& GetCustomFileSystemConfigs() const{ return m_customFileSystemConfigs; }
    inline bool CustomFileSystemConfigsHasBeenSet() const { return m_customFileSystemConfigsHasBeenSet; }
    inline void SetCustomFileSystemConfigs(const Aws::Vector<CustomFileSystemConfig>& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = value; }
    inline void SetCustomFileSystemConfigs(Aws::Vector<CustomFileSystemConfig>&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = std::move(value); }
    inline DefaultSpaceSettings& WithCustomFileSystemConfigs(const Aws::Vector<CustomFileSystemConfig>& value) { SetCustomFileSystemConfigs(value); return *this;}
    inline DefaultSpaceSettings& WithCustomFileSystemConfigs(Aws::Vector<CustomFileSystemConfig>&& value) { SetCustomFileSystemConfigs(std::move(value)); return *this;}
    inline DefaultSpaceSettings& AddCustomFileSystemConfigs(const CustomFileSystemConfig& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.push_back(value); return *this; }
    inline DefaultSpaceSettings& AddCustomFileSystemConfigs(CustomFileSystemConfig&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.push_back(std::move(value)); return *this; }
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
