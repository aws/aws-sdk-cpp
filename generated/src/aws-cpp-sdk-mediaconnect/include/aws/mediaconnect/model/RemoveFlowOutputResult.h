﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{
  class RemoveFlowOutputResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowOutputResult();
    AWS_MEDIACONNECT_API RemoveFlowOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveFlowOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the flow that is associated with the output you removed.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }
    inline RemoveFlowOutputResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline RemoveFlowOutputResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline RemoveFlowOutputResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the output that was removed.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }
    inline void SetOutputArn(const Aws::String& value) { m_outputArn = value; }
    inline void SetOutputArn(Aws::String&& value) { m_outputArn = std::move(value); }
    inline void SetOutputArn(const char* value) { m_outputArn.assign(value); }
    inline RemoveFlowOutputResult& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}
    inline RemoveFlowOutputResult& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}
    inline RemoveFlowOutputResult& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RemoveFlowOutputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RemoveFlowOutputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RemoveFlowOutputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;

    Aws::String m_outputArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
