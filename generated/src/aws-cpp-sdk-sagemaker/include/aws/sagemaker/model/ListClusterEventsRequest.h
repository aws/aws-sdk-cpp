/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EventSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/sagemaker/model/ClusterEventResourceType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListClusterEventsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListClusterEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListClusterEvents"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the HyperPod cluster for which to
     * list events.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    ListClusterEventsRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the instance group to filter events. If specified, only events
     * related to this instance group are returned.</p>
     */
    inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
    inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
    template<typename InstanceGroupNameT = Aws::String>
    void SetInstanceGroupName(InstanceGroupNameT&& value) { m_instanceGroupNameHasBeenSet = true; m_instanceGroupName = std::forward<InstanceGroupNameT>(value); }
    template<typename InstanceGroupNameT = Aws::String>
    ListClusterEventsRequest& WithInstanceGroupName(InstanceGroupNameT&& value) { SetInstanceGroupName(std::forward<InstanceGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance ID to filter events. If specified, only events related to
     * this instance are returned.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    ListClusterEventsRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time range for filtering events. Only events that occurred
     * after this time are included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimeAfter() const { return m_eventTimeAfter; }
    inline bool EventTimeAfterHasBeenSet() const { return m_eventTimeAfterHasBeenSet; }
    template<typename EventTimeAfterT = Aws::Utils::DateTime>
    void SetEventTimeAfter(EventTimeAfterT&& value) { m_eventTimeAfterHasBeenSet = true; m_eventTimeAfter = std::forward<EventTimeAfterT>(value); }
    template<typename EventTimeAfterT = Aws::Utils::DateTime>
    ListClusterEventsRequest& WithEventTimeAfter(EventTimeAfterT&& value) { SetEventTimeAfter(std::forward<EventTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range for filtering events. Only events that occurred
     * before this time are included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTimeBefore() const { return m_eventTimeBefore; }
    inline bool EventTimeBeforeHasBeenSet() const { return m_eventTimeBeforeHasBeenSet; }
    template<typename EventTimeBeforeT = Aws::Utils::DateTime>
    void SetEventTimeBefore(EventTimeBeforeT&& value) { m_eventTimeBeforeHasBeenSet = true; m_eventTimeBefore = std::forward<EventTimeBeforeT>(value); }
    template<typename EventTimeBeforeT = Aws::Utils::DateTime>
    ListClusterEventsRequest& WithEventTimeBefore(EventTimeBeforeT&& value) { SetEventTimeBefore(std::forward<EventTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field to use for sorting the event list. Currently, the only supported
     * value is <code>EventTime</code>.</p>
     */
    inline EventSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(EventSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListClusterEventsRequest& WithSortBy(EventSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to sort the results. Valid values are
     * <code>Ascending</code> or <code>Descending</code> (the default is
     * <code>Descending</code>).</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListClusterEventsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource for which to filter events. Valid values are
     * <code>Cluster</code>, <code>InstanceGroup</code>, or <code>Instance</code>.</p>
     */
    inline ClusterEventResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ClusterEventResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ListClusterEventsRequest& WithResourceType(ClusterEventResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of events to return in the response. Valid range is 1 to
     * 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListClusterEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next set of results. This token is obtained from the
     * output of a previous <code>ListClusterEvents</code> call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClusterEventsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_instanceGroupName;
    bool m_instanceGroupNameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimeAfter{};
    bool m_eventTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_eventTimeBefore{};
    bool m_eventTimeBeforeHasBeenSet = false;

    EventSortBy m_sortBy{EventSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    ClusterEventResourceType m_resourceType{ClusterEventResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
