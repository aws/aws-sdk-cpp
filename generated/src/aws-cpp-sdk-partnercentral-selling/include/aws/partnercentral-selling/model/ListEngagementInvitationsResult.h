/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementInvitationSummary.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class ListEngagementInvitationsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing summaries of engagement invitations. Each summary
     * includes information such as the invitation title, invitation date, and the
     * current status of the invitation.</p>
     */
    inline const Aws::Vector<EngagementInvitationSummary>& GetEngagementInvitationSummaries() const{ return m_engagementInvitationSummaries; }
    inline void SetEngagementInvitationSummaries(const Aws::Vector<EngagementInvitationSummary>& value) { m_engagementInvitationSummaries = value; }
    inline void SetEngagementInvitationSummaries(Aws::Vector<EngagementInvitationSummary>&& value) { m_engagementInvitationSummaries = std::move(value); }
    inline ListEngagementInvitationsResult& WithEngagementInvitationSummaries(const Aws::Vector<EngagementInvitationSummary>& value) { SetEngagementInvitationSummaries(value); return *this;}
    inline ListEngagementInvitationsResult& WithEngagementInvitationSummaries(Aws::Vector<EngagementInvitationSummary>&& value) { SetEngagementInvitationSummaries(std::move(value)); return *this;}
    inline ListEngagementInvitationsResult& AddEngagementInvitationSummaries(const EngagementInvitationSummary& value) { m_engagementInvitationSummaries.push_back(value); return *this; }
    inline ListEngagementInvitationsResult& AddEngagementInvitationSummaries(EngagementInvitationSummary&& value) { m_engagementInvitationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token returned when there are more results available than can be
     * returned in a single call. Use this token to retrieve additional pages of
     * engagement invitation summaries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementInvitationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementInvitationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementInvitationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementInvitationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementInvitationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementInvitationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementInvitationSummary> m_engagementInvitationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
