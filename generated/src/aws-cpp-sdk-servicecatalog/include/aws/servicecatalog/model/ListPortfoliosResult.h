/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/PortfolioDetail.h>
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
  class ListPortfoliosResult
  {
  public:
    AWS_SERVICECATALOG_API ListPortfoliosResult() = default;
    AWS_SERVICECATALOG_API ListPortfoliosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListPortfoliosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the portfolios.</p>
     */
    inline const Aws::Vector<PortfolioDetail>& GetPortfolioDetails() const { return m_portfolioDetails; }
    template<typename PortfolioDetailsT = Aws::Vector<PortfolioDetail>>
    void SetPortfolioDetails(PortfolioDetailsT&& value) { m_portfolioDetailsHasBeenSet = true; m_portfolioDetails = std::forward<PortfolioDetailsT>(value); }
    template<typename PortfolioDetailsT = Aws::Vector<PortfolioDetail>>
    ListPortfoliosResult& WithPortfolioDetails(PortfolioDetailsT&& value) { SetPortfolioDetails(std::forward<PortfolioDetailsT>(value)); return *this;}
    template<typename PortfolioDetailsT = PortfolioDetail>
    ListPortfoliosResult& AddPortfolioDetails(PortfolioDetailsT&& value) { m_portfolioDetailsHasBeenSet = true; m_portfolioDetails.emplace_back(std::forward<PortfolioDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListPortfoliosResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPortfoliosResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PortfolioDetail> m_portfolioDetails;
    bool m_portfolioDetailsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
