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
    AWS_SAGEMAKER_API DescribeAppImageConfigResult();
    AWS_SAGEMAKER_API DescribeAppImageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAppImageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const{ return m_appImageConfigArn; }

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const Aws::String& value) { m_appImageConfigArn = value; }

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(Aws::String&& value) { m_appImageConfigArn = std::move(value); }

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigArn(const char* value) { m_appImageConfigArn.assign(value); }

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigArn(const Aws::String& value) { SetAppImageConfigArn(value); return *this;}

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigArn(Aws::String&& value) { SetAppImageConfigArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigArn(const char* value) { SetAppImageConfigArn(value); return *this;}


    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const{ return m_appImageConfigName; }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(const Aws::String& value) { m_appImageConfigName = value; }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(Aws::String&& value) { m_appImageConfigName = std::move(value); }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline void SetAppImageConfigName(const char* value) { m_appImageConfigName.assign(value); }

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigName(const Aws::String& value) { SetAppImageConfigName(value); return *this;}

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigName(Aws::String&& value) { SetAppImageConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the AppImageConfig.</p>
     */
    inline DescribeAppImageConfigResult& WithAppImageConfigName(const char* value) { SetAppImageConfigName(value); return *this;}


    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline DescribeAppImageConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the AppImageConfig was created.</p>
     */
    inline DescribeAppImageConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline DescribeAppImageConfigResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the AppImageConfig was last modified.</p>
     */
    inline DescribeAppImageConfigResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline const KernelGatewayImageConfig& GetKernelGatewayImageConfig() const{ return m_kernelGatewayImageConfig; }

    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline void SetKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { m_kernelGatewayImageConfig = value; }

    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline void SetKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { m_kernelGatewayImageConfig = std::move(value); }

    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline DescribeAppImageConfigResult& WithKernelGatewayImageConfig(const KernelGatewayImageConfig& value) { SetKernelGatewayImageConfig(value); return *this;}

    /**
     * <p>The configuration of a KernelGateway app.</p>
     */
    inline DescribeAppImageConfigResult& WithKernelGatewayImageConfig(KernelGatewayImageConfig&& value) { SetKernelGatewayImageConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline const JupyterLabAppImageConfig& GetJupyterLabAppImageConfig() const{ return m_jupyterLabAppImageConfig; }

    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline void SetJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { m_jupyterLabAppImageConfig = value; }

    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline void SetJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { m_jupyterLabAppImageConfig = std::move(value); }

    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline DescribeAppImageConfigResult& WithJupyterLabAppImageConfig(const JupyterLabAppImageConfig& value) { SetJupyterLabAppImageConfig(value); return *this;}

    /**
     * <p>The configuration of the JupyterLab app.</p>
     */
    inline DescribeAppImageConfigResult& WithJupyterLabAppImageConfig(JupyterLabAppImageConfig&& value) { SetJupyterLabAppImageConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppImageConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppImageConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppImageConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appImageConfigArn;

    Aws::String m_appImageConfigName;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    KernelGatewayImageConfig m_kernelGatewayImageConfig;

    JupyterLabAppImageConfig m_jupyterLabAppImageConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
