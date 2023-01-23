/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/StudioLifecycleConfigAppType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StudioLifecycleConfigSortKey.h>
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
  class ListStudioLifecycleConfigsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStudioLifecycleConfigs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of Studio Lifecycle Configurations to return in the
     * response. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of Studio Lifecycle Configurations to return in the
     * response. The default value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of Studio Lifecycle Configurations to return in the
     * response. The default value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of Studio Lifecycle Configurations to return in the
     * response. The default value is 10.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to ListStudioLifecycleConfigs didn't return the full set
     * of Lifecycle Configurations, the call returns a token for getting the next set
     * of Lifecycle Configurations.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the Lifecycle Configuration name. This filter returns only
     * Lifecycle Configurations whose name contains the specified string.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline const StudioLifecycleConfigAppType& GetAppTypeEquals() const{ return m_appTypeEquals; }

    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline bool AppTypeEqualsHasBeenSet() const { return m_appTypeEqualsHasBeenSet; }

    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline void SetAppTypeEquals(const StudioLifecycleConfigAppType& value) { m_appTypeEqualsHasBeenSet = true; m_appTypeEquals = value; }

    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline void SetAppTypeEquals(StudioLifecycleConfigAppType&& value) { m_appTypeEqualsHasBeenSet = true; m_appTypeEquals = std::move(value); }

    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithAppTypeEquals(const StudioLifecycleConfigAppType& value) { SetAppTypeEquals(value); return *this;}

    /**
     * <p>A parameter to search for the App Type to which the Lifecycle Configuration
     * is attached.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithAppTypeEquals(StudioLifecycleConfigAppType&& value) { SetAppTypeEquals(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or before the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only Lifecycle Configurations created on or after the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeBefore() const{ return m_modifiedTimeBefore; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline bool ModifiedTimeBeforeHasBeenSet() const { return m_modifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline void SetModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_modifiedTimeBeforeHasBeenSet = true; m_modifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline void SetModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_modifiedTimeBeforeHasBeenSet = true; m_modifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only Lifecycle Configurations modified before the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTimeAfter() const{ return m_modifiedTimeAfter; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline bool ModifiedTimeAfterHasBeenSet() const { return m_modifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline void SetModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_modifiedTimeAfterHasBeenSet = true; m_modifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline void SetModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_modifiedTimeAfterHasBeenSet = true; m_modifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only Lifecycle Configurations modified after the
     * specified time.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline const StudioLifecycleConfigSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline void SetSortBy(const StudioLifecycleConfigSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline void SetSortBy(StudioLifecycleConfigSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithSortBy(const StudioLifecycleConfigSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The property used to sort results. The default value is CreationTime.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithSortBy(StudioLifecycleConfigSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. The default value is Descending.</p>
     */
    inline ListStudioLifecycleConfigsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    StudioLifecycleConfigAppType m_appTypeEquals;
    bool m_appTypeEqualsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeBefore;
    bool m_modifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTimeAfter;
    bool m_modifiedTimeAfterHasBeenSet = false;

    StudioLifecycleConfigSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
