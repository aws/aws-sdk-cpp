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
  class CreateNotebookInstanceLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult();
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const{ return m_notebookInstanceLifecycleConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const Aws::String& value) { m_notebookInstanceLifecycleConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(Aws::String&& value) { m_notebookInstanceLifecycleConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const char* value) { m_notebookInstanceLifecycleConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const Aws::String& value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(Aws::String&& value) { SetNotebookInstanceLifecycleConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const char* value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateNotebookInstanceLifecycleConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateNotebookInstanceLifecycleConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateNotebookInstanceLifecycleConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
