/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/ServiceFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class ListServicesRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API ListServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline ListServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline ListServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For the first <code>ListServices</code> request, omit this value.</p> <p>If
     * the response contains <code>NextToken</code>, submit another
     * <code>ListServices</code> request to get the next group of results. Specify the
     * value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> services and then
     * filters them based on the specified criteria. It's possible that no services in
     * the first <code>MaxResults</code> services matched the specified criteria but
     * that subsequent groups of <code>MaxResults</code> services do contain services
     * that match the criteria.</p> 
     */
    inline ListServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of services that you want Cloud Map to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 services.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of services that you want Cloud Map to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 services.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of services that you want Cloud Map to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 services.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of services that you want Cloud Map to return in the
     * response to a <code>ListServices</code> request. If you don't specify a value
     * for <code>MaxResults</code>, Cloud Map returns up to 100 services.</p>
     */
    inline ListServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline const Aws::Vector<ServiceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<ServiceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline void SetFilters(Aws::Vector<ServiceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& WithFilters(const Aws::Vector<ServiceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& WithFilters(Aws::Vector<ServiceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& AddFilters(const ServiceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A complex type that contains specifications for the namespaces that you want
     * to list services for. </p> <p>If you specify more than one filter, an operation
     * must match all filters to be returned by <code>ListServices</code>.</p>
     */
    inline ListServicesRequest& AddFilters(ServiceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ServiceFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
