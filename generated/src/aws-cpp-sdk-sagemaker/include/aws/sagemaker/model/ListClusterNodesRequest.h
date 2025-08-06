/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListClusterNodesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListClusterNodesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterNodes"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which you want to retrieve the list of nodes.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    ListClusterNodesRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created after the
     * specified time. Timestamps are formatted according to the ISO 8601 standard.
     * </p> <p>Acceptable formats include:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (UTC), for example,
     * <code>2014-10-01T20:30:00.000Z</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code> (with offset), for example,
     * <code>2014-10-01T12:30:00.000-08:00</code> </p> </li> <li> <p>
     * <code>YYYY-MM-DD</code>, for example, <code>2014-10-01</code> </p> </li> <li>
     * <p>Unix time in seconds, for example, <code>1412195400</code>. This is also
     * referred to as Unix Epoch time and represents the number of seconds since
     * midnight, January 1, 1970 UTC.</p> </li> </ul> <p>For more information about the
     * timestamp format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListClusterNodesRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns nodes in a SageMaker HyperPod cluster created before
     * the specified time. The acceptable formats are the same as the timestamp formats
     * for <code>CreationTimeAfter</code>. For more information about the timestamp
     * format, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-types.html#parameter-type-timestamp">Timestamp</a>
     * in the <i>Amazon Web Services Command Line Interface User Guide</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListClusterNodesRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that returns the instance groups whose name contain a specified
     * string.</p>
     */
    inline const Aws::String& GetInstanceGroupNameContains() const { return m_instanceGroupNameContains; }
    inline bool InstanceGroupNameContainsHasBeenSet() const { return m_instanceGroupNameContainsHasBeenSet; }
    template<typename InstanceGroupNameContainsT = Aws::String>
    void SetInstanceGroupNameContains(InstanceGroupNameContainsT&& value) { m_instanceGroupNameContainsHasBeenSet = true; m_instanceGroupNameContains = std::forward<InstanceGroupNameContainsT>(value); }
    template<typename InstanceGroupNameContainsT = Aws::String>
    ListClusterNodesRequest& WithInstanceGroupNameContains(InstanceGroupNameContainsT&& value) { SetInstanceGroupNameContains(std::forward<InstanceGroupNameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of nodes to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListClusterNodesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListClusterNodes</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of cluster nodes, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterNodesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field by which to sort results. The default value is
     * <code>CREATION_TIME</code>.</p>
     */
    inline ClusterSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ClusterSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListClusterNodesRequest& WithSortBy(ClusterSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default value is <code>Ascending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListClusterNodesRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include nodes that are still being provisioned in the
     * response. When set to true, the response includes all nodes regardless of their
     * provisioning status. When set to <code>False</code> (default), only nodes with
     * assigned <code>InstanceIds</code> are returned.</p>
     */
    inline bool GetIncludeNodeLogicalIds() const { return m_includeNodeLogicalIds; }
    inline bool IncludeNodeLogicalIdsHasBeenSet() const { return m_includeNodeLogicalIdsHasBeenSet; }
    inline void SetIncludeNodeLogicalIds(bool value) { m_includeNodeLogicalIdsHasBeenSet = true; m_includeNodeLogicalIds = value; }
    inline ListClusterNodesRequest& WithIncludeNodeLogicalIds(bool value) { SetIncludeNodeLogicalIds(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::String m_instanceGroupNameContains;
    bool m_instanceGroupNameContainsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ClusterSortBy m_sortBy{ClusterSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    bool m_includeNodeLogicalIds{false};
    bool m_includeNodeLogicalIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
