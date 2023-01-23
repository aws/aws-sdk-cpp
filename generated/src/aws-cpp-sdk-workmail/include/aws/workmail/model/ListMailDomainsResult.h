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
    AWS_WORKMAIL_API ListMailDomainsResult();
    AWS_WORKMAIL_API ListMailDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMailDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline const Aws::Vector<MailDomainSummary>& GetMailDomains() const{ return m_mailDomains; }

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline void SetMailDomains(const Aws::Vector<MailDomainSummary>& value) { m_mailDomains = value; }

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline void SetMailDomains(Aws::Vector<MailDomainSummary>&& value) { m_mailDomains = std::move(value); }

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline ListMailDomainsResult& WithMailDomains(const Aws::Vector<MailDomainSummary>& value) { SetMailDomains(value); return *this;}

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline ListMailDomainsResult& WithMailDomains(Aws::Vector<MailDomainSummary>&& value) { SetMailDomains(std::move(value)); return *this;}

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline ListMailDomainsResult& AddMailDomains(const MailDomainSummary& value) { m_mailDomains.push_back(value); return *this; }

    /**
     * <p>The list of mail domain summaries, specifying domains that exist in the
     * specified WorkMail organization, along with the information about whether the
     * domain is or isn't the default.</p>
     */
    inline ListMailDomainsResult& AddMailDomains(MailDomainSummary&& value) { m_mailDomains.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListMailDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListMailDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value becomes
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListMailDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MailDomainSummary> m_mailDomains;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
