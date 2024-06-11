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
  class CreateUserProfileResult
  {
  public:
    AWS_SAGEMAKER_API CreateUserProfileResult();
    AWS_SAGEMAKER_API CreateUserProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateUserProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user profile Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetUserProfileArn() const{ return m_userProfileArn; }
    inline void SetUserProfileArn(const Aws::String& value) { m_userProfileArn = value; }
    inline void SetUserProfileArn(Aws::String&& value) { m_userProfileArn = std::move(value); }
    inline void SetUserProfileArn(const char* value) { m_userProfileArn.assign(value); }
    inline CreateUserProfileResult& WithUserProfileArn(const Aws::String& value) { SetUserProfileArn(value); return *this;}
    inline CreateUserProfileResult& WithUserProfileArn(Aws::String&& value) { SetUserProfileArn(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithUserProfileArn(const char* value) { SetUserProfileArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userProfileArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
