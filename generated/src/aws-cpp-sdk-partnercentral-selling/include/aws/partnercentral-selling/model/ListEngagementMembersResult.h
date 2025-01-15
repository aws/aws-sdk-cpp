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
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Provides a list of engagement members. </p>
     */
    inline const Aws::Vector<EngagementMember>& GetEngagementMemberList() const{ return m_engagementMemberList; }
    inline void SetEngagementMemberList(const Aws::Vector<EngagementMember>& value) { m_engagementMemberList = value; }
    inline void SetEngagementMemberList(Aws::Vector<EngagementMember>&& value) { m_engagementMemberList = std::move(value); }
    inline ListEngagementMembersResult& WithEngagementMemberList(const Aws::Vector<EngagementMember>& value) { SetEngagementMemberList(value); return *this;}
    inline ListEngagementMembersResult& WithEngagementMemberList(Aws::Vector<EngagementMember>&& value) { SetEngagementMemberList(std::move(value)); return *this;}
    inline ListEngagementMembersResult& AddEngagementMemberList(const EngagementMember& value) { m_engagementMemberList.push_back(value); return *this; }
    inline ListEngagementMembersResult& AddEngagementMemberList(EngagementMember&& value) { m_engagementMemberList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results. If there are
     * more results available than can be returned in a single response, this token
     * will be present. Use this token in a subsequent request to retrieve the next
     * page of results. If there are no more results, this value will be null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementMember> m_engagementMemberList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
