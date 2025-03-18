/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementMember.h>
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
  class ListEngagementMembersResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Provides a list of engagement members. </p>
     */
    inline const Aws::Vector<EngagementMember>& GetEngagementMemberList() const { return m_engagementMemberList; }
    template<typename EngagementMemberListT = Aws::Vector<EngagementMember>>
    void SetEngagementMemberList(EngagementMemberListT&& value) { m_engagementMemberListHasBeenSet = true; m_engagementMemberList = std::forward<EngagementMemberListT>(value); }
    template<typename EngagementMemberListT = Aws::Vector<EngagementMember>>
    ListEngagementMembersResult& WithEngagementMemberList(EngagementMemberListT&& value) { SetEngagementMemberList(std::forward<EngagementMemberListT>(value)); return *this;}
    template<typename EngagementMemberListT = EngagementMember>
    ListEngagementMembersResult& AddEngagementMemberList(EngagementMemberListT&& value) { m_engagementMemberListHasBeenSet = true; m_engagementMemberList.emplace_back(std::forward<EngagementMemberListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results. If there are
     * more results available than can be returned in a single response, this token
     * will be present. Use this token in a subsequent request to retrieve the next
     * page of results. If there are no more results, this value will be null. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEngagementMembersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEngagementMembersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementMember> m_engagementMemberList;
    bool m_engagementMemberListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
