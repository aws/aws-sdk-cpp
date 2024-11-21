/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notificationscontacts/model/EmailContact.h>
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
namespace NotificationsContacts
{
namespace Model
{
  class ListEmailContactsResult
  {
  public:
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult();
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEmailContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEmailContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEmailContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email contacts.</p>
     */
    inline const Aws::Vector<EmailContact>& GetEmailContacts() const{ return m_emailContacts; }
    inline void SetEmailContacts(const Aws::Vector<EmailContact>& value) { m_emailContacts = value; }
    inline void SetEmailContacts(Aws::Vector<EmailContact>&& value) { m_emailContacts = std::move(value); }
    inline ListEmailContactsResult& WithEmailContacts(const Aws::Vector<EmailContact>& value) { SetEmailContacts(value); return *this;}
    inline ListEmailContactsResult& WithEmailContacts(Aws::Vector<EmailContact>&& value) { SetEmailContacts(std::move(value)); return *this;}
    inline ListEmailContactsResult& AddEmailContacts(const EmailContact& value) { m_emailContacts.push_back(value); return *this; }
    inline ListEmailContactsResult& AddEmailContacts(EmailContact&& value) { m_emailContacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEmailContactsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEmailContactsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEmailContactsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<EmailContact> m_emailContacts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
