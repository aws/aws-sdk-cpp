/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/AccountLink.h>
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
namespace WorkSpaces
{
namespace Model
{
  class ListAccountLinksResult
  {
  public:
    AWS_WORKSPACES_API ListAccountLinksResult();
    AWS_WORKSPACES_API ListAccountLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API ListAccountLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the account links.</p>
     */
    inline const Aws::Vector<AccountLink>& GetAccountLinks() const{ return m_accountLinks; }

    /**
     * <p>Information about the account links.</p>
     */
    inline void SetAccountLinks(const Aws::Vector<AccountLink>& value) { m_accountLinks = value; }

    /**
     * <p>Information about the account links.</p>
     */
    inline void SetAccountLinks(Aws::Vector<AccountLink>&& value) { m_accountLinks = std::move(value); }

    /**
     * <p>Information about the account links.</p>
     */
    inline ListAccountLinksResult& WithAccountLinks(const Aws::Vector<AccountLink>& value) { SetAccountLinks(value); return *this;}

    /**
     * <p>Information about the account links.</p>
     */
    inline ListAccountLinksResult& WithAccountLinks(Aws::Vector<AccountLink>&& value) { SetAccountLinks(std::move(value)); return *this;}

    /**
     * <p>Information about the account links.</p>
     */
    inline ListAccountLinksResult& AddAccountLinks(const AccountLink& value) { m_accountLinks.push_back(value); return *this; }

    /**
     * <p>Information about the account links.</p>
     */
    inline ListAccountLinksResult& AddAccountLinks(AccountLink&& value) { m_accountLinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAccountLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAccountLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListAccountLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAccountLinksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAccountLinksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAccountLinksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccountLink> m_accountLinks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
