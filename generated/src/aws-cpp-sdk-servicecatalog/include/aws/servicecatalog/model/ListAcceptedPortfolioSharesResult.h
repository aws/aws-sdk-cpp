﻿/**
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
  class ListAcceptedPortfolioSharesResult
  {
  public:
    AWS_SERVICECATALOG_API ListAcceptedPortfolioSharesResult();
    AWS_SERVICECATALOG_API ListAcceptedPortfolioSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListAcceptedPortfolioSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the portfolios.</p>
     */
    inline const Aws::Vector<PortfolioDetail>& GetPortfolioDetails() const{ return m_portfolioDetails; }

    /**
     * <p>Information about the portfolios.</p>
     */
    inline void SetPortfolioDetails(const Aws::Vector<PortfolioDetail>& value) { m_portfolioDetails = value; }

    /**
     * <p>Information about the portfolios.</p>
     */
    inline void SetPortfolioDetails(Aws::Vector<PortfolioDetail>&& value) { m_portfolioDetails = std::move(value); }

    /**
     * <p>Information about the portfolios.</p>
     */
    inline ListAcceptedPortfolioSharesResult& WithPortfolioDetails(const Aws::Vector<PortfolioDetail>& value) { SetPortfolioDetails(value); return *this;}

    /**
     * <p>Information about the portfolios.</p>
     */
    inline ListAcceptedPortfolioSharesResult& WithPortfolioDetails(Aws::Vector<PortfolioDetail>&& value) { SetPortfolioDetails(std::move(value)); return *this;}

    /**
     * <p>Information about the portfolios.</p>
     */
    inline ListAcceptedPortfolioSharesResult& AddPortfolioDetails(const PortfolioDetail& value) { m_portfolioDetails.push_back(value); return *this; }

    /**
     * <p>Information about the portfolios.</p>
     */
    inline ListAcceptedPortfolioSharesResult& AddPortfolioDetails(PortfolioDetail&& value) { m_portfolioDetails.push_back(std::move(value)); return *this; }


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
    inline ListAcceptedPortfolioSharesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListAcceptedPortfolioSharesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListAcceptedPortfolioSharesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAcceptedPortfolioSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAcceptedPortfolioSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAcceptedPortfolioSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PortfolioDetail> m_portfolioDetails;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
