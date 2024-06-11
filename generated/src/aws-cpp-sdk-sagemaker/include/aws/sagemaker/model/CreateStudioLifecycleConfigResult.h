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
  class CreateStudioLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult();
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your created Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const{ return m_studioLifecycleConfigArn; }
    inline void SetStudioLifecycleConfigArn(const Aws::String& value) { m_studioLifecycleConfigArn = value; }
    inline void SetStudioLifecycleConfigArn(Aws::String&& value) { m_studioLifecycleConfigArn = std::move(value); }
    inline void SetStudioLifecycleConfigArn(const char* value) { m_studioLifecycleConfigArn.assign(value); }
    inline CreateStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(const Aws::String& value) { SetStudioLifecycleConfigArn(value); return *this;}
    inline CreateStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(Aws::String&& value) { SetStudioLifecycleConfigArn(std::move(value)); return *this;}
    inline CreateStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(const char* value) { SetStudioLifecycleConfigArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStudioLifecycleConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStudioLifecycleConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStudioLifecycleConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_studioLifecycleConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
