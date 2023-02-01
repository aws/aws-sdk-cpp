/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobOutputConfig.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class ListVectorEnrichmentJobsResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult();
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListVectorEnrichmentJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListVectorEnrichmentJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListVectorEnrichmentJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline const Aws::Vector<ListVectorEnrichmentJobOutputConfig>& GetVectorEnrichmentJobSummaries() const{ return m_vectorEnrichmentJobSummaries; }

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline void SetVectorEnrichmentJobSummaries(const Aws::Vector<ListVectorEnrichmentJobOutputConfig>& value) { m_vectorEnrichmentJobSummaries = value; }

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline void SetVectorEnrichmentJobSummaries(Aws::Vector<ListVectorEnrichmentJobOutputConfig>&& value) { m_vectorEnrichmentJobSummaries = std::move(value); }

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline ListVectorEnrichmentJobsResult& WithVectorEnrichmentJobSummaries(const Aws::Vector<ListVectorEnrichmentJobOutputConfig>& value) { SetVectorEnrichmentJobSummaries(value); return *this;}

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline ListVectorEnrichmentJobsResult& WithVectorEnrichmentJobSummaries(Aws::Vector<ListVectorEnrichmentJobOutputConfig>&& value) { SetVectorEnrichmentJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline ListVectorEnrichmentJobsResult& AddVectorEnrichmentJobSummaries(const ListVectorEnrichmentJobOutputConfig& value) { m_vectorEnrichmentJobSummaries.push_back(value); return *this; }

    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline ListVectorEnrichmentJobsResult& AddVectorEnrichmentJobSummaries(ListVectorEnrichmentJobOutputConfig&& value) { m_vectorEnrichmentJobSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListVectorEnrichmentJobOutputConfig> m_vectorEnrichmentJobSummaries;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
