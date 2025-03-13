/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNodeType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ListOrganizationPortfolioAccessRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationPortfolioAccess"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const { return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    template<typename AcceptLanguageT = Aws::String>
    void SetAcceptLanguage(AcceptLanguageT&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::forward<AcceptLanguageT>(value); }
    template<typename AcceptLanguageT = Aws::String>
    ListOrganizationPortfolioAccessRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier. For example, <code>port-2abcdext3y5fk</code>.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    ListOrganizationPortfolioAccessRequest& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization node type that will be returned in the output.</p> <ul> <li>
     * <p> <code>ORGANIZATION</code> - Organization that has access to the portfolio.
     * </p> </li> <li> <p> <code>ORGANIZATIONAL_UNIT</code> - Organizational unit that
     * has access to the portfolio within your organization.</p> </li> <li> <p>
     * <code>ACCOUNT</code> - Account that has access to the portfolio within your
     * organization.</p> </li> </ul>
     */
    inline OrganizationNodeType GetOrganizationNodeType() const { return m_organizationNodeType; }
    inline bool OrganizationNodeTypeHasBeenSet() const { return m_organizationNodeTypeHasBeenSet; }
    inline void SetOrganizationNodeType(OrganizationNodeType value) { m_organizationNodeTypeHasBeenSet = true; m_organizationNodeType = value; }
    inline ListOrganizationPortfolioAccessRequest& WithOrganizationNodeType(OrganizationNodeType value) { SetOrganizationNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const { return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    template<typename PageTokenT = Aws::String>
    void SetPageToken(PageTokenT&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::forward<PageTokenT>(value); }
    template<typename PageTokenT = Aws::String>
    ListOrganizationPortfolioAccessRequest& WithPageToken(PageTokenT&& value) { SetPageToken(std::forward<PageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListOrganizationPortfolioAccessRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    OrganizationNodeType m_organizationNodeType{OrganizationNodeType::NOT_SET};
    bool m_organizationNodeTypeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
