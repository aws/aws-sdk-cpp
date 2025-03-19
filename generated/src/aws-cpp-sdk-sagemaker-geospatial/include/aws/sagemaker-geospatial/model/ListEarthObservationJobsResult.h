/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobOutputConfig.h>
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
  class ListEarthObservationJobsResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline const Aws::Vector<ListEarthObservationJobOutputConfig>& GetEarthObservationJobSummaries() const { return m_earthObservationJobSummaries; }
    template<typename EarthObservationJobSummariesT = Aws::Vector<ListEarthObservationJobOutputConfig>>
    void SetEarthObservationJobSummaries(EarthObservationJobSummariesT&& value) { m_earthObservationJobSummariesHasBeenSet = true; m_earthObservationJobSummaries = std::forward<EarthObservationJobSummariesT>(value); }
    template<typename EarthObservationJobSummariesT = Aws::Vector<ListEarthObservationJobOutputConfig>>
    ListEarthObservationJobsResult& WithEarthObservationJobSummaries(EarthObservationJobSummariesT&& value) { SetEarthObservationJobSummaries(std::forward<EarthObservationJobSummariesT>(value)); return *this;}
    template<typename EarthObservationJobSummariesT = ListEarthObservationJobOutputConfig>
    ListEarthObservationJobsResult& AddEarthObservationJobSummaries(EarthObservationJobSummariesT&& value) { m_earthObservationJobSummariesHasBeenSet = true; m_earthObservationJobSummaries.emplace_back(std::forward<EarthObservationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEarthObservationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEarthObservationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListEarthObservationJobOutputConfig> m_earthObservationJobSummaries;
    bool m_earthObservationJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
