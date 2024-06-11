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
  class ListPortfoliosResult
  {
  public:
    AWS_SERVICECATALOG_API ListPortfoliosResult();
    AWS_SERVICECATALOG_API ListPortfoliosResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListPortfoliosResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the portfolios.</p>
     */
    inline const Aws::Vector<PortfolioDetail>& GetPortfolioDetails() const{ return m_portfolioDetails; }
    inline void SetPortfolioDetails(const Aws::Vector<PortfolioDetail>& value) { m_portfolioDetails = value; }
    inline void SetPortfolioDetails(Aws::Vector<PortfolioDetail>&& value) { m_portfolioDetails = std::move(value); }
    inline ListPortfoliosResult& WithPortfolioDetails(const Aws::Vector<PortfolioDetail>& value) { SetPortfolioDetails(value); return *this;}
    inline ListPortfoliosResult& WithPortfolioDetails(Aws::Vector<PortfolioDetail>&& value) { SetPortfolioDetails(std::move(value)); return *this;}
    inline ListPortfoliosResult& AddPortfolioDetails(const PortfolioDetail& value) { m_portfolioDetails.push_back(value); return *this; }
    inline ListPortfoliosResult& AddPortfolioDetails(PortfolioDetail&& value) { m_portfolioDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListPortfoliosResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListPortfoliosResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListPortfoliosResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPortfoliosResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPortfoliosResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPortfoliosResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PortfolioDetail> m_portfolioDetails;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
