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
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = value; }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::move(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline void SetPortfolioId(const char* value) { m_portfolioIdHasBeenSet = true; m_portfolioId.assign(value); }

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}

    /**
     * <p>The portfolio identifier.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}


    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline const Aws::String& GetPrincipalARN() const{ return m_principalARN; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline bool PrincipalARNHasBeenSet() const { return m_principalARNHasBeenSet; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline void SetPrincipalARN(const Aws::String& value) { m_principalARNHasBeenSet = true; m_principalARN = value; }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline void SetPrincipalARN(Aws::String&& value) { m_principalARNHasBeenSet = true; m_principalARN = std::move(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline void SetPrincipalARN(const char* value) { m_principalARNHasBeenSet = true; m_principalARN.assign(value); }

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(const Aws::String& value) { SetPrincipalARN(value); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(Aws::String&& value) { SetPrincipalARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the principal (IAM user, role, or group). This field allows an ARN
     * with no <code>accountID</code> if <code>PrincipalType</code> is
     * <code>IAM_PATTERN</code>.</p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalARN(const char* value) { SetPrincipalARN(value); return *this;}


    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The supported value is <code>IAM</code> if you use a fully defined ARN, or
     * <code>IAM_PATTERN</code> if you use no <code>accountID</code>. </p>
     */
    inline DisassociatePrincipalFromPortfolioRequest& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

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
