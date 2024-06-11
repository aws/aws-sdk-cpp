﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class ListPrincipalsForPortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API ListPrincipalsForPortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrincipalsForPortfolio"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The language code.</p> <ul> <li> <p> <code>jp</code> - Japanese</p> </li>
     * <li> <p> <code>zh</code> - Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }
    inline ListPrincipalsForPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }
    inline ListPrincipalsForPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListPrincipalsForPortfolioRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }
    inline ListPrincipalsForPortfolioRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}
    inline ListPrincipalsForPortfolioRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
