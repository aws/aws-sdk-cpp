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
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult() = default;
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API ListDICOMImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job summaries.</p>
     */
    inline const Aws::Vector<DICOMImportJobSummary>& GetJobSummaries() const { return m_jobSummaries; }
    template<typename JobSummariesT = Aws::Vector<DICOMImportJobSummary>>
    void SetJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries = std::forward<JobSummariesT>(value); }
    template<typename JobSummariesT = Aws::Vector<DICOMImportJobSummary>>
    ListDICOMImportJobsResult& WithJobSummaries(JobSummariesT&& value) { SetJobSummaries(std::forward<JobSummariesT>(value)); return *this;}
    template<typename JobSummariesT = DICOMImportJobSummary>
    ListDICOMImportJobsResult& AddJobSummaries(JobSummariesT&& value) { m_jobSummariesHasBeenSet = true; m_jobSummaries.emplace_back(std::forward<JobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the list of import jobs on the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDICOMImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDICOMImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DICOMImportJobSummary> m_jobSummaries;
    bool m_jobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
