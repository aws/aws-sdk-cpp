/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
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
namespace SageMakerRuntime
{
namespace Model
{
  class InvokeEndpointAsyncResult
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult() = default;
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker AI will
     * generate an identifier for you if you do not specify one.</p>
     */
    inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
    template<typename InferenceIdT = Aws::String>
    void SetInferenceId(InferenceIdT&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::forward<InferenceIdT>(value); }
    template<typename InferenceIdT = Aws::String>
    InvokeEndpointAsyncResult& WithInferenceId(InferenceIdT&& value) { SetInferenceId(std::forward<InferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
    template<typename OutputLocationT = Aws::String>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = Aws::String>
    InvokeEndpointAsyncResult& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI where the inference failure response payload is stored.</p>
     */
    inline const Aws::String& GetFailureLocation() const { return m_failureLocation; }
    template<typename FailureLocationT = Aws::String>
    void SetFailureLocation(FailureLocationT&& value) { m_failureLocationHasBeenSet = true; m_failureLocation = std::forward<FailureLocationT>(value); }
    template<typename FailureLocationT = Aws::String>
    InvokeEndpointAsyncResult& WithFailureLocation(FailureLocationT&& value) { SetFailureLocation(std::forward<FailureLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeEndpointAsyncResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_failureLocation;
    bool m_failureLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws
