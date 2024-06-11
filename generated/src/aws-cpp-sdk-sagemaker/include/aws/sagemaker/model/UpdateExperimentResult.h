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
  class UpdateExperimentResult
  {
  public:
    AWS_SAGEMAKER_API UpdateExperimentResult();
    AWS_SAGEMAKER_API UpdateExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArn = value; }
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArn = std::move(value); }
    inline void SetExperimentArn(const char* value) { m_experimentArn.assign(value); }
    inline UpdateExperimentResult& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}
    inline UpdateExperimentResult& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}
    inline UpdateExperimentResult& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateExperimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateExperimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateExperimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
