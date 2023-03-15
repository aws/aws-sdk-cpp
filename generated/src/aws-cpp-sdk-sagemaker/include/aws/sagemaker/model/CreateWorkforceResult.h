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
  class CreateWorkforceResult
  {
  public:
    AWS_SAGEMAKER_API CreateWorkforceResult();
    AWS_SAGEMAKER_API CreateWorkforceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateWorkforceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline const Aws::String& GetWorkforceArn() const{ return m_workforceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline void SetWorkforceArn(const Aws::String& value) { m_workforceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline void SetWorkforceArn(Aws::String&& value) { m_workforceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline void SetWorkforceArn(const char* value) { m_workforceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline CreateWorkforceResult& WithWorkforceArn(const Aws::String& value) { SetWorkforceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline CreateWorkforceResult& WithWorkforceArn(Aws::String&& value) { SetWorkforceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workforce.</p>
     */
    inline CreateWorkforceResult& WithWorkforceArn(const char* value) { SetWorkforceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWorkforceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWorkforceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWorkforceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_workforceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
