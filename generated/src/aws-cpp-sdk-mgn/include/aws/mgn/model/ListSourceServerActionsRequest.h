/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/SourceServerActionsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class ListSourceServerActionsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListSourceServerActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSourceServerActions"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline const SourceServerActionsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline void SetFilters(const SourceServerActionsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline void SetFilters(SourceServerActionsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsRequest& WithFilters(const SourceServerActionsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to apply when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsRequest& WithFilters(SourceServerActionsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Maximum amount of items to return when listing source server post migration
     * custom actions.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum amount of items to return when listing source server post migration
     * custom actions.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum amount of items to return when listing source server post migration
     * custom actions.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum amount of items to return when listing source server post migration
     * custom actions.</p>
     */
    inline ListSourceServerActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token to use when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline ListSourceServerActionsRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline ListSourceServerActionsRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline ListSourceServerActionsRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    SourceServerActionsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
