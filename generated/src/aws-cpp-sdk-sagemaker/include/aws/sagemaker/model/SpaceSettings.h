/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
#include <aws/sagemaker/model/SpaceCodeEditorAppSettings.h>
#include <aws/sagemaker/model/SpaceJupyterLabAppSettings.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/SpaceStorageSettings.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomFileSystem.h>
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
   * <p>A collection of space settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceSettings">AWS
   * API Reference</a></p>
   */
  class SpaceSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceSettings() = default;
    AWS_SAGEMAKER_API SpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const { return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    void SetJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::forward<JupyterServerAppSettingsT>(value); }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    SpaceSettings& WithJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { SetJupyterServerAppSettings(std::forward<JupyterServerAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const { return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    void SetKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::forward<KernelGatewayAppSettingsT>(value); }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    SpaceSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { SetKernelGatewayAppSettings(std::forward<KernelGatewayAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor application settings.</p>
     */
    inline const SpaceCodeEditorAppSettings& GetCodeEditorAppSettings() const { return m_codeEditorAppSettings; }
    inline bool CodeEditorAppSettingsHasBeenSet() const { return m_codeEditorAppSettingsHasBeenSet; }
    template<typename CodeEditorAppSettingsT = SpaceCodeEditorAppSettings>
    void SetCodeEditorAppSettings(CodeEditorAppSettingsT&& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = std::forward<CodeEditorAppSettingsT>(value); }
    template<typename CodeEditorAppSettingsT = SpaceCodeEditorAppSettings>
    SpaceSettings& WithCodeEditorAppSettings(CodeEditorAppSettingsT&& value) { SetCodeEditorAppSettings(std::forward<CodeEditorAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the JupyterLab application.</p>
     */
    inline const SpaceJupyterLabAppSettings& GetJupyterLabAppSettings() const { return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    template<typename JupyterLabAppSettingsT = SpaceJupyterLabAppSettings>
    void SetJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::forward<JupyterLabAppSettingsT>(value); }
    template<typename JupyterLabAppSettingsT = SpaceJupyterLabAppSettings>
    SpaceSettings& WithJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { SetJupyterLabAppSettings(std::forward<JupyterLabAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app created within the space.</p> <p>If using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateSpace.html">
     * UpdateSpace</a> API, you can't change the app type of your space by specifying a
     * different value for this field.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline SpaceSettings& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage settings for a space.</p>
     */
    inline const SpaceStorageSettings& GetSpaceStorageSettings() const { return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    template<typename SpaceStorageSettingsT = SpaceStorageSettings>
    void SetSpaceStorageSettings(SpaceStorageSettingsT&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::forward<SpaceStorageSettingsT>(value); }
    template<typename SpaceStorageSettingsT = SpaceStorageSettings>
    SpaceSettings& WithSpaceStorageSettings(SpaceStorageSettingsT&& value) { SetSpaceStorageSettings(std::forward<SpaceStorageSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you enable this option, SageMaker AI creates the following resources on
     * your behalf when you create the space:</p> <ul> <li> <p>The user profile that
     * possesses the space.</p> </li> <li> <p>The app that the space contains.</p>
     * </li> </ul>
     */
    inline FeatureStatus GetSpaceManagedResources() const { return m_spaceManagedResources; }
    inline bool SpaceManagedResourcesHasBeenSet() const { return m_spaceManagedResourcesHasBeenSet; }
    inline void SetSpaceManagedResources(FeatureStatus value) { m_spaceManagedResourcesHasBeenSet = true; m_spaceManagedResources = value; }
    inline SpaceSettings& WithSpaceManagedResources(FeatureStatus value) { SetSpaceManagedResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file system, created by you, that you assign to a space for an Amazon
     * SageMaker AI Domain. Permitted users can access this file system in Amazon
     * SageMaker AI Studio.</p>
     */
    inline const Aws::Vector<CustomFileSystem>& GetCustomFileSystems() const { return m_customFileSystems; }
    inline bool CustomFileSystemsHasBeenSet() const { return m_customFileSystemsHasBeenSet; }
    template<typename CustomFileSystemsT = Aws::Vector<CustomFileSystem>>
    void SetCustomFileSystems(CustomFileSystemsT&& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems = std::forward<CustomFileSystemsT>(value); }
    template<typename CustomFileSystemsT = Aws::Vector<CustomFileSystem>>
    SpaceSettings& WithCustomFileSystems(CustomFileSystemsT&& value) { SetCustomFileSystems(std::forward<CustomFileSystemsT>(value)); return *this;}
    template<typename CustomFileSystemsT = CustomFileSystem>
    SpaceSettings& AddCustomFileSystems(CustomFileSystemsT&& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems.emplace_back(std::forward<CustomFileSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A setting that enables or disables remote access for a SageMaker space. When
     * enabled, this allows you to connect to the remote space from your local IDE.</p>
     */
    inline FeatureStatus GetRemoteAccess() const { return m_remoteAccess; }
    inline bool RemoteAccessHasBeenSet() const { return m_remoteAccessHasBeenSet; }
    inline void SetRemoteAccess(FeatureStatus value) { m_remoteAccessHasBeenSet = true; m_remoteAccess = value; }
    inline SpaceSettings& WithRemoteAccess(FeatureStatus value) { SetRemoteAccess(value); return *this;}
    ///@}
  private:

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;

    SpaceCodeEditorAppSettings m_codeEditorAppSettings;
    bool m_codeEditorAppSettingsHasBeenSet = false;

    SpaceJupyterLabAppSettings m_jupyterLabAppSettings;
    bool m_jupyterLabAppSettingsHasBeenSet = false;

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    SpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;

    FeatureStatus m_spaceManagedResources{FeatureStatus::NOT_SET};
    bool m_spaceManagedResourcesHasBeenSet = false;

    Aws::Vector<CustomFileSystem> m_customFileSystems;
    bool m_customFileSystemsHasBeenSet = false;

    FeatureStatus m_remoteAccess{FeatureStatus::NOT_SET};
    bool m_remoteAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
