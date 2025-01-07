/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/SolutionSort.h>
#include <aws/partnercentral-selling/model/SolutionStatus.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListSolutionsRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListSolutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSolutions"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the solutions are listed in. Use
     * <code>AWS</code> to list solutions in the Amazon Web Services catalog, and
     * <code>Sandbox</code> to list solutions in a secure and isolated testing
     * environment.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListSolutionsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListSolutionsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListSolutionsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the solutions based on the category to which they belong. This allows
     * partners to search for solutions within specific categories, such as
     * <code>Software</code>, <code>Consulting</code>, or <code>Managed
     * Services</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::Vector<Aws::String>& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::Vector<Aws::String>&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ListSolutionsRequest& WithCategory(const Aws::Vector<Aws::String>& value) { SetCategory(value); return *this;}
    inline ListSolutionsRequest& WithCategory(Aws::Vector<Aws::String>&& value) { SetCategory(std::move(value)); return *this;}
    inline ListSolutionsRequest& AddCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }
    inline ListSolutionsRequest& AddCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category.push_back(std::move(value)); return *this; }
    inline ListSolutionsRequest& AddCategory(const char* value) { m_categoryHasBeenSet = true; m_category.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the solutions based on their unique identifier. Use this filter to
     * retrieve specific solutions by providing the solution's identifier for accurate
     * results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::Vector<Aws::String>& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::Vector<Aws::String>&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline ListSolutionsRequest& WithIdentifier(const Aws::Vector<Aws::String>& value) { SetIdentifier(value); return *this;}
    inline ListSolutionsRequest& WithIdentifier(Aws::Vector<Aws::String>&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListSolutionsRequest& AddIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier.push_back(value); return *this; }
    inline ListSolutionsRequest& AddIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier.push_back(std::move(value)); return *this; }
    inline ListSolutionsRequest& AddIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by a single call. This value must be
     * provided in the next call to retrieve the next set of results.</p> <p>Default:
     * 20</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSolutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSolutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSolutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSolutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that configures sorting done on the response. Default
     * <code>Sort.SortBy</code> is <code>Identifier</code>.</p>
     */
    inline const SolutionSort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const SolutionSort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(SolutionSort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListSolutionsRequest& WithSort(const SolutionSort& value) { SetSort(value); return *this;}
    inline ListSolutionsRequest& WithSort(SolutionSort&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters solutions based on their status. This filter helps partners manage
     * their solution portfolios effectively.</p>
     */
    inline const Aws::Vector<SolutionStatus>& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::Vector<SolutionStatus>& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::Vector<SolutionStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListSolutionsRequest& WithStatus(const Aws::Vector<SolutionStatus>& value) { SetStatus(value); return *this;}
    inline ListSolutionsRequest& WithStatus(Aws::Vector<SolutionStatus>&& value) { SetStatus(std::move(value)); return *this;}
    inline ListSolutionsRequest& AddStatus(const SolutionStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    inline ListSolutionsRequest& AddStatus(SolutionStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Aws::String> m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifier;
    bool m_identifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SolutionSort m_sort;
    bool m_sortHasBeenSet = false;

    Aws::Vector<SolutionStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
