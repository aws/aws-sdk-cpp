/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/InstanceSummary.h>
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
  class ListInstancesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API ListInstancesResult() = default;
    AWS_SERVICEDISCOVERY_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstances() const { return m_instances; }
    template<typename InstancesT = Aws::Vector<InstanceSummary>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<InstanceSummary>>
    ListInstancesResult& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = InstanceSummary>
    ListInstancesResult& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
