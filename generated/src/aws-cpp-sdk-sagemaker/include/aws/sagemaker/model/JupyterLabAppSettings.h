/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/CustomImage.h>
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


    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    
    inline JupyterLabAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    
    inline JupyterLabAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline const Aws::Vector<CustomImage>& GetCustomImages() const{ return m_customImages; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline bool CustomImagesHasBeenSet() const { return m_customImagesHasBeenSet; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline void SetCustomImages(const Aws::Vector<CustomImage>& value) { m_customImagesHasBeenSet = true; m_customImages = value; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline void SetCustomImages(Aws::Vector<CustomImage>&& value) { m_customImagesHasBeenSet = true; m_customImages = std::move(value); }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline JupyterLabAppSettings& WithCustomImages(const Aws::Vector<CustomImage>& value) { SetCustomImages(value); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline JupyterLabAppSettings& WithCustomImages(Aws::Vector<CustomImage>&& value) { SetCustomImages(std::move(value)); return *this;}

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline JupyterLabAppSettings& AddCustomImages(const CustomImage& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(value); return *this; }

    /**
     * <p>A list of custom SageMaker images that are configured to run as a JupyterLab
     * app.</p>
     */
    inline JupyterLabAppSettings& AddCustomImages(CustomImage&& value) { m_customImagesHasBeenSet = true; m_customImages.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLifecycleConfigArns() const{ return m_lifecycleConfigArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline bool LifecycleConfigArnsHasBeenSet() const { return m_lifecycleConfigArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline void SetLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline void SetLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline JupyterLabAppSettings& WithLifecycleConfigArns(const Aws::Vector<Aws::String>& value) { SetLifecycleConfigArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline JupyterLabAppSettings& WithLifecycleConfigArns(Aws::Vector<Aws::String>&& value) { SetLifecycleConfigArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline JupyterLabAppSettings& AddLifecycleConfigArns(const Aws::String& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline JupyterLabAppSettings& AddLifecycleConfigArns(Aws::String&& value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configurations attached to
     * the user profile or domain. To remove a lifecycle config, you must set
     * <code>LifecycleConfigArns</code> to an empty list.</p>
     */
    inline JupyterLabAppSettings& AddLifecycleConfigArns(const char* value) { m_lifecycleConfigArnsHasBeenSet = true; m_lifecycleConfigArns.push_back(value); return *this; }


    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline const Aws::Vector<CodeRepository>& GetCodeRepositories() const{ return m_codeRepositories; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline bool CodeRepositoriesHasBeenSet() const { return m_codeRepositoriesHasBeenSet; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline void SetCodeRepositories(const Aws::Vector<CodeRepository>& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = value; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline void SetCodeRepositories(Aws::Vector<CodeRepository>&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories = std::move(value); }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline JupyterLabAppSettings& WithCodeRepositories(const Aws::Vector<CodeRepository>& value) { SetCodeRepositories(value); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline JupyterLabAppSettings& WithCodeRepositories(Aws::Vector<CodeRepository>&& value) { SetCodeRepositories(std::move(value)); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline JupyterLabAppSettings& AddCodeRepositories(const CodeRepository& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(value); return *this; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline JupyterLabAppSettings& AddCodeRepositories(CodeRepository&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(std::move(value)); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CustomImage> m_customImages;
    bool m_customImagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_lifecycleConfigArns;
    bool m_lifecycleConfigArnsHasBeenSet = false;

    Aws::Vector<CodeRepository> m_codeRepositories;
    bool m_codeRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
