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
    AWS_OUTPOSTS_API ListCapacityTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCapacityTasks"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline const Aws::String& GetOutpostIdentifierFilter() const{ return m_outpostIdentifierFilter; }

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline bool OutpostIdentifierFilterHasBeenSet() const { return m_outpostIdentifierFilterHasBeenSet; }

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline void SetOutpostIdentifierFilter(const Aws::String& value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter = value; }

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline void SetOutpostIdentifierFilter(Aws::String&& value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter = std::move(value); }

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline void SetOutpostIdentifierFilter(const char* value) { m_outpostIdentifierFilterHasBeenSet = true; m_outpostIdentifierFilter.assign(value); }

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline ListCapacityTasksRequest& WithOutpostIdentifierFilter(const Aws::String& value) { SetOutpostIdentifierFilter(value); return *this;}

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline ListCapacityTasksRequest& WithOutpostIdentifierFilter(Aws::String&& value) { SetOutpostIdentifierFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by an Outpost ID or an Outpost ARN.</p>
     */
    inline ListCapacityTasksRequest& WithOutpostIdentifierFilter(const char* value) { SetOutpostIdentifierFilter(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListCapacityTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListCapacityTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCapacityTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCapacityTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline const Aws::Vector<CapacityTaskStatus>& GetCapacityTaskStatusFilter() const{ return m_capacityTaskStatusFilter; }

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline bool CapacityTaskStatusFilterHasBeenSet() const { return m_capacityTaskStatusFilterHasBeenSet; }

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline void SetCapacityTaskStatusFilter(const Aws::Vector<CapacityTaskStatus>& value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter = value; }

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline void SetCapacityTaskStatusFilter(Aws::Vector<CapacityTaskStatus>&& value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter = std::move(value); }

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline ListCapacityTasksRequest& WithCapacityTaskStatusFilter(const Aws::Vector<CapacityTaskStatus>& value) { SetCapacityTaskStatusFilter(value); return *this;}

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline ListCapacityTasksRequest& WithCapacityTaskStatusFilter(Aws::Vector<CapacityTaskStatus>&& value) { SetCapacityTaskStatusFilter(std::move(value)); return *this;}

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline ListCapacityTasksRequest& AddCapacityTaskStatusFilter(const CapacityTaskStatus& value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter.push_back(value); return *this; }

    /**
     * <p>A list of statuses. For example, <code>REQUESTED</code> or
     * <code>WAITING_FOR_EVACUATION</code>.</p>
     */
    inline ListCapacityTasksRequest& AddCapacityTaskStatusFilter(CapacityTaskStatus&& value) { m_capacityTaskStatusFilterHasBeenSet = true; m_capacityTaskStatusFilter.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_outpostIdentifierFilter;
    bool m_outpostIdentifierFilterHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CapacityTaskStatus> m_capacityTaskStatusFilter;
    bool m_capacityTaskStatusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
