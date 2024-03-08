/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/IncidentRecordSummary.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListIncidentRecordsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult();
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of each listed incident record.</p>
     */
    inline const Aws::Vector<IncidentRecordSummary>& GetIncidentRecordSummaries() const{ return m_incidentRecordSummaries; }

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline void SetIncidentRecordSummaries(const Aws::Vector<IncidentRecordSummary>& value) { m_incidentRecordSummaries = value; }

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline void SetIncidentRecordSummaries(Aws::Vector<IncidentRecordSummary>&& value) { m_incidentRecordSummaries = std::move(value); }

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline ListIncidentRecordsResult& WithIncidentRecordSummaries(const Aws::Vector<IncidentRecordSummary>& value) { SetIncidentRecordSummaries(value); return *this;}

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline ListIncidentRecordsResult& WithIncidentRecordSummaries(Aws::Vector<IncidentRecordSummary>&& value) { SetIncidentRecordSummaries(std::move(value)); return *this;}

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline ListIncidentRecordsResult& AddIncidentRecordSummaries(const IncidentRecordSummary& value) { m_incidentRecordSummaries.push_back(value); return *this; }

    /**
     * <p>The details of each listed incident record.</p>
     */
    inline ListIncidentRecordsResult& AddIncidentRecordSummaries(IncidentRecordSummary&& value) { m_incidentRecordSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListIncidentRecordsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListIncidentRecordsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListIncidentRecordsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIncidentRecordsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIncidentRecordsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIncidentRecordsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<IncidentRecordSummary> m_incidentRecordSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
