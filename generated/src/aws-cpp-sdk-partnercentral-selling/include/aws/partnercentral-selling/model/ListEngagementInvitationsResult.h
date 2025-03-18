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
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing summaries of engagement invitations. Each summary
     * includes information such as the invitation title, invitation date, and the
     * current status of the invitation.</p>
     */
    inline const Aws::Vector<EngagementInvitationSummary>& GetEngagementInvitationSummaries() const { return m_engagementInvitationSummaries; }
    template<typename EngagementInvitationSummariesT = Aws::Vector<EngagementInvitationSummary>>
    void SetEngagementInvitationSummaries(EngagementInvitationSummariesT&& value) { m_engagementInvitationSummariesHasBeenSet = true; m_engagementInvitationSummaries = std::forward<EngagementInvitationSummariesT>(value); }
    template<typename EngagementInvitationSummariesT = Aws::Vector<EngagementInvitationSummary>>
    ListEngagementInvitationsResult& WithEngagementInvitationSummaries(EngagementInvitationSummariesT&& value) { SetEngagementInvitationSummaries(std::forward<EngagementInvitationSummariesT>(value)); return *this;}
    template<typename EngagementInvitationSummariesT = EngagementInvitationSummary>
    ListEngagementInvitationsResult& AddEngagementInvitationSummaries(EngagementInvitationSummariesT&& value) { m_engagementInvitationSummariesHasBeenSet = true; m_engagementInvitationSummaries.emplace_back(std::forward<EngagementInvitationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token returned when there are more results available than can be
     * returned in a single call. Use this token to retrieve additional pages of
     * engagement invitation summaries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementInvitationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngagementInvitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementInvitationSummary> m_engagementInvitationSummaries;
    bool m_engagementInvitationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
