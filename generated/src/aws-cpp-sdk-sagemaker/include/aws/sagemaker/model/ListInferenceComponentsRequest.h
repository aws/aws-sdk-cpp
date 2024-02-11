/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/InferenceComponentSortKey.h>
#include <aws/sagemaker/model/OrderKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/InferenceComponentStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListInferenceComponentsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListInferenceComponentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceComponents"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline const InferenceComponentSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const InferenceComponentSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(InferenceComponentSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline ListInferenceComponentsRequest& WithSortBy(const InferenceComponentSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline ListInferenceComponentsRequest& WithSortBy(InferenceComponentSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline const OrderKey& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const OrderKey& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(OrderKey&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListInferenceComponentsRequest& WithSortOrder(const OrderKey& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline ListInferenceComponentsRequest& WithSortOrder(OrderKey&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline ListInferenceComponentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline ListInferenceComponentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline ListInferenceComponentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of inference components to return in the response. This
     * value defaults to 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of inference components to return in the response. This
     * value defaults to 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of inference components to return in the response. This
     * value defaults to 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of inference components to return in the response. This
     * value defaults to 10.</p>
     */
    inline ListInferenceComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline ListInferenceComponentsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline ListInferenceComponentsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline ListInferenceComponentsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline ListInferenceComponentsRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline const InferenceComponentStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline void SetStatusEquals(const InferenceComponentStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline void SetStatusEquals(InferenceComponentStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline ListInferenceComponentsRequest& WithStatusEquals(const InferenceComponentStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline ListInferenceComponentsRequest& WithStatusEquals(InferenceComponentStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointNameEquals() const{ return m_endpointNameEquals; }

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline bool EndpointNameEqualsHasBeenSet() const { return m_endpointNameEqualsHasBeenSet; }

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline void SetEndpointNameEquals(const Aws::String& value) { m_endpointNameEqualsHasBeenSet = true; m_endpointNameEquals = value; }

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline void SetEndpointNameEquals(Aws::String&& value) { m_endpointNameEqualsHasBeenSet = true; m_endpointNameEquals = std::move(value); }

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline void SetEndpointNameEquals(const char* value) { m_endpointNameEqualsHasBeenSet = true; m_endpointNameEquals.assign(value); }

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline ListInferenceComponentsRequest& WithEndpointNameEquals(const Aws::String& value) { SetEndpointNameEquals(value); return *this;}

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline ListInferenceComponentsRequest& WithEndpointNameEquals(Aws::String&& value) { SetEndpointNameEquals(std::move(value)); return *this;}

    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline ListInferenceComponentsRequest& WithEndpointNameEquals(const char* value) { SetEndpointNameEquals(value); return *this;}


    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline const Aws::String& GetVariantNameEquals() const{ return m_variantNameEquals; }

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline bool VariantNameEqualsHasBeenSet() const { return m_variantNameEqualsHasBeenSet; }

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline void SetVariantNameEquals(const Aws::String& value) { m_variantNameEqualsHasBeenSet = true; m_variantNameEquals = value; }

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline void SetVariantNameEquals(Aws::String&& value) { m_variantNameEqualsHasBeenSet = true; m_variantNameEquals = std::move(value); }

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline void SetVariantNameEquals(const char* value) { m_variantNameEqualsHasBeenSet = true; m_variantNameEquals.assign(value); }

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline ListInferenceComponentsRequest& WithVariantNameEquals(const Aws::String& value) { SetVariantNameEquals(value); return *this;}

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline ListInferenceComponentsRequest& WithVariantNameEquals(Aws::String&& value) { SetVariantNameEquals(std::move(value)); return *this;}

    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline ListInferenceComponentsRequest& WithVariantNameEquals(const char* value) { SetVariantNameEquals(value); return *this;}

  private:

    InferenceComponentSortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    OrderKey m_sortOrder;
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

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    InferenceComponentStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_endpointNameEquals;
    bool m_endpointNameEqualsHasBeenSet = false;

    Aws::String m_variantNameEquals;
    bool m_variantNameEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
