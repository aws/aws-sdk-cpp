/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListSolutionsResult
  {
  public:
    AWS_PERSONALIZE_API ListSolutionsResult() = default;
    AWS_PERSONALIZE_API ListSolutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListSolutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the current solutions.</p>
     */
    inline const Aws::Vector<SolutionSummary>& GetSolutions() const { return m_solutions; }
    template<typename SolutionsT = Aws::Vector<SolutionSummary>>
    void SetSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions = std::forward<SolutionsT>(value); }
    template<typename SolutionsT = Aws::Vector<SolutionSummary>>
    ListSolutionsResult& WithSolutions(SolutionsT&& value) { SetSolutions(std::forward<SolutionsT>(value)); return *this;}
    template<typename SolutionsT = SolutionSummary>
    ListSolutionsResult& AddSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions.emplace_back(std::forward<SolutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of solutions (if they exist).</p>
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

    Aws::Vector<SolutionSummary> m_solutions;
    bool m_solutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
