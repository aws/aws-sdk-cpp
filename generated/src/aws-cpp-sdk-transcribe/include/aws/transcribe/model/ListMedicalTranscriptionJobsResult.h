﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalTranscriptionJobSummary.h>
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
  class ListMedicalTranscriptionJobsResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API ListMedicalTranscriptionJobsResult();
    AWS_TRANSCRIBESERVICE_API ListMedicalTranscriptionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListMedicalTranscriptionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all medical transcription jobs that have the status specified in your
     * request. Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TranscriptionJobStatus& value) { m_status = value; }
    inline void SetStatus(TranscriptionJobStatus&& value) { m_status = std::move(value); }
    inline ListMedicalTranscriptionJobsResult& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is present in your response, it indicates that not
     * all results are displayed. To view the next set of results, copy the string
     * associated with the <code>NextToken</code> parameter in your results output,
     * then run your request again including <code>NextToken</code> with the value of
     * the copied string. Repeat as needed to view all your results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMedicalTranscriptionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<MedicalTranscriptionJobSummary>& GetMedicalTranscriptionJobSummaries() const{ return m_medicalTranscriptionJobSummaries; }
    inline void SetMedicalTranscriptionJobSummaries(const Aws::Vector<MedicalTranscriptionJobSummary>& value) { m_medicalTranscriptionJobSummaries = value; }
    inline void SetMedicalTranscriptionJobSummaries(Aws::Vector<MedicalTranscriptionJobSummary>&& value) { m_medicalTranscriptionJobSummaries = std::move(value); }
    inline ListMedicalTranscriptionJobsResult& WithMedicalTranscriptionJobSummaries(const Aws::Vector<MedicalTranscriptionJobSummary>& value) { SetMedicalTranscriptionJobSummaries(value); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithMedicalTranscriptionJobSummaries(Aws::Vector<MedicalTranscriptionJobSummary>&& value) { SetMedicalTranscriptionJobSummaries(std::move(value)); return *this;}
    inline ListMedicalTranscriptionJobsResult& AddMedicalTranscriptionJobSummaries(const MedicalTranscriptionJobSummary& value) { m_medicalTranscriptionJobSummaries.push_back(value); return *this; }
    inline ListMedicalTranscriptionJobsResult& AddMedicalTranscriptionJobSummaries(MedicalTranscriptionJobSummary&& value) { m_medicalTranscriptionJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMedicalTranscriptionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMedicalTranscriptionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TranscriptionJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<MedicalTranscriptionJobSummary> m_medicalTranscriptionJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
