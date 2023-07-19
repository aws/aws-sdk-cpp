/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/DICOMImportJobSummary.h>
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
namespace MedicalImaging
{
namespace Model
{
  class ListDICOMImportJobsResult
  {
  public:
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult();
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of job summaries.</p>
     */
    inline const Aws::Vector<DICOMImportJobSummary>& GetJobSummaries() const{ return m_jobSummaries; }

    /**
     * <p>A list of job summaries.</p>
     */
    inline void SetJobSummaries(const Aws::Vector<DICOMImportJobSummary>& value) { m_jobSummaries = value; }

    /**
     * <p>A list of job summaries.</p>
     */
    inline void SetJobSummaries(Aws::Vector<DICOMImportJobSummary>&& value) { m_jobSummaries = std::move(value); }

    /**
     * <p>A list of job summaries.</p>
     */
    inline ListDICOMImportJobsResult& WithJobSummaries(const Aws::Vector<DICOMImportJobSummary>& value) { SetJobSummaries(value); return *this;}

    /**
     * <p>A list of job summaries.</p>
     */
    inline ListDICOMImportJobsResult& WithJobSummaries(Aws::Vector<DICOMImportJobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of job summaries.</p>
     */
    inline ListDICOMImportJobsResult& AddJobSummaries(const DICOMImportJobSummary& value) { m_jobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of job summaries.</p>
     */
    inline ListDICOMImportJobsResult& AddJobSummaries(DICOMImportJobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline ListDICOMImportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline ListDICOMImportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline ListDICOMImportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDICOMImportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDICOMImportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDICOMImportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DICOMImportJobSummary> m_jobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
