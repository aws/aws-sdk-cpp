/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snowball/model/ServiceName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ServiceVersion.h>
#include <aws/snowball/model/DependentService.h>
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
namespace Snowball
{
namespace Model
{
  class ListServiceVersionsResult
  {
  public:
    AWS_SNOWBALL_API ListServiceVersionsResult() = default;
    AWS_SNOWBALL_API ListServiceVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListServiceVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of supported versions.</p>
     */
    inline const Aws::Vector<ServiceVersion>& GetServiceVersions() const { return m_serviceVersions; }
    template<typename ServiceVersionsT = Aws::Vector<ServiceVersion>>
    void SetServiceVersions(ServiceVersionsT&& value) { m_serviceVersionsHasBeenSet = true; m_serviceVersions = std::forward<ServiceVersionsT>(value); }
    template<typename ServiceVersionsT = Aws::Vector<ServiceVersion>>
    ListServiceVersionsResult& WithServiceVersions(ServiceVersionsT&& value) { SetServiceVersions(std::forward<ServiceVersionsT>(value)); return *this;}
    template<typename ServiceVersionsT = ServiceVersion>
    ListServiceVersionsResult& AddServiceVersions(ServiceVersionsT&& value) { m_serviceVersionsHasBeenSet = true; m_serviceVersions.emplace_back(std::forward<ServiceVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service for which the system provided supported versions.</p>
     */
    inline ServiceName GetServiceName() const { return m_serviceName; }
    inline void SetServiceName(ServiceName value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline ListServiceVersionsResult& WithServiceName(ServiceName value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names and versions of dependant services of the service for which
     * the system provided supported versions.</p>
     */
    inline const Aws::Vector<DependentService>& GetDependentServices() const { return m_dependentServices; }
    template<typename DependentServicesT = Aws::Vector<DependentService>>
    void SetDependentServices(DependentServicesT&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices = std::forward<DependentServicesT>(value); }
    template<typename DependentServicesT = Aws::Vector<DependentService>>
    ListServiceVersionsResult& WithDependentServices(DependentServicesT&& value) { SetDependentServices(std::forward<DependentServicesT>(value)); return *this;}
    template<typename DependentServicesT = DependentService>
    ListServiceVersionsResult& AddDependentServices(DependentServicesT&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices.emplace_back(std::forward<DependentServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point of the next
     * list of returned <code>ListServiceVersionsResult</code> results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceVersion> m_serviceVersions;
    bool m_serviceVersionsHasBeenSet = false;

    ServiceName m_serviceName{ServiceName::NOT_SET};
    bool m_serviceNameHasBeenSet = false;

    Aws::Vector<DependentService> m_dependentServices;
    bool m_dependentServicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
