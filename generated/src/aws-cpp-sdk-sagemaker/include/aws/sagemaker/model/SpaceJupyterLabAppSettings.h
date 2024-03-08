/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSpec.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings();
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceJupyterLabAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ResourceSpec& GetDefaultResourceSpec() const{ return m_defaultResourceSpec; }

    
    inline bool DefaultResourceSpecHasBeenSet() const { return m_defaultResourceSpecHasBeenSet; }

    
    inline void SetDefaultResourceSpec(const ResourceSpec& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = value; }

    
    inline void SetDefaultResourceSpec(ResourceSpec&& value) { m_defaultResourceSpecHasBeenSet = true; m_defaultResourceSpec = std::move(value); }

    
    inline SpaceJupyterLabAppSettings& WithDefaultResourceSpec(const ResourceSpec& value) { SetDefaultResourceSpec(value); return *this;}

    
    inline SpaceJupyterLabAppSettings& WithDefaultResourceSpec(ResourceSpec&& value) { SetDefaultResourceSpec(std::move(value)); return *this;}


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
    inline SpaceJupyterLabAppSettings& WithCodeRepositories(const Aws::Vector<CodeRepository>& value) { SetCodeRepositories(value); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline SpaceJupyterLabAppSettings& WithCodeRepositories(Aws::Vector<CodeRepository>&& value) { SetCodeRepositories(std::move(value)); return *this;}

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline SpaceJupyterLabAppSettings& AddCodeRepositories(const CodeRepository& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(value); return *this; }

    /**
     * <p>A list of Git repositories that SageMaker automatically displays to users for
     * cloning in the JupyterLab application.</p>
     */
    inline SpaceJupyterLabAppSettings& AddCodeRepositories(CodeRepository&& value) { m_codeRepositoriesHasBeenSet = true; m_codeRepositories.push_back(std::move(value)); return *this; }

  private:

    ResourceSpec m_defaultResourceSpec;
    bool m_defaultResourceSpecHasBeenSet = false;

    Aws::Vector<CodeRepository> m_codeRepositories;
    bool m_codeRepositoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
