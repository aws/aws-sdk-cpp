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
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult();
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdatePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline UpdatePortfolioShareResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline UpdatePortfolioShareResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}

    /**
     * <p>The token that tracks the status of the <code>UpdatePortfolioShare</code>
     * operation for external account to account or organizational type sharing.</p>
     */
    inline UpdatePortfolioShareResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}


    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline void SetStatus(const ShareStatus& value) { m_status = value; }

    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline void SetStatus(ShareStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline UpdatePortfolioShareResult& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of <code>UpdatePortfolioShare</code> operation. You can also
     * obtain the operation status using <code>DescribePortfolioShareStatus</code> API.
     * </p>
     */
    inline UpdatePortfolioShareResult& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_portfolioShareToken;

    ShareStatus m_status;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
