/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/DataCollectionDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/AssessmentTarget.h>
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
  class GetAssessmentResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of criteria for assessment.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const { return m_assessmentTargets; }
    template<typename AssessmentTargetsT = Aws::Vector<AssessmentTarget>>
    void SetAssessmentTargets(AssessmentTargetsT&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets = std::forward<AssessmentTargetsT>(value); }
    template<typename AssessmentTargetsT = Aws::Vector<AssessmentTarget>>
    GetAssessmentResult& WithAssessmentTargets(AssessmentTargetsT&& value) { SetAssessmentTargets(std::forward<AssessmentTargetsT>(value)); return *this;}
    template<typename AssessmentTargetsT = AssessmentTarget>
    GetAssessmentResult& AddAssessmentTargets(AssessmentTargetsT&& value) { m_assessmentTargetsHasBeenSet = true; m_assessmentTargets.emplace_back(std::forward<AssessmentTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline const DataCollectionDetails& GetDataCollectionDetails() const { return m_dataCollectionDetails; }
    template<typename DataCollectionDetailsT = DataCollectionDetails>
    void SetDataCollectionDetails(DataCollectionDetailsT&& value) { m_dataCollectionDetailsHasBeenSet = true; m_dataCollectionDetails = std::forward<DataCollectionDetailsT>(value); }
    template<typename DataCollectionDetailsT = DataCollectionDetails>
    GetAssessmentResult& WithDataCollectionDetails(DataCollectionDetailsT&& value) { SetDataCollectionDetails(std::forward<DataCollectionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetAssessmentResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;
    bool m_assessmentTargetsHasBeenSet = false;

    DataCollectionDetails m_dataCollectionDetails;
    bool m_dataCollectionDetailsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
