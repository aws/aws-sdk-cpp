/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/OpportunitySummary.h>
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
  class ListOpportunitiesResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult();
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListOpportunitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOpportunitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOpportunitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains minimal details for opportunities that match the
     * request criteria. This summary view provides a quick overview of relevant
     * opportunities.</p>
     */
    inline const Aws::Vector<OpportunitySummary>& GetOpportunitySummaries() const{ return m_opportunitySummaries; }
    inline void SetOpportunitySummaries(const Aws::Vector<OpportunitySummary>& value) { m_opportunitySummaries = value; }
    inline void SetOpportunitySummaries(Aws::Vector<OpportunitySummary>&& value) { m_opportunitySummaries = std::move(value); }
    inline ListOpportunitiesResult& WithOpportunitySummaries(const Aws::Vector<OpportunitySummary>& value) { SetOpportunitySummaries(value); return *this;}
    inline ListOpportunitiesResult& WithOpportunitySummaries(Aws::Vector<OpportunitySummary>&& value) { SetOpportunitySummaries(std::move(value)); return *this;}
    inline ListOpportunitiesResult& AddOpportunitySummaries(const OpportunitySummary& value) { m_opportunitySummaries.push_back(value); return *this; }
    inline ListOpportunitiesResult& AddOpportunitySummaries(OpportunitySummary&& value) { m_opportunitySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOpportunitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOpportunitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOpportunitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<OpportunitySummary> m_opportunitySummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
