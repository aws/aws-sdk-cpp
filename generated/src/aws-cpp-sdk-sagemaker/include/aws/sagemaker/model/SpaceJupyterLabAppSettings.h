/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SpaceAppLifecycleManagement.h>
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
   * <p>The settings for the JupyterLab application within a space.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceJupyterLabAppSettings">AWS
   * API Reference</a></p>
   */
  class SpaceJupyterLabAppSettings
  {
  public:
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings() = default;
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    SpaceJupyterLabAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
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
    SpaceJupyterLabAppSettings& WithCodeRepositories(CodeRepositoriesT&& value) { SetCodeRepositories(std::forward<CodeRepositoriesT>(value)); return *this;}
    template<typename CodeRepositoriesT = CodeRepository>
    SpaceJupyterLabAppSettings& AddCodeRepositories(CodeRepositoriesT&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.emplace_back(std::forward<CodeRepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings that are used to configure and manage the lifecycle of JupyterLab
     * applications in a space.</p>
     */
    inline const SpaceAppLifecycleManagement& GetAppLifecycleManagement() const { return m_appLifecycleManagement; }
    inline bool AppLifecycleManagementHasBeenSet() const { return m_appLifecycleManagementHasBeenSet; }
    template<typename AppLifecycleManagementT = SpaceAppLifecycleManagement>
    void SetAppLifecycleManagement(AppLifecycleManagementT&& value) { m_appLifecycleManagementHasBeenSet = true; m_appLifecycleManagement = std::forward<AppLifecycleManagementT>(value); }
    template<typename AppLifecycleManagementT = SpaceAppLifecycleManagement>
    SpaceJupyterLabAppSettings& WithAppLifecycleManagement(AppLifecycleManagementT&& value) { SetAppLifecycleManagement(std::forward<AppLifecycleManagementT>(value)); return *this;}
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CodeRepository> m_codeRepositories;
    bool m_codeRepositoriesHasBeenSet = false;

    SpaceAppLifecycleManagement m_appLifecycleManagement;
    bool m_appLifecycleManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
