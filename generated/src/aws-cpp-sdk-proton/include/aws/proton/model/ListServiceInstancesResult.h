/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ServiceInstanceSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListServiceInstancesResult
  {
  public:
    AWS_PROTON_API ListServiceInstancesResult() = default;
    AWS_PROTON_API ListServiceInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServiceInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next service instance in the array
     * of service instances, after the current requested list of service instances.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of service instances with summary data.</p>
     */
    inline const Aws::Vector<ServiceInstanceSummary>& GetServiceInstances() const { return m_serviceInstances; }
    template<typename ServiceInstancesT = Aws::Vector<ServiceInstanceSummary>>
    void SetServiceInstances(ServiceInstancesT&& value) { m_serviceInstancesHasBeenSet = true; m_serviceInstances = std::forward<ServiceInstancesT>(value); }
    template<typename ServiceInstancesT = Aws::Vector<ServiceInstanceSummary>>
    ListServiceInstancesResult& WithServiceInstances(ServiceInstancesT&& value) { SetServiceInstances(std::forward<ServiceInstancesT>(value)); return *this;}
    template<typename ServiceInstancesT = ServiceInstanceSummary>
    ListServiceInstancesResult& AddServiceInstances(ServiceInstancesT&& value) { m_serviceInstancesHasBeenSet = true; m_serviceInstances.emplace_back(std::forward<ServiceInstancesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceInstanceSummary> m_serviceInstances;
    bool m_serviceInstancesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
