/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/CatalogItemClass.h>
#include <aws/outposts/model/SupportedStorageEnum.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListCatalogItemsRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListCatalogItemsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCatalogItems"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCatalogItemsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCatalogItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by item class.</p>
     */
    inline const Aws::Vector<CatalogItemClass>& GetItemClassFilter() const { return m_itemClassFilter; }
    inline bool ItemClassFilterHasBeenSet() const { return m_itemClassFilterHasBeenSet; }
    template<typename ItemClassFilterT = Aws::Vector<CatalogItemClass>>
    void SetItemClassFilter(ItemClassFilterT&& value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter = std::forward<ItemClassFilterT>(value); }
    template<typename ItemClassFilterT = Aws::Vector<CatalogItemClass>>
    ListCatalogItemsRequest& WithItemClassFilter(ItemClassFilterT&& value) { SetItemClassFilter(std::forward<ItemClassFilterT>(value)); return *this;}
    inline ListCatalogItemsRequest& AddItemClassFilter(CatalogItemClass value) { m_itemClassFilterHasBeenSet = true; m_itemClassFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by storage option.</p>
     */
    inline const Aws::Vector<SupportedStorageEnum>& GetSupportedStorageFilter() const { return m_supportedStorageFilter; }
    inline bool SupportedStorageFilterHasBeenSet() const { return m_supportedStorageFilterHasBeenSet; }
    template<typename SupportedStorageFilterT = Aws::Vector<SupportedStorageEnum>>
    void SetSupportedStorageFilter(SupportedStorageFilterT&& value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter = std::forward<SupportedStorageFilterT>(value); }
    template<typename SupportedStorageFilterT = Aws::Vector<SupportedStorageEnum>>
    ListCatalogItemsRequest& WithSupportedStorageFilter(SupportedStorageFilterT&& value) { SetSupportedStorageFilter(std::forward<SupportedStorageFilterT>(value)); return *this;}
    inline ListCatalogItemsRequest& AddSupportedStorageFilter(SupportedStorageEnum value) { m_supportedStorageFilterHasBeenSet = true; m_supportedStorageFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by EC2 family (for example, M5).</p>
     */
    inline const Aws::Vector<Aws::String>& GetEC2FamilyFilter() const { return m_eC2FamilyFilter; }
    inline bool EC2FamilyFilterHasBeenSet() const { return m_eC2FamilyFilterHasBeenSet; }
    template<typename EC2FamilyFilterT = Aws::Vector<Aws::String>>
    void SetEC2FamilyFilter(EC2FamilyFilterT&& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter = std::forward<EC2FamilyFilterT>(value); }
    template<typename EC2FamilyFilterT = Aws::Vector<Aws::String>>
    ListCatalogItemsRequest& WithEC2FamilyFilter(EC2FamilyFilterT&& value) { SetEC2FamilyFilter(std::forward<EC2FamilyFilterT>(value)); return *this;}
    template<typename EC2FamilyFilterT = Aws::String>
    ListCatalogItemsRequest& AddEC2FamilyFilter(EC2FamilyFilterT&& value) { m_eC2FamilyFilterHasBeenSet = true; m_eC2FamilyFilter.emplace_back(std::forward<EC2FamilyFilterT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<CatalogItemClass> m_itemClassFilter;
    bool m_itemClassFilterHasBeenSet = false;

    Aws::Vector<SupportedStorageEnum> m_supportedStorageFilter;
    bool m_supportedStorageFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_eC2FamilyFilter;
    bool m_eC2FamilyFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
