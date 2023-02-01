/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class ListDatasetGroupsRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API ListDatasetGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetGroups"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline ListDatasetGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline ListDatasetGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from the previous call to <code>ListDatasetGroups</code> for
     * getting the next set of dataset groups (if they exist).</p>
     */
    inline ListDatasetGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of dataset groups to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of dataset groups to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of dataset groups to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of dataset groups to return.</p>
     */
    inline ListDatasetGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
