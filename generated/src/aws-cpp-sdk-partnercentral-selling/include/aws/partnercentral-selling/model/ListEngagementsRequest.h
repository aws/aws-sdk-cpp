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
    AWS_PARTNERCENTRALSELLING_API ListEngagementsRequest();

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
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListEngagementsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListEngagementsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListEngagementsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of AWS account IDs. When specified, the response includes engagements
     * created by these accounts. This filter is useful for finding engagements created
     * by specific team members. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::Vector<Aws::String>& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::Vector<Aws::String>&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ListEngagementsRequest& WithCreatedBy(const Aws::Vector<Aws::String>& value) { SetCreatedBy(value); return *this;}
    inline ListEngagementsRequest& WithCreatedBy(Aws::Vector<Aws::String>&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline ListEngagementsRequest& AddCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy.push_back(value); return *this; }
    inline ListEngagementsRequest& AddCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy.push_back(std::move(value)); return *this; }
    inline ListEngagementsRequest& AddCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings representing engagement identifiers to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagementIdentifier() const{ return m_engagementIdentifier; }
    inline bool EngagementIdentifierHasBeenSet() const { return m_engagementIdentifierHasBeenSet; }
    inline void SetEngagementIdentifier(const Aws::Vector<Aws::String>& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = value; }
    inline void SetEngagementIdentifier(Aws::Vector<Aws::String>&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier = std::move(value); }
    inline ListEngagementsRequest& WithEngagementIdentifier(const Aws::Vector<Aws::String>& value) { SetEngagementIdentifier(value); return *this;}
    inline ListEngagementsRequest& WithEngagementIdentifier(Aws::Vector<Aws::String>&& value) { SetEngagementIdentifier(std::move(value)); return *this;}
    inline ListEngagementsRequest& AddEngagementIdentifier(const Aws::String& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(value); return *this; }
    inline ListEngagementsRequest& AddEngagementIdentifier(Aws::String&& value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(std::move(value)); return *this; }
    inline ListEngagementsRequest& AddEngagementIdentifier(const char* value) { m_engagementIdentifierHasBeenSet = true; m_engagementIdentifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings representing AWS Account IDs. Use this to exclude
     * engagements created by specific users. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeCreatedBy() const{ return m_excludeCreatedBy; }
    inline bool ExcludeCreatedByHasBeenSet() const { return m_excludeCreatedByHasBeenSet; }
    inline void SetExcludeCreatedBy(const Aws::Vector<Aws::String>& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy = value; }
    inline void SetExcludeCreatedBy(Aws::Vector<Aws::String>&& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy = std::move(value); }
    inline ListEngagementsRequest& WithExcludeCreatedBy(const Aws::Vector<Aws::String>& value) { SetExcludeCreatedBy(value); return *this;}
    inline ListEngagementsRequest& WithExcludeCreatedBy(Aws::Vector<Aws::String>&& value) { SetExcludeCreatedBy(std::move(value)); return *this;}
    inline ListEngagementsRequest& AddExcludeCreatedBy(const Aws::String& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy.push_back(value); return *this; }
    inline ListEngagementsRequest& AddExcludeCreatedBy(Aws::String&& value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy.push_back(std::move(value)); return *this; }
    inline ListEngagementsRequest& AddExcludeCreatedBy(const char* value) { m_excludeCreatedByHasBeenSet = true; m_excludeCreatedBy.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEngagementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This value is returned from a previous
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEngagementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that specifies the sort order of the results. </p>
     */
    inline const EngagementSort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const EngagementSort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(EngagementSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListEngagementsRequest& WithSort(const EngagementSort& value) { SetSort(value); return *this;}
    inline ListEngagementsRequest& WithSort(EngagementSort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Aws::String> m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagementIdentifier;
    bool m_engagementIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeCreatedBy;
    bool m_excludeCreatedByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    EngagementSort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
