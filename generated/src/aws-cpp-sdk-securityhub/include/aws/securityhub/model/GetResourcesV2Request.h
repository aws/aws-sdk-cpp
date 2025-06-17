/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/ResourcesFilters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SortCriterion.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetResourcesV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetResourcesV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourcesV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Filters resources based on a set of criteria.</p>
     */
    inline const ResourcesFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = ResourcesFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ResourcesFilters>
    GetResourcesV2Request& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding attributes used to sort the list of returned findings.</p>
     */
    inline const Aws::Vector<SortCriterion>& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = Aws::Vector<SortCriterion>>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = Aws::Vector<SortCriterion>>
    GetResourcesV2Request& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    template<typename SortCriteriaT = SortCriterion>
    GetResourcesV2Request& AddSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.emplace_back(std::forward<SortCriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required for pagination. On your first call, set the value of this
     * parameter to <code>NULL</code>. For subsequent calls, to continue listing data,
     * set the value of this parameter to the value returned in the previous
     * response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourcesV2Request& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetResourcesV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ResourcesFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SortCriterion> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
