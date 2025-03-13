/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/GroupByAttribute.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class GetComplianceSummaryRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceSummary"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies target identifiers (usually, specific account IDs) to limit the
     * output by. If you use this parameter, the count of returned noncompliant
     * resources includes only resources with the specified target IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdFilters() const { return m_targetIdFilters; }
    inline bool TargetIdFiltersHasBeenSet() const { return m_targetIdFiltersHasBeenSet; }
    template<typename TargetIdFiltersT = Aws::Vector<Aws::String>>
    void SetTargetIdFilters(TargetIdFiltersT&& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters = std::forward<TargetIdFiltersT>(value); }
    template<typename TargetIdFiltersT = Aws::Vector<Aws::String>>
    GetComplianceSummaryRequest& WithTargetIdFilters(TargetIdFiltersT&& value) { SetTargetIdFilters(std::forward<TargetIdFiltersT>(value)); return *this;}
    template<typename TargetIdFiltersT = Aws::String>
    GetComplianceSummaryRequest& AddTargetIdFilters(TargetIdFiltersT&& value) { m_targetIdFiltersHasBeenSet = true; m_targetIdFilters.emplace_back(std::forward<TargetIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of Amazon Web Services Regions to limit the output to. If
     * you use this parameter, the count of returned noncompliant resources includes
     * only resources in the specified Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionFilters() const { return m_regionFilters; }
    inline bool RegionFiltersHasBeenSet() const { return m_regionFiltersHasBeenSet; }
    template<typename RegionFiltersT = Aws::Vector<Aws::String>>
    void SetRegionFilters(RegionFiltersT&& value) { m_regionFiltersHasBeenSet = true; m_regionFilters = std::forward<RegionFiltersT>(value); }
    template<typename RegionFiltersT = Aws::Vector<Aws::String>>
    GetComplianceSummaryRequest& WithRegionFilters(RegionFiltersT&& value) { SetRegionFilters(std::forward<RegionFiltersT>(value)); return *this;}
    template<typename RegionFiltersT = Aws::String>
    GetComplianceSummaryRequest& AddRegionFilters(RegionFiltersT&& value) { m_regionFiltersHasBeenSet = true; m_regionFilters.emplace_back(std::forward<RegionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want the response to include information for only
     * resources of the specified types. The format of each resource type is
     * <code>service[:resourceType]</code>. For example, specifying a resource type of
     * <code>ec2</code> returns all Amazon EC2 resources (which includes EC2
     * instances). Specifying a resource type of <code>ec2:instance</code> returns only
     * EC2 instances.</p> <p>The string for each service name and resource type is the
     * same as that embedded in a resource's Amazon Resource Name (ARN). Consult the
     * <i> <a href="https://docs.aws.amazon.com/general/latest/gr/">Amazon Web Services
     * General Reference</a> </i> for the following:</p> <ul> <li> <p>For a list of
     * service name strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">Amazon
     * Web Services Service Namespaces</a>.</p> </li> <li> <p>For resource type
     * strings, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arns-syntax">Example
     * ARNs</a>.</p> </li> <li> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p> </li>
     * </ul> <p>You can specify multiple resource types by using a comma separated
     * array. The array can include up to 100 items. Note that the length constraint
     * requirement applies to each resource type filter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypeFilters() const { return m_resourceTypeFilters; }
    inline bool ResourceTypeFiltersHasBeenSet() const { return m_resourceTypeFiltersHasBeenSet; }
    template<typename ResourceTypeFiltersT = Aws::Vector<Aws::String>>
    void SetResourceTypeFilters(ResourceTypeFiltersT&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters = std::forward<ResourceTypeFiltersT>(value); }
    template<typename ResourceTypeFiltersT = Aws::Vector<Aws::String>>
    GetComplianceSummaryRequest& WithResourceTypeFilters(ResourceTypeFiltersT&& value) { SetResourceTypeFilters(std::forward<ResourceTypeFiltersT>(value)); return *this;}
    template<typename ResourceTypeFiltersT = Aws::String>
    GetComplianceSummaryRequest& AddResourceTypeFilters(ResourceTypeFiltersT&& value) { m_resourceTypeFiltersHasBeenSet = true; m_resourceTypeFilters.emplace_back(std::forward<ResourceTypeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want the response to include information for only
     * resources that have tags with the specified tag keys. If you use this parameter,
     * the count of returned noncompliant resources includes only resources that have
     * the specified tag keys.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyFilters() const { return m_tagKeyFilters; }
    inline bool TagKeyFiltersHasBeenSet() const { return m_tagKeyFiltersHasBeenSet; }
    template<typename TagKeyFiltersT = Aws::Vector<Aws::String>>
    void SetTagKeyFilters(TagKeyFiltersT&& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters = std::forward<TagKeyFiltersT>(value); }
    template<typename TagKeyFiltersT = Aws::Vector<Aws::String>>
    GetComplianceSummaryRequest& WithTagKeyFilters(TagKeyFiltersT&& value) { SetTagKeyFilters(std::forward<TagKeyFiltersT>(value)); return *this;}
    template<typename TagKeyFiltersT = Aws::String>
    GetComplianceSummaryRequest& AddTagKeyFilters(TagKeyFiltersT&& value) { m_tagKeyFiltersHasBeenSet = true; m_tagKeyFilters.emplace_back(std::forward<TagKeyFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of attributes to group the counts of noncompliant resources
     * by. If supplied, the counts are sorted by those attributes.</p>
     */
    inline const Aws::Vector<GroupByAttribute>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<GroupByAttribute>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<GroupByAttribute>>
    GetComplianceSummaryRequest& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    inline GetComplianceSummaryRequest& AddGroupBy(GroupByAttribute value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of results to be returned in each page. A query
     * can return fewer than this maximum, even if there are more results still to
     * return. You should always check the <code>PaginationToken</code> response value
     * to see if there are more results. You can specify a minimum of 1 and a maximum
     * value of 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetComplianceSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a <code>PaginationToken</code> response value from a previous
     * request to indicate that you want the next page of results. Leave this parameter
     * empty in your initial request.</p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    GetComplianceSummaryRequest& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_targetIdFilters;
    bool m_targetIdFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionFilters;
    bool m_regionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypeFilters;
    bool m_resourceTypeFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyFilters;
    bool m_tagKeyFiltersHasBeenSet = false;

    Aws::Vector<GroupByAttribute> m_groupBy;
    bool m_groupByHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
