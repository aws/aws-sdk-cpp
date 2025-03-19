/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
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
namespace MediaStore
{
namespace Model
{
  class GetLifecyclePolicyResult
  {
  public:
    AWS_MEDIASTORE_API GetLifecyclePolicyResult() = default;
    AWS_MEDIASTORE_API GetLifecyclePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetLifecyclePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The object lifecycle policy that is assigned to the container.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const { return m_lifecyclePolicy; }
    template<typename LifecyclePolicyT = Aws::String>
    void SetLifecyclePolicy(LifecyclePolicyT&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::forward<LifecyclePolicyT>(value); }
    template<typename LifecyclePolicyT = Aws::String>
    GetLifecyclePolicyResult& WithLifecyclePolicy(LifecyclePolicyT&& value) { SetLifecyclePolicy(std::forward<LifecyclePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLifecyclePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
