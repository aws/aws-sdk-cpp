/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentSummary.h>
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
  class ListInferenceExperimentsResult
  {
  public:
    AWS_SAGEMAKER_API ListInferenceExperimentsResult();
    AWS_SAGEMAKER_API ListInferenceExperimentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListInferenceExperimentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of inference experiments.</p>
     */
    inline const Aws::Vector<InferenceExperimentSummary>& GetInferenceExperiments() const{ return m_inferenceExperiments; }

    /**
     * <p>List of inference experiments.</p>
     */
    inline void SetInferenceExperiments(const Aws::Vector<InferenceExperimentSummary>& value) { m_inferenceExperiments = value; }

    /**
     * <p>List of inference experiments.</p>
     */
    inline void SetInferenceExperiments(Aws::Vector<InferenceExperimentSummary>&& value) { m_inferenceExperiments = std::move(value); }

    /**
     * <p>List of inference experiments.</p>
     */
    inline ListInferenceExperimentsResult& WithInferenceExperiments(const Aws::Vector<InferenceExperimentSummary>& value) { SetInferenceExperiments(value); return *this;}

    /**
     * <p>List of inference experiments.</p>
     */
    inline ListInferenceExperimentsResult& WithInferenceExperiments(Aws::Vector<InferenceExperimentSummary>&& value) { SetInferenceExperiments(std::move(value)); return *this;}

    /**
     * <p>List of inference experiments.</p>
     */
    inline ListInferenceExperimentsResult& AddInferenceExperiments(const InferenceExperimentSummary& value) { m_inferenceExperiments.push_back(value); return *this; }

    /**
     * <p>List of inference experiments.</p>
     */
    inline ListInferenceExperimentsResult& AddInferenceExperiments(InferenceExperimentSummary&& value) { m_inferenceExperiments.push_back(std::move(value)); return *this; }


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
    inline ListInferenceExperimentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListInferenceExperimentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when calling the next page of results.</p>
     */
    inline ListInferenceExperimentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InferenceExperimentSummary> m_inferenceExperiments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
