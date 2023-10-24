/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/EffectiveLifecyclePolicyDetail.h>
#include <aws/opensearchserverless/model/EffectiveLifecyclePolicyErrorDetail.h>
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
  class BatchGetEffectiveLifecyclePolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult();
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline const Aws::Vector<EffectiveLifecyclePolicyDetail>& GetEffectiveLifecyclePolicyDetails() const{ return m_effectiveLifecyclePolicyDetails; }

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline void SetEffectiveLifecyclePolicyDetails(const Aws::Vector<EffectiveLifecyclePolicyDetail>& value) { m_effectiveLifecyclePolicyDetails = value; }

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline void SetEffectiveLifecyclePolicyDetails(Aws::Vector<EffectiveLifecyclePolicyDetail>&& value) { m_effectiveLifecyclePolicyDetails = std::move(value); }

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyDetails(const Aws::Vector<EffectiveLifecyclePolicyDetail>& value) { SetEffectiveLifecyclePolicyDetails(value); return *this;}

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyDetails(Aws::Vector<EffectiveLifecyclePolicyDetail>&& value) { SetEffectiveLifecyclePolicyDetails(std::move(value)); return *this;}

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyDetails(const EffectiveLifecyclePolicyDetail& value) { m_effectiveLifecyclePolicyDetails.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyDetails(EffectiveLifecyclePolicyDetail&& value) { m_effectiveLifecyclePolicyDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline const Aws::Vector<EffectiveLifecyclePolicyErrorDetail>& GetEffectiveLifecyclePolicyErrorDetails() const{ return m_effectiveLifecyclePolicyErrorDetails; }

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline void SetEffectiveLifecyclePolicyErrorDetails(const Aws::Vector<EffectiveLifecyclePolicyErrorDetail>& value) { m_effectiveLifecyclePolicyErrorDetails = value; }

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline void SetEffectiveLifecyclePolicyErrorDetails(Aws::Vector<EffectiveLifecyclePolicyErrorDetail>&& value) { m_effectiveLifecyclePolicyErrorDetails = std::move(value); }

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyErrorDetails(const Aws::Vector<EffectiveLifecyclePolicyErrorDetail>& value) { SetEffectiveLifecyclePolicyErrorDetails(value); return *this;}

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyErrorDetails(Aws::Vector<EffectiveLifecyclePolicyErrorDetail>&& value) { SetEffectiveLifecyclePolicyErrorDetails(std::move(value)); return *this;}

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyErrorDetails(const EffectiveLifecyclePolicyErrorDetail& value) { m_effectiveLifecyclePolicyErrorDetails.push_back(value); return *this; }

    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyErrorDetails(EffectiveLifecyclePolicyErrorDetail&& value) { m_effectiveLifecyclePolicyErrorDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetEffectiveLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetEffectiveLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetEffectiveLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EffectiveLifecyclePolicyDetail> m_effectiveLifecyclePolicyDetails;

    Aws::Vector<EffectiveLifecyclePolicyErrorDetail> m_effectiveLifecyclePolicyErrorDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
