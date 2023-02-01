/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/scheduler/SchedulerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Scheduler
{
namespace Model
{

  /**
   */
  class ListScheduleGroupsRequest : public SchedulerRequest
  {
  public:
    AWS_SCHEDULER_API ListScheduleGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListScheduleGroups"; }

    AWS_SCHEDULER_API Aws::String SerializePayload() const override;

    AWS_SCHEDULER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>If specified, limits the number of results returned by this operation. The
     * operation also returns a <code>NextToken</code> which you can use in a
     * subsequent operation to retrieve the next set of results.</p>
     */
    inline ListScheduleGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline ListScheduleGroupsRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline ListScheduleGroupsRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The name prefix that you can use to return a filtered list of your schedule
     * groups.</p>
     */
    inline ListScheduleGroupsRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListScheduleGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListScheduleGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListScheduleGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
