/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNode.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class UpdatePortfolioShareRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API UpdatePortfolioShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortfolioShare"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdatePortfolioShareRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdatePortfolioShareRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline UpdatePortfolioShareRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline UpdatePortfolioShareRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline UpdatePortfolioShareRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline UpdatePortfolioShareRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline UpdatePortfolioShareRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline UpdatePortfolioShareRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline UpdatePortfolioShareRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const OrganizationNode& GetOrganizationNode() const{ return m_organizationNode; }

    
    inline bool OrganizationNodeHasBeenSet() const { return m_organizationNodeHasBeenSet; }

    
    inline void SetOrganizationNode(const OrganizationNode& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = value; }

    
    inline void SetOrganizationNode(OrganizationNode&& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = std::move(value); }

    
    inline UpdatePortfolioShareRequest& WithOrganizationNode(const OrganizationNode& value) { SetOrganizationNode(value); return *this;}

    
    inline UpdatePortfolioShareRequest& WithOrganizationNode(OrganizationNode&& value) { SetOrganizationNode(std::move(value)); return *this;}


    /**
     * <p>Enables or disables <code>TagOptions</code> sharing for the portfolio share.
     * If this field is not provided, the current state of TagOptions sharing on the
     * portfolio share will not be modified.</p>
     */
    inline bool GetShareTagOptions() const{ return m_shareTagOptions; }

    /**
     * <p>Enables or disables <code>TagOptions</code> sharing for the portfolio share.
     * If this field is not provided, the current state of TagOptions sharing on the
     * portfolio share will not be modified.</p>
     */
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }

    /**
     * <p>Enables or disables <code>TagOptions</code> sharing for the portfolio share.
     * If this field is not provided, the current state of TagOptions sharing on the
     * portfolio share will not be modified.</p>
     */
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }

    /**
     * <p>Enables or disables <code>TagOptions</code> sharing for the portfolio share.
     * If this field is not provided, the current state of TagOptions sharing on the
     * portfolio share will not be modified.</p>
     */
    inline UpdatePortfolioShareRequest& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}


    /**
     * <p>A flag to enables or disables <code>Principals</code> sharing in the
     * portfolio. If this field is not provided, the current state of the
     * <code>Principals</code> sharing on the portfolio share will not be modified.
     * </p>
     */
    inline bool GetSharePrincipals() const{ return m_sharePrincipals; }

    /**
     * <p>A flag to enables or disables <code>Principals</code> sharing in the
     * portfolio. If this field is not provided, the current state of the
     * <code>Principals</code> sharing on the portfolio share will not be modified.
     * </p>
     */
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }

    /**
     * <p>A flag to enables or disables <code>Principals</code> sharing in the
     * portfolio. If this field is not provided, the current state of the
     * <code>Principals</code> sharing on the portfolio share will not be modified.
     * </p>
     */
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }

    /**
     * <p>A flag to enables or disables <code>Principals</code> sharing in the
     * portfolio. If this field is not provided, the current state of the
     * <code>Principals</code> sharing on the portfolio share will not be modified.
     * </p>
     */
    inline UpdatePortfolioShareRequest& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    OrganizationNode m_organizationNode;
    bool m_organizationNodeHasBeenSet = false;

    bool m_shareTagOptions;
    bool m_shareTagOptionsHasBeenSet = false;

    bool m_sharePrincipals;
    bool m_sharePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
