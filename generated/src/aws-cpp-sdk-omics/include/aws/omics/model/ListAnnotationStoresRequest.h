/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ListAnnotationStoresFilter.h>
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
  class ListAnnotationStoresRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListAnnotationStoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAnnotationStores"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>IDs of stores to list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }
    inline ListAnnotationStoresRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}
    inline ListAnnotationStoresRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}
    inline ListAnnotationStoresRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    inline ListAnnotationStoresRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }
    inline ListAnnotationStoresRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of stores to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAnnotationStoresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAnnotationStoresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnnotationStoresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnnotationStoresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to apply to the list.</p>
     */
    inline const ListAnnotationStoresFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ListAnnotationStoresFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ListAnnotationStoresFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListAnnotationStoresRequest& WithFilter(const ListAnnotationStoresFilter& value) { SetFilter(value); return *this;}
    inline ListAnnotationStoresRequest& WithFilter(ListAnnotationStoresFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListAnnotationStoresFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
