/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionVersionSummary.h>
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
  class ListSolutionVersionsResult
  {
  public:
    AWS_PERSONALIZE_API ListSolutionVersionsResult() = default;
    AWS_PERSONALIZE_API ListSolutionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListSolutionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of solution versions describing the version properties.</p>
     */
    inline const Aws::Vector<SolutionVersionSummary>& GetSolutionVersions() const { return m_solutionVersions; }
    template<typename SolutionVersionsT = Aws::Vector<SolutionVersionSummary>>
    void SetSolutionVersions(SolutionVersionsT&& value) { m_solutionVersionsHasBeenSet = true; m_solutionVersions = std::forward<SolutionVersionsT>(value); }
    template<typename SolutionVersionsT = Aws::Vector<SolutionVersionSummary>>
    ListSolutionVersionsResult& WithSolutionVersions(SolutionVersionsT&& value) { SetSolutionVersions(std::forward<SolutionVersionsT>(value)); return *this;}
    template<typename SolutionVersionsT = SolutionVersionSummary>
    ListSolutionVersionsResult& AddSolutionVersions(SolutionVersionsT&& value) { m_solutionVersionsHasBeenSet = true; m_solutionVersions.emplace_back(std::forward<SolutionVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of solution versions (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSolutionVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSolutionVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SolutionVersionSummary> m_solutionVersions;
    bool m_solutionVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
