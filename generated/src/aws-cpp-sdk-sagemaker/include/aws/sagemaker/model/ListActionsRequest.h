/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortActionsBy.h>
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
  class ListActionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline ListActionsRequest& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline ListActionsRequest& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only actions with the specified source URI.</p>
     */
    inline ListActionsRequest& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}


    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline const Aws::String& GetActionType() const{ return m_actionType; }

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline void SetActionType(const Aws::String& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline void SetActionType(Aws::String&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline void SetActionType(const char* value) { m_actionTypeHasBeenSet = true; m_actionType.assign(value); }

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline ListActionsRequest& WithActionType(const Aws::String& value) { SetActionType(value); return *this;}

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline ListActionsRequest& WithActionType(Aws::String&& value) { SetActionType(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only actions of the specified type.</p>
     */
    inline ListActionsRequest& WithActionType(const char* value) { SetActionType(value); return *this;}


    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline ListActionsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that returns only actions created on or after the specified
     * time.</p>
     */
    inline ListActionsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline ListActionsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that returns only actions created on or before the specified
     * time.</p>
     */
    inline ListActionsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const SortActionsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SortActionsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SortActionsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListActionsRequest& WithSortBy(const SortActionsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListActionsRequest& WithSortBy(SortActionsBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListActionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListActionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline ListActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline ListActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to <code>ListActions</code> didn't return the full set
     * of actions, the call returns a token for getting the next set of actions.</p>
     */
    inline ListActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of actions to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of actions to return in the response. The default value is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of actions to return in the response. The default value is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of actions to return in the response. The default value is
     * 10.</p>
     */
    inline ListActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    Aws::String m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortActionsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
