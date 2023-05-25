/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateModelCardExportJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardExportJobResult();
    AWS_SAGEMAKER_API CreateModelCardExportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelCardExportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline const Aws::String& GetModelCardExportJobArn() const{ return m_modelCardExportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const Aws::String& value) { m_modelCardExportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(Aws::String&& value) { m_modelCardExportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline void SetModelCardExportJobArn(const char* value) { m_modelCardExportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline CreateModelCardExportJobResult& WithModelCardExportJobArn(const Aws::String& value) { SetModelCardExportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline CreateModelCardExportJobResult& WithModelCardExportJobArn(Aws::String&& value) { SetModelCardExportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model card export job.</p>
     */
    inline CreateModelCardExportJobResult& WithModelCardExportJobArn(const char* value) { SetModelCardExportJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateModelCardExportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateModelCardExportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateModelCardExportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_modelCardExportJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
