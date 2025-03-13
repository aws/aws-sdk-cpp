/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/CheckSummary.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class ListChecksResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListChecksResult() = default;
    AWS_TRUSTEDADVISOR_API ListChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Checks</p>
     */
    inline const Aws::Vector<CheckSummary>& GetCheckSummaries() const { return m_checkSummaries; }
    template<typename CheckSummariesT = Aws::Vector<CheckSummary>>
    void SetCheckSummaries(CheckSummariesT&& value) { m_checkSummariesHasBeenSet = true; m_checkSummaries = std::forward<CheckSummariesT>(value); }
    template<typename CheckSummariesT = Aws::Vector<CheckSummary>>
    ListChecksResult& WithCheckSummaries(CheckSummariesT&& value) { SetCheckSummaries(std::forward<CheckSummariesT>(value)); return *this;}
    template<typename CheckSummariesT = CheckSummary>
    ListChecksResult& AddCheckSummaries(CheckSummariesT&& value) { m_checkSummariesHasBeenSet = true; m_checkSummaries.emplace_back(std::forward<CheckSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChecksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CheckSummary> m_checkSummaries;
    bool m_checkSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
