/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ExperimentSummary.h>
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
  class ListExperimentsResult
  {
  public:
    AWS_SAGEMAKER_API ListExperimentsResult();
    AWS_SAGEMAKER_API ListExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline const Aws::Vector<ExperimentSummary>& GetExperimentSummaries() const{ return m_experimentSummaries; }

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline void SetExperimentSummaries(const Aws::Vector<ExperimentSummary>& value) { m_experimentSummaries = value; }

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline void SetExperimentSummaries(Aws::Vector<ExperimentSummary>&& value) { m_experimentSummaries = std::move(value); }

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline ListExperimentsResult& WithExperimentSummaries(const Aws::Vector<ExperimentSummary>& value) { SetExperimentSummaries(value); return *this;}

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline ListExperimentsResult& WithExperimentSummaries(Aws::Vector<ExperimentSummary>&& value) { SetExperimentSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline ListExperimentsResult& AddExperimentSummaries(const ExperimentSummary& value) { m_experimentSummaries.push_back(value); return *this; }

    /**
     * <p>A list of the summaries of your experiments.</p>
     */
    inline ListExperimentsResult& AddExperimentSummaries(ExperimentSummary&& value) { m_experimentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline ListExperimentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline ListExperimentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of experiments, if there are any.</p>
     */
    inline ListExperimentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExperimentSummary> m_experimentSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
