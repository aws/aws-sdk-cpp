/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Parameter.h>
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
  class ListPipelineParametersForExecutionResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult();
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline const Aws::Vector<Parameter>& GetPipelineParameters() const{ return m_pipelineParameters; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(const Aws::Vector<Parameter>& value) { m_pipelineParameters = value; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline void SetPipelineParameters(Aws::Vector<Parameter>&& value) { m_pipelineParameters = std::move(value); }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline ListPipelineParametersForExecutionResult& WithPipelineParameters(const Aws::Vector<Parameter>& value) { SetPipelineParameters(value); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline ListPipelineParametersForExecutionResult& WithPipelineParameters(Aws::Vector<Parameter>&& value) { SetPipelineParameters(std::move(value)); return *this;}

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline ListPipelineParametersForExecutionResult& AddPipelineParameters(const Parameter& value) { m_pipelineParameters.push_back(value); return *this; }

    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline ListPipelineParametersForExecutionResult& AddPipelineParameters(Parameter&& value) { m_pipelineParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline ListPipelineParametersForExecutionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline ListPipelineParametersForExecutionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline ListPipelineParametersForExecutionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Parameter> m_pipelineParameters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
