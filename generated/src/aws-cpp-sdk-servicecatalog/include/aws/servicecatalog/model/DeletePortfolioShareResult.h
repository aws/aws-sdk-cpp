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
    AWS_SERVICECATALOG_API DeletePortfolioShareResult();
    AWS_SERVICECATALOG_API DeletePortfolioShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DeletePortfolioShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline const Aws::String& GetPortfolioShareToken() const{ return m_portfolioShareToken; }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline void SetPortfolioShareToken(const Aws::String& value) { m_portfolioShareToken = value; }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline void SetPortfolioShareToken(Aws::String&& value) { m_portfolioShareToken = std::move(value); }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline void SetPortfolioShareToken(const char* value) { m_portfolioShareToken.assign(value); }

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline DeletePortfolioShareResult& WithPortfolioShareToken(const Aws::String& value) { SetPortfolioShareToken(value); return *this;}

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline DeletePortfolioShareResult& WithPortfolioShareToken(Aws::String&& value) { SetPortfolioShareToken(std::move(value)); return *this;}

    /**
     * <p>The portfolio share unique identifier. This will only be returned if delete
     * is made to an organization node.</p>
     */
    inline DeletePortfolioShareResult& WithPortfolioShareToken(const char* value) { SetPortfolioShareToken(value); return *this;}

  private:

    Aws::String m_portfolioShareToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
