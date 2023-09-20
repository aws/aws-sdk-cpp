/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class DiscoverInstancesRevisionResult
  {
  public:
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult();
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DiscoverInstancesRevisionResult& WithInstancesRevision(long long value) { SetInstancesRevision(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DiscoverInstancesRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DiscoverInstancesRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DiscoverInstancesRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_instancesRevision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
