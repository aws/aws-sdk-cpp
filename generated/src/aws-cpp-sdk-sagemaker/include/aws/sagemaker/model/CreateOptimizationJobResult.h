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
    AWS_SAGEMAKER_API CreateOptimizationJobResult() = default;
    AWS_SAGEMAKER_API CreateOptimizationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateOptimizationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the optimization job.</p>
     */
    inline const Aws::String& GetOptimizationJobArn() const { return m_optimizationJobArn; }
    template<typename OptimizationJobArnT = Aws::String>
    void SetOptimizationJobArn(OptimizationJobArnT&& value) { m_optimizationJobArnHasBeenSet = true; m_optimizationJobArn = std::forward<OptimizationJobArnT>(value); }
    template<typename OptimizationJobArnT = Aws::String>
    CreateOptimizationJobResult& WithOptimizationJobArn(OptimizationJobArnT&& value) { SetOptimizationJobArn(std::forward<OptimizationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateOptimizationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_optimizationJobArn;
    bool m_optimizationJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
