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
  class CreateWorkteamResult
  {
  public:
    AWS_SAGEMAKER_API CreateWorkteamResult();
    AWS_SAGEMAKER_API CreateWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the work team. You can use this ARN to
     * identify the work team.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArn = value; }
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArn = std::move(value); }
    inline void SetWorkteamArn(const char* value) { m_workteamArn.assign(value); }
    inline CreateWorkteamResult& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}
    inline CreateWorkteamResult& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}
    inline CreateWorkteamResult& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWorkteamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWorkteamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWorkteamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
