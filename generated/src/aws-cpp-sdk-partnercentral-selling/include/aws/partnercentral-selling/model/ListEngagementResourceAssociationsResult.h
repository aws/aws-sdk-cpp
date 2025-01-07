/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/EngagementResourceAssociationSummary.h>
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
  class ListEngagementResourceAssociationsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult();
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListEngagementResourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of engagement-resource association summaries. </p>
     */
    inline const Aws::Vector<EngagementResourceAssociationSummary>& GetEngagementResourceAssociationSummaries() const{ return m_engagementResourceAssociationSummaries; }
    inline void SetEngagementResourceAssociationSummaries(const Aws::Vector<EngagementResourceAssociationSummary>& value) { m_engagementResourceAssociationSummaries = value; }
    inline void SetEngagementResourceAssociationSummaries(Aws::Vector<EngagementResourceAssociationSummary>&& value) { m_engagementResourceAssociationSummaries = std::move(value); }
    inline ListEngagementResourceAssociationsResult& WithEngagementResourceAssociationSummaries(const Aws::Vector<EngagementResourceAssociationSummary>& value) { SetEngagementResourceAssociationSummaries(value); return *this;}
    inline ListEngagementResourceAssociationsResult& WithEngagementResourceAssociationSummaries(Aws::Vector<EngagementResourceAssociationSummary>&& value) { SetEngagementResourceAssociationSummaries(std::move(value)); return *this;}
    inline ListEngagementResourceAssociationsResult& AddEngagementResourceAssociationSummaries(const EngagementResourceAssociationSummary& value) { m_engagementResourceAssociationSummaries.push_back(value); return *this; }
    inline ListEngagementResourceAssociationsResult& AddEngagementResourceAssociationSummaries(EngagementResourceAssociationSummary&& value) { m_engagementResourceAssociationSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next set of results. Use this token in a subsequent
     * request to retrieve additional results if the response was truncated. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEngagementResourceAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEngagementResourceAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEngagementResourceAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEngagementResourceAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEngagementResourceAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEngagementResourceAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EngagementResourceAssociationSummary> m_engagementResourceAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
