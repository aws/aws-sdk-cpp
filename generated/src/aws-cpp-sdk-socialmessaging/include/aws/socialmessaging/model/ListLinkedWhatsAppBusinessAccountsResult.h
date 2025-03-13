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
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult() = default;
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SOCIALMESSAGING_API ListLinkedWhatsAppBusinessAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of WhatsApp Business Accounts linked to your Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<LinkedWhatsAppBusinessAccountSummary>& GetLinkedAccounts() const { return m_linkedAccounts; }
    template<typename LinkedAccountsT = Aws::Vector<LinkedWhatsAppBusinessAccountSummary>>
    void SetLinkedAccounts(LinkedAccountsT&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts = std::forward<LinkedAccountsT>(value); }
    template<typename LinkedAccountsT = Aws::Vector<LinkedWhatsAppBusinessAccountSummary>>
    ListLinkedWhatsAppBusinessAccountsResult& WithLinkedAccounts(LinkedAccountsT&& value) { SetLinkedAccounts(std::forward<LinkedAccountsT>(value)); return *this;}
    template<typename LinkedAccountsT = LinkedWhatsAppBusinessAccountSummary>
    ListLinkedWhatsAppBusinessAccountsResult& AddLinkedAccounts(LinkedAccountsT&& value) { m_linkedAccountsHasBeenSet = true; m_linkedAccounts.emplace_back(std::forward<LinkedAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLinkedWhatsAppBusinessAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLinkedWhatsAppBusinessAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LinkedWhatsAppBusinessAccountSummary> m_linkedAccounts;
    bool m_linkedAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
