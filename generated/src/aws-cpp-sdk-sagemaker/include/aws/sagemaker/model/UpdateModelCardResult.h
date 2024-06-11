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
  class UpdateModelCardResult
  {
  public:
    AWS_SAGEMAKER_API UpdateModelCardResult();
    AWS_SAGEMAKER_API UpdateModelCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateModelCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated model card.</p>
     */
    inline const Aws::String& GetModelCardArn() const{ return m_modelCardArn; }
    inline void SetModelCardArn(const Aws::String& value) { m_modelCardArn = value; }
    inline void SetModelCardArn(Aws::String&& value) { m_modelCardArn = std::move(value); }
    inline void SetModelCardArn(const char* value) { m_modelCardArn.assign(value); }
    inline UpdateModelCardResult& WithModelCardArn(const Aws::String& value) { SetModelCardArn(value); return *this;}
    inline UpdateModelCardResult& WithModelCardArn(Aws::String&& value) { SetModelCardArn(std::move(value)); return *this;}
    inline UpdateModelCardResult& WithModelCardArn(const char* value) { SetModelCardArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateModelCardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateModelCardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateModelCardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelCardArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
