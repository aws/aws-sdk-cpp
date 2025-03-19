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
  class DeletePortfolioShareResult
  {
  public:
    AWS_SERVICECATALOG_API DeletePortfolioShareResult() = default;
    AWS_SERVICECATALOG_API DeletePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DeletePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const { return m_portfolioShareToken; }
    template<typename PortfolioShareTokenT = Aws::String>
    void SetPortfolioShareToken(PortfolioShareTokenT&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::forward<PortfolioShareTokenT>(value); }
    template<typename PortfolioShareTokenT = Aws::String>
    DeletePortfolioShareResult& WithPortfolioShareToken(PortfolioShareTokenT&& value) { SetPortfolioShareToken(std::forward<PortfolioShareTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeletePortfolioShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
