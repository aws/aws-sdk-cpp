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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeAppImageConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeAppImageConfigResult() = default;
    AWS_SAGEMAKER_API DescribeAppImageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAppImageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const { return m_appImageConfigArn; }
    template<typename AppImageConfigArnT = Aws::String>
    void SetAppImageConfigArn(AppImageConfigArnT&& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = std::forward<AppImageConfigArnT>(value); }
    template<typename AppImageConfigArnT = Aws::String>
    DescribeAppImageConfigResult& WithAppImageConfigArn(AppImageConfigArnT&& value) { SetAppImageConfigArn(std::forward<AppImageConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    DescribeAppImageConfigResult& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAppImageConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeAppImageConfigResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const { return m_kernelGatewayImageConfig; }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    void SetKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { m_kernelGatewayImageConfigHasBeenSet = true; m_kernelGatewayImageConfig = std::forward<KernelGatewayImageConfigT>(value); }
    template<typename KernelGatewayImageConfigT = KernelGatewayImageConfig>
    DescribeAppImageConfigResult& WithKernelGatewayImageConfig(KernelGatewayImageConfigT&& value) { SetKernelGatewayImageConfig(std::forward<KernelGatewayImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const { return m_jupyterLabAppImageConfig; }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    void SetJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { m_jupyterLabAppImageConfigHasBeenSet = true; m_jupyterLabAppImageConfig = std::forward<JupyterLabAppImageConfigT>(value); }
    template<typename JupyterLabAppImageConfigT = JupyterLabAppImageConfig>
    DescribeAppImageConfigResult& WithJupyterLabAppImageConfig(JupyterLabAppImageConfigT&& value) { SetJupyterLabAppImageConfig(std::forward<JupyterLabAppImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Code Editor app.</p>
     */
    inline const CodeEditorAppImageConfig& GetCodeEditorAppImageConfig() const { return m_codeEditorAppImageConfig; }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    void SetCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { m_codeEditorAppImageConfigHasBeenSet = true; m_codeEditorAppImageConfig = std::forward<CodeEditorAppImageConfigT>(value); }
    template<typename CodeEditorAppImageConfigT = CodeEditorAppImageConfig>
    DescribeAppImageConfigResult& WithCodeEditorAppImageConfig(CodeEditorAppImageConfigT&& value) { SetCodeEditorAppImageConfig(std::forward<CodeEditorAppImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppImageConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
