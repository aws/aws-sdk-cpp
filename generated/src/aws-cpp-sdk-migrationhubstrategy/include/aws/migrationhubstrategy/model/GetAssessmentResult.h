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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of criteria for assessment.</p>
     */
    inline const Aws::Vector<AssessmentTarget>& GetAssessmentTargets() const{ return m_assessmentTargets; }
    inline void SetAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { m_assessmentTargets = value; }
    inline void SetAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { m_assessmentTargets = std::move(value); }
    inline GetAssessmentResult& WithAssessmentTargets(const Aws::Vector<AssessmentTarget>& value) { SetAssessmentTargets(value); return *this;}
    inline GetAssessmentResult& WithAssessmentTargets(Aws::Vector<AssessmentTarget>&& value) { SetAssessmentTargets(std::move(value)); return *this;}
    inline GetAssessmentResult& AddAssessmentTargets(const AssessmentTarget& value) { m_assessmentTargets.push_back(value); return *this; }
    inline GetAssessmentResult& AddAssessmentTargets(AssessmentTarget&& value) { m_assessmentTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Detailed information about the assessment. </p>
     */
    inline const DataCollectionDetails& GetDataCollectionDetails() const{ return m_dataCollectionDetails; }
    inline void SetDataCollectionDetails(const DataCollectionDetails& value) { m_dataCollectionDetails = value; }
    inline void SetDataCollectionDetails(DataCollectionDetails&& value) { m_dataCollectionDetails = std::move(value); }
    inline GetAssessmentResult& WithDataCollectionDetails(const DataCollectionDetails& value) { SetDataCollectionDetails(value); return *this;}
    inline GetAssessmentResult& WithDataCollectionDetails(DataCollectionDetails&& value) { SetDataCollectionDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the specific assessment task. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetAssessmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetAssessmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetAssessmentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentTarget> m_assessmentTargets;

    DataCollectionDetails m_dataCollectionDetails;

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
