/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MailDomainSummary.h>
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
namespace WorkMail
{
namespace Model
{
  class ListMailDomainsResult
  {
  public:
    AWS_WORKMAIL_API ListMailDomainsResult() = default;
    AWS_WORKMAIL_API ListMailDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMailDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline const Aws::Vector<MailDomainSummary>& GetMailDomains() const { return m_mailDomains; }
    template<typename MailDomainsT = Aws::Vector<MailDomainSummary>>
    void SetMailDomains(MailDomainsT&& value) { m_mailDomainsHasBeenSet = true; m_mailDomains = std::forward<MailDomainsT>(value); }
    template<typename MailDomainsT = Aws::Vector<MailDomainSummary>>
    ListMailDomainsResult& WithMailDomains(MailDomainsT&& value) { SetMailDomains(std::forward<MailDomainsT>(value)); return *this;}
    template<typename MailDomainsT = MailDomainSummary>
    ListMailDomainsResult& AddMailDomains(MailDomainsT&& value) { m_mailDomainsHasBeenSet = true; m_mailDomains.emplace_back(std::forward<MailDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMailDomainsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMailDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MailDomainSummary> m_mailDomains;
    bool m_mailDomainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
