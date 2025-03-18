/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProjectSummary.h>
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
  class ListProjectsResult
  {
  public:
    AWS_SAGEMAKER_API ListProjectsResult() = default;
    AWS_SAGEMAKER_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries of projects.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjectSummaryList() const { return m_projectSummaryList; }
    template<typename ProjectSummaryListT = Aws::Vector<ProjectSummary>>
    void SetProjectSummaryList(ProjectSummaryListT&& value) { m_projectSummaryListHasBeenSet = true; m_projectSummaryList = std::forward<ProjectSummaryListT>(value); }
    template<typename ProjectSummaryListT = Aws::Vector<ProjectSummary>>
    ListProjectsResult& WithProjectSummaryList(ProjectSummaryListT&& value) { SetProjectSummaryList(std::forward<ProjectSummaryListT>(value)); return *this;}
    template<typename ProjectSummaryListT = ProjectSummary>
    ListProjectsResult& AddProjectSummaryList(ProjectSummaryListT&& value) { m_projectSummaryListHasBeenSet = true; m_projectSummaryList.emplace_back(std::forward<ProjectSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectSummary> m_projectSummaryList;
    bool m_projectSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
