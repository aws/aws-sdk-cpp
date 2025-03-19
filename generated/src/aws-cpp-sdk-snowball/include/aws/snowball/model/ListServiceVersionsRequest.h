/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/ServiceName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/DependentService.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class ListServiceVersionsRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API ListServiceVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceVersions"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the service for which you're requesting supported versions.</p>
     */
    inline ServiceName GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(ServiceName value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline ListServiceVersionsRequest& WithServiceName(ServiceName value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names and versions of dependant services of the requested
     * service.</p>
     */
    inline const Aws::Vector<DependentService>& GetDependentServices() const { return m_dependentServices; }
    inline bool DependentServicesHasBeenSet() const { return m_dependentServicesHasBeenSet; }
    template<typename DependentServicesT = Aws::Vector<DependentService>>
    void SetDependentServices(DependentServicesT&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices = std::forward<DependentServicesT>(value); }
    template<typename DependentServicesT = Aws::Vector<DependentService>>
    ListServiceVersionsRequest& WithDependentServices(DependentServicesT&& value) { SetDependentServices(std::forward<DependentServicesT>(value)); return *this;}
    template<typename DependentServicesT = DependentService>
    ListServiceVersionsRequest& AddDependentServices(DependentServicesT&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices.emplace_back(std::forward<DependentServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of <code>ListServiceVersions</code> objects to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for the next
     * list of returned <code>ListServiceVersionsRequest</code> versions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    ServiceName m_serviceName{ServiceName::NOT_SET};
    bool m_serviceNameHasBeenSet = false;

    Aws::Vector<DependentService> m_dependentServices;
    bool m_dependentServicesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
