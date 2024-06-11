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
  class UpdateAppImageConfigResult
  {
  public:
    AWS_SAGEMAKER_API UpdateAppImageConfigResult();
    AWS_SAGEMAKER_API UpdateAppImageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateAppImageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const{ return m_appImageConfigArn; }
    inline void SetAppImageConfigArn(const Aws::String& value) { m_appImageConfigArn = value; }
    inline void SetAppImageConfigArn(Aws::String&& value) { m_appImageConfigArn = std::move(value); }
    inline void SetAppImageConfigArn(const char* value) { m_appImageConfigArn.assign(value); }
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(const Aws::String& value) { SetAppImageConfigArn(value); return *this;}
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(Aws::String&& value) { SetAppImageConfigArn(std::move(value)); return *this;}
    inline UpdateAppImageConfigResult& WithAppImageConfigArn(const char* value) { SetAppImageConfigArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAppImageConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAppImageConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAppImageConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
