/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/LifecyclePolicyDetail.h>
#include <aws/opensearchserverless/model/LifecyclePolicyErrorDetail.h>
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
  class BatchGetLifecyclePolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult();
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetLifecyclePolicyDetails() const{ return m_lifecyclePolicyDetails; }

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline void SetLifecyclePolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_lifecyclePolicyDetails = value; }

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline void SetLifecyclePolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_lifecyclePolicyDetails = std::move(value); }

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline BatchGetLifecyclePolicyResult& WithLifecyclePolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetLifecyclePolicyDetails(value); return *this;}

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline BatchGetLifecyclePolicyResult& WithLifecyclePolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetLifecyclePolicyDetails(std::move(value)); return *this;}

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline BatchGetLifecyclePolicyResult& AddLifecyclePolicyDetails(const LifecyclePolicyDetail& value) { m_lifecyclePolicyDetails.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline BatchGetLifecyclePolicyResult& AddLifecyclePolicyDetails(LifecyclePolicyDetail&& value) { m_lifecyclePolicyDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline const Aws::Vector<LifecyclePolicyErrorDetail>& GetLifecyclePolicyErrorDetails() const{ return m_lifecyclePolicyErrorDetails; }

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline void SetLifecyclePolicyErrorDetails(const Aws::Vector<LifecyclePolicyErrorDetail>& value) { m_lifecyclePolicyErrorDetails = value; }

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline void SetLifecyclePolicyErrorDetails(Aws::Vector<LifecyclePolicyErrorDetail>&& value) { m_lifecyclePolicyErrorDetails = std::move(value); }

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline BatchGetLifecyclePolicyResult& WithLifecyclePolicyErrorDetails(const Aws::Vector<LifecyclePolicyErrorDetail>& value) { SetLifecyclePolicyErrorDetails(value); return *this;}

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline BatchGetLifecyclePolicyResult& WithLifecyclePolicyErrorDetails(Aws::Vector<LifecyclePolicyErrorDetail>&& value) { SetLifecyclePolicyErrorDetails(std::move(value)); return *this;}

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline BatchGetLifecyclePolicyResult& AddLifecyclePolicyErrorDetails(const LifecyclePolicyErrorDetail& value) { m_lifecyclePolicyErrorDetails.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline BatchGetLifecyclePolicyResult& AddLifecyclePolicyErrorDetails(LifecyclePolicyErrorDetail&& value) { m_lifecyclePolicyErrorDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetLifecyclePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetLifecyclePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetLifecyclePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LifecyclePolicyDetail> m_lifecyclePolicyDetails;

    Aws::Vector<LifecyclePolicyErrorDetail> m_lifecyclePolicyErrorDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
