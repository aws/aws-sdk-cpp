/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringJobDefinitionSortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListDataQualityJobDefinitionsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListDataQualityJobDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataQualityJobDefinitions"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>A filter that lists the data quality job definitions associated with the
     * specified endpoint.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline const MonitoringJobDefinitionSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const MonitoringJobDefinitionSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(MonitoringJobDefinitionSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithSortBy(const MonitoringJobDefinitionSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>CreationTime</code>.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithSortBy(MonitoringJobDefinitionSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of transform jobs, use the token in the next
     * request.&gt;</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of data quality monitoring job definitions to return in
     * the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of data quality monitoring job definitions to return in
     * the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of data quality monitoring job definitions to return in
     * the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of data quality monitoring job definitions to return in
     * the response.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the data quality monitoring job definition name. This filter
     * returns only data quality monitoring job definitions whose name contains the
     * specified string.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * before the specified time.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only data quality monitoring job definitions created
     * after the specified time.</p>
     */
    inline ListDataQualityJobDefinitionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    MonitoringJobDefinitionSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
