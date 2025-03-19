/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ContactList.h>
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
  class ListContactListsResult
  {
  public:
    AWS_SESV2_API ListContactListsResult() = default;
    AWS_SESV2_API ListContactListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListContactListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The available contact lists.</p>
     */
    inline const Aws::Vector<ContactList>& GetContactLists() const { return m_contactLists; }
    template<typename ContactListsT = Aws::Vector<ContactList>>
    void SetContactLists(ContactListsT&& value) { m_contactListsHasBeenSet = true; m_contactLists = std::forward<ContactListsT>(value); }
    template<typename ContactListsT = Aws::Vector<ContactList>>
    ListContactListsResult& WithContactLists(ContactListsT&& value) { SetContactLists(std::forward<ContactListsT>(value)); return *this;}
    template<typename ContactListsT = ContactList>
    ListContactListsResult& AddContactLists(ContactListsT&& value) { m_contactListsHasBeenSet = true; m_contactLists.emplace_back(std::forward<ContactListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContactListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactList> m_contactLists;
    bool m_contactListsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
