﻿/**
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
    AWS_SAGEMAKER_API UpdateAppImageConfigRequest();

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
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}
    inline UpdateAppImageConfigRequest& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new KernelGateway app to run on the image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = value; }
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::move(value); }
    inline UpdateAppImageConfigRequest& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}
    inline UpdateAppImageConfigRequest& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JupyterLab app running on the image.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const{ return m_jupyterLabAppImageConfig; }
    inline bool JupyterLabAppImageConfigHasBeenSet() const { return m_jupyterLabAppImageConfigHasBeenSet; }
    inline void SetJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = value; }
    inline void SetJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::move(value); }
    inline UpdateAppImageConfigRequest& WithJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { SetJupyterLabAppImageConfig(value); return *this;}
    inline UpdateAppImageConfigRequest& WithJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { SetJupyterLabAppImageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor app running on the image.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const{ return m_codeEditorAppImageConfig; }
    inline bool CodeEditorAppImageConfigHasBeenSet() const { return m_codeEditorAppImageConfigHasBeenSet; }
    inline void SetCodeEditorAppImageConfig(const CodeEditorAppImageConfig& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = value; }
    inline void SetCodeEditorAppImageConfig(CodeEditorAppImageConfig&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::move(value); }
    inline UpdateAppImageConfigRequest& WithCodeEditorAppImageConfig(const CodeEditorAppImageConfig& value) { SetCodeEditorAppImageConfig(value); return *this;}
    inline UpdateAppImageConfigRequest& WithCodeEditorAppImageConfig(CodeEditorAppImageConfig&& value) { SetCodeEditorAppImageConfig(std::move(value)); return *this;}
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
