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
    AWS_SAGEMAKER_API CreateInferenceExperimentResult();
    AWS_SAGEMAKER_API CreateInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for your inference experiment.</p>
     */
    inline const Aws::String& GetInferenceExperimentArn() const{ return m_inferenceExperimentArn; }
    inline void SetInferenceExperimentArn(const Aws::String& value) { m_inferenceExperimentArn = value; }
    inline void SetInferenceExperimentArn(Aws::String&& value) { m_inferenceExperimentArn = std::move(value); }
    inline void SetInferenceExperimentArn(const char* value) { m_inferenceExperimentArn.assign(value); }
    inline CreateInferenceExperimentResult& WithInferenceExperimentArn(const Aws::String& value) { SetInferenceExperimentArn(value); return *this;}
    inline CreateInferenceExperimentResult& WithInferenceExperimentArn(Aws::String&& value) { SetInferenceExperimentArn(std::move(value)); return *this;}
    inline CreateInferenceExperimentResult& WithInferenceExperimentArn(const char* value) { SetInferenceExperimentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateInferenceExperimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateInferenceExperimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateInferenceExperimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceExperimentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
