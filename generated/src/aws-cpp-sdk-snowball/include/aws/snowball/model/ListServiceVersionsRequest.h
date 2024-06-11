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
    AWS_SNOWBALL_API ListServiceVersionsRequest();

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
    inline const ServiceName& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const ServiceName& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(ServiceName&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline ListServiceVersionsRequest& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}
    inline ListServiceVersionsRequest& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names and versions of dependant services of the requested
     * service.</p>
     */
    inline const Aws::Vector<DependentService>& GetDependentServices() const{ return m_dependentServices; }
    inline bool DependentServicesHasBeenSet() const { return m_dependentServicesHasBeenSet; }
    inline void SetDependentServices(const Aws::Vector<DependentService>& value) { m_dependentServicesHasBeenSet = true; m_dependentServices = value; }
    inline void SetDependentServices(Aws::Vector<DependentService>&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices = std::move(value); }
    inline ListServiceVersionsRequest& WithDependentServices(const Aws::Vector<DependentService>& value) { SetDependentServices(value); return *this;}
    inline ListServiceVersionsRequest& WithDependentServices(Aws::Vector<DependentService>&& value) { SetDependentServices(std::move(value)); return *this;}
    inline ListServiceVersionsRequest& AddDependentServices(const DependentService& value) { m_dependentServicesHasBeenSet = true; m_dependentServices.push_back(value); return *this; }
    inline ListServiceVersionsRequest& AddDependentServices(DependentService&& value) { m_dependentServicesHasBeenSet = true; m_dependentServices.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of <code>ListServiceVersions</code> objects to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Because HTTP requests are stateless, this is the starting point for the next
     * list of returned <code>ListServiceVersionsRequest</code> versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServiceVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    ServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::Vector<DependentService> m_dependentServices;
    bool m_dependentServicesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
