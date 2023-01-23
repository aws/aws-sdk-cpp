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


    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline const Aws::Vector<DatasetExportJobSummary>& GetDatasetExportJobs() const{ return m_datasetExportJobs; }

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline void SetDatasetExportJobs(const Aws::Vector<DatasetExportJobSummary>& value) { m_datasetExportJobs = value; }

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline void SetDatasetExportJobs(Aws::Vector<DatasetExportJobSummary>&& value) { m_datasetExportJobs = std::move(value); }

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline ListDatasetExportJobsResult& WithDatasetExportJobs(const Aws::Vector<DatasetExportJobSummary>& value) { SetDatasetExportJobs(value); return *this;}

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline ListDatasetExportJobsResult& WithDatasetExportJobs(Aws::Vector<DatasetExportJobSummary>&& value) { SetDatasetExportJobs(std::move(value)); return *this;}

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline ListDatasetExportJobsResult& AddDatasetExportJobs(const DatasetExportJobSummary& value) { m_datasetExportJobs.push_back(value); return *this; }

    /**
     * <p>The list of dataset export jobs.</p>
     */
    inline ListDatasetExportJobsResult& AddDatasetExportJobs(DatasetExportJobSummary&& value) { m_datasetExportJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline ListDatasetExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline ListDatasetExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of dataset export jobs (if they exist).</p>
     */
    inline ListDatasetExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatasetExportJobSummary> m_datasetExportJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
