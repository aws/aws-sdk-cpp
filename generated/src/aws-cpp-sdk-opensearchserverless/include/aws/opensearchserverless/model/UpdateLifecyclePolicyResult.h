/**
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
  class UpdateLifecyclePolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateLifecyclePolicyResult();
    AWS_OPENSEARCHSERVERLESS_API UpdateLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API UpdateLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated lifecycle policy.</p>
     */
    inline const LifecyclePolicyDetail& GetLifecyclePolicyDetail() const{ return m_lifecyclePolicyDetail; }

    /**
     * <p>Details about the updated lifecycle policy.</p>
     */
    inline void SetLifecyclePolicyDetail(const LifecyclePolicyDetail& value) { m_lifecyclePolicyDetail = value; }

    /**
     * <p>Details about the updated lifecycle policy.</p>
     */
    inline void SetLifecyclePolicyDetail(LifecyclePolicyDetail&& value) { m_lifecyclePolicyDetail = std::move(value); }

    /**
     * <p>Details about the updated lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyResult& WithLifecyclePolicyDetail(const LifecyclePolicyDetail& value) { SetLifecyclePolicyDetail(value); return *this;}

    /**
     * <p>Details about the updated lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyResult& WithLifecyclePolicyDetail(LifecyclePolicyDetail&& value) { SetLifecyclePolicyDetail(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LifecyclePolicyDetail m_lifecyclePolicyDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
