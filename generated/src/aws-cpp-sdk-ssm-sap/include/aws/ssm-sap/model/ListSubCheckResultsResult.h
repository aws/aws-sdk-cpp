/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/SubCheckResult.h>
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
namespace SsmSap
{
namespace Model
{
  class ListSubCheckResultsResult
  {
  public:
    AWS_SSMSAP_API ListSubCheckResultsResult() = default;
    AWS_SSMSAP_API ListSubCheckResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListSubCheckResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sub-check results of a configuration check operation.</p>
     */
    inline const Aws::Vector<SubCheckResult>& GetSubCheckResults() const { return m_subCheckResults; }
    template<typename SubCheckResultsT = Aws::Vector<SubCheckResult>>
    void SetSubCheckResults(SubCheckResultsT&& value) { m_subCheckResultsHasBeenSet = true; m_subCheckResults = std::forward<SubCheckResultsT>(value); }
    template<typename SubCheckResultsT = Aws::Vector<SubCheckResult>>
    ListSubCheckResultsResult& WithSubCheckResults(SubCheckResultsT&& value) { SetSubCheckResults(std::forward<SubCheckResultsT>(value)); return *this;}
    template<typename SubCheckResultsT = SubCheckResult>
    ListSubCheckResultsResult& AddSubCheckResults(SubCheckResultsT&& value) { m_subCheckResultsHasBeenSet = true; m_subCheckResults.emplace_back(std::forward<SubCheckResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubCheckResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubCheckResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SubCheckResult> m_subCheckResults;
    bool m_subCheckResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
