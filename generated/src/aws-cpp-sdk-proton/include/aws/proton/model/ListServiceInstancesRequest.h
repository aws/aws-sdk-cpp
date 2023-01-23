/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/ListServiceInstancesSortBy.h>
#include <aws/proton/model/SortOrder.h>
#include <aws/proton/model/ListServiceInstancesFilter.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListServiceInstancesRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListServiceInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceInstances"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline const Aws::Vector<ListServiceInstancesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline void SetFilters(const Aws::Vector<ListServiceInstancesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline void SetFilters(Aws::Vector<ListServiceInstancesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline ListServiceInstancesRequest& WithFilters(const Aws::Vector<ListServiceInstancesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline ListServiceInstancesRequest& WithFilters(Aws::Vector<ListServiceInstancesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline ListServiceInstancesRequest& AddFilters(const ListServiceInstancesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of filtering criteria that scope down the result list. By default,
     * all service instances in the Amazon Web Services account are returned.</p>
     */
    inline ListServiceInstancesRequest& AddFilters(ListServiceInstancesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of service instances to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of service instances to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of service instances to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of service instances to list.</p>
     */
    inline ListServiceInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline ListServiceInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline ListServiceInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next service in the array of
     * service instances, after the list of service instances that was previously
     * requested.</p>
     */
    inline ListServiceInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline ListServiceInstancesRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline ListServiceInstancesRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that the service instance belongs to.</p>
     */
    inline ListServiceInstancesRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline const ListServiceInstancesSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline void SetSortBy(const ListServiceInstancesSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline void SetSortBy(ListServiceInstancesSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline ListServiceInstancesRequest& WithSortBy(const ListServiceInstancesSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field that the result list is sorted by.</p> <p>When you choose to sort
     * by <code>serviceName</code>, service instances within each service are sorted by
     * service instance name.</p> <p>Default: <code>serviceName</code> </p>
     */
    inline ListServiceInstancesRequest& WithSortBy(ListServiceInstancesSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline ListServiceInstancesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Result list sort order.</p> <p>Default: <code>ASCENDING</code> </p>
     */
    inline ListServiceInstancesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<ListServiceInstancesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ListServiceInstancesSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
