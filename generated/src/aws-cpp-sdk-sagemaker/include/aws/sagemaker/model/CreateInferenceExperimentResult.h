﻿/**
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
  class CreateInferenceExperimentResult
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceExperimentResult() = default;
    AWS_SAGEMAKER_API CreateInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for your inference experiment.</p>
     */
    inline const Aws::String& GetInferenceExperimentArn() const { return m_inferenceExperimentArn; }
    template<typename InferenceExperimentArnT = Aws::String>
    void SetInferenceExperimentArn(InferenceExperimentArnT&& value) { m_inferenceExperimentArnHasBeenSet = true; m_inferenceExperimentArn = std::forward<InferenceExperimentArnT>(value); }
    template<typename InferenceExperimentArnT = Aws::String>
    CreateInferenceExperimentResult& WithInferenceExperimentArn(InferenceExperimentArnT&& value) { SetInferenceExperimentArn(std::forward<InferenceExperimentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateInferenceExperimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceExperimentArn;
    bool m_inferenceExperimentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
