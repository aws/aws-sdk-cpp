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
    AWS_SAGEMAKER_API ListProjectsResult();
    AWS_SAGEMAKER_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summaries of projects.</p>
     */
    inline const Aws::Vector<ProjectSummary>& GetProjectSummaryList() const{ return m_projectSummaryList; }

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline void SetProjectSummaryList(const Aws::Vector<ProjectSummary>& value) { m_projectSummaryList = value; }

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline void SetProjectSummaryList(Aws::Vector<ProjectSummary>&& value) { m_projectSummaryList = std::move(value); }

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline ListProjectsResult& WithProjectSummaryList(const Aws::Vector<ProjectSummary>& value) { SetProjectSummaryList(value); return *this;}

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline ListProjectsResult& WithProjectSummaryList(Aws::Vector<ProjectSummary>&& value) { SetProjectSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline ListProjectsResult& AddProjectSummaryList(const ProjectSummary& value) { m_projectSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of summaries of projects.</p>
     */
    inline ListProjectsResult& AddProjectSummaryList(ProjectSummary&& value) { m_projectSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListCompilationJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model compilation jobs, use the token in the next request.</p>
     */
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectSummary> m_projectSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
