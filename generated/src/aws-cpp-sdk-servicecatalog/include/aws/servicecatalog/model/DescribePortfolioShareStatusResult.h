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
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult();
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioShareStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the portfolio share operation. For example,
     * <code>share-6v24abcdefghi</code>.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}
    inline DescribePortfolioShareStatusResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The portfolio identifier.</p>
     */
    inline const Aws::String& GetPortfolioId() const{ return m_portfolioId; }
    inline void SetPortfolioId(const Aws::String& value) { m_portfolioId = value; }
    inline void SetPortfolioId(Aws::String&& value) { m_portfolioId = std::move(value); }
    inline void SetPortfolioId(const char* value) { m_portfolioId.assign(value); }
    inline DescribePortfolioShareStatusResult& WithPortfolioId(const Aws::String& value) { SetPortfolioId(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithPortfolioId(Aws::String&& value) { SetPortfolioId(std::move(value)); return *this;}
    inline DescribePortfolioShareStatusResult& WithPortfolioId(const char* value) { SetPortfolioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Organization node identifier. It can be either account id, organizational
     * unit id or organization id.</p>
     */
    inline const Aws::String& GetOrganizationNodeValue() const{ return m_organizationNodeValue; }
    inline void SetOrganizationNodeValue(const Aws::String& value) { m_organizationNodeValue = value; }
    inline void SetOrganizationNodeValue(Aws::String&& value) { m_organizationNodeValue = std::move(value); }
    inline void SetOrganizationNodeValue(const char* value) { m_organizationNodeValue.assign(value); }
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(const Aws::String& value) { SetOrganizationNodeValue(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(Aws::String&& value) { SetOrganizationNodeValue(std::move(value)); return *this;}
    inline DescribePortfolioShareStatusResult& WithOrganizationNodeValue(const char* value) { SetOrganizationNodeValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the portfolio share operation.</p>
     */
    inline const ShareStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ShareStatus& value) { m_status = value; }
    inline void SetStatus(ShareStatus&& value) { m_status = std::move(value); }
    inline DescribePortfolioShareStatusResult& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the portfolio share operation.</p>
     */
    inline const ShareDetails& GetShareDetails() const{ return m_shareDetails; }
    inline void SetShareDetails(const ShareDetails& value) { m_shareDetails = value; }
    inline void SetShareDetails(ShareDetails&& value) { m_shareDetails = std::move(value); }
    inline DescribePortfolioShareStatusResult& WithShareDetails(const ShareDetails& value) { SetShareDetails(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithShareDetails(ShareDetails&& value) { SetShareDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePortfolioShareStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePortfolioShareStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePortfolioShareStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_portfolioShareToken;

    Aws::String m_portfolioId;

    Aws::String m_organizationNodeValue;

    ShareStatus m_status;

    ShareDetails m_shareDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
