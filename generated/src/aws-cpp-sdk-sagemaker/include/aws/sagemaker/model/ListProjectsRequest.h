/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProjectSortBy.h>
#include <aws/sagemaker/model/ProjectSortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListProjectsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline ListProjectsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns the projects that were created after a specified
     * time.</p>
     */
    inline ListProjectsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline ListProjectsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns the projects that were created before a specified
     * time.</p>
     */
    inline ListProjectsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The maximum number of projects to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of projects to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of projects to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of projects to return in the response.</p>
     */
    inline ListProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline ListProjectsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline ListProjectsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A filter that returns the projects whose name contains a specified
     * string.</p>
     */
    inline ListProjectsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListProjects</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of projects, use the token in the next request.</p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline const ProjectSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const ProjectSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(ProjectSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListProjectsRequest& WithSortBy(const ProjectSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field by which to sort results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListProjectsRequest& WithSortBy(ProjectSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const ProjectSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const ProjectSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(ProjectSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListProjectsRequest& WithSortOrder(const ProjectSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListProjectsRequest& WithSortOrder(ProjectSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ProjectSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    ProjectSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
