/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppLifecycleManagement.h>
#include <aws/sagemaker/model/EmrSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CustomImage.h>
#include <aws/sagemaker/model/CodeRepository.h>
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
   * <p>The settings for the JupyterLab application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JupyterLabAppSettings">AWS
   * API Reference</a></p>
   */
  class JupyterLabAppSettings
  {
  public:
    AWS_SAGEMAKER_API JupyterLabAppSettings() = default;
    AWS_SAGEMAKER_API JupyterLabAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API JupyterLabAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    JupyterLabAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const { return m_customImages; }
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    void SetCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages = std::forward<CustomImagesT>(value); }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    JupyterLabAppSettings& WithCustomImages(CustomImagesT&& value) { SetCustomImages(std::forward<CustomImagesT>(value)); return *this;}
    template<typename CustomImagesT = CustomImage>
    JupyterLabAppSettings& AddCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages.emplace_back(std::forward<CustomImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const { return m_lifecycleConfigArns; }
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    void SetLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::forward<LifecycleConfigArnsT>(value); }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    JupyterLabAppSettings& WithLifecycleConfigArns(LifecycleConfigArnsT&& value) { SetLifecycleConfigArns(std::forward<LifecycleConfigArnsT>(value)); return *this;}
    template<typename LifecycleConfigArnsT = Aws::String>
    JupyterLabAppSettings& AddLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.emplace_back(std::forward<LifecycleConfigArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline const Aws::Vector<CodeRepository>& GetCodeRepositories() const { return m_codeRepositories; }
    inline bool CodeRepositoriesHasBeenSet() const { return m_codeRepositoriesHasBeenSet; }
    template<typename CodeRepositoriesT = Aws::Vector<CodeRepository>>
    void SetCodeRepositories(CodeRepositoriesT&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = std::forward<CodeRepositoriesT>(value); }
    template<typename CodeRepositoriesT = Aws::Vector<CodeRepository>>
    JupyterLabAppSettings& WithCodeRepositories(CodeRepositoriesT&& value) { SetCodeRepositories(std::forward<CodeRepositoriesT>(value)); return *this;}
    template<typename CodeRepositoriesT = CodeRepository>
    JupyterLabAppSettings& AddCodeRepositories(CodeRepositoriesT&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.emplace_back(std::forward<CodeRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether idle shutdown is activated for JupyterLab applications.</p>
     */
    inline const AppLifecycleManagement& GetAppLifecycleManagement() const { return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    template<typename AppLifecycleManagementT = AppLifecycleManagement>
    void SetAppLifecycleManagement(AppLifecycleManagementT&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::forward<AppLifecycleManagementT>(value); }
    template<typename AppLifecycleManagementT = AppLifecycleManagement>
    JupyterLabAppSettings& WithAppLifecycleManagement(AppLifecycleManagementT&& value) { SetAppLifecycleManagement(std::forward<AppLifecycleManagementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters that specify the IAM roles assumed by the
     * execution role of SageMaker (assumable roles) and the cluster instances or job
     * execution environments (execution roles or runtime roles) to manage and access
     * resources required for running Amazon EMR clusters or Amazon EMR Serverless
     * applications.</p>
     */
    inline const EmrSettings& GetEmrSettings() const { return m_emrSettings; }
    inline bool EmrSettingsHasBeenSet() const { return m_emrSettingsHasBeenSet; }
    template<typename EmrSettingsT = EmrSettings>
    void SetEmrSettings(EmrSettingsT&& value) { m_emrSettingsHasBeenSet = true; m_emrSettings = std::forward<EmrSettingsT>(value); }
    template<typename EmrSettingsT = EmrSettings>
    JupyterLabAppSettings& WithEmrSettings(EmrSettingsT&& value) { SetEmrSettings(std::forward<EmrSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration that runs before the default lifecycle
     * configuration. It can override changes made in the default lifecycle
     * configuration.</p>
     */
    inline const Aws::String& GetBuiltInLifecycleConfigArn() const { return m_builtInLifecycleConfigArn; }
    inline bool BuiltInLifecycleConfigArnHasBeenSet() const { return m_builtInLifecycleConfigArnHasBeenSet; }
    template<typename BuiltInLifecycleConfigArnT = Aws::String>
    void SetBuiltInLifecycleConfigArn(BuiltInLifecycleConfigArnT&& value) { m_builtInLifecycleConfigArnHasBeenSet = true; m_builtInLifecycleConfigArn = std::forward<BuiltInLifecycleConfigArnT>(value); }
    template<typename BuiltInLifecycleConfigArnT = Aws::String>
    JupyterLabAppSettings& WithBuiltInLifecycleConfigArn(BuiltInLifecycleConfigArnT&& value) { SetBuiltInLifecycleConfigArn(std::forward<BuiltInLifecycleConfigArnT>(value)); return *this;}
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;

    Aws::Vector<CodeRepository> m_codeRepositories;
    bool m_codeRepositoriesHasBeenSet = false;

    AppLifecycleManagement m_appLifecycleManagement;
    bool m_appLifecycleManagementHasBeenSet = false;

    EmrSettings m_emrSettings;
    bool m_emrSettingsHasBeenSet = false;

    Aws::String m_builtInLifecycleConfigArn;
    bool m_builtInLifecycleConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
