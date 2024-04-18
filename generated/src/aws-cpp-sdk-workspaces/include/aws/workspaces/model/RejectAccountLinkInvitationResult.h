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
  class RejectAccountLinkInvitationResult
  {
  public:
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult();
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API RejectAccountLinkInvitationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the account link.</p>
     */
    inline const AccountLink& GetAccountLink() const{ return m_accountLink; }

    /**
     * <p>Information about the account link.</p>
     */
    inline void SetAccountLink(const AccountLink& value) { m_accountLink = value; }

    /**
     * <p>Information about the account link.</p>
     */
    inline void SetAccountLink(AccountLink&& value) { m_accountLink = std::move(value); }

    /**
     * <p>Information about the account link.</p>
     */
    inline RejectAccountLinkInvitationResult& WithAccountLink(const AccountLink& value) { SetAccountLink(value); return *this;}

    /**
     * <p>Information about the account link.</p>
     */
    inline RejectAccountLinkInvitationResult& WithAccountLink(AccountLink&& value) { SetAccountLink(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RejectAccountLinkInvitationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RejectAccountLinkInvitationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RejectAccountLinkInvitationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountLink m_accountLink;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
