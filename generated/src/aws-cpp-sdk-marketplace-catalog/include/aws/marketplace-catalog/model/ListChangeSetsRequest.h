/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/Sort.h>
#include <aws/marketplace-catalog/model/Filter.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class ListChangeSetsRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API ListChangeSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChangeSets"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The catalog related to the request. Fixed value: <code>AWSMarketplace</code>
     * </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListChangeSetsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListChangeSetsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListChangeSetsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of filter objects.</p>
     */
    inline const Aws::Vector<Filter>& GetFilterList() const{ return m_filterList; }
    inline bool FilterListHasBeenSet() const { return m_filterListHasBeenSet; }
    inline void SetFilterList(const Aws::Vector<Filter>& value) { m_filterListHasBeenSet = true; m_filterList = value; }
    inline void SetFilterList(Aws::Vector<Filter>&& value) { m_filterListHasBeenSet = true; m_filterList = std::move(value); }
    inline ListChangeSetsRequest& WithFilterList(const Aws::Vector<Filter>& value) { SetFilterList(value); return *this;}
    inline ListChangeSetsRequest& WithFilterList(Aws::Vector<Filter>&& value) { SetFilterList(std::move(value)); return *this;}
    inline ListChangeSetsRequest& AddFilterList(const Filter& value) { m_filterListHasBeenSet = true; m_filterList.push_back(value); return *this; }
    inline ListChangeSetsRequest& AddFilterList(Filter&& value) { m_filterListHasBeenSet = true; m_filterList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains two attributes, <code>SortBy</code> and
     * <code>SortOrder</code>.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListChangeSetsRequest& WithSort(const Sort& value) { SetSort(value); return *this;}
    inline ListChangeSetsRequest& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by a single call. This value must be
     * provided in the next call to retrieve the next set of results. By default, this
     * value is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChangeSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListChangeSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChangeSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChangeSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Filter> m_filterList;
    bool m_filterListHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
