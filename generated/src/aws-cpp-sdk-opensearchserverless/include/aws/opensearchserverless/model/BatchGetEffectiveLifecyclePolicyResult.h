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
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult() = default;
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetEffectiveLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lifecycle policies applied to the OpenSearch Serverless
     * indexes.</p>
     */
    inline const Aws::Vector<EffectiveLifecyclePolicyDetail>& GetEffectiveLifecyclePolicyDetails() const { return m_effectiveLifecyclePolicyDetails; }
    template<typename EffectiveLifecyclePolicyDetailsT = Aws::Vector<EffectiveLifecyclePolicyDetail>>
    void SetEffectiveLifecyclePolicyDetails(EffectiveLifecyclePolicyDetailsT&& value) { m_effectiveLifecyclePolicyDetailsHasBeenSet = true; m_effectiveLifecyclePolicyDetails = std::forward<EffectiveLifecyclePolicyDetailsT>(value); }
    template<typename EffectiveLifecyclePolicyDetailsT = Aws::Vector<EffectiveLifecyclePolicyDetail>>
    BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyDetails(EffectiveLifecyclePolicyDetailsT&& value) { SetEffectiveLifecyclePolicyDetails(std::forward<EffectiveLifecyclePolicyDetailsT>(value)); return *this;}
    template<typename EffectiveLifecyclePolicyDetailsT = EffectiveLifecyclePolicyDetail>
    BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyDetails(EffectiveLifecyclePolicyDetailsT&& value) { m_effectiveLifecyclePolicyDetailsHasBeenSet = true; m_effectiveLifecyclePolicyDetails.emplace_back(std::forward<EffectiveLifecyclePolicyDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resources for which retrieval failed.</p>
     */
    inline const Aws::Vector<EffectiveLifecyclePolicyErrorDetail>& GetEffectiveLifecyclePolicyErrorDetails() const { return m_effectiveLifecyclePolicyErrorDetails; }
    template<typename EffectiveLifecyclePolicyErrorDetailsT = Aws::Vector<EffectiveLifecyclePolicyErrorDetail>>
    void SetEffectiveLifecyclePolicyErrorDetails(EffectiveLifecyclePolicyErrorDetailsT&& value) { m_effectiveLifecyclePolicyErrorDetailsHasBeenSet = true; m_effectiveLifecyclePolicyErrorDetails = std::forward<EffectiveLifecyclePolicyErrorDetailsT>(value); }
    template<typename EffectiveLifecyclePolicyErrorDetailsT = Aws::Vector<EffectiveLifecyclePolicyErrorDetail>>
    BatchGetEffectiveLifecyclePolicyResult& WithEffectiveLifecyclePolicyErrorDetails(EffectiveLifecyclePolicyErrorDetailsT&& value) { SetEffectiveLifecyclePolicyErrorDetails(std::forward<EffectiveLifecyclePolicyErrorDetailsT>(value)); return *this;}
    template<typename EffectiveLifecyclePolicyErrorDetailsT = EffectiveLifecyclePolicyErrorDetail>
    BatchGetEffectiveLifecyclePolicyResult& AddEffectiveLifecyclePolicyErrorDetails(EffectiveLifecyclePolicyErrorDetailsT&& value) { m_effectiveLifecyclePolicyErrorDetailsHasBeenSet = true; m_effectiveLifecyclePolicyErrorDetails.emplace_back(std::forward<EffectiveLifecyclePolicyErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetEffectiveLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EffectiveLifecyclePolicyDetail> m_effectiveLifecyclePolicyDetails;
    bool m_effectiveLifecyclePolicyDetailsHasBeenSet = false;

    Aws::Vector<EffectiveLifecyclePolicyErrorDetail> m_effectiveLifecyclePolicyErrorDetails;
    bool m_effectiveLifecyclePolicyErrorDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
