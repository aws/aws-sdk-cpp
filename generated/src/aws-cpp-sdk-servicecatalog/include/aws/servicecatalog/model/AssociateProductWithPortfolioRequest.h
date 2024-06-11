/**
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
  class AssociateProductWithPortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API AssociateProductWithPortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateProductWithPortfolio"; }

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
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline AssociateProductWithPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }
    inline AssociateProductWithPortfolioRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}
    inline AssociateProductWithPortfolioRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}
    inline AssociateProductWithPortfolioRequest& WithProductId(const char* value) { SetProductId(value); return *this;}
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
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline AssociateProductWithPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the source portfolio.</p>
     */
    inline const Aws::String& GetSourcePortfolioId() const{ return m_sourcePortfolioId; }
    inline bool SourcePortfolioIdHasBeenSet() const { return m_sourcePortfolioIdHasBeenSet; }
    inline void SetSourcePortfolioId(const Aws::String& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = value; }
    inline void SetSourcePortfolioId(Aws::String&& value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId = std::move(value); }
    inline void SetSourcePortfolioId(const char* value) { m_sourcePortfolioIdHasBeenSet = true; m_sourcePortfolioId.assign(value); }
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(const Aws::String& value) { SetSourcePortfolioId(value); return *this;}
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(Aws::String&& value) { SetSourcePortfolioId(std::move(value)); return *this;}
    inline AssociateProductWithPortfolioRequest& WithSourcePortfolioId(const char* value) { SetSourcePortfolioId(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_sourcePortfolioId;
    bool m_sourcePortfolioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
