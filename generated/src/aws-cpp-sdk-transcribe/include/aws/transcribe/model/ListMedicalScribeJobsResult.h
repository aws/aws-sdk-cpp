/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/MedicalScribeJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalScribeJobSummary.h>
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
namespace TranscribeService
{
namespace Model
{
  class ListMedicalScribeJobsResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult() = default;
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all Medical Scribe jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline MedicalScribeJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(MedicalScribeJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListMedicalScribeJobsResult& WithStatus(MedicalScribeJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMedicalScribeJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<MedicalScribeJobSummary>& GetMedicalScribeJobSummaries() const { return m_medicalScribeJobSummaries; }
    template<typename MedicalScribeJobSummariesT = Aws::Vector<MedicalScribeJobSummary>>
    void SetMedicalScribeJobSummaries(MedicalScribeJobSummariesT&& value) { m_medicalScribeJobSummariesHasBeenSet = true; m_medicalScribeJobSummaries = std::forward<MedicalScribeJobSummariesT>(value); }
    template<typename MedicalScribeJobSummariesT = Aws::Vector<MedicalScribeJobSummary>>
    ListMedicalScribeJobsResult& WithMedicalScribeJobSummaries(MedicalScribeJobSummariesT&& value) { SetMedicalScribeJobSummaries(std::forward<MedicalScribeJobSummariesT>(value)); return *this;}
    template<typename MedicalScribeJobSummariesT = MedicalScribeJobSummary>
    ListMedicalScribeJobsResult& AddMedicalScribeJobSummaries(MedicalScribeJobSummariesT&& value) { m_medicalScribeJobSummariesHasBeenSet = true; m_medicalScribeJobSummaries.emplace_back(std::forward<MedicalScribeJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMedicalScribeJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MedicalScribeJobStatus m_status{MedicalScribeJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MedicalScribeJobSummary> m_medicalScribeJobSummaries;
    bool m_medicalScribeJobSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
