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
    AWS_SAGEMAKER_API JupyterLabAppSettings();
    AWS_SAGEMAKER_API JupyterLabAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API JupyterLabAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }
    inline JupyterLabAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}
    inline JupyterLabAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const{ return m_customImages; }
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }
    inline void SetCustomImages(const Aws::Vector<CustomImage>& value) { m_customImagesHasBeenSet = true; m_customImages = value; }
    inline void SetCustomImages(Aws::Vector<CustomImage>&& value) { m_customImagesHasBeenSet = true; m_customImages = std::move(value); }
    inline JupyterLabAppSettings& WithCustomImages(const Aws::Vector<CustomImage>& value) { SetCustomImages(value); return *this;}
    inline JupyterLabAppSettings& WithCustomImages(Aws::Vector<CustomImage>&& value) { SetCustomImages(std::move(value)); return *this;}
    inline JupyterLabAppSettings& AddCustomImages(const CustomImage& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(value); return *this; }
    inline JupyterLabAppSettings& AddCustomImages(CustomImage&& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }
    inline JupyterLabAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}
    inline JupyterLabAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}
    inline JupyterLabAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }
    inline JupyterLabAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }
    inline JupyterLabAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline const Aws::Vector<CodeRepository>& GetCodeRepositories() const{ return m_codeRepositories; }
    inline bool CodeRepositoriesHasBeenSet() const { return m_codeRepositoriesHasBeenSet; }
    inline void SetCodeRepositories(const Aws::Vector<CodeRepository>& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = value; }
    inline void SetCodeRepositories(Aws::Vector<CodeRepository>&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = std::move(value); }
    inline JupyterLabAppSettings& WithCodeRepositories(const Aws::Vector<CodeRepository>& value) { SetCodeRepositories(value); return *this;}
    inline JupyterLabAppSettings& WithCodeRepositories(Aws::Vector<CodeRepository>&& value) { SetCodeRepositories(std::move(value)); return *this;}
    inline JupyterLabAppSettings& AddCodeRepositories(const CodeRepository& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(value); return *this; }
    inline JupyterLabAppSettings& AddCodeRepositories(CodeRepository&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether idle shutdown is activated for JupyterLab applications.</p>
     */
    inline const AppLifecycleManagement& GetAppLifecycleManagement() const{ return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    inline void SetAppLifecycleManagement(const AppLifecycleManagement& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = value; }
    inline void SetAppLifecycleManagement(AppLifecycleManagement&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::move(value); }
    inline JupyterLabAppSettings& WithAppLifecycleManagement(const AppLifecycleManagement& value) { SetAppLifecycleManagement(value); return *this;}
    inline JupyterLabAppSettings& WithAppLifecycleManagement(AppLifecycleManagement&& value) { SetAppLifecycleManagement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration parameters that specify the IAM roles assumed by the
     * execution role of SageMaker (assumable roles) and the cluster instances or job
     * execution environments (execution roles or runtime roles) to manage and access
     * resources required for running Amazon EMR clusters or Amazon EMR Serverless
     * applications.</p>
     */
    inline const EmrSettings& GetEmrSettings() const{ return m_emrSettings; }
    inline bool EmrSettingsHasBeenSet() const { return m_emrSettingsHasBeenSet; }
    inline void SetEmrSettings(const EmrSettings& value) { m_emrSettingsHasBeenSet = true; m_emrSettings = value; }
    inline void SetEmrSettings(EmrSettings&& value) { m_emrSettingsHasBeenSet = true; m_emrSettings = std::move(value); }
    inline JupyterLabAppSettings& WithEmrSettings(const EmrSettings& value) { SetEmrSettings(value); return *this;}
    inline JupyterLabAppSettings& WithEmrSettings(EmrSettings&& value) { SetEmrSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration that runs before the default lifecycle
     * configuration. It can override changes made in the default lifecycle
     * configuration.</p>
     */
    inline const Aws::String& GetBuiltInLifecycleConfigArn() const{ return m_builtInLifecycleConfigArn; }
    inline bool BuiltInLifecycleConfigArnHasBeenSet() const { return m_builtInLifecycleConfigArnHasBeenSet; }
    inline void SetBuiltInLifecycleConfigArn(const Aws::String& value) { m_builtInLifecycleConfigArnHasBeenSet = true; m_builtInLifecycleConfigArn = value; }
    inline void SetBuiltInLifecycleConfigArn(Aws::String&& value) { m_builtInLifecycleConfigArnHasBeenSet = true; m_builtInLifecycleConfigArn = std::move(value); }
    inline void SetBuiltInLifecycleConfigArn(const char* value) { m_builtInLifecycleConfigArnHasBeenSet = true; m_builtInLifecycleConfigArn.assign(value); }
    inline JupyterLabAppSettings& WithBuiltInLifecycleConfigArn(const Aws::String& value) { SetBuiltInLifecycleConfigArn(value); return *this;}
    inline JupyterLabAppSettings& WithBuiltInLifecycleConfigArn(Aws::String&& value) { SetBuiltInLifecycleConfigArn(std::move(value)); return *this;}
    inline JupyterLabAppSettings& WithBuiltInLifecycleConfigArn(const char* value) { SetBuiltInLifecycleConfigArn(value); return *this;}
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
