/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreatePortfolioShareResult
  {
  public:
    AWS_SERVICECATALOG_API CreatePortfolioShareResult() = default;
    AWS_SERVICECATALOG_API CreatePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API CreatePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The portfolio shares a unique identifier that only returns if the portfolio
     * is shared to an organization node.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const { return m_portfolioShareToken; }
    template<typename PortfolioShareTokenT = Aws::String>
    void SetPortfolioShareToken(PortfolioShareTokenT&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::forward<PortfolioShareTokenT>(value); }
    template<typename PortfolioShareTokenT = Aws::String>
    CreatePortfolioShareResult& WithPortfolioShareToken(PortfolioShareTokenT&& value) { SetPortfolioShareToken(std::forward<PortfolioShareTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePortfolioShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;
    bool m_portfolioShareTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
