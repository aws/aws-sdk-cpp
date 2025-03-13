/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/sagemaker/model/SpaceAppLifecycleManagement.h>
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
   * <p>The application settings for a Code Editor space.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceCodeEditorAppSettings">AWS
   * API Reference</a></p>
   */
  class SpaceCodeEditorAppSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings() = default;
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    SpaceCodeEditorAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that are used to configure and manage the lifecycle of CodeEditor
     * applications in a space.</p>
     */
    inline const SpaceAppLifecycleManagement& GetAppLifecycleManagement() const { return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    template<typename AppLifecycleManagementT = SpaceAppLifecycleManagement>
    void SetAppLifecycleManagement(AppLifecycleManagementT&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::forward<AppLifecycleManagementT>(value); }
    template<typename AppLifecycleManagementT = SpaceAppLifecycleManagement>
    SpaceCodeEditorAppSettings& WithAppLifecycleManagement(AppLifecycleManagementT&& value) { SetAppLifecycleManagement(std::forward<AppLifecycleManagementT>(value)); return *this;}
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    SpaceAppLifecycleManagement m_appLifecycleManagement;
    bool m_appLifecycleManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
