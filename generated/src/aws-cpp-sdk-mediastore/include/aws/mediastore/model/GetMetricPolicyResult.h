/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/MetricPolicy.h>
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
  class GetMetricPolicyResult
  {
  public:
    AWS_MEDIASTORE_API GetMetricPolicyResult() = default;
    AWS_MEDIASTORE_API GetMetricPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetMetricPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline const MetricPolicy& GetMetricPolicy() const { return m_metricPolicy; }
    template<typename MetricPolicyT = MetricPolicy>
    void SetMetricPolicy(MetricPolicyT&& value) { m_metricPolicyHasBeenSet = true; m_metricPolicy = std::forward<MetricPolicyT>(value); }
    template<typename MetricPolicyT = MetricPolicy>
    GetMetricPolicyResult& WithMetricPolicy(MetricPolicyT&& value) { SetMetricPolicy(std::forward<MetricPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMetricPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MetricPolicy m_metricPolicy;
    bool m_metricPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
