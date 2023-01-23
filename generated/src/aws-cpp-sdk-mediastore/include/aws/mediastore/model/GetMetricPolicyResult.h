/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/MetricPolicy.h>
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
    AWS_MEDIASTORE_API GetMetricPolicyResult();
    AWS_MEDIASTORE_API GetMetricPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetMetricPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline const MetricPolicy& GetMetricPolicy() const{ return m_metricPolicy; }

    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline void SetMetricPolicy(const MetricPolicy& value) { m_metricPolicy = value; }

    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline void SetMetricPolicy(MetricPolicy&& value) { m_metricPolicy = std::move(value); }

    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline GetMetricPolicyResult& WithMetricPolicy(const MetricPolicy& value) { SetMetricPolicy(value); return *this;}

    /**
     * <p>The metric policy that is associated with the specific container.</p>
     */
    inline GetMetricPolicyResult& WithMetricPolicy(MetricPolicy&& value) { SetMetricPolicy(std::move(value)); return *this;}

  private:

    MetricPolicy m_metricPolicy;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
