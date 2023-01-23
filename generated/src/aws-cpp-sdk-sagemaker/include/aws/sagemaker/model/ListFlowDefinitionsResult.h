/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FlowDefinitionSummary.h>
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
  class ListFlowDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListFlowDefinitionsResult();
    AWS_SAGEMAKER_API ListFlowDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListFlowDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline const Aws::Vector<FlowDefinitionSummary>& GetFlowDefinitionSummaries() const{ return m_flowDefinitionSummaries; }

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline void SetFlowDefinitionSummaries(const Aws::Vector<FlowDefinitionSummary>& value) { m_flowDefinitionSummaries = value; }

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline void SetFlowDefinitionSummaries(Aws::Vector<FlowDefinitionSummary>&& value) { m_flowDefinitionSummaries = std::move(value); }

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline ListFlowDefinitionsResult& WithFlowDefinitionSummaries(const Aws::Vector<FlowDefinitionSummary>& value) { SetFlowDefinitionSummaries(value); return *this;}

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline ListFlowDefinitionsResult& WithFlowDefinitionSummaries(Aws::Vector<FlowDefinitionSummary>&& value) { SetFlowDefinitionSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline ListFlowDefinitionsResult& AddFlowDefinitionSummaries(const FlowDefinitionSummary& value) { m_flowDefinitionSummaries.push_back(value); return *this; }

    /**
     * <p>An array of objects describing the flow definitions.</p>
     */
    inline ListFlowDefinitionsResult& AddFlowDefinitionSummaries(FlowDefinitionSummary&& value) { m_flowDefinitionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to resume pagination.</p>
     */
    inline ListFlowDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FlowDefinitionSummary> m_flowDefinitionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
