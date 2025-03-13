/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/SortOrder.h>
#include <aws/route53resolver/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ListResolverQueryLogConfigsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResolverQueryLogConfigs"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of query logging configurations that you want to return in
     * the response to a <code>ListResolverQueryLogConfigs</code> request. If you don't
     * specify a value for <code>MaxResults</code>, Resolver returns up to 100 query
     * logging configurations. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResolverQueryLogConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the first <code>ListResolverQueryLogConfigs</code> request, omit this
     * value.</p> <p>If there are more than <code>MaxResults</code> query logging
     * configurations that match the values that you specify for <code>Filters</code>,
     * you can submit another <code>ListResolverQueryLogConfigs</code> request to get
     * the next group of configurations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverQueryLogConfigsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional specification to return a subset of query logging
     * configurations.</p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigs</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same values for
     * <code>Filters</code>, if any, as in the previous request.</p> 
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListResolverQueryLogConfigsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListResolverQueryLogConfigsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The element that you want Resolver to sort query logging configurations by.
     * </p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigs</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same value for
     * <code>SortBy</code>, if any, as in the previous request.</p>  <p>Valid
     * values include the following elements:</p> <ul> <li> <p> <code>Arn</code>: The
     * ARN of the query logging configuration</p> </li> <li> <p>
     * <code>AssociationCount</code>: The number of VPCs that are associated with the
     * specified configuration </p> </li> <li> <p> <code>CreationTime</code>: The date
     * and time that Resolver returned when the configuration was created</p> </li>
     * <li> <p> <code>CreatorRequestId</code>: The value that was specified for
     * <code>CreatorRequestId</code> when the configuration was created</p> </li> <li>
     * <p> <code>DestinationArn</code>: The location that logs are sent to</p> </li>
     * <li> <p> <code>Id</code>: The ID of the configuration</p> </li> <li> <p>
     * <code>Name</code>: The name of the configuration</p> </li> <li> <p>
     * <code>OwnerId</code>: The Amazon Web Services account number of the account that
     * created the configuration</p> </li> <li> <p> <code>ShareStatus</code>: Whether
     * the configuration is shared with other Amazon Web Services accounts or shared
     * with the current account by another Amazon Web Services account. Sharing is
     * configured through Resource Access Manager (RAM).</p> </li> <li> <p>
     * <code>Status</code>: The current status of the configuration. Valid values
     * include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is
     * creating the query logging configuration.</p> </li> <li> <p>
     * <code>CREATED</code>: The query logging configuration was successfully created.
     * Resolver is logging queries that originate in the specified VPC.</p> </li> <li>
     * <p> <code>DELETING</code>: Resolver is deleting this query logging
     * configuration.</p> </li> <li> <p> <code>FAILED</code>: Resolver either couldn't
     * create or couldn't delete the query logging configuration. Here are two common
     * causes:</p> <ul> <li> <p>The specified destination (for example, an Amazon S3
     * bucket) was deleted.</p> </li> <li> <p>Permissions don't allow sending logs to
     * the destination.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::String>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::String>
    ListResolverQueryLogConfigsRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specified a value for <code>SortBy</code>, the order that you want
     * query logging configurations to be listed in, <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigs</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same value for
     * <code>SortOrder</code>, if any, as in the previous request.</p> 
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListResolverQueryLogConfigsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
