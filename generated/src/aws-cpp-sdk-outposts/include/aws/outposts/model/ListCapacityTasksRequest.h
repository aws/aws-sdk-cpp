/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/CapacityTaskStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListCapacityTasksRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListCapacityTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCapacityTasks"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline const Aws::String& GetOutpostIdentifierFilter() const { return m_outpostIdentifierFilter; }
    inline bool OutpostIdentifierFilterHasBeenSet() const { return m_outpostIdentifierFilterHasBeenSet; }
    template<typename OutpostIdentifierFilterT = Aws::String>
    void SetOutpostIdentifierFilter(OutpostIdentifierFilterT&& value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter = std::forward<OutpostIdentifierFilterT>(value); }
    template<typename OutpostIdentifierFilterT = Aws::String>
    ListCapacityTasksRequest& WithOutpostIdentifierFilter(OutpostIdentifierFilterT&& value) { SetOutpostIdentifierFilter(std::forward<OutpostIdentifierFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCapacityTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCapacityTasksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline const Aws::Vector<CapacityTaskStatus>& GetCapacityTaskStatusFilter() const { return m_capacityTaskStatusFilter; }
    inline bool CapacityTaskStatusFilterHasBeenSet() const { return m_capacityTaskStatusFilterHasBeenSet; }
    template<typename CapacityTaskStatusFilterT = Aws::Vector<CapacityTaskStatus>>
    void SetCapacityTaskStatusFilter(CapacityTaskStatusFilterT&& value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter = std::forward<CapacityTaskStatusFilterT>(value); }
    template<typename CapacityTaskStatusFilterT = Aws::Vector<CapacityTaskStatus>>
    ListCapacityTasksRequest& WithCapacityTaskStatusFilter(CapacityTaskStatusFilterT&& value) { SetCapacityTaskStatusFilter(std::forward<CapacityTaskStatusFilterT>(value)); return *this;}
    inline ListCapacityTasksRequest& AddCapacityTaskStatusFilter(CapacityTaskStatus value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_outpostIdentifierFilter;
    bool m_outpostIdentifierFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CapacityTaskStatus> m_capacityTaskStatusFilter;
    bool m_capacityTaskStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
