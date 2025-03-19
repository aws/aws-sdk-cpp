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
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListVectorEnrichmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVectorEnrichmentJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains summary information about the Vector Enrichment jobs.</p>
     */
    inline const Aws::Vector<ListVectorEnrichmentJobOutputConfig>& GetVectorEnrichmentJobSummaries() const { return m_vectorEnrichmentJobSummaries; }
    template<typename VectorEnrichmentJobSummariesT = Aws::Vector<ListVectorEnrichmentJobOutputConfig>>
    void SetVectorEnrichmentJobSummaries(VectorEnrichmentJobSummariesT&& value) { m_vectorEnrichmentJobSummariesHasBeenSet = true; m_vectorEnrichmentJobSummaries = std::forward<VectorEnrichmentJobSummariesT>(value); }
    template<typename VectorEnrichmentJobSummariesT = Aws::Vector<ListVectorEnrichmentJobOutputConfig>>
    ListVectorEnrichmentJobsResult& WithVectorEnrichmentJobSummaries(VectorEnrichmentJobSummariesT&& value) { SetVectorEnrichmentJobSummaries(std::forward<VectorEnrichmentJobSummariesT>(value)); return *this;}
    template<typename VectorEnrichmentJobSummariesT = ListVectorEnrichmentJobOutputConfig>
    ListVectorEnrichmentJobsResult& AddVectorEnrichmentJobSummaries(VectorEnrichmentJobSummariesT&& value) { m_vectorEnrichmentJobSummariesHasBeenSet = true; m_vectorEnrichmentJobSummaries.emplace_back(std::forward<VectorEnrichmentJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVectorEnrichmentJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListVectorEnrichmentJobOutputConfig> m_vectorEnrichmentJobSummaries;
    bool m_vectorEnrichmentJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
