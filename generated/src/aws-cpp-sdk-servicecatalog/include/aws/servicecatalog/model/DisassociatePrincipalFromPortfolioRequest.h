/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PrincipalType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class DisassociatePrincipalFromPortfolioRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DisassociatePrincipalFromPortfolioRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociatePrincipalFromPortfolio"; }

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
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}
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
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the principal (user, role, or group). This field allows an ARN
     * with no <code>accountID</code> with or without wildcard characters if
     * <code>PrincipalType</code> is <code>IAM_PATTERN</code>.</p>
     */
    inline const Aws::String& GetPrincipalARN() const{ return m_principalARN; }
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }
    inline void SetPrincipalARN(const Aws::String& value) { m_principalARNHasBeenSet = true; m_principalARN = value; }
    inline void SetPrincipalARN(Aws::String&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::move(value); }
    inline void SetPrincipalARN(const char* value) { m_principalARNHasBeenSet = true; m_principalARN.assign(value); }
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(const Aws::String& value) { SetPrincipalARN(value); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(Aws::String&& value) { SetPrincipalARN(std::move(value)); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(const char* value) { SetPrincipalARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you specify an <code>IAM</code> ARN with no
     * AccountId, with or without wildcard characters. </p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_principalARN;
    bool m_principalARNHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
