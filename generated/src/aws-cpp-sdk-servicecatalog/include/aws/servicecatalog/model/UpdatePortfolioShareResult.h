/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ShareStatus.h>
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
  class UpdatePortfolioShareResult
  {
  public:
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult() = default;
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const { return m_portfolioShareToken; }
    template<typename PortfolioShareTokenT = Aws::String>
    void SetPortfolioShareToken(PortfolioShareTokenT&& value) { m_portfolioShareTokenHasBeenSet = true; m_portfolioShareToken = std::forward<PortfolioShareTokenT>(value); }
    template<typename PortfolioShareTokenT = Aws::String>
    UpdatePortfolioShareResult& WithPortfolioShareToken(PortfolioShareTokenT&& value) { SetPortfolioShareToken(std::forward<PortfolioShareTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline ShareStatus GetStatus() const { return m_status; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdatePortfolioShareResult& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePortfolioShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;
    bool m_portfolioShareTokenHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
