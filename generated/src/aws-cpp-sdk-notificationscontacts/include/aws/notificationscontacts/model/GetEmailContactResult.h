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
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult() = default;
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONSCONTACTS_API GetEmailContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The email contact for the provided email address.</p>
     */
    inline const EmailContact& GetEmailContact() const { return m_emailContact; }
    template<typename EmailContactT = EmailContact>
    void SetEmailContact(EmailContactT&& value) { m_emailContactHasBeenSet = true; m_emailContact = std::forward<EmailContactT>(value); }
    template<typename EmailContactT = EmailContact>
    GetEmailContactResult& WithEmailContact(EmailContactT&& value) { SetEmailContact(std::forward<EmailContactT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEmailContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EmailContact m_emailContact;
    bool m_emailContactHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
