/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/Contact.h>
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
namespace SESV2
{
namespace Model
{
  class ListContactsResult
  {
  public:
    AWS_SESV2_API ListContactsResult() = default;
    AWS_SESV2_API ListContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The contacts present in a specific contact list.</p>
     */
    inline const Aws::Vector<Contact>& GetContacts() const { return m_contacts; }
    template<typename ContactsT = Aws::Vector<Contact>>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Aws::Vector<Contact>>
    ListContactsResult& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    template<typename ContactsT = Contact>
    ListContactsResult& AddContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts.emplace_back(std::forward<ContactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional contacts available
     * to be listed. Copy this token to a subsequent call to <code>ListContacts</code>
     * with the same parameters to retrieve the next page of contacts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContactsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Contact> m_contacts;
    bool m_contactsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
