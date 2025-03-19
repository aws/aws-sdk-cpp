/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ShareStatus.h>
#include <aws/servicecatalog/model/ShareDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class DescribePortfolioShareStatusResult
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult() = default;
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const { return m_portfolioShareToken; }
    template<typename PortfolioShareTokenT = Aws::String>
    void SetPortfolioShareToken(PortfolioShareTokenT&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::forward<PortfolioShareTokenT>(value); }
    template<typename PortfolioShareTokenT = Aws::String>
    DescribePortfolioShareStatusResult& WithPortfolioShareToken(PortfolioShareTokenT&& value) { SetPortfolioShareToken(std::forward<PortfolioShareTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const { return m_portfolioId; }
    template<typename PortfolioIdT = Aws::String>
    void SetPortfolioId(PortfolioIdT&& value) { m_portfolioIdHasBeenSet = true; m_portfolioId = std::forward<PortfolioIdT>(value); }
    template<typename PortfolioIdT = Aws::String>
    DescribePortfolioShareStatusResult& WithPortfolioId(PortfolioIdT&& value) { SetPortfolioId(std::forward<PortfolioIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline const Aws::String& GetOrganizationNodeValue() const { return m_organizationNodeValue; }
    template<typename OrganizationNodeValueT = Aws::String>
    void SetOrganizationNodeValue(OrganizationNodeValueT&& value) { m_organizationNodeValueHasBeenSet = true; m_organizationNodeValue = std::forward<OrganizationNodeValueT>(value); }
    template<typename OrganizationNodeValueT = Aws::String>
    DescribePortfolioShareStatusResult& WithOrganizationNodeValue(OrganizationNodeValueT&& value) { SetOrganizationNodeValue(std::forward<OrganizationNodeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline ShareStatus GetStatus() const { return m_status; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribePortfolioShareStatusResult& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline const ShareDetails& GetShareDetails() const { return m_shareDetails; }
    template<typename ShareDetailsT = ShareDetails>
    void SetShareDetails(ShareDetailsT&& value) { m_shareDetailsHasBeenSet = true; m_shareDetails = std::forward<ShareDetailsT>(value); }
    template<typename ShareDetailsT = ShareDetails>
    DescribePortfolioShareStatusResult& WithShareDetails(ShareDetailsT&& value) { SetShareDetails(std::forward<ShareDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePortfolioShareStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;
    bool m_portfolioShareTokenHasBeenSet = false;

    Aws::String m_portfolioId;
    bool m_portfolioIdHasBeenSet = false;

    Aws::String m_organizationNodeValue;
    bool m_organizationNodeValueHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ShareDetails m_shareDetails;
    bool m_shareDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
