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
  class CreateProcessingJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateProcessingJobResult();
    AWS_SAGEMAKER_API CreateProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProcessingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProcessingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProcessingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_processingJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
