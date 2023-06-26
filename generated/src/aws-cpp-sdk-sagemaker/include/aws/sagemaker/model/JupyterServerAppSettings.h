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
    AWS_SAGEMAKER_API JupyterServerAppSettings();
    AWS_SAGEMAKER_API JupyterServerAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API JupyterServerAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline JupyterServerAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    /**
     * <p>The default instance type and the Amazon Resource Name (ARN) of the default
     * SageMaker image used by the JupyterServer app. If you use the
     * <code>LifecycleConfigArns</code> parameter, then this parameter is also
     * required.</p>
     */
    inline JupyterServerAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline JupyterServerAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline JupyterServerAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configurations attached to
     * the JupyterServerApp. If you use this parameter, the
     * <code>DefaultResourceSpec</code> parameter is also required.</p>  <p>To
     * remove a Lifecycle Config, you must set <code>LifecycleConfigArns</code> to an
     * empty list.</p> 
     */
    inline JupyterServerAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }


    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline const Aws::Vector<CodeRepository>& GetCodeRepositories() const{ return m_codeRepositories; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline bool CodeRepositoriesHasBeenSet() const { return m_codeRepositoriesHasBeenSet; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline void SetCodeRepositories(const Aws::Vector<CodeRepository>& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = value; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline void SetCodeRepositories(Aws::Vector<CodeRepository>&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = std::move(value); }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline JupyterServerAppSettings& WithCodeRepositories(const Aws::Vector<CodeRepository>& value) { SetCodeRepositories(value); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline JupyterServerAppSettings& WithCodeRepositories(Aws::Vector<CodeRepository>&& value) { SetCodeRepositories(std::move(value)); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline JupyterServerAppSettings& AddCodeRepositories(const CodeRepository& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(value); return *this; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterServer application.</p>
     */
    inline JupyterServerAppSettings& AddCodeRepositories(CodeRepository&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(std::move(value)); return *this; }

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
