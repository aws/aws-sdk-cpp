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
    AWS_SAGEMAKER_API ListInferenceComponentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInferenceComponents"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The field by which to sort the inference components in the response. The
     * default is <code>CreationTime</code>.</p>
     */
    inline InferenceComponentSortKey GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(InferenceComponentSortKey value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListInferenceComponentsRequest& WithSortBy(InferenceComponentSortKey value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order for results. The default is <code>Descending</code>.</p>
     */
    inline OrderKey GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(OrderKey value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListInferenceComponentsRequest& WithSortOrder(OrderKey value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you use to get the next set of results following a truncated
     * response. If the response to the previous request was truncated, that response
     * provides the value for this token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInferenceComponentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inference components to return in the response. This
     * value defaults to 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInferenceComponentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components with a name that
     * contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListInferenceComponentsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components that were created
     * before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListInferenceComponentsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components that were created
     * after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListInferenceComponentsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components that were updated
     * before the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const { return m_lastModifiedTimeBefore; }
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    void SetLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::forward<LastModifiedTimeBeforeT>(value); }
    template<typename LastModifiedTimeBeforeT = Aws::Utils::DateTime>
    ListInferenceComponentsRequest& WithLastModifiedTimeBefore(LastModifiedTimeBeforeT&& value) { SetLastModifiedTimeBefore(std::forward<LastModifiedTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components that were updated
     * after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const { return m_lastModifiedTimeAfter; }
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    void SetLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::forward<LastModifiedTimeAfterT>(value); }
    template<typename LastModifiedTimeAfterT = Aws::Utils::DateTime>
    ListInferenceComponentsRequest& WithLastModifiedTimeAfter(LastModifiedTimeAfterT&& value) { SetLastModifiedTimeAfter(std::forward<LastModifiedTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results to only those inference components with the specified
     * status.</p>
     */
    inline InferenceComponentStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(InferenceComponentStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListInferenceComponentsRequest& WithStatusEquals(InferenceComponentStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint name to filter the listed inference components. The response
     * includes only those inference components that are hosted at the specified
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointNameEquals() const { return m_endpointNameEquals; }
    inline bool EndpointNameEqualsHasBeenSet() const { return m_endpointNameEqualsHasBeenSet; }
    template<typename EndpointNameEqualsT = Aws::String>
    void SetEndpointNameEquals(EndpointNameEqualsT&& value) { m_endpointNameEqualsHasBeenSet = true; m_endpointNameEquals = std::forward<EndpointNameEqualsT>(value); }
    template<typename EndpointNameEqualsT = Aws::String>
    ListInferenceComponentsRequest& WithEndpointNameEquals(EndpointNameEqualsT&& value) { SetEndpointNameEquals(std::forward<EndpointNameEqualsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A production variant name to filter the listed inference components. The
     * response includes only those inference components that are hosted at the
     * specified variant.</p>
     */
    inline const Aws::String& GetVariantNameEquals() const { return m_variantNameEquals; }
    inline bool VariantNameEqualsHasBeenSet() const { return m_variantNameEqualsHasBeenSet; }
    template<typename VariantNameEqualsT = Aws::String>
    void SetVariantNameEquals(VariantNameEqualsT&& value) { m_variantNameEqualsHasBeenSet = true; m_variantNameEquals = std::forward<VariantNameEqualsT>(value); }
    template<typename VariantNameEqualsT = Aws::String>
    ListInferenceComponentsRequest& WithVariantNameEquals(VariantNameEqualsT&& value) { SetVariantNameEquals(std::forward<VariantNameEqualsT>(value)); return *this;}
    ///@}
  private:

    InferenceComponentSortKey m_sortBy{InferenceComponentSortKey::NOT_SET};
    bool m_sortByHasBeenSet = false;

    OrderKey m_sortOrder{OrderKey::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeBefore{};
    bool m_lastModifiedTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimeAfter{};
    bool m_lastModifiedTimeAfterHasBeenSet = false;

    InferenceComponentStatus m_statusEquals{InferenceComponentStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_endpointNameEquals;
    bool m_endpointNameEqualsHasBeenSet = false;

    Aws::String m_variantNameEquals;
    bool m_variantNameEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
