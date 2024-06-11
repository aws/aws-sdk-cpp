﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/PortfolioDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class UpdatePortfolioResult
  {
  public:
    AWS_SERVICECATALOG_API UpdatePortfolioResult();
    AWS_SERVICECATALOG_API UpdatePortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdatePortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the portfolio.</p>
     */
    inline const PortfolioDetail& GetPortfolioDetail() const{ return m_portfolioDetail; }
    inline void SetPortfolioDetail(const PortfolioDetail& value) { m_portfolioDetail = value; }
    inline void SetPortfolioDetail(PortfolioDetail&& value) { m_portfolioDetail = std::move(value); }
    inline UpdatePortfolioResult& WithPortfolioDetail(const PortfolioDetail& value) { SetPortfolioDetail(value); return *this;}
    inline UpdatePortfolioResult& WithPortfolioDetail(PortfolioDetail&& value) { SetPortfolioDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline UpdatePortfolioResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline UpdatePortfolioResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdatePortfolioResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline UpdatePortfolioResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePortfolioResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePortfolioResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePortfolioResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PortfolioDetail m_portfolioDetail;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
