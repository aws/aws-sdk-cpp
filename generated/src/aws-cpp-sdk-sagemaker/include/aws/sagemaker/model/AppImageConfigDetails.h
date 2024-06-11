﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/KernelGatewayImageConfig.h>
#include <aws/sagemaker/model/JupyterLabAppImageConfig.h>
#include <aws/sagemaker/model/CodeEditorAppImageConfig.h>
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
   * <p>The configuration for running a SageMaker image as a KernelGateway
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AppImageConfigDetails">AWS
   * API Reference</a></p>
   */
  class AppImageConfigDetails
  {
  public:
    AWS_SAGEMAKER_API AppImageConfigDetails();
    AWS_SAGEMAKER_API AppImageConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppImageConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const{ return m_appImageConfigArn; }
    inline bool AppImageConfigArnHasBeenSet() const { return m_appImageConfigArnHasBeenSet; }
    inline void SetAppImageConfigArn(const Aws::String& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = value; }
    inline void SetAppImageConfigArn(Aws::String&& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = std::move(value); }
    inline void SetAppImageConfigArn(const char* value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn.assign(value); }
    inline AppImageConfigDetails& WithAppImageConfigArn(const Aws::String& value) { SetAppImageConfigArn(value); return *this;}
    inline AppImageConfigDetails& WithAppImageConfigArn(Aws::String&& value) { SetAppImageConfigArn(std::move(value)); return *this;}
    inline AppImageConfigDetails& WithAppImageConfigArn(const char* value) { SetAppImageConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = value; }
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::move(value); }
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName.assign(value); }
    inline AppImageConfigDetails& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}
    inline AppImageConfigDetails& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}
    inline AppImageConfigDetails& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline AppImageConfigDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline AppImageConfigDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline AppImageConfigDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline AppImageConfigDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and kernels in the SageMaker image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = value; }
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::move(value); }
    inline AppImageConfigDetails& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}
    inline AppImageConfigDetails& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and the runtime, such as the
     * environment variables and entry point.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const{ return m_jupyterLabAppImageConfig; }
    inline bool JupyterLabAppImageConfigHasBeenSet() const { return m_jupyterLabAppImageConfigHasBeenSet; }
    inline void SetJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = value; }
    inline void SetJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::move(value); }
    inline AppImageConfigDetails& WithJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { SetJupyterLabAppImageConfig(value); return *this;}
    inline AppImageConfigDetails& WithJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { SetJupyterLabAppImageConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and the runtime, such as the
     * environment variables and entry point.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const{ return m_codeEditorAppImageConfig; }
    inline bool CodeEditorAppImageConfigHasBeenSet() const { return m_codeEditorAppImageConfigHasBeenSet; }
    inline void SetCodeEditorAppImageConfig(const CodeEditorAppImageConfig& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = value; }
    inline void SetCodeEditorAppImageConfig(CodeEditorAppImageConfig&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::move(value); }
    inline AppImageConfigDetails& WithCodeEditorAppImageConfig(const CodeEditorAppImageConfig& value) { SetCodeEditorAppImageConfig(value); return *this;}
    inline AppImageConfigDetails& WithCodeEditorAppImageConfig(CodeEditorAppImageConfig&& value) { SetCodeEditorAppImageConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigArn;
    bool m_appImageConfigArnHasBeenSet = false;

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

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
