/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PortfolioShareType.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class RejectPortfolioShareRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API RejectPortfolioShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectPortfolioShare"; }

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
    RejectPortfolioShareRequest& WithAcceptLanguage(AcceptLanguageT&& value) { SetAcceptLanguage(std::forward<AcceptLanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    inline bool PortfolioIdHasBeenSet() const { return m_portfolioIdHasBeenSet; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    RejectPortfolioShareRequest& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of shared portfolios to reject. The default is to reject imported
     * portfolios.</p> <ul> <li> <p> <code>AWS_ORGANIZATIONS</code> - Reject portfolios
     * shared by the management account of your organization.</p> </li> <li> <p>
     * <code>IMPORTED</code> - Reject imported portfolios.</p> </li> <li> <p>
     * <code>AWS_SERVICECATALOG</code> - Not supported. (Throws
     * ResourceNotFoundException.)</p> </li> </ul> <p>For example, <code>aws
     * servicecatalog reject-portfolio-share --portfolio-id "port-2qwzkwxt3y5fk"
     * --portfolio-share-type AWS_ORGANIZATIONS</code> </p>
     */
    inline PortfolioShareType GetPortfolioShareType() const { return m_portfolioShareType; }
    inline bool PortfolioShareTypeHasBeenSet() const { return m_portfolioShareTypeHasBeenSet; }
    inline void SetPortfolioShareType(PortfolioShareType value) { m_portfolioShareTypeHasBeenSet = true; m_portfolioShareType = value; }
    inline RejectPortfolioShareRequest& WithPortfolioShareType(PortfolioShareType value) { SetPortfolioShareType(value); return *this;}
    ///@}
  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    PortfolioShareType m_portfolioShareType{PortfolioShareType::NOT_SET};
    bool m_portfolioShareTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
