/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetExportJobSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListDatasetExportJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListDatasetExportJobsResult();
    AWS_PERSONALIZE_API ListDatasetExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDatasetExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline const Aws::Vector<DatasetExportJobSummary>& GetDatasetExportJobs() const{ return m_datasetExportJobs; }
    inline void SetDatasetExportJobs(const Aws::Vector<DatasetExportJobSummary>& value) { m_datasetExportJobs = value; }
    inline void SetDatasetExportJobs(Aws::Vector<DatasetExportJobSummary>&& value) { m_datasetExportJobs = std::move(value); }
    inline ListDatasetExportJobsResult& WithDatasetExportJobs(const Aws::Vector<DatasetExportJobSummary>& value) { SetDatasetExportJobs(value); return *this;}
    inline ListDatasetExportJobsResult& WithDatasetExportJobs(Aws::Vector<DatasetExportJobSummary>&& value) { SetDatasetExportJobs(std::move(value)); return *this;}
    inline ListDatasetExportJobsResult& AddDatasetExportJobs(const DatasetExportJobSummary& value) { m_datasetExportJobs.push_back(value); return *this; }
    inline ListDatasetExportJobsResult& AddDatasetExportJobs(DatasetExportJobSummary&& value) { m_datasetExportJobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetExportJobSummary> m_datasetExportJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
