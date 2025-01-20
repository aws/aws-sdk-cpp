/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementSummary.h>
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
  class ListEngagementsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of engagement summary objects.</p>
     */
    inline const Aws::Vector<EngagementSummary>& GetEngagementSummaryList() const{ return m_engagementSummaryList; }
    inline void SetEngagementSummaryList(const Aws::Vector<EngagementSummary>& value) { m_engagementSummaryList = value; }
    inline void SetEngagementSummaryList(Aws::Vector<EngagementSummary>&& value) { m_engagementSummaryList = std::move(value); }
    inline ListEngagementsResult& WithEngagementSummaryList(const Aws::Vector<EngagementSummary>& value) { SetEngagementSummaryList(value); return *this;}
    inline ListEngagementsResult& WithEngagementSummaryList(Aws::Vector<EngagementSummary>&& value) { SetEngagementSummaryList(std::move(value)); return *this;}
    inline ListEngagementsResult& AddEngagementSummaryList(const EngagementSummary& value) { m_engagementSummaryList.push_back(value); return *this; }
    inline ListEngagementsResult& AddEngagementSummaryList(EngagementSummary&& value) { m_engagementSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. This field will be null if
     * there are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementSummary> m_engagementSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
