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
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult() = default;
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONSCONTACTS_API ListEmailContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEmailContactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email contacts.</p>
     */
    inline const Aws::Vector<EmailContact>& GetEmailContacts() const { return m_emailContacts; }
    template<typename EmailContactsT = Aws::Vector<EmailContact>>
    void SetEmailContacts(EmailContactsT&& value) { m_emailContactsHasBeenSet = true; m_emailContacts = std::forward<EmailContactsT>(value); }
    template<typename EmailContactsT = Aws::Vector<EmailContact>>
    ListEmailContactsResult& WithEmailContacts(EmailContactsT&& value) { SetEmailContacts(std::forward<EmailContactsT>(value)); return *this;}
    template<typename EmailContactsT = EmailContact>
    ListEmailContactsResult& AddEmailContacts(EmailContactsT&& value) { m_emailContactsHasBeenSet = true; m_emailContacts.emplace_back(std::forward<EmailContactsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEmailContactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EmailContact> m_emailContacts;
    bool m_emailContactsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
