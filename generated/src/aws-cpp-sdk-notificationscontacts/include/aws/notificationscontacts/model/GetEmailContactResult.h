/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/notificationscontacts/model/EmailContact.h>
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
namespace NotificationsContacts
{
namespace Model
{
  class GetEmailContactResult
  {
  public:
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult();
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email contact for the provided email address.</p>
     */
    inline const EmailContact& GetEmailContact() const{ return m_emailContact; }
    inline void SetEmailContact(const EmailContact& value) { m_emailContact = value; }
    inline void SetEmailContact(EmailContact&& value) { m_emailContact = std::move(value); }
    inline GetEmailContactResult& WithEmailContact(const EmailContact& value) { SetEmailContact(value); return *this;}
    inline GetEmailContactResult& WithEmailContact(EmailContact&& value) { SetEmailContact(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEmailContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEmailContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEmailContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EmailContact m_emailContact;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
