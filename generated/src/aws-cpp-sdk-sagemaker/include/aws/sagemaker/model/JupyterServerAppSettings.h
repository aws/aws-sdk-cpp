/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The JupyterServer app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JupyterServerAppSettings">AWS
   * API Reference</a></p>
   */
  class JupyterServerAppSettings
  {
  public:
    AWS_SAGEMAKER_API JupyterServerAppSettings() = default;
    AWS_SAGEMAKER_API JupyterServerAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API JupyterServerAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker AI image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const { return m_defaultResourceSpec; }
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }
    template<typename DefaultResourceSpecT = ResourceSpec>
    void SetDefaultResourceSpec(DefaultResourceSpecT&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::forward<DefaultResourceSpecT>(value); }
    template<typename DefaultResourceSpecT = ResourceSpec>
    JupyterServerAppSettings& WithDefaultResourceSpec(DefaultResourceSpecT&& value) { SetDefaultResourceSpec(std::forward<DefaultResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const { return m_lifecycleConfigArns; }
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    void SetLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::forward<LifecycleConfigArnsT>(value); }
    template<typename LifecycleConfigArnsT = Aws::Vector<Aws::String>>
    JupyterServerAppSettings& WithLifecycleConfigArns(LifecycleConfigArnsT&& value) { SetLifecycleConfigArns(std::forward<LifecycleConfigArnsT>(value)); return *this;}
    template<typename LifecycleConfigArnsT = Aws::String>
    JupyterServerAppSettings& AddLifecycleConfigArns(LifecycleConfigArnsT&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.emplace_back(std::forward<LifecycleConfigArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Git repositories that SageMaker AI automatically displays to users
     * for cloning in the JupyterServer application.</p>
     */
    inline const Aws::Vector<CodeRepository>& GetCodeRepositories() const { return m_codeRepositories; }
    inline bool CodeRepositoriesHasBeenSet() const { return m_codeRepositoriesHasBeenSet; }
    template<typename CodeRepositoriesT = Aws::Vector<CodeRepository>>
    void SetCodeRepositories(CodeRepositoriesT&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = std::forward<CodeRepositoriesT>(value); }
    template<typename CodeRepositoriesT = Aws::Vector<CodeRepository>>
    JupyterServerAppSettings& WithCodeRepositories(CodeRepositoriesT&& value) { SetCodeRepositories(std::forward<CodeRepositoriesT>(value)); return *this;}
    template<typename CodeRepositoriesT = CodeRepository>
    JupyterServerAppSettings& AddCodeRepositories(CodeRepositoriesT&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.emplace_back(std::forward<CodeRepositoriesT>(value)); return *this; }
    ///@}
  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;

    Aws::Vector<CodeRepository> m_codeRepositories;
    bool m_codeRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
