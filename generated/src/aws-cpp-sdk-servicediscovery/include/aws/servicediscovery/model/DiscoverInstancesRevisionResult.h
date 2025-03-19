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
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult() = default;
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API DiscoverInstancesRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The increasing revision associated to the response Instances list. If a new
     * instance is registered or deregistered, the <code>InstancesRevision</code>
     * updates. The health status updates don't update
     * <code>InstancesRevision</code>.</p>
     */
    inline long long GetInstancesRevision() const { return m_instancesRevision; }
    inline void SetInstancesRevision(long long value) { m_instancesRevisionHasBeenSet = true; m_instancesRevision = value; }
    inline DiscoverInstancesRevisionResult& WithInstancesRevision(long long value) { SetInstancesRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DiscoverInstancesRevisionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_instancesRevision{0};
    bool m_instancesRevisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
