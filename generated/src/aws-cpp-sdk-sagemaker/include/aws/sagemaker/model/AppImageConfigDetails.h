/**
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
   * <p>The configuration for running a SageMaker AI image as a KernelGateway
   * app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AppImageConfigDetails">AWS
   * API Reference</a></p>
   */
  class AppImageConfigDetails
  {
  public:
    AWS_SAGEMAKER_API AppImageConfigDetails() = default;
    AWS_SAGEMAKER_API AppImageConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AppImageConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const { return m_appImageConfigArn; }
    inline bool AppImageConfigArnHasBeenSet() const { return m_appImageConfigArnHasBeenSet; }
    template<typename AppImageConfigArnT = Aws::String>
    void SetAppImageConfigArn(AppImageConfigArnT&& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = std::forward<AppImageConfigArnT>(value); }
    template<typename AppImageConfigArnT = Aws::String>
    AppImageConfigDetails& WithAppImageConfigArn(AppImageConfigArnT&& value) { SetAppImageConfigArn(std::forward<AppImageConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppImageConfig. Must be unique to your account.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    AppImageConfigDetails& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AppImageConfigDetails& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    AppImageConfigDetails& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and kernels in the SageMaker AI
     * image.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const { return m_kernelGatewayImageConfig; }
    inline bool KernelGatewayImageConfigHasBeenSet() const { return m_kernelGatewayImageConfigHasBeenSet; }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    void SetKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::forward<KernelGatewayImageConfigT>(value); }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    AppImageConfigDetails& WithKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { SetKernelGatewayImageConfig(std::forward<KernelGatewayImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and the runtime, such as the
     * environment variables and entry point.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const { return m_jupyterLabAppImageConfig; }
    inline bool JupyterLabAppImageConfigHasBeenSet() const { return m_jupyterLabAppImageConfigHasBeenSet; }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    void SetJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::forward<JupyterLabAppImageConfigT>(value); }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    AppImageConfigDetails& WithJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { SetJupyterLabAppImageConfig(std::forward<JupyterLabAppImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the file system and the runtime, such as the
     * environment variables and entry point.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const { return m_codeEditorAppImageConfig; }
    inline bool CodeEditorAppImageConfigHasBeenSet() const { return m_codeEditorAppImageConfigHasBeenSet; }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    void SetCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::forward<CodeEditorAppImageConfigT>(value); }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    AppImageConfigDetails& WithCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { SetCodeEditorAppImageConfig(std::forward<CodeEditorAppImageConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigArn;
    bool m_appImageConfigArnHasBeenSet = false;

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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
