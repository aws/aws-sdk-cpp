/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/RecommendationReportDetails.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetRecommendationReportDetailsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetRecommendationReportDetailsResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline const RecommendationReportDetails& GetRecommendationReportDetails() const { return m_recommendationReportDetails; }
    template<typename RecommendationReportDetailsT = RecommendationReportDetails>
    void SetRecommendationReportDetails(RecommendationReportDetailsT&& value) { m_recommendationReportDetailsHasBeenSet = true; m_recommendationReportDetails = std::forward<RecommendationReportDetailsT>(value); }
    template<typename RecommendationReportDetailsT = RecommendationReportDetails>
    GetRecommendationReportDetailsResult& WithRecommendationReportDetails(RecommendationReportDetailsT&& value) { SetRecommendationReportDetails(std::forward<RecommendationReportDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationReportDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    RecommendationReportDetails m_recommendationReportDetails;
    bool m_recommendationReportDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
