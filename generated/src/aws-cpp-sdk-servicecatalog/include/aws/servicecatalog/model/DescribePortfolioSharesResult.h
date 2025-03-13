/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/PortfolioShareDetail.h>
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
  class DescribePortfolioSharesResult
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult() = default;
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    DescribePortfolioSharesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline const Aws::Vector<PortfolioShareDetail>& GetPortfolioShareDetails() const { return m_portfolioShareDetails; }
    template<typename PortfolioShareDetailsT = Aws::Vector<PortfolioShareDetail>>
    void SetPortfolioShareDetails(PortfolioShareDetailsT&& value) { m_portfolioShareDetailsHasBeenSet = true; m_portfolioShareDetails = std::forward<PortfolioShareDetailsT>(value); }
    template<typename PortfolioShareDetailsT = Aws::Vector<PortfolioShareDetail>>
    DescribePortfolioSharesResult& WithPortfolioShareDetails(PortfolioShareDetailsT&& value) { SetPortfolioShareDetails(std::forward<PortfolioShareDetailsT>(value)); return *this;}
    template<typename PortfolioShareDetailsT = PortfolioShareDetail>
    DescribePortfolioSharesResult& AddPortfolioShareDetails(PortfolioShareDetailsT&& value) { m_portfolioShareDetailsHasBeenSet = true; m_portfolioShareDetails.emplace_back(std::forward<PortfolioShareDetailsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePortfolioSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::Vector<PortfolioShareDetail> m_portfolioShareDetails;
    bool m_portfolioShareDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
