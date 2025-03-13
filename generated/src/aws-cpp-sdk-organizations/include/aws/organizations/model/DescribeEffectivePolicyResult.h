/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/EffectivePolicy.h>
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
namespace Organizations
{
namespace Model
{
  class DescribeEffectivePolicyResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult() = default;
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeEffectivePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The contents of the effective policy.</p>
     */
    inline const EffectivePolicy& GetEffectivePolicy() const { return m_effectivePolicy; }
    template<typename EffectivePolicyT = EffectivePolicy>
    void SetEffectivePolicy(EffectivePolicyT&& value) { m_effectivePolicyHasBeenSet = true; m_effectivePolicy = std::forward<EffectivePolicyT>(value); }
    template<typename EffectivePolicyT = EffectivePolicy>
    DescribeEffectivePolicyResult& WithEffectivePolicy(EffectivePolicyT&& value) { SetEffectivePolicy(std::forward<EffectivePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEffectivePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EffectivePolicy m_effectivePolicy;
    bool m_effectivePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
