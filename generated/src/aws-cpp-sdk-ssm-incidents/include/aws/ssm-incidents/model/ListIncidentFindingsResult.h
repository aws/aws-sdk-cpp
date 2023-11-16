/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/FindingSummary.h>
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
  class ListIncidentFindingsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult();
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline const Aws::Vector<FindingSummary>& GetFindings() const{ return m_findings; }

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline void SetFindings(const Aws::Vector<FindingSummary>& value) { m_findings = value; }

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline void SetFindings(Aws::Vector<FindingSummary>&& value) { m_findings = std::move(value); }

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline ListIncidentFindingsResult& WithFindings(const Aws::Vector<FindingSummary>& value) { SetFindings(value); return *this;}

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline ListIncidentFindingsResult& WithFindings(Aws::Vector<FindingSummary>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline ListIncidentFindingsResult& AddFindings(const FindingSummary& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline ListIncidentFindingsResult& AddFindings(FindingSummary&& value) { m_findings.push_back(std::move(value)); return *this; }


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
    inline ListIncidentFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListIncidentFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListIncidentFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIncidentFindingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIncidentFindingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIncidentFindingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FindingSummary> m_findings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
