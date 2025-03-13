/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/DomainSummary.h>
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
namespace VoiceID
{
namespace Model
{
  class ListDomainsResult
  {
  public:
    AWS_VOICEID_API ListDomainsResult() = default;
    AWS_VOICEID_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomainSummaries() const { return m_domainSummaries; }
    template<typename DomainSummariesT = Aws::Vector<DomainSummary>>
    void SetDomainSummaries(DomainSummariesT&& value) { m_domainSummariesHasBeenSet = true; m_domainSummaries = std::forward<DomainSummariesT>(value); }
    template<typename DomainSummariesT = Aws::Vector<DomainSummary>>
    ListDomainsResult& WithDomainSummaries(DomainSummariesT&& value) { SetDomainSummaries(std::forward<DomainSummariesT>(value)); return *this;}
    template<typename DomainSummariesT = DomainSummary>
    ListDomainsResult& AddDomainSummaries(DomainSummariesT&& value) { m_domainSummariesHasBeenSet = true; m_domainSummaries.emplace_back(std::forward<DomainSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainSummary> m_domainSummaries;
    bool m_domainSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
