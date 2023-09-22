/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/HttpInstanceSummary.h>
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
  class DiscoverInstancesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult();
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API DiscoverInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline const Aws::Vector<HttpInstanceSummary>& GetInstances() const{ return m_instances; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(const Aws::Vector<HttpInstanceSummary>& value) { m_instances = value; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline void SetInstances(Aws::Vector<HttpInstanceSummary>&& value) { m_instances = std::move(value); }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(const Aws::Vector<HttpInstanceSummary>& value) { SetInstances(value); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& WithInstances(Aws::Vector<HttpInstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(const HttpInstanceSummary& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>A complex type that contains one <code>HttpInstanceSummary</code> for each
     * registered instance.</p>
     */
    inline DiscoverInstancesResult& AddInstances(HttpInstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The increasing revision associated to the response Instances list. If a new
     * instance is registered or deregistered, the <code>InstancesRevision</code>
     * updates. The health status updates don't update
     * <code>InstancesRevision</code>.</p>
     */
    inline long long GetInstancesRevision() const{ return m_instancesRevision; }

    /**
     * <p>The increasing revision associated to the response Instances list. If a new
     * instance is registered or deregistered, the <code>InstancesRevision</code>
     * updates. The health status updates don't update
     * <code>InstancesRevision</code>.</p>
     */
    inline void SetInstancesRevision(long long value) { m_instancesRevision = value; }

    /**
     * <p>The increasing revision associated to the response Instances list. If a new
     * instance is registered or deregistered, the <code>InstancesRevision</code>
     * updates. The health status updates don't update
     * <code>InstancesRevision</code>.</p>
     */
    inline DiscoverInstancesResult& WithInstancesRevision(long long value) { SetInstancesRevision(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DiscoverInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DiscoverInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DiscoverInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<HttpInstanceSummary> m_instances;

    long long m_instancesRevision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
