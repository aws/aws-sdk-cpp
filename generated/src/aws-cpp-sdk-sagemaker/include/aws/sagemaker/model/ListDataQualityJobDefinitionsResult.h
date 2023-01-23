/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringJobDefinitionSummary.h>
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
  class ListDataQualityJobDefinitionsResult
  {
  public:
    AWS_SAGEMAKER_API ListDataQualityJobDefinitionsResult();
    AWS_SAGEMAKER_API ListDataQualityJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDataQualityJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline const Aws::Vector<MonitoringJobDefinitionSummary>& GetJobDefinitionSummaries() const{ return m_jobDefinitionSummaries; }

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline void SetJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { m_jobDefinitionSummaries = value; }

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline void SetJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { m_jobDefinitionSummaries = std::move(value); }

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline ListDataQualityJobDefinitionsResult& WithJobDefinitionSummaries(const Aws::Vector<MonitoringJobDefinitionSummary>& value) { SetJobDefinitionSummaries(value); return *this;}

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline ListDataQualityJobDefinitionsResult& WithJobDefinitionSummaries(Aws::Vector<MonitoringJobDefinitionSummary>&& value) { SetJobDefinitionSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline ListDataQualityJobDefinitionsResult& AddJobDefinitionSummaries(const MonitoringJobDefinitionSummary& value) { m_jobDefinitionSummaries.push_back(value); return *this; }

    /**
     * <p>A list of data quality monitoring job definitions.</p>
     */
    inline ListDataQualityJobDefinitionsResult& AddJobDefinitionSummaries(MonitoringJobDefinitionSummary&& value) { m_jobDefinitionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline ListDataQualityJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline ListDataQualityJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListDataQualityJobDefinitions</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of data quality monitoring job definitions, use the token
     * in the next request.</p>
     */
    inline ListDataQualityJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitoringJobDefinitionSummary> m_jobDefinitionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
