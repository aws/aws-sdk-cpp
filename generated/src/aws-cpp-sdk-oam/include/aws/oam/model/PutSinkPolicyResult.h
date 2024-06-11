﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
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
namespace OAM
{
namespace Model
{
  class PutSinkPolicyResult
  {
  public:
    AWS_OAM_API PutSinkPolicyResult();
    AWS_OAM_API PutSinkPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API PutSinkPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The policy that you specified.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline PutSinkPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutSinkPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutSinkPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }
    inline void SetSinkArn(const Aws::String& value) { m_sinkArn = value; }
    inline void SetSinkArn(Aws::String&& value) { m_sinkArn = std::move(value); }
    inline void SetSinkArn(const char* value) { m_sinkArn.assign(value); }
    inline PutSinkPolicyResult& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}
    inline PutSinkPolicyResult& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}
    inline PutSinkPolicyResult& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline const Aws::String& GetSinkId() const{ return m_sinkId; }
    inline void SetSinkId(const Aws::String& value) { m_sinkId = value; }
    inline void SetSinkId(Aws::String&& value) { m_sinkId = std::move(value); }
    inline void SetSinkId(const char* value) { m_sinkId.assign(value); }
    inline PutSinkPolicyResult& WithSinkId(const Aws::String& value) { SetSinkId(value); return *this;}
    inline PutSinkPolicyResult& WithSinkId(Aws::String&& value) { SetSinkId(std::move(value)); return *this;}
    inline PutSinkPolicyResult& WithSinkId(const char* value) { SetSinkId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSinkPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSinkPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSinkPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_policy;

    Aws::String m_sinkArn;

    Aws::String m_sinkId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
