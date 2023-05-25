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
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult();
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribePortfolioSharesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribePortfolioSharesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline DescribePortfolioSharesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline const Aws::Vector<PortfolioShareDetail>& GetPortfolioShareDetails() const{ return m_portfolioShareDetails; }

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline void SetPortfolioShareDetails(const Aws::Vector<PortfolioShareDetail>& value) { m_portfolioShareDetails = value; }

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline void SetPortfolioShareDetails(Aws::Vector<PortfolioShareDetail>&& value) { m_portfolioShareDetails = std::move(value); }

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline DescribePortfolioSharesResult& WithPortfolioShareDetails(const Aws::Vector<PortfolioShareDetail>& value) { SetPortfolioShareDetails(value); return *this;}

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline DescribePortfolioSharesResult& WithPortfolioShareDetails(Aws::Vector<PortfolioShareDetail>&& value) { SetPortfolioShareDetails(std::move(value)); return *this;}

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline DescribePortfolioSharesResult& AddPortfolioShareDetails(const PortfolioShareDetail& value) { m_portfolioShareDetails.push_back(value); return *this; }

    /**
     * <p>Summaries about each of the portfolio shares.</p>
     */
    inline DescribePortfolioSharesResult& AddPortfolioShareDetails(PortfolioShareDetail&& value) { m_portfolioShareDetails.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePortfolioSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePortfolioSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePortfolioSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextPageToken;

    Aws::Vector<PortfolioShareDetail> m_portfolioShareDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
