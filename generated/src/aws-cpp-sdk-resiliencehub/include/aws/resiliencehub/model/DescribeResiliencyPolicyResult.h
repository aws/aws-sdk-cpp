﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeResiliencyPolicyResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult() = default;
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeResiliencyPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specific resiliency policy, returned as an object. This
     * object includes creation time, data location constraints, its name, description,
     * tags, the recovery time objective (RTO) and recovery point objective (RPO) in
     * seconds, and more.</p>
     */
    inline const ResiliencyPolicy& GetPolicy() const { return m_policy; }
    template<typename PolicyT = ResiliencyPolicy>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = ResiliencyPolicy>
    DescribeResiliencyPolicyResult& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResiliencyPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResiliencyPolicy m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
