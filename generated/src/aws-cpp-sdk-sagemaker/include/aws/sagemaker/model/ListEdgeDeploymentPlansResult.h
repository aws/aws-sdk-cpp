/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeDeploymentPlanSummary.h>
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
  class ListEdgeDeploymentPlansResult
  {
  public:
    AWS_SAGEMAKER_API ListEdgeDeploymentPlansResult();
    AWS_SAGEMAKER_API ListEdgeDeploymentPlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListEdgeDeploymentPlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline const Aws::Vector<EdgeDeploymentPlanSummary>& GetEdgeDeploymentPlanSummaries() const{ return m_edgeDeploymentPlanSummaries; }

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline void SetEdgeDeploymentPlanSummaries(const Aws::Vector<EdgeDeploymentPlanSummary>& value) { m_edgeDeploymentPlanSummaries = value; }

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline void SetEdgeDeploymentPlanSummaries(Aws::Vector<EdgeDeploymentPlanSummary>&& value) { m_edgeDeploymentPlanSummaries = std::move(value); }

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline ListEdgeDeploymentPlansResult& WithEdgeDeploymentPlanSummaries(const Aws::Vector<EdgeDeploymentPlanSummary>& value) { SetEdgeDeploymentPlanSummaries(value); return *this;}

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline ListEdgeDeploymentPlansResult& WithEdgeDeploymentPlanSummaries(Aws::Vector<EdgeDeploymentPlanSummary>&& value) { SetEdgeDeploymentPlanSummaries(std::move(value)); return *this;}

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline ListEdgeDeploymentPlansResult& AddEdgeDeploymentPlanSummaries(const EdgeDeploymentPlanSummary& value) { m_edgeDeploymentPlanSummaries.push_back(value); return *this; }

    /**
     * <p>List of summaries of edge deployment plans.</p>
     */
    inline ListEdgeDeploymentPlansResult& AddEdgeDeploymentPlanSummaries(EdgeDeploymentPlanSummary&& value) { m_edgeDeploymentPlanSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListEdgeDeploymentPlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListEdgeDeploymentPlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListEdgeDeploymentPlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EdgeDeploymentPlanSummary> m_edgeDeploymentPlanSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
