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
  class DescribePortfolioShareStatusRequest : public ServiceCatalogRequest
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePortfolioShareStatus"; }

    AWS_SERVICECATALOG_API Aws::String SerializePayload() const override;

    AWS_SERVICECATALOG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The token for the portfolio share operation. This token is returned either by
     * CreatePortfolioShare or by DeletePortfolioShare.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const { return m_portfolioShareToken; }
    inline bool PortfolioShareTokenHasBeenSet() const { return m_portfolioShareTokenHasBeenSet; }
    template<typename PortfolioShareTokenT = Aws::String>
    void SetPortfolioShareToken(PortfolioShareTokenT&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::forward<PortfolioShareTokenT>(value); }
    template<typename PortfolioShareTokenT = Aws::String>
    DescribePortfolioShareStatusRequest& WithPortfolioShareToken(PortfolioShareTokenT&& value) { SetPortfolioShareToken(std::forward<PortfolioShareTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;
    bool m_portfolioShareTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
