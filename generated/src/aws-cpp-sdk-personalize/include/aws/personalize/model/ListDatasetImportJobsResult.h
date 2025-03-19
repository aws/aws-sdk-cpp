/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetImportJobSummary.h>
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
  class ListDatasetImportJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListDatasetImportJobsResult() = default;
    AWS_PERSONALIZE_API ListDatasetImportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDatasetImportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of dataset import jobs.</p>
     */
    inline const Aws::Vector<DatasetImportJobSummary>& GetDatasetImportJobs() const { return m_datasetImportJobs; }
    template<typename DatasetImportJobsT = Aws::Vector<DatasetImportJobSummary>>
    void SetDatasetImportJobs(DatasetImportJobsT&& value) { m_datasetImportJobsHasBeenSet = true; m_datasetImportJobs = std::forward<DatasetImportJobsT>(value); }
    template<typename DatasetImportJobsT = Aws::Vector<DatasetImportJobSummary>>
    ListDatasetImportJobsResult& WithDatasetImportJobs(DatasetImportJobsT&& value) { SetDatasetImportJobs(std::forward<DatasetImportJobsT>(value)); return *this;}
    template<typename DatasetImportJobsT = DatasetImportJobSummary>
    ListDatasetImportJobsResult& AddDatasetImportJobs(DatasetImportJobsT&& value) { m_datasetImportJobsHasBeenSet = true; m_datasetImportJobs.emplace_back(std::forward<DatasetImportJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of dataset import jobs (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetImportJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetImportJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetImportJobSummary> m_datasetImportJobs;
    bool m_datasetImportJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
