﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/LifecyclePolicyDetail.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class CreateLifecyclePolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult();
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created lifecycle policy.</p>
     */
    inline const LifecyclePolicyDetail& GetLifecyclePolicyDetail() const{ return m_lifecyclePolicyDetail; }
    inline void SetLifecyclePolicyDetail(const LifecyclePolicyDetail& value) { m_lifecyclePolicyDetail = value; }
    inline void SetLifecyclePolicyDetail(LifecyclePolicyDetail&& value) { m_lifecyclePolicyDetail = std::move(value); }
    inline CreateLifecyclePolicyResult& WithLifecyclePolicyDetail(const LifecyclePolicyDetail& value) { SetLifecyclePolicyDetail(value); return *this;}
    inline CreateLifecyclePolicyResult& WithLifecyclePolicyDetail(LifecyclePolicyDetail&& value) { SetLifecyclePolicyDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LifecyclePolicyDetail m_lifecyclePolicyDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
