/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListReferencesRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListReferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReferences"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The references' reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const { return m_referenceStoreId; }
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }
    template<typename ReferenceStoreIdT = Aws::String>
    void SetReferenceStoreId(ReferenceStoreIdT&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::forward<ReferenceStoreIdT>(value); }
    template<typename ReferenceStoreIdT = Aws::String>
    ListReferencesRequest& WithReferenceStoreId(ReferenceStoreIdT&& value) { SetReferenceStoreId(std::forward<ReferenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of references to return in one page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListReferencesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReferencesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to apply to the list.</p>
     */
    inline const ReferenceFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = ReferenceFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = ReferenceFilter>
    ListReferencesRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ReferenceFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
