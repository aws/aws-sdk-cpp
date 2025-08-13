/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/SolutionBase.h>
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
  class ListSolutionsResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult() = default;
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API ListSolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array with minimal details for solutions matching the request
     * criteria.</p>
     */
    inline const Aws::Vector<SolutionBase>& GetSolutionSummaries() const { return m_solutionSummaries; }
    template<typename SolutionSummariesT = Aws::Vector<SolutionBase>>
    void SetSolutionSummaries(SolutionSummariesT&& value) { m_solutionSummariesHasBeenSet = true; m_solutionSummaries = std::forward<SolutionSummariesT>(value); }
    template<typename SolutionSummariesT = Aws::Vector<SolutionBase>>
    ListSolutionsResult& WithSolutionSummaries(SolutionSummariesT&& value) { SetSolutionSummaries(std::forward<SolutionSummariesT>(value)); return *this;}
    template<typename SolutionSummariesT = SolutionBase>
    ListSolutionsResult& AddSolutionSummaries(SolutionSummariesT&& value) { m_solutionSummariesHasBeenSet = true; m_solutionSummaries.emplace_back(std::forward<SolutionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSolutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SolutionBase> m_solutionSummaries;
    bool m_solutionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
