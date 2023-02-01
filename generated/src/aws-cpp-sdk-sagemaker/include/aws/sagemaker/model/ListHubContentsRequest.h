/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HubContentType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/HubContentSortBy.h>
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
  class ListHubContentsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListHubContentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHubContents"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline bool HubNameHasBeenSet() const { return m_hubNameHasBeenSet; }

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubNameHasBeenSet = true; m_hubName = value; }

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubNameHasBeenSet = true; m_hubName = std::move(value); }

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline void SetHubName(const char* value) { m_hubNameHasBeenSet = true; m_hubName.assign(value); }

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline ListHubContentsRequest& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline ListHubContentsRequest& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub to list the contents of.</p>
     */
    inline ListHubContentsRequest& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>The type of hub content to list.</p>
     */
    inline const HubContentType& GetHubContentType() const{ return m_hubContentType; }

    /**
     * <p>The type of hub content to list.</p>
     */
    inline bool HubContentTypeHasBeenSet() const { return m_hubContentTypeHasBeenSet; }

    /**
     * <p>The type of hub content to list.</p>
     */
    inline void SetHubContentType(const HubContentType& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = value; }

    /**
     * <p>The type of hub content to list.</p>
     */
    inline void SetHubContentType(HubContentType&& value) { m_hubContentTypeHasBeenSet = true; m_hubContentType = std::move(value); }

    /**
     * <p>The type of hub content to list.</p>
     */
    inline ListHubContentsRequest& WithHubContentType(const HubContentType& value) { SetHubContentType(value); return *this;}

    /**
     * <p>The type of hub content to list.</p>
     */
    inline ListHubContentsRequest& WithHubContentType(HubContentType&& value) { SetHubContentType(std::move(value)); return *this;}


    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline ListHubContentsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline ListHubContentsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Only list hub content if the name contains the specified string.</p>
     */
    inline ListHubContentsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline const Aws::String& GetMaxSchemaVersion() const{ return m_maxSchemaVersion; }

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline bool MaxSchemaVersionHasBeenSet() const { return m_maxSchemaVersionHasBeenSet; }

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline void SetMaxSchemaVersion(const Aws::String& value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion = value; }

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline void SetMaxSchemaVersion(Aws::String&& value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion = std::move(value); }

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline void SetMaxSchemaVersion(const char* value) { m_maxSchemaVersionHasBeenSet = true; m_maxSchemaVersion.assign(value); }

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline ListHubContentsRequest& WithMaxSchemaVersion(const Aws::String& value) { SetMaxSchemaVersion(value); return *this;}

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline ListHubContentsRequest& WithMaxSchemaVersion(Aws::String&& value) { SetMaxSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The upper bound of the hub content schema verion.</p>
     */
    inline ListHubContentsRequest& WithMaxSchemaVersion(const char* value) { SetMaxSchemaVersion(value); return *this;}


    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline ListHubContentsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Only list hub content that was created before the time specified.</p>
     */
    inline ListHubContentsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline ListHubContentsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Only list hub content that was created after the time specified.</p>
     */
    inline ListHubContentsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline const HubContentSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline void SetSortBy(const HubContentSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline void SetSortBy(HubContentSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline ListHubContentsRequest& WithSortBy(const HubContentSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sort hub content versions by either name or creation time.</p>
     */
    inline ListHubContentsRequest& WithSortBy(HubContentSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline ListHubContentsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Sort hubs by ascending or descending order.</p>
     */
    inline ListHubContentsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The maximum amount of hub content to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum amount of hub content to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum amount of hub content to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum amount of hub content to list.</p>
     */
    inline ListHubContentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline ListHubContentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline ListHubContentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to a previous <code>ListHubContents</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of hub content, use the token in the next request.</p>
     */
    inline ListHubContentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    HubContentType m_hubContentType;
    bool m_hubContentTypeHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_maxSchemaVersion;
    bool m_maxSchemaVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    HubContentSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
