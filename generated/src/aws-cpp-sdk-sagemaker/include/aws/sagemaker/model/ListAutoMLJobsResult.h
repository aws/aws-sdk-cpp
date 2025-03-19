/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AutoMLJobSummary.h>
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
  class ListAutoMLJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListAutoMLJobsResult() = default;
    AWS_SAGEMAKER_API ListAutoMLJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAutoMLJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a summary list of jobs.</p>
     */
    inline const Aws::Vector<AutoMLJobSummary>& GetAutoMLJobSummaries() const { return m_autoMLJobSummaries; }
    template<typename AutoMLJobSummariesT = Aws::Vector<AutoMLJobSummary>>
    void SetAutoMLJobSummaries(AutoMLJobSummariesT&& value) { m_autoMLJobSummariesHasBeenSet = true; m_autoMLJobSummaries = std::forward<AutoMLJobSummariesT>(value); }
    template<typename AutoMLJobSummariesT = Aws::Vector<AutoMLJobSummary>>
    ListAutoMLJobsResult& WithAutoMLJobSummaries(AutoMLJobSummariesT&& value) { SetAutoMLJobSummaries(std::forward<AutoMLJobSummariesT>(value)); return *this;}
    template<typename AutoMLJobSummariesT = AutoMLJobSummary>
    ListAutoMLJobsResult& AddAutoMLJobSummaries(AutoMLJobSummariesT&& value) { m_autoMLJobSummariesHasBeenSet = true; m_autoMLJobSummaries.emplace_back(std::forward<AutoMLJobSummariesT>(value)); return *this; }
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
    ListAutoMLJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutoMLJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoMLJobSummary> m_autoMLJobSummaries;
    bool m_autoMLJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
