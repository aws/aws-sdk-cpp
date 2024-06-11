﻿/**
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
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult();
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API ListMedicalScribeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists all Medical Scribe jobs that have the status specified in your request.
     * Jobs are ordered by creation date, with the newest job first.</p>
     */
    inline const MedicalScribeJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MedicalScribeJobStatus& value) { m_status = value; }
    inline void SetStatus(MedicalScribeJobStatus&& value) { m_status = std::move(value); }
    inline ListMedicalScribeJobsResult& WithStatus(const MedicalScribeJobStatus& value) { SetStatus(value); return *this;}
    inline ListMedicalScribeJobsResult& WithStatus(MedicalScribeJobStatus&& value) { SetStatus(std::move(value)); return *this;}
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
    inline ListMedicalScribeJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMedicalScribeJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMedicalScribeJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of information about each result.</p>
     */
    inline const Aws::Vector<MedicalScribeJobSummary>& GetMedicalScribeJobSummaries() const{ return m_medicalScribeJobSummaries; }
    inline void SetMedicalScribeJobSummaries(const Aws::Vector<MedicalScribeJobSummary>& value) { m_medicalScribeJobSummaries = value; }
    inline void SetMedicalScribeJobSummaries(Aws::Vector<MedicalScribeJobSummary>&& value) { m_medicalScribeJobSummaries = std::move(value); }
    inline ListMedicalScribeJobsResult& WithMedicalScribeJobSummaries(const Aws::Vector<MedicalScribeJobSummary>& value) { SetMedicalScribeJobSummaries(value); return *this;}
    inline ListMedicalScribeJobsResult& WithMedicalScribeJobSummaries(Aws::Vector<MedicalScribeJobSummary>&& value) { SetMedicalScribeJobSummaries(std::move(value)); return *this;}
    inline ListMedicalScribeJobsResult& AddMedicalScribeJobSummaries(const MedicalScribeJobSummary& value) { m_medicalScribeJobSummaries.push_back(value); return *this; }
    inline ListMedicalScribeJobsResult& AddMedicalScribeJobSummaries(MedicalScribeJobSummary&& value) { m_medicalScribeJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMedicalScribeJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMedicalScribeJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMedicalScribeJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MedicalScribeJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<MedicalScribeJobSummary> m_medicalScribeJobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
