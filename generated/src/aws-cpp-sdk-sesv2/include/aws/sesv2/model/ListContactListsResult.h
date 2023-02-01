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
    AWS_SESV2_API ListContactListsResult();
    AWS_SESV2_API ListContactListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListContactListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The available contact lists.</p>
     */
    inline const Aws::Vector<ContactList>& GetContactLists() const{ return m_contactLists; }

    /**
     * <p>The available contact lists.</p>
     */
    inline void SetContactLists(const Aws::Vector<ContactList>& value) { m_contactLists = value; }

    /**
     * <p>The available contact lists.</p>
     */
    inline void SetContactLists(Aws::Vector<ContactList>&& value) { m_contactLists = std::move(value); }

    /**
     * <p>The available contact lists.</p>
     */
    inline ListContactListsResult& WithContactLists(const Aws::Vector<ContactList>& value) { SetContactLists(value); return *this;}

    /**
     * <p>The available contact lists.</p>
     */
    inline ListContactListsResult& WithContactLists(Aws::Vector<ContactList>&& value) { SetContactLists(std::move(value)); return *this;}

    /**
     * <p>The available contact lists.</p>
     */
    inline ListContactListsResult& AddContactLists(const ContactList& value) { m_contactLists.push_back(value); return *this; }

    /**
     * <p>The available contact lists.</p>
     */
    inline ListContactListsResult& AddContactLists(ContactList&& value) { m_contactLists.push_back(std::move(value)); return *this; }


    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline ListContactListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline ListContactListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string token indicating that there might be additional contact lists
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListContactLists</code> with the same parameters to retrieve the next page
     * of contact lists.</p>
     */
    inline ListContactListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContactList> m_contactLists;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
