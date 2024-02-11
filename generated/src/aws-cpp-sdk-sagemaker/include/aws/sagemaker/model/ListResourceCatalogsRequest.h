/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ResourceCatalogSortOrder.h>
#include <aws/sagemaker/model/ResourceCatalogSortBy.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListResourceCatalogsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListResourceCatalogsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceCatalogs"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline ListResourceCatalogsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline ListResourceCatalogsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p> A string that partially matches one or more <code>ResourceCatalog</code>s
     * names. Filters <code>ResourceCatalog</code> by name. </p>
     */
    inline ListResourceCatalogsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline ListResourceCatalogsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created after
     * a specific date and time. </p>
     */
    inline ListResourceCatalogsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline ListResourceCatalogsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p> Use this parameter to search for <code>ResourceCatalog</code>s created
     * before a specific date and time. </p>
     */
    inline ListResourceCatalogsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline const ResourceCatalogSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline void SetSortOrder(const ResourceCatalogSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline void SetSortOrder(ResourceCatalogSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline ListResourceCatalogsRequest& WithSortOrder(const ResourceCatalogSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p> The order in which the resource catalogs are listed. </p>
     */
    inline ListResourceCatalogsRequest& WithSortOrder(ResourceCatalogSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline const ResourceCatalogSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline void SetSortBy(const ResourceCatalogSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline void SetSortBy(ResourceCatalogSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline ListResourceCatalogsRequest& WithSortBy(const ResourceCatalogSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p> The value on which the resource catalog list is sorted. </p>
     */
    inline ListResourceCatalogsRequest& WithSortBy(ResourceCatalogSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results returned by <code>ListResourceCatalogs</code>.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results returned by <code>ListResourceCatalogs</code>.
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results returned by <code>ListResourceCatalogs</code>.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results returned by <code>ListResourceCatalogs</code>.
     * </p>
     */
    inline ListResourceCatalogsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token to resume pagination of <code>ListResourceCatalogs</code> results.
     * </p>
     */
    inline ListResourceCatalogsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    ResourceCatalogSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    ResourceCatalogSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
