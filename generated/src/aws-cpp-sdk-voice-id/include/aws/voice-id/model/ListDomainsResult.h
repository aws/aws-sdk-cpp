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
    AWS_VOICEID_API ListDomainsResult();
    AWS_VOICEID_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<DomainSummary>& GetDomainSummaries() const{ return m_domainSummaries; }

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline void SetDomainSummaries(const Aws::Vector<DomainSummary>& value) { m_domainSummaries = value; }

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline void SetDomainSummaries(Aws::Vector<DomainSummary>&& value) { m_domainSummaries = std::move(value); }

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline ListDomainsResult& WithDomainSummaries(const Aws::Vector<DomainSummary>& value) { SetDomainSummaries(value); return *this;}

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline ListDomainsResult& WithDomainSummaries(Aws::Vector<DomainSummary>&& value) { SetDomainSummaries(std::move(value)); return *this;}

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline ListDomainsResult& AddDomainSummaries(const DomainSummary& value) { m_domainSummaries.push_back(value); return *this; }

    /**
     * <p>A list containing details about each domain in the Amazon Web Services
     * account.</p>
     */
    inline ListDomainsResult& AddDomainSummaries(DomainSummary&& value) { m_domainSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainSummary> m_domainSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
