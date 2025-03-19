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
  class CreateLifecyclePolicyResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult() = default;
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API CreateLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created lifecycle policy.</p>
     */
    inline const LifecyclePolicyDetail& GetLifecyclePolicyDetail() const { return m_lifecyclePolicyDetail; }
    template<typename LifecyclePolicyDetailT = LifecyclePolicyDetail>
    void SetLifecyclePolicyDetail(LifecyclePolicyDetailT&& value) { m_lifecyclePolicyDetailHasBeenSet = true; m_lifecyclePolicyDetail = std::forward<LifecyclePolicyDetailT>(value); }
    template<typename LifecyclePolicyDetailT = LifecyclePolicyDetail>
    CreateLifecyclePolicyResult& WithLifecyclePolicyDetail(LifecyclePolicyDetailT&& value) { SetLifecyclePolicyDetail(std::forward<LifecyclePolicyDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LifecyclePolicyDetail m_lifecyclePolicyDetail;
    bool m_lifecyclePolicyDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
