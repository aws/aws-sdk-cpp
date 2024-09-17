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
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings();
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceCodeEditorAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }
    inline SpaceCodeEditorAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}
    inline SpaceCodeEditorAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that are used to configure and manage the lifecycle of CodeEditor
     * applications in a space.</p>
     */
    inline const SpaceAppLifecycleManagement& GetAppLifecycleManagement() const{ return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    inline void SetAppLifecycleManagement(const SpaceAppLifecycleManagement& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = value; }
    inline void SetAppLifecycleManagement(SpaceAppLifecycleManagement&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::move(value); }
    inline SpaceCodeEditorAppSettings& WithAppLifecycleManagement(const SpaceAppLifecycleManagement& value) { SetAppLifecycleManagement(value); return *this;}
    inline SpaceCodeEditorAppSettings& WithAppLifecycleManagement(SpaceAppLifecycleManagement&& value) { SetAppLifecycleManagement(std::move(value)); return *this;}
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
