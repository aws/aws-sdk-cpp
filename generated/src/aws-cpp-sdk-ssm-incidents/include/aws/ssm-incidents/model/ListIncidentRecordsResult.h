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
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult() = default;
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListIncidentRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of each listed incident record.</p>
     */
    inline const Aws::Vector<IncidentRecordSummary>& GetIncidentRecordSummaries() const { return m_incidentRecordSummaries; }
    template<typename IncidentRecordSummariesT = Aws::Vector<IncidentRecordSummary>>
    void SetIncidentRecordSummaries(IncidentRecordSummariesT&& value) { m_incidentRecordSummariesHasBeenSet = true; m_incidentRecordSummaries = std::forward<IncidentRecordSummariesT>(value); }
    template<typename IncidentRecordSummariesT = Aws::Vector<IncidentRecordSummary>>
    ListIncidentRecordsResult& WithIncidentRecordSummaries(IncidentRecordSummariesT&& value) { SetIncidentRecordSummaries(std::forward<IncidentRecordSummariesT>(value)); return *this;}
    template<typename IncidentRecordSummariesT = IncidentRecordSummary>
    ListIncidentRecordsResult& AddIncidentRecordSummaries(IncidentRecordSummariesT&& value) { m_incidentRecordSummariesHasBeenSet = true; m_incidentRecordSummaries.emplace_back(std::forward<IncidentRecordSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIncidentRecordsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIncidentRecordsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IncidentRecordSummary> m_incidentRecordSummaries;
    bool m_incidentRecordSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
