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
  class CreateOptimizationJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateOptimizationJobResult();
    AWS_SAGEMAKER_API CreateOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateOptimizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const{ return m_optimizationJobArn; }
    inline void SetOptimizationJobArn(const Aws::String& value) { m_optimizationJobArn = value; }
    inline void SetOptimizationJobArn(Aws::String&& value) { m_optimizationJobArn = std::move(value); }
    inline void SetOptimizationJobArn(const char* value) { m_optimizationJobArn.assign(value); }
    inline CreateOptimizationJobResult& WithOptimizationJobArn(const Aws::String& value) { SetOptimizationJobArn(value); return *this;}
    inline CreateOptimizationJobResult& WithOptimizationJobArn(Aws::String&& value) { SetOptimizationJobArn(std::move(value)); return *this;}
    inline CreateOptimizationJobResult& WithOptimizationJobArn(const char* value) { SetOptimizationJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateOptimizationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateOptimizationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateOptimizationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
