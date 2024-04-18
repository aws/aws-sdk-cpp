/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AccountLink.h>
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
namespace WorkSpaces
{
namespace Model
{
  class GetAccountLinkResult
  {
  public:
    AWS_WORKSPACES_API GetAccountLinkResult();
    AWS_WORKSPACES_API GetAccountLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API GetAccountLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline const AccountLink& GetAccountLink() const{ return m_accountLink; }

    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline void SetAccountLink(const AccountLink& value) { m_accountLink = value; }

    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline void SetAccountLink(AccountLink&& value) { m_accountLink = std::move(value); }

    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline GetAccountLinkResult& WithAccountLink(const AccountLink& value) { SetAccountLink(value); return *this;}

    /**
     * <p>The account link of the account link to retrieve.</p>
     */
    inline GetAccountLinkResult& WithAccountLink(AccountLink&& value) { SetAccountLink(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountLink m_accountLink;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
