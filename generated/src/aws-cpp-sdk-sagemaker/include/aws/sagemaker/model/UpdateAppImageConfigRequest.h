/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
#include <aws/sagemaker/model/JupyterLabAppImageConfig.h>
#include <aws/sagemaker/model/CodeEditorAppImageConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateAppImageConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateAppImageConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppImageConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the AppImageConfig to update.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    UpdateAppImageConfigRequest& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const { return m_kernelGatewayImageConfig; }
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    void SetKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::forward<KernelGatewayImageConfigT>(value); }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    UpdateAppImageConfigRequest& WithKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { SetKernelGatewayImageConfig(std::forward<KernelGatewayImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JupyterLab app running on the image.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const { return m_jupyterLabAppImageConfig; }
    inline bool JupyterLabAppImageConfigHasBeenSet() const { return m_jupyterLabAppImageConfigHasBeenSet; }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    void SetJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::forward<JupyterLabAppImageConfigT>(value); }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    UpdateAppImageConfigRequest& WithJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { SetJupyterLabAppImageConfig(std::forward<JupyterLabAppImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor app running on the image.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const { return m_codeEditorAppImageConfig; }
    inline bool CodeEditorAppImageConfigHasBeenSet() const { return m_codeEditorAppImageConfigHasBeenSet; }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    void SetCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::forward<CodeEditorAppImageConfigT>(value); }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    UpdateAppImageConfigRequest& WithCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { SetCodeEditorAppImageConfig(std::forward<CodeEditorAppImageConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;

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
