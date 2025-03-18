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
    AWS_SERVICECATALOG_API UpdatePortfolioShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePortfolioShare"; }

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
    UpdatePortfolioShareRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the portfolio for which the share will be
     * updated.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    UpdatePortfolioShareRequest& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account Id of the recipient account. This field is
     * required when updating an external account to account type share.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UpdatePortfolioShareRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OrganizationNode& GetOrganizationNode() const { return m_organizationNode; }
    inline bool OrganizationNodeHasBeenSet() const { return m_organizationNodeHasBeenSet; }
    template<typename OrganizationNodeT = OrganizationNode>
    void SetOrganizationNode(OrganizationNodeT&& value) { m_organizationNodeHasBeenSet = true; m_organizationNode = std::forward<OrganizationNodeT>(value); }
    template<typename OrganizationNodeT = OrganizationNode>
    UpdatePortfolioShareRequest& WithOrganizationNode(OrganizationNodeT&& value) { SetOrganizationNode(std::forward<OrganizationNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables <code>TagOptions</code> sharing for the portfolio share.
     * If this field is not provided, the current state of TagOptions sharing on the
     * portfolio share will not be modified.</p>
     */
    inline bool GetShareTagOptions() const { return m_shareTagOptions; }
    inline bool ShareTagOptionsHasBeenSet() const { return m_shareTagOptionsHasBeenSet; }
    inline void SetShareTagOptions(bool value) { m_shareTagOptionsHasBeenSet = true; m_shareTagOptions = value; }
    inline UpdatePortfolioShareRequest& WithShareTagOptions(bool value) { SetShareTagOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag to enables or disables <code>Principals</code> sharing in the
     * portfolio. If this field is not provided, the current state of the
     * <code>Principals</code> sharing on the portfolio share will not be modified.
     * </p>
     */
    inline bool GetSharePrincipals() const { return m_sharePrincipals; }
    inline bool SharePrincipalsHasBeenSet() const { return m_sharePrincipalsHasBeenSet; }
    inline void SetSharePrincipals(bool value) { m_sharePrincipalsHasBeenSet = true; m_sharePrincipals = value; }
    inline UpdatePortfolioShareRequest& WithSharePrincipals(bool value) { SetSharePrincipals(value); return *this;}
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

    bool m_shareTagOptions{false};
    bool m_shareTagOptionsHasBeenSet = false;

    bool m_sharePrincipals{false};
    bool m_sharePrincipalsHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
