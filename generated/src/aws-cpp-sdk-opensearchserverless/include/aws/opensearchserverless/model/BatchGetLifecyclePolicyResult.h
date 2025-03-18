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
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult() = default;
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API BatchGetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of lifecycle policies matched to the input policy name and policy
     * type.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetLifecyclePolicyDetails() const { return m_lifecyclePolicyDetails; }
    template<typename LifecyclePolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    void SetLifecyclePolicyDetails(LifecyclePolicyDetailsT&& value) { m_lifecyclePolicyDetailsHasBeenSet = true; m_lifecyclePolicyDetails = std::forward<LifecyclePolicyDetailsT>(value); }
    template<typename LifecyclePolicyDetailsT = Aws::Vector<LifecyclePolicyDetail>>
    BatchGetLifecyclePolicyResult& WithLifecyclePolicyDetails(LifecyclePolicyDetailsT&& value) { SetLifecyclePolicyDetails(std::forward<LifecyclePolicyDetailsT>(value)); return *this;}
    template<typename LifecyclePolicyDetailsT = LifecyclePolicyDetail>
    BatchGetLifecyclePolicyResult& AddLifecyclePolicyDetails(LifecyclePolicyDetailsT&& value) { m_lifecyclePolicyDetailsHasBeenSet = true; m_lifecyclePolicyDetails.emplace_back(std::forward<LifecyclePolicyDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of lifecycle policy names and policy types for which retrieval
     * failed.</p>
     */
    inline const Aws::Vector<LifecyclePolicyErrorDetail>& GetLifecyclePolicyErrorDetails() const { return m_lifecyclePolicyErrorDetails; }
    template<typename LifecyclePolicyErrorDetailsT = Aws::Vector<LifecyclePolicyErrorDetail>>
    void SetLifecyclePolicyErrorDetails(LifecyclePolicyErrorDetailsT&& value) { m_lifecyclePolicyErrorDetailsHasBeenSet = true; m_lifecyclePolicyErrorDetails = std::forward<LifecyclePolicyErrorDetailsT>(value); }
    template<typename LifecyclePolicyErrorDetailsT = Aws::Vector<LifecyclePolicyErrorDetail>>
    BatchGetLifecyclePolicyResult& WithLifecyclePolicyErrorDetails(LifecyclePolicyErrorDetailsT&& value) { SetLifecyclePolicyErrorDetails(std::forward<LifecyclePolicyErrorDetailsT>(value)); return *this;}
    template<typename LifecyclePolicyErrorDetailsT = LifecyclePolicyErrorDetail>
    BatchGetLifecyclePolicyResult& AddLifecyclePolicyErrorDetails(LifecyclePolicyErrorDetailsT&& value) { m_lifecyclePolicyErrorDetailsHasBeenSet = true; m_lifecyclePolicyErrorDetails.emplace_back(std::forward<LifecyclePolicyErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LifecyclePolicyDetail> m_lifecyclePolicyDetails;
    bool m_lifecyclePolicyDetailsHasBeenSet = false;

    Aws::Vector<LifecyclePolicyErrorDetail> m_lifecyclePolicyErrorDetails;
    bool m_lifecyclePolicyErrorDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
