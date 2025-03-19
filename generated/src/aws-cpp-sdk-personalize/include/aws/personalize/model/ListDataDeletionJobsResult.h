/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataDeletionJobSummary.h>
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
  class ListDataDeletionJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListDataDeletionJobsResult() = default;
    AWS_PERSONALIZE_API ListDataDeletionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDataDeletionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline const Aws::Vector<DataDeletionJobSummary>& GetDataDeletionJobs() const { return m_dataDeletionJobs; }
    template<typename DataDeletionJobsT = Aws::Vector<DataDeletionJobSummary>>
    void SetDataDeletionJobs(DataDeletionJobsT&& value) { m_dataDeletionJobsHasBeenSet = true; m_dataDeletionJobs = std::forward<DataDeletionJobsT>(value); }
    template<typename DataDeletionJobsT = Aws::Vector<DataDeletionJobSummary>>
    ListDataDeletionJobsResult& WithDataDeletionJobs(DataDeletionJobsT&& value) { SetDataDeletionJobs(std::forward<DataDeletionJobsT>(value)); return *this;}
    template<typename DataDeletionJobsT = DataDeletionJobSummary>
    ListDataDeletionJobsResult& AddDataDeletionJobs(DataDeletionJobsT&& value) { m_dataDeletionJobsHasBeenSet = true; m_dataDeletionJobs.emplace_back(std::forward<DataDeletionJobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataDeletionJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataDeletionJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataDeletionJobSummary> m_dataDeletionJobs;
    bool m_dataDeletionJobsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
