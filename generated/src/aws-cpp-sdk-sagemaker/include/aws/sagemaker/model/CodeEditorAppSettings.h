/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppLifecycleManagement.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CustomImage.h>
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
   * <p>The Code Editor application settings.</p> <p>For more information about Code
   * Editor, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/code-editor.html">Get
   * started with Code Editor in Amazon SageMaker</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CodeEditorAppSettings">AWS
   * API Reference</a></p>
   */
  class CodeEditorAppSettings
  {
  public:
    AWS_SAGEMAKER_API CodeEditorAppSettings() = default;
    AWS_SAGEMAKER_API CodeEditorAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CodeEditorAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    CodeEditorAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom SageMaker images that are configured to run as a Code Editor
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const { return m_customImages; }
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    void SetCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages = std::forward<CustomImagesT>(value); }
    template<typename CustomImagesT = Aws::Vector<CustomImage>>
    CodeEditorAppSettings& WithCustomImages(CustomImagesT&& value) { SetCustomImages(std::forward<CustomImagesT>(value)); return *this;}
    template<typename CustomImagesT = CustomImage>
    CodeEditorAppSettings& AddCustomImages(CustomImagesT&& value) { m_customImagesHasBeenSet = true; m_customImages.emplace_back(std::forward<CustomImagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Code Editor application lifecycle
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const { return m_lifecycleConfigArns; }
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    void SetLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::forward<LifecycleConfigArnsT>(value); }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    CodeEditorAppSettings& WithLifecycleConfigArns(LifecycleConfigArnsT&& value) { SetLifecycleConfigArns(std::forward<LifecycleConfigArnsT>(value)); return *this;}
    template<typename LifecycleConfigArnsT = Aws::String>
    CodeEditorAppSettings& AddLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.emplace_back(std::forward<LifecycleConfigArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings that are used to configure and manage the lifecycle of CodeEditor
     * applications.</p>
     */
    inline const AppLifecycleManagement& GetAppLifecycleManagement() const { return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    template<typename AppLifecycleManagementT = AppLifecycleManagement>
    void SetAppLifecycleManagement(AppLifecycleManagementT&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::forward<AppLifecycleManagementT>(value); }
    template<typename AppLifecycleManagementT = AppLifecycleManagement>
    CodeEditorAppSettings& WithAppLifecycleManagement(AppLifecycleManagementT&& value) { SetAppLifecycleManagement(std::forward<AppLifecycleManagementT>(value)); return *this;}
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
    CodeEditorAppSettings& WithBuiltInLifecycleConfigArn(BuiltInLifecycleConfigArnT&& value) { SetBuiltInLifecycleConfigArn(std::forward<BuiltInLifecycleConfigArnT>(value)); return *this;}
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;

    AppLifecycleManagement m_appLifecycleManagement;
    bool m_appLifecycleManagementHasBeenSet = false;

    Aws::String m_builtInLifecycleConfigArn;
    bool m_builtInLifecycleConfigArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
