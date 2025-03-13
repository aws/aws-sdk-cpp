/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLCandidate.h>
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
namespace SageMaker
{
namespace Model
{
  class ListCandidatesForAutoMLJobResult
  {
  public:
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult() = default;
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCandidatesForAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summaries about the <code>AutoMLCandidates</code>.</p>
     */
    inline const Aws::Vector<AutoMLCandidate>& GetCandidates() const { return m_candidates; }
    template<typename CandidatesT = Aws::Vector<AutoMLCandidate>>
    void SetCandidates(CandidatesT&& value) { m_candidatesHasBeenSet = true; m_candidates = std::forward<CandidatesT>(value); }
    template<typename CandidatesT = Aws::Vector<AutoMLCandidate>>
    ListCandidatesForAutoMLJobResult& WithCandidates(CandidatesT&& value) { SetCandidates(std::forward<CandidatesT>(value)); return *this;}
    template<typename CandidatesT = AutoMLCandidate>
    ListCandidatesForAutoMLJobResult& AddCandidates(CandidatesT&& value) { m_candidatesHasBeenSet = true; m_candidates.emplace_back(std::forward<CandidatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCandidatesForAutoMLJobResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCandidatesForAutoMLJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoMLCandidate> m_candidates;
    bool m_candidatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
