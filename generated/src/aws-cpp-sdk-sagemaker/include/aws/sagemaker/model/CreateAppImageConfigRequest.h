/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
#include <aws/sagemaker/model/JupyterLabAppImageConfig.h>
#include <aws/sagemaker/model/CodeEditorAppImageConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateAppImageConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateAppImageConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppImageConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    CreateAppImageConfigRequest& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the AppImageConfig.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAppImageConfigRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAppImageConfigRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The KernelGatewayImageConfig. You can only specify one image kernel in the
     * AppImageConfig API. This kernel will be shown to users before the image starts.
     * Once the image runs, all kernels are visible in JupyterLab.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const { return m_kernelGatewayImageConfig; }
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    void SetKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::forward<KernelGatewayImageConfigT>(value); }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    CreateAppImageConfigRequest& WithKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { SetKernelGatewayImageConfig(std::forward<KernelGatewayImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JupyterLabAppImageConfig</code>. You can only specify one image
     * kernel in the <code>AppImageConfig</code> API. This kernel is shown to users
     * before the image starts. After the image runs, all kernels are visible in
     * JupyterLab.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const { return m_jupyterLabAppImageConfig; }
    inline bool JupyterLabAppImageConfigHasBeenSet() const { return m_jupyterLabAppImageConfigHasBeenSet; }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    void SetJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::forward<JupyterLabAppImageConfigT>(value); }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    CreateAppImageConfigRequest& WithJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { SetJupyterLabAppImageConfig(std::forward<JupyterLabAppImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CodeEditorAppImageConfig</code>. You can only specify one image
     * kernel in the AppImageConfig API. This kernel is shown to users before the image
     * starts. After the image runs, all kernels are visible in Code Editor.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const { return m_codeEditorAppImageConfig; }
    inline bool CodeEditorAppImageConfigHasBeenSet() const { return m_codeEditorAppImageConfigHasBeenSet; }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    void SetCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::forward<CodeEditorAppImageConfigT>(value); }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    CreateAppImageConfigRequest& WithCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { SetCodeEditorAppImageConfig(std::forward<CodeEditorAppImageConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    KernelGatewayImageConfig m_kernelGatewayImageConfig;
    bool m_kernelGatewayImageConfigHasBeenSet = false;

    JupyterLabAppImageConfig m_jupyterLabAppImageConfig;
    bool m_jupyterLabAppImageConfigHasBeenSet = false;

    CodeEditorAppImageConfig m_codeEditorAppImageConfig;
    bool m_codeEditorAppImageConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
