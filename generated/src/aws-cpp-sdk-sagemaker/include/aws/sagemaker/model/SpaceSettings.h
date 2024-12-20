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
    AWS_SAGEMAKER_API SpaceSettings();
    AWS_SAGEMAKER_API SpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const{ return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    inline void SetJupyterServerAppSettings(const JupyterServerAppSettings& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = value; }
    inline void SetJupyterServerAppSettings(JupyterServerAppSettings&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::move(value); }
    inline SpaceSettings& WithJupyterServerAppSettings(const JupyterServerAppSettings& value) { SetJupyterServerAppSettings(value); return *this;}
    inline SpaceSettings& WithJupyterServerAppSettings(JupyterServerAppSettings&& value) { SetJupyterServerAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const{ return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    inline void SetKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = value; }
    inline void SetKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::move(value); }
    inline SpaceSettings& WithKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { SetKernelGatewayAppSettings(value); return *this;}
    inline SpaceSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { SetKernelGatewayAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor application settings.</p>
     */
    inline const SpaceCodeEditorAppSettings& GetCodeEditorAppSettings() const{ return m_codeEditorAppSettings; }
    inline bool CodeEditorAppSettingsHasBeenSet() const { return m_codeEditorAppSettingsHasBeenSet; }
    inline void SetCodeEditorAppSettings(const SpaceCodeEditorAppSettings& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = value; }
    inline void SetCodeEditorAppSettings(SpaceCodeEditorAppSettings&& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = std::move(value); }
    inline SpaceSettings& WithCodeEditorAppSettings(const SpaceCodeEditorAppSettings& value) { SetCodeEditorAppSettings(value); return *this;}
    inline SpaceSettings& WithCodeEditorAppSettings(SpaceCodeEditorAppSettings&& value) { SetCodeEditorAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the JupyterLab application.</p>
     */
    inline const SpaceJupyterLabAppSettings& GetJupyterLabAppSettings() const{ return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    inline void SetJupyterLabAppSettings(const SpaceJupyterLabAppSettings& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = value; }
    inline void SetJupyterLabAppSettings(SpaceJupyterLabAppSettings&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::move(value); }
    inline SpaceSettings& WithJupyterLabAppSettings(const SpaceJupyterLabAppSettings& value) { SetJupyterLabAppSettings(value); return *this;}
    inline SpaceSettings& WithJupyterLabAppSettings(SpaceJupyterLabAppSettings&& value) { SetJupyterLabAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app created within the space.</p> <p>If using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateSpace.html">
     * UpdateSpace</a> API, you can't change the app type of your space by specifying a
     * different value for this field.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }
    inline SpaceSettings& WithAppType(const AppType& value) { SetAppType(value); return *this;}
    inline SpaceSettings& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage settings for a space.</p>
     */
    inline const SpaceStorageSettings& GetSpaceStorageSettings() const{ return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    inline void SetSpaceStorageSettings(const SpaceStorageSettings& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = value; }
    inline void SetSpaceStorageSettings(SpaceStorageSettings&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::move(value); }
    inline SpaceSettings& WithSpaceStorageSettings(const SpaceStorageSettings& value) { SetSpaceStorageSettings(value); return *this;}
    inline SpaceSettings& WithSpaceStorageSettings(SpaceStorageSettings&& value) { SetSpaceStorageSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A file system, created by you, that you assign to a space for an Amazon
     * SageMaker AI Domain. Permitted users can access this file system in Amazon
     * SageMaker AI Studio.</p>
     */
    inline const Aws::Vector<CustomFileSystem>& GetCustomFileSystems() const{ return m_customFileSystems; }
    inline bool CustomFileSystemsHasBeenSet() const { return m_customFileSystemsHasBeenSet; }
    inline void SetCustomFileSystems(const Aws::Vector<CustomFileSystem>& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems = value; }
    inline void SetCustomFileSystems(Aws::Vector<CustomFileSystem>&& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems = std::move(value); }
    inline SpaceSettings& WithCustomFileSystems(const Aws::Vector<CustomFileSystem>& value) { SetCustomFileSystems(value); return *this;}
    inline SpaceSettings& WithCustomFileSystems(Aws::Vector<CustomFileSystem>&& value) { SetCustomFileSystems(std::move(value)); return *this;}
    inline SpaceSettings& AddCustomFileSystems(const CustomFileSystem& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems.push_back(value); return *this; }
    inline SpaceSettings& AddCustomFileSystems(CustomFileSystem&& value) { m_customFileSystemsHasBeenSet = true; m_customFileSystems.push_back(std::move(value)); return *this; }
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

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    SpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;

    Aws::Vector<CustomFileSystem> m_customFileSystems;
    bool m_customFileSystemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
