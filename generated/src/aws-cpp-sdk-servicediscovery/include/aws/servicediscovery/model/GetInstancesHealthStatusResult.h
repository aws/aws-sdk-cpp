/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/HealthStatus.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class GetInstancesHealthStatusResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetInstancesHealthStatusResult();
    AWS_SERVICEDISCOVERY_API GetInstancesHealthStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetInstancesHealthStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline const Aws::Map<Aws::String, HealthStatus>& GetStatus() const{ return m_status; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline void SetStatus(const Aws::Map<Aws::String, HealthStatus>& value) { m_status = value; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline void SetStatus(Aws::Map<Aws::String, HealthStatus>&& value) { m_status = std::move(value); }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& WithStatus(const Aws::Map<Aws::String, HealthStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& WithStatus(Aws::Map<Aws::String, HealthStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(const Aws::String& key, const HealthStatus& value) { m_status.emplace(key, value); return *this; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(Aws::String&& key, const HealthStatus& value) { m_status.emplace(std::move(key), value); return *this; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(const Aws::String& key, HealthStatus&& value) { m_status.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(Aws::String&& key, HealthStatus&& value) { m_status.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(const char* key, HealthStatus&& value) { m_status.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A complex type that contains the IDs and the health status of the instances
     * that you specified in the <code>GetInstancesHealthStatus</code> request.</p>
     */
    inline GetInstancesHealthStatusResult& AddStatus(const char* key, const HealthStatus& value) { m_status.emplace(key, value); return *this; }


    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>GetInstancesHealthStatus</code> request to get the
     * next group of results. Specify the value of <code>NextToken</code> from the
     * previous response in the next request.</p>
     */
    inline GetInstancesHealthStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, HealthStatus> m_status;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
