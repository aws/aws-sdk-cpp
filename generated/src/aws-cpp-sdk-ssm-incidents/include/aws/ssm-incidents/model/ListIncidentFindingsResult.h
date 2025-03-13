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
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult() = default;
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListIncidentFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of findings that represent deployments that might be the potential
     * cause of the incident.</p>
     */
    inline const Aws::Vector<FindingSummary>& GetFindings() const { return m_findings; }
    template<typename FindingsT = Aws::Vector<FindingSummary>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<FindingSummary>>
    ListIncidentFindingsResult& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = FindingSummary>
    ListIncidentFindingsResult& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
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
    ListIncidentFindingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIncidentFindingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingSummary> m_findings;
    bool m_findingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
