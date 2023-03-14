/**
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
  class DeleteWorkteamResult
  {
  public:
    AWS_SAGEMAKER_API DeleteWorkteamResult();
    AWS_SAGEMAKER_API DeleteWorkteamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteWorkteamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>Returns <code>true</code> if the work team was successfully deleted;
     * otherwise, returns <code>false</code>.</p>
     */
    inline DeleteWorkteamResult& WithSuccess(bool value) { SetSuccess(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteWorkteamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteWorkteamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteWorkteamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_success;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
