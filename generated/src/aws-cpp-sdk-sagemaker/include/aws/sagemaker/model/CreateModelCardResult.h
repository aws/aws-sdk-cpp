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
  class CreateModelCardResult
  {
  public:
    AWS_SAGEMAKER_API CreateModelCardResult();
    AWS_SAGEMAKER_API CreateModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the successfully created model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArn = value; }
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArn = std::move(value); }
    inline void SetModelCardArn(const char* value) { m_modelCardArn.assign(value); }
    inline CreateModelCardResult& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}
    inline CreateModelCardResult& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}
    inline CreateModelCardResult& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateModelCardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateModelCardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateModelCardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
