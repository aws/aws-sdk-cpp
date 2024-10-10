/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/model/LinkedWhatsAppBusinessAccountSummary.h>
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
namespace SocialMessaging
{
namespace Model
{
  class ListLinkedWhatsAppBusinessAccountsResult
  {
  public:
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult();
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of WhatsApp Business Accounts linked to your Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<LinkedWhatsAppBusinessAccountSummary>& GetLinkedAccounts() const{ return m_linkedAccounts; }
    inline void SetLinkedAccounts(const Aws::Vector<LinkedWhatsAppBusinessAccountSummary>& value) { m_linkedAccounts = value; }
    inline void SetLinkedAccounts(Aws::Vector<LinkedWhatsAppBusinessAccountSummary>&& value) { m_linkedAccounts = std::move(value); }
    inline ListLinkedWhatsAppBusinessAccountsResult& WithLinkedAccounts(const Aws::Vector<LinkedWhatsAppBusinessAccountSummary>& value) { SetLinkedAccounts(value); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& WithLinkedAccounts(Aws::Vector<LinkedWhatsAppBusinessAccountSummary>&& value) { SetLinkedAccounts(std::move(value)); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& AddLinkedAccounts(const LinkedWhatsAppBusinessAccountSummary& value) { m_linkedAccounts.push_back(value); return *this; }
    inline ListLinkedWhatsAppBusinessAccountsResult& AddLinkedAccounts(LinkedWhatsAppBusinessAccountSummary&& value) { m_linkedAccounts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLinkedWhatsAppBusinessAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLinkedWhatsAppBusinessAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLinkedWhatsAppBusinessAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LinkedWhatsAppBusinessAccountSummary> m_linkedAccounts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
