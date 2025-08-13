/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/EngagementSort.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListEngagementsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEngagements"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Specifies the catalog related to the request. </p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListEngagementsRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of AWS account IDs. When specified, the response includes engagements
     * created by these accounts. This filter is useful for finding engagements created
     * by specific team members. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::Vector<Aws::String>>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::Vector<Aws::String>>
    ListEngagementsRequest& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    template<typename CreatedByT = Aws::String>
    ListEngagementsRequest& AddCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy.emplace_back(std::forward<CreatedByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings representing AWS Account IDs. Use this to exclude
     * engagements created by specific users. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeCreatedBy() const { return m_excludeCreatedBy; }
    inline bool ExcludeCreatedByHasBeenSet() const { return m_excludeCreatedByHasBeenSet; }
    template<typename ExcludeCreatedByT = Aws::Vector<Aws::String>>
    void SetExcludeCreatedBy(ExcludeCreatedByT&& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy = std::forward<ExcludeCreatedByT>(value); }
    template<typename ExcludeCreatedByT = Aws::Vector<Aws::String>>
    ListEngagementsRequest& WithExcludeCreatedBy(ExcludeCreatedByT&& value) { SetExcludeCreatedBy(std::forward<ExcludeCreatedByT>(value)); return *this;}
    template<typename ExcludeCreatedByT = Aws::String>
    ListEngagementsRequest& AddExcludeCreatedBy(ExcludeCreatedByT&& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy.emplace_back(std::forward<ExcludeCreatedByT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const EngagementSort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = EngagementSort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = EngagementSort>
    ListEngagementsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEngagementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This value is returned from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings representing engagement identifiers to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const { return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    void SetEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::forward<EngagementIdentifierT>(value); }
    template<typename EngagementIdentifierT = Aws::Vector<Aws::String>>
    ListEngagementsRequest& WithEngagementIdentifier(EngagementIdentifierT&& value) { SetEngagementIdentifier(std::forward<EngagementIdentifierT>(value)); return *this;}
    template<typename EngagementIdentifierT = Aws::String>
    ListEngagementsRequest& AddEngagementIdentifier(EngagementIdentifierT&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.emplace_back(std::forward<EngagementIdentifierT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Aws::String> m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeCreatedBy;
    bool m_excludeCreatedByHasBeenSet = false;

    EngagementSort m_sort;
    bool m_sortHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
