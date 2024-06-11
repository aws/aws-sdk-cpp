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
  class UpdateTrainingJobResult
  {
  public:
    AWS_SAGEMAKER_API UpdateTrainingJobResult();
    AWS_SAGEMAKER_API UpdateTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArn = value; }
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArn = std::move(value); }
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArn.assign(value); }
    inline UpdateTrainingJobResult& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}
    inline UpdateTrainingJobResult& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}
    inline UpdateTrainingJobResult& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateTrainingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateTrainingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateTrainingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
