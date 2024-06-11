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
  class CreateDataQualityJobDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API CreateDataQualityJobDefinitionResult();
    AWS_SAGEMAKER_API CreateDataQualityJobDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateDataQualityJobDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionArn() const{ return m_jobDefinitionArn; }
    inline void SetJobDefinitionArn(const Aws::String& value) { m_jobDefinitionArn = value; }
    inline void SetJobDefinitionArn(Aws::String&& value) { m_jobDefinitionArn = std::move(value); }
    inline void SetJobDefinitionArn(const char* value) { m_jobDefinitionArn.assign(value); }
    inline CreateDataQualityJobDefinitionResult& WithJobDefinitionArn(const Aws::String& value) { SetJobDefinitionArn(value); return *this;}
    inline CreateDataQualityJobDefinitionResult& WithJobDefinitionArn(Aws::String&& value) { SetJobDefinitionArn(std::move(value)); return *this;}
    inline CreateDataQualityJobDefinitionResult& WithJobDefinitionArn(const char* value) { SetJobDefinitionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDataQualityJobDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDataQualityJobDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDataQualityJobDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobDefinitionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
