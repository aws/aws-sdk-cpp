﻿/**
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
  class CreatePortfolioShareRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API CreatePortfolioShareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePortfolioShare"; }

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
    inline CreatePortfolioShareRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline CreatePortfolioShareRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline CreatePortfolioShareRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
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
    inline CreatePortfolioShareRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline CreatePortfolioShareRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline CreatePortfolioShareRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID. For example,
     * <code>123456789012</code>.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CreatePortfolioShareRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CreatePortfolioShareRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CreatePortfolioShareRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization node to whom you are going to share. When you pass
     * <code>OrganizationNode</code>, it creates <code>PortfolioShare</code> for all of
     * the Amazon Web Services accounts that are associated to the
     * <code>OrganizationNode</code>. The output returns a
     * <code>PortfolioShareToken</code>, which enables the administrator to monitor the
     * status of the <code>PortfolioShare</code> creation process.</p>
     */
    inline const OrganizationNode& GetOrganizationNode() const{ return m_organizationNode; }
    inline bool OrganizationNodeHasBeenSet() const { return m_organizationNodeHasBeenSet; }
    inline void SetOrganizationNode(const OrganizationNode& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = value; }
    inline void SetOrganizationNode(OrganizationNode&& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = std::move(value); }
    inline CreatePortfolioShareRequest& WithOrganizationNode(const OrganizationNode& value) { SetOrganizationNode(value); return *this;}
    inline CreatePortfolioShareRequest& WithOrganizationNode(OrganizationNode&& value) { SetOrganizationNode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables <code>TagOptions </code> sharing when creating the
     * portfolio share. If this flag is not provided, TagOptions sharing is
     * disabled.</p>
     */
    inline bool GetShareTagOptions() const{ return m_shareTagOptions; }
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }
    inline CreatePortfolioShareRequest& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is only supported for portfolios with an
     * <b>OrganizationalNode</b> Type of <code>ORGANIZATION</code> or
     * <code>ORGANIZATIONAL_UNIT</code>. </p> <p>Enables or disables
     * <code>Principal</code> sharing when creating the portfolio share. If you do
     * <b>not</b> provide this flag, principal sharing is disabled. </p> <p>When you
     * enable Principal Name Sharing for a portfolio share, the share recipient account
     * end users with a principal that matches any of the associated IAM patterns can
     * provision products from the portfolio. Once shared, the share recipient can view
     * associations of <code>PrincipalType</code>: <code>IAM_PATTERN</code> on their
     * portfolio. You can create the principals in the recipient account before or
     * after creating the share. </p>
     */
    inline bool GetSharePrincipals() const{ return m_sharePrincipals; }
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }
    inline CreatePortfolioShareRequest& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}
    ///@}
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
