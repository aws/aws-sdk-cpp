/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListPortfolioAccessResult
  {
  public:
    AWS_SERVICECATALOG_API ListPortfolioAccessResult();
    AWS_SERVICECATALOG_API ListPortfolioAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListPortfolioAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIds = value; }

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIds = std::move(value); }

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline ListPortfolioAccessResult& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline ListPortfolioAccessResult& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline ListPortfolioAccessResult& AddAccountIds(const Aws::String& value) { m_accountIds.push_back(value); return *this; }

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline ListPortfolioAccessResult& AddAccountIds(Aws::String&& value) { m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Information about the Amazon Web Services accounts with access to the
     * portfolio.</p>
     */
    inline ListPortfolioAccessResult& AddAccountIds(const char* value) { m_accountIds.push_back(value); return *this; }


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
    inline ListPortfolioAccessResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListPortfolioAccessResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListPortfolioAccessResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIds;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
