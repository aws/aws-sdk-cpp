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
    AWS_SAGEMAKER_API CreateProcessingJobResult() = default;
    AWS_SAGEMAKER_API CreateProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const { return m_processingJobArn; }
    template<typename ProcessingJobArnT = Aws::String>
    void SetProcessingJobArn(ProcessingJobArnT&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::forward<ProcessingJobArnT>(value); }
    template<typename ProcessingJobArnT = Aws::String>
    CreateProcessingJobResult& WithProcessingJobArn(ProcessingJobArnT&& value) { SetProcessingJobArn(std::forward<ProcessingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProcessingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
